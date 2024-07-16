#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
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
  anon_sym_const = 8,
  anon_sym_mut = 9,
  anon_sym_ptr = 10,
  anon_sym_reg = 11,
  anon_sym_stack = 12,
  anon_sym_global = 13,
  sym__top_annotation = 14,
  anon_sym_u8 = 15,
  anon_sym_u16 = 16,
  anon_sym_u32 = 17,
  anon_sym_u64 = 18,
  anon_sym_u128 = 19,
  anon_sym_u256 = 20,
  anon_sym_bool = 21,
  anon_sym_int = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  aux_sym_intLiteral_token1 = 25,
  aux_sym_intLiteral_token2 = 26,
  anon_sym_DASH = 27,
  anon_sym_true = 28,
  anon_sym_false = 29,
  anon_sym_aligned = 30,
  anon_sym_unaligned = 31,
  anon_sym_COLON = 32,
  anon_sym__ = 33,
  anon_sym_DOT = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  anon_sym_EQ = 37,
  anon_sym_SEMI = 38,
  anon_sym_return = 39,
  sym_identifier = 40,
  sym_number = 41,
  sym_comment = 42,
  sym_source_file = 43,
  sym_function_definition = 44,
  sym_call_conv = 45,
  sym__pvardecl = 46,
  sym_annot_pvardecl_list = 47,
  sym_annot_pvardecl = 48,
  sym__writable = 49,
  sym__pointer = 50,
  sym__ptr = 51,
  sym__storage = 52,
  sym__utype = 53,
  sym__ptype = 54,
  sym__stor_type = 55,
  sym__annot_stor_type = 56,
  sym_block = 57,
  sym__var = 58,
  sym__lvalue = 59,
  sym__assignment = 60,
  sym_instruction = 61,
  sym__statement = 62,
  sym_return_statement = 63,
  sym__expression = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_annot_pvardecl_list_repeat1 = 66,
  aux_sym_annot_pvardecl_repeat1 = 67,
  aux_sym_block_repeat1 = 68,
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
  [anon_sym_const] = "const",
  [anon_sym_mut] = "mut",
  [anon_sym_ptr] = "ptr",
  [anon_sym_reg] = "reg",
  [anon_sym_stack] = "stack",
  [anon_sym_global] = "global",
  [sym__top_annotation] = "_top_annotation",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_u128] = "u128",
  [anon_sym_u256] = "u256",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_intLiteral_token1] = "intLiteral_token1",
  [aux_sym_intLiteral_token2] = "intLiteral_token2",
  [anon_sym_DASH] = "-",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_aligned] = "aligned",
  [anon_sym_unaligned] = "unaligned",
  [anon_sym_COLON] = ":",
  [anon_sym__] = "_",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_function_definition] = "function_definition",
  [sym_call_conv] = "call_conv",
  [sym__pvardecl] = "_pvardecl",
  [sym_annot_pvardecl_list] = "annot_pvardecl_list",
  [sym_annot_pvardecl] = "annot_pvardecl",
  [sym__writable] = "_writable",
  [sym__pointer] = "_pointer",
  [sym__ptr] = "_ptr",
  [sym__storage] = "_storage",
  [sym__utype] = "_utype",
  [sym__ptype] = "_ptype",
  [sym__stor_type] = "_stor_type",
  [sym__annot_stor_type] = "_annot_stor_type",
  [sym_block] = "block",
  [sym__var] = "_var",
  [sym__lvalue] = "_lvalue",
  [sym__assignment] = "_assignment",
  [sym_instruction] = "instruction",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_annot_pvardecl_list_repeat1] = "annot_pvardecl_list_repeat1",
  [aux_sym_annot_pvardecl_repeat1] = "annot_pvardecl_repeat1",
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
  [anon_sym_const] = anon_sym_const,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_reg] = anon_sym_reg,
  [anon_sym_stack] = anon_sym_stack,
  [anon_sym_global] = anon_sym_global,
  [sym__top_annotation] = sym__top_annotation,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u128] = anon_sym_u128,
  [anon_sym_u256] = anon_sym_u256,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_intLiteral_token1] = aux_sym_intLiteral_token1,
  [aux_sym_intLiteral_token2] = aux_sym_intLiteral_token2,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_aligned] = anon_sym_aligned,
  [anon_sym_unaligned] = anon_sym_unaligned,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym__] = anon_sym__,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_function_definition] = sym_function_definition,
  [sym_call_conv] = sym_call_conv,
  [sym__pvardecl] = sym__pvardecl,
  [sym_annot_pvardecl_list] = sym_annot_pvardecl_list,
  [sym_annot_pvardecl] = sym_annot_pvardecl,
  [sym__writable] = sym__writable,
  [sym__pointer] = sym__pointer,
  [sym__ptr] = sym__ptr,
  [sym__storage] = sym__storage,
  [sym__utype] = sym__utype,
  [sym__ptype] = sym__ptype,
  [sym__stor_type] = sym__stor_type,
  [sym__annot_stor_type] = sym__annot_stor_type,
  [sym_block] = sym_block,
  [sym__var] = sym__var,
  [sym__lvalue] = sym__lvalue,
  [sym__assignment] = sym__assignment,
  [sym_instruction] = sym_instruction,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_annot_pvardecl_list_repeat1] = aux_sym_annot_pvardecl_list_repeat1,
  [aux_sym_annot_pvardecl_repeat1] = aux_sym_annot_pvardecl_repeat1,
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
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [sym__top_annotation] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
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
  [aux_sym_intLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_intLiteral_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aligned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unaligned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_call_conv] = {
    .visible = true,
    .named = true,
  },
  [sym__pvardecl] = {
    .visible = false,
    .named = true,
  },
  [sym_annot_pvardecl_list] = {
    .visible = true,
    .named = true,
  },
  [sym_annot_pvardecl] = {
    .visible = true,
    .named = true,
  },
  [sym__writable] = {
    .visible = false,
    .named = true,
  },
  [sym__pointer] = {
    .visible = false,
    .named = true,
  },
  [sym__ptr] = {
    .visible = false,
    .named = true,
  },
  [sym__storage] = {
    .visible = false,
    .named = true,
  },
  [sym__utype] = {
    .visible = false,
    .named = true,
  },
  [sym__ptype] = {
    .visible = false,
    .named = true,
  },
  [sym__stor_type] = {
    .visible = false,
    .named = true,
  },
  [sym__annot_stor_type] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__var] = {
    .visible = false,
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
  [aux_sym_annot_pvardecl_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annot_pvardecl_repeat1] = {
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
  [8] = 6,
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
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 26,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      ADVANCE_MAP(
        '#', 89,
        '(', 80,
        ')', 82,
        ',', 81,
        '-', 107,
        '.', 114,
        '/', 1,
        ':', 112,
        ';', 118,
        '=', 117,
        '[', 115,
        ']', 116,
        '_', 113,
        'a', 102,
        'b', 103,
        'c', 104,
        'e', 105,
        'f', 101,
        'g', 39,
        'i', 43,
        'm', 69,
        'p', 67,
        'r', 23,
        's', 62,
        't', 57,
        'u', 8,
        '{', 98,
        '}', 99,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'd') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(170);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '/', 1,
        'b', 50,
        'c', 52,
        'f', 42,
        'i', 48,
        'm', 69,
        'p', 67,
        'u', 7,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '}') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == '8') ADVANCE(90);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == '8') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(14);
      if (lookahead == '6') ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(92);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == '5') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == '8') ADVANCE(94);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == '{') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_stack);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__top_annotation);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_u256);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_intLiteral_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_intLiteral_token1);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_intLiteral_token1);
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_intLiteral_token1);
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_intLiteral_token1);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_intLiteral_token1);
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_intLiteral_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_aligned);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_unaligned);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 71},
  [4] = {.lex_state = 71},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 71},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 71},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 71},
  [21] = {.lex_state = 71},
  [22] = {.lex_state = 71},
  [23] = {.lex_state = 71},
  [24] = {.lex_state = 71},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 71},
  [27] = {.lex_state = 71},
  [28] = {.lex_state = 71},
  [29] = {.lex_state = 71},
  [30] = {.lex_state = 71},
  [31] = {.lex_state = 71},
  [32] = {.lex_state = 71},
  [33] = {.lex_state = 71},
  [34] = {.lex_state = 71},
  [35] = {.lex_state = 71},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 4},
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
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_reg] = ACTIONS(1),
    [anon_sym_stack] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [sym__top_annotation] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_u256] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_intLiteral_token1] = ACTIONS(1),
    [aux_sym_intLiteral_token2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_aligned] = ACTIONS(1),
    [anon_sym_unaligned] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym_function_definition] = STATE(3),
    [sym_call_conv] = STATE(56),
    [sym__lvalue] = STATE(49),
    [sym__assignment] = STATE(29),
    [sym_instruction] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_ptr,
    STATE(52), 1,
      sym__writable,
    ACTIONS(13), 2,
      anon_sym_const,
      anon_sym_mut,
    STATE(19), 2,
      sym__pointer,
      sym__ptr,
    ACTIONS(17), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [28] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym__assignment,
    STATE(49), 1,
      sym__lvalue,
    STATE(56), 1,
      sym_call_conv,
    ACTIONS(9), 2,
      anon_sym_inline,
      anon_sym_export,
    STATE(4), 3,
      sym_function_definition,
      sym_instruction,
      aux_sym_source_file_repeat1,
  [59] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(29), 1,
      sym__assignment,
    STATE(49), 1,
      sym__lvalue,
    STATE(56), 1,
      sym_call_conv,
    ACTIONS(26), 2,
      anon_sym_inline,
      anon_sym_export,
    STATE(4), 3,
      sym_function_definition,
      sym_instruction,
      aux_sym_source_file_repeat1,
  [90] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    ACTIONS(38), 1,
      sym__top_annotation,
    STATE(8), 1,
      sym__storage,
    STATE(14), 1,
      aux_sym_annot_pvardecl_repeat1,
    STATE(40), 1,
      sym_annot_pvardecl,
    STATE(44), 1,
      sym__stor_type,
    STATE(48), 1,
      sym__pvardecl,
    ACTIONS(32), 2,
      anon_sym_inline,
      anon_sym_global,
    ACTIONS(36), 2,
      anon_sym_reg,
      anon_sym_stack,
  [123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(26), 2,
      sym__utype,
      sym__ptype,
    ACTIONS(40), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [141] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      sym__top_annotation,
    STATE(8), 1,
      sym__storage,
    STATE(14), 1,
      aux_sym_annot_pvardecl_repeat1,
    STATE(44), 1,
      sym__stor_type,
    STATE(47), 1,
      sym_annot_pvardecl,
    STATE(48), 1,
      sym__pvardecl,
    ACTIONS(32), 2,
      anon_sym_inline,
      anon_sym_global,
    ACTIONS(36), 2,
      anon_sym_reg,
      anon_sym_stack,
  [171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(53), 2,
      sym__utype,
      sym__ptype,
    ACTIONS(42), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [189] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym__top_annotation,
    STATE(6), 1,
      sym__storage,
    STATE(17), 1,
      aux_sym_annot_pvardecl_repeat1,
    ACTIONS(36), 2,
      anon_sym_reg,
      anon_sym_stack,
    ACTIONS(44), 2,
      anon_sym_inline,
      anon_sym_global,
    STATE(23), 2,
      sym__stor_type,
      sym__annot_stor_type,
  [214] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(29), 1,
      sym__assignment,
    STATE(49), 1,
      sym__lvalue,
    STATE(10), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(50), 2,
      sym_instruction,
      sym_return_statement,
  [241] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym__top_annotation,
    STATE(6), 1,
      sym__storage,
    STATE(17), 1,
      aux_sym_annot_pvardecl_repeat1,
    ACTIONS(36), 2,
      anon_sym_reg,
      anon_sym_stack,
    ACTIONS(44), 2,
      anon_sym_inline,
      anon_sym_global,
    STATE(20), 2,
      sym__stor_type,
      sym__annot_stor_type,
  [266] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_return,
    STATE(29), 1,
      sym__assignment,
    STATE(49), 1,
      sym__lvalue,
    STATE(10), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(50), 2,
      sym_instruction,
      sym_return_statement,
  [293] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_return,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__assignment,
    STATE(49), 1,
      sym__lvalue,
    STATE(12), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(50), 2,
      sym_instruction,
      sym_return_statement,
  [320] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym__top_annotation,
    STATE(8), 1,
      sym__storage,
    STATE(25), 1,
      aux_sym_annot_pvardecl_repeat1,
    STATE(44), 1,
      sym__stor_type,
    STATE(45), 1,
      sym__pvardecl,
    ACTIONS(32), 2,
      anon_sym_inline,
      anon_sym_global,
    ACTIONS(36), 2,
      anon_sym_reg,
      anon_sym_stack,
  [347] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      anon_sym_DASH_GT,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
    ACTIONS(66), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [383] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym__top_annotation,
    STATE(6), 1,
      sym__storage,
    STATE(25), 1,
      aux_sym_annot_pvardecl_repeat1,
    STATE(27), 1,
      sym__stor_type,
    ACTIONS(36), 2,
      anon_sym_reg,
      anon_sym_stack,
    ACTIONS(44), 2,
      anon_sym_inline,
      anon_sym_global,
  [407] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      anon_sym_DASH_GT,
    STATE(35), 1,
      sym_block,
    ACTIONS(76), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [443] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_block,
    ACTIONS(84), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    ACTIONS(88), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    ACTIONS(92), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [492] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_block,
    ACTIONS(96), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    ACTIONS(100), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym__top_annotation,
    STATE(25), 1,
      aux_sym_annot_pvardecl_repeat1,
    ACTIONS(102), 4,
      anon_sym_inline,
      anon_sym_reg,
      anon_sym_stack,
      anon_sym_global,
  [542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(109), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(113), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(117), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(121), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 4,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      sym_identifier,
  [676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_return,
      sym_identifier,
  [687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 1,
      sym__expression,
    ACTIONS(151), 2,
      sym_identifier,
      sym_number,
  [698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_annot_pvardecl_list_repeat1,
  [711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(28), 1,
      sym__expression,
    ACTIONS(157), 2,
      sym_identifier,
      sym_number,
  [722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_annot_pvardecl_list_repeat1,
  [735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_annot_pvardecl_list_repeat1,
  [748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_annot_pvardecl_list,
  [766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_identifier,
    STATE(42), 1,
      sym__var,
  [776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_annot_pvardecl_list,
  [794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_EQ,
  [817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_SEMI,
  [824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SEMI,
  [831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_ptr,
  [838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_identifier,
  [845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_identifier,
  [859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_fn,
  [866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_identifier,
  [873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_fn,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 214,
  [SMALL_STATE(11)] = 241,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 293,
  [SMALL_STATE(14)] = 320,
  [SMALL_STATE(15)] = 347,
  [SMALL_STATE(16)] = 369,
  [SMALL_STATE(17)] = 383,
  [SMALL_STATE(18)] = 407,
  [SMALL_STATE(19)] = 429,
  [SMALL_STATE(20)] = 443,
  [SMALL_STATE(21)] = 462,
  [SMALL_STATE(22)] = 477,
  [SMALL_STATE(23)] = 492,
  [SMALL_STATE(24)] = 511,
  [SMALL_STATE(25)] = 526,
  [SMALL_STATE(26)] = 542,
  [SMALL_STATE(27)] = 556,
  [SMALL_STATE(28)] = 570,
  [SMALL_STATE(29)] = 584,
  [SMALL_STATE(30)] = 598,
  [SMALL_STATE(31)] = 611,
  [SMALL_STATE(32)] = 624,
  [SMALL_STATE(33)] = 637,
  [SMALL_STATE(34)] = 650,
  [SMALL_STATE(35)] = 663,
  [SMALL_STATE(36)] = 676,
  [SMALL_STATE(37)] = 687,
  [SMALL_STATE(38)] = 698,
  [SMALL_STATE(39)] = 711,
  [SMALL_STATE(40)] = 722,
  [SMALL_STATE(41)] = 735,
  [SMALL_STATE(42)] = 748,
  [SMALL_STATE(43)] = 756,
  [SMALL_STATE(44)] = 766,
  [SMALL_STATE(45)] = 776,
  [SMALL_STATE(46)] = 784,
  [SMALL_STATE(47)] = 794,
  [SMALL_STATE(48)] = 802,
  [SMALL_STATE(49)] = 810,
  [SMALL_STATE(50)] = 817,
  [SMALL_STATE(51)] = 824,
  [SMALL_STATE(52)] = 831,
  [SMALL_STATE(53)] = 838,
  [SMALL_STATE(54)] = 845,
  [SMALL_STATE(55)] = 852,
  [SMALL_STATE(56)] = 859,
  [SMALL_STATE(57)] = 866,
  [SMALL_STATE(58)] = 873,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__storage, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pointer, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__storage, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 7),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 7),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl_list, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annot_pvardecl_list, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl_list, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annot_pvardecl_list, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl_list, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annot_pvardecl_list, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stor_type, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stor_type, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annot_stor_type, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annot_stor_type, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 8),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, 0, 8),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 6),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_list_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_list_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pvardecl, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_conv, 1, 0, 0),
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
