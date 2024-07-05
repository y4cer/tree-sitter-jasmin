#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  anon_sym_fn = 1,
  anon_sym_DASH_GT = 2,
  anon_sym_inline = 3,
  anon_sym_export = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_u64 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_EQ = 11,
  anon_sym_SEMI = 12,
  anon_sym_return = 13,
  sym_identifier = 14,
  sym_number = 15,
  sym_comment = 16,
  sym_source_file = 17,
  sym_function_definition = 18,
  sym_function_visibility = 19,
  sym_parameter_list = 20,
  sym_function_parameter = 21,
  sym__type = 22,
  sym_block = 23,
  sym__lvalue = 24,
  sym__assignment = 25,
  sym_instruction = 26,
  sym__statement = 27,
  sym_return_statement = 28,
  sym__expression = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_parameter_list_repeat1 = 31,
  aux_sym_block_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_fn] = "fn",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_inline] = "inline",
  [anon_sym_export] = "export",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_u64] = "u64",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_function_definition] = "function_definition",
  [sym_function_visibility] = "function_visibility",
  [sym_parameter_list] = "parameter_list",
  [sym_function_parameter] = "function_parameter",
  [sym__type] = "_type",
  [sym_block] = "block",
  [sym__lvalue] = "_lvalue",
  [sym__assignment] = "_assignment",
  [sym_instruction] = "instruction",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_function_definition] = sym_function_definition,
  [sym_function_visibility] = sym_function_visibility,
  [sym_parameter_list] = sym_parameter_list,
  [sym_function_parameter] = sym_function_parameter,
  [sym__type] = sym__type,
  [sym_block] = sym_block,
  [sym__lvalue] = sym__lvalue,
  [sym__assignment] = sym__assignment,
  [sym_instruction] = sym_instruction,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__lvalue] = {
    .visible = false,
    .named = true,
  },
  [sym__assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_name = 2,
  field_result = 3,
  field_type_parameters = 4,
  field_visibility = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_result] = "result",
  [field_type_parameters] = "type_parameters",
  [field_visibility] = "visibility",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 3},
  [4] = {.index = 8, .length = 3},
  [5] = {.index = 11, .length = 4},
  [6] = {.index = 15, .length = 4},
  [7] = {.index = 19, .length = 4},
  [8] = {.index = 23, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type_parameters, 2},
  [2] =
    {field_body, 3},
    {field_name, 1},
    {field_type_parameters, 2},
  [5] =
    {field_name, 2},
    {field_type_parameters, 3},
    {field_visibility, 0},
  [8] =
    {field_name, 1},
    {field_result, 4},
    {field_type_parameters, 2},
  [11] =
    {field_body, 4},
    {field_name, 2},
    {field_type_parameters, 3},
    {field_visibility, 0},
  [15] =
    {field_body, 5},
    {field_name, 1},
    {field_result, 4},
    {field_type_parameters, 2},
  [19] =
    {field_name, 2},
    {field_result, 5},
    {field_type_parameters, 3},
    {field_visibility, 0},
  [23] =
    {field_body, 6},
    {field_name, 2},
    {field_result, 5},
    {field_type_parameters, 3},
    {field_visibility, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '(', 18,
        ')', 20,
        ',', 19,
        '-', 9,
        '/', 2,
        ';', 25,
        '=', 24,
        'e', 43,
        'f', 32,
        'i', 33,
        'r', 28,
        'u', 27,
        '{', 22,
        '}', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == '}') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == '{') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_export);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_return);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym_function_definition] = STATE(2),
    [sym_function_visibility] = STATE(42),
    [sym__lvalue] = STATE(41),
    [sym__assignment] = STATE(14),
    [sym_instruction] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym__assignment,
    STATE(41), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_function_visibility,
    ACTIONS(9), 2,
      anon_sym_inline,
      anon_sym_export,
    STATE(3), 3,
      sym_function_definition,
      sym_instruction,
      aux_sym_source_file_repeat1,
  [31] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(14), 1,
      sym__assignment,
    STATE(41), 1,
      sym__lvalue,
    STATE(42), 1,
      sym_function_visibility,
    ACTIONS(20), 2,
      anon_sym_inline,
      anon_sym_export,
    STATE(3), 3,
      sym_function_definition,
      sym_instruction,
      aux_sym_source_file_repeat1,
  [62] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_return,
    STATE(14), 1,
      sym__assignment,
    STATE(41), 1,
      sym__lvalue,
    STATE(6), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(40), 2,
      sym_instruction,
      sym_return_statement,
  [89] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(14), 1,
      sym__assignment,
    STATE(41), 1,
      sym__lvalue,
    STATE(5), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(40), 2,
      sym_instruction,
      sym_return_statement,
  [116] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(28), 1,
      anon_sym_return,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym__assignment,
    STATE(41), 1,
      sym__lvalue,
    STATE(5), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(40), 2,
      sym_instruction,
      sym_return_statement,
  [143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_DASH_GT,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
    ACTIONS(42), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [165] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_DASH_GT,
    STATE(21), 1,
      sym_block,
    ACTIONS(50), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    ACTIONS(56), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [202] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_block,
    ACTIONS(60), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    ACTIONS(64), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    ACTIONS(68), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [251] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_block,
    ACTIONS(72), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(76), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(80), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [376] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 1,
      anon_sym_u64,
    STATE(29), 1,
      sym_function_parameter,
    STATE(36), 1,
      sym__type,
  [392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym__expression,
    ACTIONS(110), 2,
      sym_identifier,
      sym_number,
  [403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 2,
      anon_sym_return,
      sym_identifier,
  [427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_u64,
    STATE(35), 1,
      sym_function_parameter,
    STATE(36), 1,
      sym__type,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym__expression,
    ACTIONS(125), 2,
      sym_identifier,
      sym_number,
  [464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameter_list_repeat1,
  [477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_u64,
    STATE(13), 1,
      sym__type,
  [495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_parameter_list,
  [505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_u64,
    STATE(10), 1,
      sym__type,
  [515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_parameter_list,
  [525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_identifier,
  [540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_identifier,
  [547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_identifier,
  [554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_SEMI,
  [561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_SEMI,
  [568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_EQ,
  [575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_fn,
  [582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_fn,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 187,
  [SMALL_STATE(10)] = 202,
  [SMALL_STATE(11)] = 221,
  [SMALL_STATE(12)] = 236,
  [SMALL_STATE(13)] = 251,
  [SMALL_STATE(14)] = 270,
  [SMALL_STATE(15)] = 284,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 311,
  [SMALL_STATE(18)] = 324,
  [SMALL_STATE(19)] = 337,
  [SMALL_STATE(20)] = 350,
  [SMALL_STATE(21)] = 363,
  [SMALL_STATE(22)] = 376,
  [SMALL_STATE(23)] = 392,
  [SMALL_STATE(24)] = 403,
  [SMALL_STATE(25)] = 416,
  [SMALL_STATE(26)] = 427,
  [SMALL_STATE(27)] = 440,
  [SMALL_STATE(28)] = 453,
  [SMALL_STATE(29)] = 464,
  [SMALL_STATE(30)] = 477,
  [SMALL_STATE(31)] = 485,
  [SMALL_STATE(32)] = 495,
  [SMALL_STATE(33)] = 505,
  [SMALL_STATE(34)] = 515,
  [SMALL_STATE(35)] = 525,
  [SMALL_STATE(36)] = 533,
  [SMALL_STATE(37)] = 540,
  [SMALL_STATE(38)] = 547,
  [SMALL_STATE(39)] = 554,
  [SMALL_STATE(40)] = 561,
  [SMALL_STATE(41)] = 568,
  [SMALL_STATE(42)] = 575,
  [SMALL_STATE(43)] = 582,
  [SMALL_STATE(44)] = 589,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, 0, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 7),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 8),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, 0, 8),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 5),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 6),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [151] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_visibility, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jasmin(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
