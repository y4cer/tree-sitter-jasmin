#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_return = 11,
  anon_sym_SEMI = 12,
  sym_identifier = 13,
  sym_number = 14,
  sym_comment = 15,
  sym_source_file = 16,
  sym_function_definition = 17,
  sym_function_visibility = 18,
  sym_parameter_list = 19,
  sym_function_parameter = 20,
  sym__type = 21,
  sym_block = 22,
  sym__statement = 23,
  sym_return_statement = 24,
  sym__expression = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_parameter_list_repeat1 = 27,
  aux_sym_block_repeat1 = 28,
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
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  field_result = 2,
  field_type_parameters = 3,
  field_visibility = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_result] = "result",
  [field_type_parameters] = "type_parameters",
  [field_visibility] = "visibility",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 3},
  [8] = {.index = 16, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type_parameters, 1},
  [1] =
    {field_body, 2},
    {field_type_parameters, 1},
  [3] =
    {field_type_parameters, 2},
    {field_visibility, 0},
  [5] =
    {field_result, 3},
    {field_type_parameters, 1},
  [7] =
    {field_body, 3},
    {field_type_parameters, 2},
    {field_visibility, 0},
  [10] =
    {field_body, 4},
    {field_result, 3},
    {field_type_parameters, 1},
  [13] =
    {field_result, 4},
    {field_type_parameters, 2},
    {field_visibility, 0},
  [16] =
    {field_body, 5},
    {field_result, 4},
    {field_type_parameters, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '(', 29,
        ')', 31,
        ',', 30,
        '-', 7,
        '/', 1,
        ';', 36,
        'e', 23,
        'f', 12,
        'i', 13,
        'r', 8,
        'u', 6,
        '{', 33,
        '}', 34,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '4') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '6') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
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
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym_function_definition] = STATE(2),
    [sym_function_visibility] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_function_visibility,
    ACTIONS(9), 2,
      anon_sym_inline,
      anon_sym_export,
    STATE(5), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [21] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DASH_GT,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
  [40] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_DASH_GT,
    STATE(17), 1,
      sym_block,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
  [59] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_fn,
    STATE(35), 1,
      sym_function_visibility,
    ACTIONS(28), 2,
      anon_sym_inline,
      anon_sym_export,
    STATE(5), 2,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [80] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_DASH_GT,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_LBRACE,
  [92] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
  [108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
  [124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_DASH_GT,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_LBRACE,
  [136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_DASH_GT,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_LBRACE,
  [148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_return,
    STATE(12), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_return,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(13), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_return,
    STATE(13), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
  [203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
  [213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
  [223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
  [233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
  [243] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    ACTIONS(64), 1,
      anon_sym_u64,
    STATE(25), 1,
      sym_function_parameter,
    STATE(33), 1,
      sym__type,
  [259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
  [269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_u64,
    STATE(30), 1,
      sym_function_parameter,
    STATE(33), 1,
      sym__type,
  [282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(34), 1,
      sym__expression,
    ACTIONS(72), 2,
      sym_identifier,
      sym_number,
  [306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_parameter_list_repeat1,
  [319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_parameter_list_repeat1,
  [332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_parameter_list,
  [350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_u64,
    STATE(8), 1,
      sym__type,
  [360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_u64,
    STATE(7), 1,
      sym__type,
  [370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_parameter_list,
  [388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
  [403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SEMI,
  [410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_fn,
  [417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_fn,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 148,
  [SMALL_STATE(12)] = 163,
  [SMALL_STATE(13)] = 178,
  [SMALL_STATE(14)] = 193,
  [SMALL_STATE(15)] = 203,
  [SMALL_STATE(16)] = 213,
  [SMALL_STATE(17)] = 223,
  [SMALL_STATE(18)] = 233,
  [SMALL_STATE(19)] = 243,
  [SMALL_STATE(20)] = 259,
  [SMALL_STATE(21)] = 269,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 295,
  [SMALL_STATE(24)] = 306,
  [SMALL_STATE(25)] = 319,
  [SMALL_STATE(26)] = 332,
  [SMALL_STATE(27)] = 340,
  [SMALL_STATE(28)] = 350,
  [SMALL_STATE(29)] = 360,
  [SMALL_STATE(30)] = 370,
  [SMALL_STATE(31)] = 378,
  [SMALL_STATE(32)] = 388,
  [SMALL_STATE(33)] = 396,
  [SMALL_STATE(34)] = 403,
  [SMALL_STATE(35)] = 410,
  [SMALL_STATE(36)] = 417,
  [SMALL_STATE(37)] = 424,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 8),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 6),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_visibility, 1, 0, 0),
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
