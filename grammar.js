/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
//

const hexDigit = /[0-9a-fA-F]/;
const decimalDigit = /[0-9]/;
const terminator = ';';

module.exports = grammar({
  name: 'jasmin',

  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {

    source_file: $ => repeat(choice(
      $.instruction,
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
      field('body', optional($.block)),
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

    // _annotations: $ => repeat(
    //   $._top_annotation,
    // ),

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

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),


    intLiteral: $ => choice(
      hexDigit,
      decimalDigit,
    ),

    _int: $ => choice(
      $.intLiteral,
      seq('-', $.intLiteral),
    ),

    _pexpr: $ => choice(
      $._var,
      seq(
        $._var,
        $._arr_access_len,
      ),
      'true',
      'false',
      $._int,

    ),

    _var: $ => $.identifier,

    _aligned: $ => choice(
      'aligned',
      'unaligned',
    ),

    _arr_access_len: $ => seq(
      ':',
      $._pexpr,
    ),

    _arr_access_i: $ => seq(
      optional($._aligned),
      optional($._utype),
      $._pexpr,
      optional($._arr_access_len),
    ),

    _plvalue_r: $ => choice(
      '_',
      $._var,
      seq(
        optional('.'),
        '[',
        $._arr_access_i,
        ']',
      ),
    ),

    _lvalue: $ => seq(
      $.identifier,
    ),

    _assignment: $ => seq(
      $._lvalue,
      '=',
      $._expression,

    ),

    instruction: $ => choice(
      $._assignment,

    ),

    _statement: $ => seq(
      choice(
        $.return_statement,
        $.instruction,
        // TODO: other kinds of statements
      ),
      terminator,
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
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
