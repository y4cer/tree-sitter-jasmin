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
  return: 16,
  call: 15,
  cast: 12,
  subscript: 8,
  primary: 7,
  unary: 6,
  multiplicative: 5,
  additive: 4,
  comparative: 3,
  and: 2,
  or: 1,
  default: 0,
  conditional: -1,
  assignment: -2,
};

const multiplicativeOperators = ['*', '/', '%', '<<', '>>', '&', '<<r', '>>r', '>>s', '<<s'];
const additiveOperators = ['+', '-', '|', '^'];
const comparativeOperators = ['==', '!=', '<', '<=', '>', '>=', '<s', '>s'];
const assignmentOperators = multiplicativeOperators.concat(additiveOperators).map(operator => token(operator + '=')).concat(token('='));

module.exports = grammar({
  name: 'jasmin',

  extras: $ => [
    $.comment,
    /\s/
  ],

  conflicts: $ => [

  ],

  inline: $ => [

  ],

  word: $ => $.identifier,

  rules: {

    top: $ => repeat(choice(
      $.function_definition,
      $.param,
      $.global,
      $.require,
      $.exec,
    )),

    param: $ => seq(
      'param',
      $.ptype,
      $.identifier,
      '=',
      $.pexp,
      terminator,
    ),

    global: $ => seq(
      $.ptype,
      $.identifier,
      '=',
      $._pgexpr,
      terminator
    ),

    require: $ => seq(
      optional(seq('from', $.identifier)),
      'require',
      $.string_literal,
    ),

    exec: $ => seq(
      'exec',
      $.identifier,
     '(', optional(seq($.int, ':', $.int)), ')'
    ),

    // taken from https://github.com/tree-sitter/tree-sitter-c/blob/master/grammar.js#L1297
    string_literal: $ => seq(
      '"',
      repeat(choice(
        alias(token.immediate(prec(1, /[^\\"\n]+/)), $.string_content),
        $.escape_sequence,
      )),
      '"',
    ),

    escape_sequence: _ => token(prec(1, seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/,
      ),
    ))),

    _pgexpr: $ => choice(
      $.pexp,
      braces(rtuple1($.pexp)),
      $.string_literal,
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

    pvardecl_comma: $ => prec.right(seq(
      $.stor_type,
      $.var,
      choice(
        repeat($.var),
        repeat(seq(',', $.var)),
      ),
    )),

    annot_pvardecl_list: $ => seq(
      '(',
      optional(commaSep($.annot_pvardecl)),
      ')'
    ),

    annot_pvardecl: $ => seq(
      repeat($.top_annotation),
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

    storage: $ => choice(
      seq('reg', optional($._ptr)),
      seq('stack', optional($._ptr)),
      'inline',
      'global',
    ),

    top_annotation: $ => choice(
      seq('#', $.annotation),
      seq('#', braces($.struct_annot)),
    ),

    annotationLabel: $ => choice(
      $.identifier,
      $.keyword,
      $.string_literal,
    ),

    _simple_attribute: $ => choice(
      $.int,
      $.string_literal,
      $.keyword,
      $.utype,
      $.identifier,
    ),

    _attribute: $ => choice(
      seq('=', $._simple_attribute),
      seq('=', braces($.struct_annot)),
    ),

    annotation: $ => seq($.annotationLabel, optional($._attribute)),

    keyword: _ => token(choice(
      'inline',
      'export',
      'reg',
      'stack',
    )),

    utype: _ => token(choice(
      'u8',
      'u16',
      'u32',
      'u64',
      'u128',
      'u256',
    )),

    _signletter: $ => choice('s', 'u'),

    swsize: _ => token(seq(
        // $._size,
        choice(
          '8',
          '16',
          '32',
          '64',
          '128',
          '256',
        ),
        // $._signletter
        choice('s', 'u')
    )),

    _svsize: _ => token(seq(
      // $._vsize,
      choice(
        '2',
        '4',
        '8',
        '16',
        '32'
      ),
      // $._signletter,
      choice('s', 'u'),
      // $._gensize
      choice(
        '1',
        '2',
        '4',
        '8',
        '16',
        '32',
        '64',
        '128',
      )
    )),

    ptype: $ => choice(
      'bool',
      'int',
      $.utype,
      seq($.utype, '[', $.pexp, ']'),
    ),

    stor_type: $ => seq(
      $.storage,
      $.ptype,
    ),

    _annot_stor_type: $ => seq(
      repeat($.top_annotation),
      tuple($.stor_type),
    ),

    funbody: $ => seq(
      '{',
      repeat($.instr),
      optional($.return_statement),
      '}'
    ),

    int: _ => token(intLiteral),

    cast_expression: $ => prec(PREC.cast, seq(
      '(', $._cast, ')', $.pexp,
    )),

    boolean_expression: _ => choice(
      'true',
      'false',
    ),

    unary_expression: $ => prec.left(PREC.unary, seq(
      $._peop1, $.pexp
    )),

    function_call: $ => prec.left(PREC.call, seq(
      $.var, '(', optional(commaSep($.pexp)), ')'
    )),

    builtin_call: $ => prec.left(PREC.call, seq(
      $.prim, '(', optional(commaSep($.pexp)), ')'
    )),

    pexp: $ => choice(
      $.var,
      $._var_arr_access,
      $.int,
      $._mem_access,
      $.cast_expression,
      $.binary_expr,
      $.boolean_expression,
      $.unary_expression,
      seq('(', $.pexp, ')'),
      $.function_call,
      $.builtin_call,
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

    castop: $ => choice(
      $.swsize,
      $._svsize,
    ),

    _peop1: $ => prec(PREC.unary, choice(
      seq('!', optional($.castop)),
      seq('-', optional($.castop)),
    )),

    binary_expr: $ => {
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
          field('operator', operator),
          field('right', seq(
            optional($.castop),
            $.pexp,
          )),
        )),
      ));
    },

    _cast: $ => choice('int', $.swsize),

    prim: $ => seq('#', $.identifier),

    var: $ => $.identifier,

    _mem_ofs: $ => choice(
      seq('+', $.pexp),
      seq('-', $.pexp),
    ),

    _mem_access: $ => prec(PREC.subscript, seq(
      optional(seq('(', $.utype, ')')),
      '[',
      optional($._unaligned),
      $.var,
      optional($._mem_ofs),
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
      optional($.utype),
      $.pexp,
      optional($._arr_access_len),
    ),

    _plvalue: $ => prec.right(choice(
      '_',
      $.var,
      $._var_arr_access,
      $._mem_access,
    )),

    struct_annot: $ => commaSep1($.annotation),

    implicities: $ => seq(
      '?', braces(optional($.struct_annot)),
    ),

    _plvalues: $ => choice(
      tuple1($._plvalue),
      rtuple1($._plvalue),
      seq('(', ')'),
      $.implicities,
      seq($.implicities, ',', rtuple1($._plvalue)),
    ),

    assignmentExpr: $ => prec.right(PREC.assignment, seq(
        field('left', $._plvalues),
        field('operator', choice(...assignmentOperators)),
        field('right', seq(
          optional($.castop),
          $.pexp,
          optional(seq('if', $.pexp)),
      )),
    )),

    instr: $ =>  seq(
      repeat($.top_annotation),
      choice(
        seq('ArrayInit', '(', $.var, ')', terminator),
        seq($.assignmentExpr, terminator),
        seq(
          $.function_call,
          optional(
            seq('if', $.pexp,),
          ),
          terminator,
        ),
        $.pif,
        $.for_loop,
        $.while_loop,
        seq($.pvardecl_comma, terminator),
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

    return_statement: $ => prec.left(PREC.return, seq(
      'return',
      optional(tuple($.pexp)),
      terminator,
    )),

    identifier: $ => /[_a-zA-Z][_a-zA-Z0-9]{0,100}/,

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
  return commaSep1(rule);
}

function tuple1(rule) {
  return choice(
    parens(rtuple1(rule)),
    rtuple1(rule),
  );
}

function tuple(rule) {
  return choice(
    parens(rtuple1(rule)),
    rtuple1(rule),
  );
}

