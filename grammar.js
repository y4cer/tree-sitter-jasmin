/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
//

const hexDigit = /[0-9a-fA-F]/;
const decimalDigit = /[0-9]/;
const terminator = ';';

const decimalDigits = seq(decimalDigit, repeat(decimalDigit));
const hexDigits = seq(hexDigit, repeat(hexDigit));

const PREC = {
  subscript: 8,
  primary: 7,
  unary: 6,
  multiplicative: 5,
  additive: 4,
  comparative: 3,
  and: 2,
  or: 1,
  conditional: -1,
};

const multiplicativeOperators = ['*', '/', '%', '<<', '>>', '&', '<<r', '>>r'];
const additiveOperators = ['+', '-', '|', '^'];
const comparativeOperators = ['==', '!=', '<', '<=', '>', '>='];
const assignmentOperators = multiplicativeOperators.concat(additiveOperators).map(operator => operator + '=').concat('=');

module.exports = grammar({
  name: 'jasmin',

  extras: $ => [
    $.comment,
    /\s/
  ],

  conflicts: $ => [
    [$._size, $._vsize],
  ],

  rules: {

    source_file: $ => repeat(choice(
      $._instr,
      $.function_definition,
    )),

    _definition: $ => choice(
      $.function_definition
      // TODO: other kinds of definitions
    ),

    function_definition: $ => seq(
      field('visibility', optional($.call_conv)),
      'fn',
      field('name', $.identifier),
      field('type_parameters', $.annot_pvardecl_list),
      optional(seq(
        '->',
        field('result', $._annot_stor_type),
      )),
      field('body', optional($.funbody)),
    ),

    call_conv: $ => choice('inline', 'export'),

    _pvardecl: $ => seq(
      $._stor_type,
      $._var,
    ),

    annot_pvardecl_list: $ => seq(
      '(',
      optional(commaSep($.annot_pvardecl)),
      ')'
    ),

    annot_pvardecl: $ => seq(
      repeat($._top_annotation),
      $._pvardecl,
    ),

    _writable: $ => choice(
      'const',
      'mut',
    ),

    _pointer: $ => seq(
      optional($._writable),
      'ptr',
    ),

    _ptr: $ => $._pointer,

    _storage: $ => choice(
      seq('reg', optional($._ptr)),
      seq('stack', optional($._ptr)),
      'inline',
      'global',
    ),

    _top_annotation: $ => '#',

    _keyword: $ => choice(
      'inline',
      'export',
      'reg',
      'stack',
    ),

    _utype: $ => choice(
      'u8',
      'u16',
      'u32',
      'u64',
      'u128',
      'u256',
    ),

    _gensize: $ => choice(
      '1',
      '2',
      '4',
      '8',
      '16',
      '32',
      '64',
      '128',
    ),

    _size: $ => choice(
      '8',
      '16',
      '32',
      '64',
      '128',
      '256',
    ),

    _vsize: $ => choice(
      '2',
      '4',
      '8',
      '16',
      '32'
    ),

    _signletter: $ => choice('s', 'u'),

    _swsize: $ => seq(
      $._size,
      $._signletter
    ),

    _svsize: $ => seq(
      $._vsize,
      $._signletter,
      $._gensize
    ),

    _ptype: $ => choice(
      'bool',
      'int',
      $._utype,
      // | utype brackets(<pexpr)>
    ),

    _stor_type: $ => seq(
      $._storage,
      $._ptype,
    ),

    _annot_stor_type: $ => seq(
      repeat($._top_annotation),
      $._stor_type,
    ),

    funbody: $ => seq(
      '{',
      repeat($._instr),
      $.return_statement,
      '}'
    ),


    intLiteral: $ => choice(
      hexDigits,
      decimalDigits,
    ),

    _int: $ => choice(
      $.intLiteral,
      seq('-', $.intLiteral),
    ),

    _pexpr: $ => choice(
      $._var,
      $._var_arr_access,
      'true',
      'false',
      $.intLiteral,
      $._mem_access,
      seq('(', $._cast, ')', $._pexpr),
      seq($._peop1, $._pexpr),
      $._binary_expr,
      seq('(', $._pexpr, ')'),
      seq($._var, '(', optional(commaSep($._pexpr)), ')'),
      seq($._prim, '(', optional(commaSep($._pexpr)), ')'),
      $.conditional_expr
    ),

    conditional_expr: $ => prec.right(PREC.conditional, seq(
      field('condition', $._pexpr),
      '?',
      field('consequence', $._pexpr),
      ':',
      field('alternative', $._pexpr),
    )),

    _castop: $ => choice(
      $._swsize,
      $._svsize,
    ),

    _peop1: $ => prec(PREC.unary, choice(
      seq('!', $._castop),
      seq('-', $._castop),
    )),

    _binary_expr: $ => {
      const table = [
        [PREC.multiplicative, choice(...multiplicativeOperators)],
        [PREC.additive, choice(...additiveOperators)],
        [PREC.comparative, choice(...comparativeOperators)],
        [PREC.and, '&&'],
        [PREC.or, '||'],
      ];

      return choice(...table.map(([precedence, operator]) =>
        // @ts-ignore
        prec.left(precedence, seq(
          field('left', $._pexpr),
          //TODO: castop
          // @ts-ignore
          field('operator', operator),
          field('right', $._pexpr),
        )),
      ));
    },

    _cast: $ => choice('int', $._swsize),

    _prim: $ => seq('#', $.identifier),

    _var: $ => $.identifier,

    _mem_ofs: $ => choice(
      seq('+', $._pexpr),
      seq('-', $._pexpr),
    ),

    _mem_access: $ => prec(PREC.subscript, seq(
      optional(seq('(', $._utype, ')')),
      '[',
      optional($._unaligned),
      $._var,
      $._mem_ofs,
      ']',
    )),


    _unaligned: $ => choice(
      '#aligned',
      '#unaligned',
    ),

    _arr_access: $ => seq(
      optional('.'),
      '[',
      $._arr_access_i,
      ']',
    ),

    _var_arr_access: $ => prec(PREC.subscript, seq(
      $._var,
      $._arr_access,
    )),

    _arr_access_len: $ => seq(
      ':',
      $._pexpr,
    ),

    _arr_access_i: $ => seq(
      optional($._unaligned),
      optional($._utype),
      $._pexpr,
      optional($._arr_access_len),
    ),

    _plvalue_r: $ => choice(
      '_',
      $._var,
      $._var_arr_access,
    ),

    _lvalue: $ => seq(
      $.identifier,
    ),

    assignment: $ => seq(
      $._lvalue,
      '=',
      $._pexpr,

    ),

    _instr: $ =>  choice(
        seq('ArrayInit', '(', $._var, ')', terminator),
        seq($.assignment, terminator),
    ),

    return_statement: $ => seq(
      'return',
      $._pexpr,
      terminator,
    ),

    identifier: $ => /[_a-zA-Z][_a-zA-Z0-9]{0,30}/,

    number: $ => /\d+/,

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: _ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),
  }
});

// source: https://github.com/tree-sitter/tree-sitter-go/blob/master/grammar.js
/**
 * Creates a rule to match one or more occurrences of `rule` separated by `sep`
 *
 * @param {RuleOrLiteral} rule
 *
 * @param {RuleOrLiteral} separator
 *
 * @return {SeqRule}
 *
 */
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
