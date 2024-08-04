/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
//

const hexDigit = /[0-9a-fA-F]/;
const decimalDigit = /[0-9]/;
const terminator = token(';');

const decimalDigits = seq(decimalDigit, repeat(decimalDigit));
const hexDigits = seq(hexDigit, repeat(hexDigit));

const hexLiteral = seq('0', choice('x', 'X'), hexDigits);
const decimalLiteral = choice('0', seq(/[1-9]/, optional(decimalDigits)));

const intLiteral = choice(hexLiteral, decimalLiteral);

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
// const assignmentOperators = multiplicativeOperators.concat(additiveOperators).map(operator => operator + '=').concat('=');
const assignmentOperators = ['='];

module.exports = grammar({
  name: 'jasmin',

  extras: $ => [
    $.comment,
    /\s/
  ],

  conflicts: $ => [
    [$._size, $._vsize],
  ],

  word: $ => $.identifier,

  rules: {

    source_file: $ => repeat(choice(
      $.function_definition,
      $.param,

    )),

    param: $ => seq(
      'param',
      $._ptype,
      $.identifier,
      '=',
      $.pexp,
      terminator,
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

    pvardecl: $ => prec.right(seq(
      $.stor_type,
      $.var,
      repeat($.var),
    )),

    annot_pvardecl_list: $ => seq(
      '(',
      optional(commaSep($.annot_pvardecl)),
      ')'
    ),

    annot_pvardecl: $ => seq(
      repeat($._top_annotation),
      $.pvardecl,
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

    _top_annotation: $ => choice(
      seq('#', $.annotation),
      seq('#', braces($._struct_annot)),
    ),

    // annotations: $ => repeat($._top_annotation),

    _annotationLabel: $ => choice(
      $.identifier,
      $._keyword,
      // TODO: is this actual string literal??
      'string',
    ),

    _simple_attribute: $ => choice(
      $.int,
      'string',
      $._keyword,
      $._utype,
    ),

    _attribute: $ => choice(
      seq('=', $._simple_attribute),
      seq('=', braces($._struct_annot)),
    ),

    annotation: $ => seq($._annotationLabel, optional($._attribute)),

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
      seq($._utype, '[', $.pexp, ']'),
    ),

    stor_type: $ => seq(
      $._storage,
      $._ptype,
    ),

    _annot_stor_type: $ => seq(
      repeat($._top_annotation),
      $.stor_type,
    ),

    funbody: $ => seq(
      '{',
      repeat($.instr),
      $.return_statement,
      '}'
    ),

    _int_literal: _ => token(intLiteral),

    int: $ => choice(
      $._int_literal,
      seq('-', $._int_literal),
    ),

    pexp: $ => choice(
      $.var,
      $._var_arr_access,
      'true',
      'false',
      $.int,
      $._mem_access,
      seq('(', $._cast, ')', $.pexp),
      seq($._peop1, $.pexp),
      $._binary_expr,
      seq('(', $.pexp, ')'),
      seq($.var, '(', optional(commaSep($.pexp)), ')'),
      seq($._prim, '(', optional(commaSep($.pexp)), ')'),
      $.conditional_expr
    ),

    pif: $ => choice(
      seq(
        'if', $.pexp, $.pblock),
      seq(
        'if', $.pexp, $.pblock,
        'else',
        choice(
          $.pif,
          $.pblock,
        ),
      ),
    ),

    conditional_expr: $ => prec.right(PREC.conditional, seq(
      field('condition', $.pexp),
      '?',
      field('consequence', $.pexp),
      ':',
      field('alternative', $.pexp),
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
          field('left', $.pexp),
          //TODO: castop
          // @ts-ignore
          field('operator', operator),
          field('right', $.pexp),
        )),
      ));
    },

    _cast: $ => choice('int', $._swsize),

    _prim: $ => seq('#', $.identifier),

    var: $ => $.identifier,

    _mem_ofs: $ => choice(
      seq('+', $.pexp),
      seq('-', $.pexp),
    ),

    _mem_access: $ => prec(PREC.subscript, seq(
      optional(seq('(', $._utype, ')')),
      '[',
      optional($._unaligned),
      $.var,
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
      $.var,
      $._arr_access,
    )),

    _arr_access_len: $ => seq(
      ':',
      $.pexp,
    ),

    _arr_access_i: $ => seq(
      optional($._unaligned),
      optional($._utype),
      $.pexp,
      optional($._arr_access_len),
    ),

    _plvalue: $ => prec.right(choice(
      '_',
      $.var,
      $._var_arr_access,
      $._mem_access,
    )),

    _struct_annot: $ => rtuple1($.annotation),

    _implicities: $ => seq(
      '?', braces($._struct_annot),
    ),

    _plvalues: $ => choice(
      tuple1($._plvalue),
      seq('(', ')'),
      $._implicities,
      seq($._implicities, ',', rtuple1($._plvalue)),
    ),

    instr: $ =>  seq(
      repeat($._top_annotation),
      choice(
        seq('ArrayInit', '(', $.var, ')', terminator),
        seq(
          $._plvalues,
          choice(...assignmentOperators),
          optional($._castop),
          $.pexp,
          optional(seq('if', $.pexp)),
          terminator,
        ),
        seq(
          $.var, '(', $.pexp, ')',
          optional(
            seq('if', $.pexp,),
          ),
          terminator,
        ),
        $.pif,
        $.for_loop,
        $.while_loop,
        seq($.pvardecl, terminator),
      ),
    ),

    for_loop: $ => seq(
      'for', $.var, '=', $.pexp, choice('to', 'downto'), $.pexp,
      $.pblock,
    ),

    while_loop: $ => seq(
      'while', optional($.pblock), '(', $.pexp, ')', optional($.pblock),
    ),

    pblock: $ => seq(
      '{',
        repeat($.instr),
      '}',
    ),

    return_statement: $ => seq(
      'return',
      $.pexp,
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

function parens(rule) {
  return seq('(', rule, ')');
}

function brackets(rule) {
  return seq('[', rule, ']');
}

function braces(rule) {
  return seq('{', rule, '}');
}

function rtuple1(rule) {
  return seq(rule, repeat(rule));
}

function tuple1(rule) {
  return choice(
    parens(rtuple1(rule)),
    rtuple1(rule),
  );
}

function tuple(rule) {
  return parens(optional(rtuple1(rule)));
}

