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

    function_definition: $ => prec.right(1, seq(
      field('visibility', optional($.function_visibility)),
      'fn',
      field('name', $.identifier),
      field('type_parameters', $.parameter_list),
      optional(seq(
        '->',
        field('result', $._type),
      )),
      field('body', optional($.block)),
    )),

    function_visibility: $ => choice('inline', 'export'),

    parameter_list: $ => seq(
      '(',
      optional(commaSep($.function_parameter)),
    ')'
    ),

    function_parameter: $ => seq(
      $._type,
      $.identifier,
    ),

    _type: $ => choice(
      'u64'
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
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

    identifier: $ => /[a-z]+/,

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
