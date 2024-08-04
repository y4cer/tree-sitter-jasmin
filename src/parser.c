#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 219
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

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
  anon_sym_POUND = 14,
  anon_sym_u8 = 15,
  anon_sym_u16 = 16,
  anon_sym_u32 = 17,
  anon_sym_u64 = 18,
  anon_sym_u128 = 19,
  anon_sym_u256 = 20,
  anon_sym_1 = 21,
  anon_sym_2 = 22,
  anon_sym_4 = 23,
  anon_sym_8 = 24,
  anon_sym_16 = 25,
  anon_sym_32 = 26,
  anon_sym_64 = 27,
  anon_sym_128 = 28,
  anon_sym_256 = 29,
  anon_sym_s = 30,
  anon_sym_u = 31,
  anon_sym_bool = 32,
  anon_sym_int = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  sym__int_literal = 36,
  anon_sym_DASH = 37,
  anon_sym_true = 38,
  anon_sym_false = 39,
  anon_sym_if = 40,
  anon_sym_else = 41,
  anon_sym_QMARK = 42,
  anon_sym_COLON = 43,
  anon_sym_BANG = 44,
  anon_sym_STAR = 45,
  anon_sym_SLASH = 46,
  anon_sym_PERCENT = 47,
  anon_sym_LT_LT = 48,
  anon_sym_GT_GT = 49,
  anon_sym_AMP = 50,
  anon_sym_LT_LTr = 51,
  anon_sym_GT_GTr = 52,
  anon_sym_PLUS = 53,
  anon_sym_PIPE = 54,
  anon_sym_CARET = 55,
  anon_sym_EQ_EQ = 56,
  anon_sym_BANG_EQ = 57,
  anon_sym_LT = 58,
  anon_sym_LT_EQ = 59,
  anon_sym_GT = 60,
  anon_sym_GT_EQ = 61,
  anon_sym_AMP_AMP = 62,
  anon_sym_PIPE_PIPE = 63,
  anon_sym_LBRACK = 64,
  anon_sym_RBRACK = 65,
  anon_sym_POUNDaligned = 66,
  anon_sym_POUNDunaligned = 67,
  anon_sym_DOT = 68,
  anon_sym__ = 69,
  anon_sym_EQ = 70,
  anon_sym_ArrayInit = 71,
  anon_sym_SEMI = 72,
  anon_sym_return = 73,
  sym_identifier = 74,
  sym_comment = 75,
  sym_source_file = 76,
  sym_function_definition = 77,
  sym_call_conv = 78,
  sym__pvardecl = 79,
  sym_annot_pvardecl_list = 80,
  sym_annot_pvardecl = 81,
  sym__writable = 82,
  sym__pointer = 83,
  sym__ptr = 84,
  sym__storage = 85,
  sym__top_annotation = 86,
  sym__utype = 87,
  sym__gensize = 88,
  sym__size = 89,
  sym__vsize = 90,
  sym__signletter = 91,
  sym__swsize = 92,
  sym__svsize = 93,
  sym__ptype = 94,
  sym__stor_type = 95,
  sym__annot_stor_type = 96,
  sym_funbody = 97,
  sym_int = 98,
  sym_pexp = 99,
  sym_conditional_expr = 100,
  sym__castop = 101,
  sym__peop1 = 102,
  sym__binary_expr = 103,
  sym__cast = 104,
  sym__prim = 105,
  sym_var = 106,
  sym__mem_ofs = 107,
  sym__mem_access = 108,
  sym__unaligned = 109,
  sym__arr_access = 110,
  sym__var_arr_access = 111,
  sym__arr_access_len = 112,
  sym__arr_access_i = 113,
  sym__lvalue = 114,
  sym_instr = 115,
  sym_return_statement = 116,
  aux_sym_source_file_repeat1 = 117,
  aux_sym_annot_pvardecl_list_repeat1 = 118,
  aux_sym_annot_pvardecl_repeat1 = 119,
  aux_sym_funbody_repeat1 = 120,
  aux_sym_pexp_repeat1 = 121,
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
  [anon_sym_POUND] = "#",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_u128] = "u128",
  [anon_sym_u256] = "u256",
  [anon_sym_1] = "1",
  [anon_sym_2] = "2",
  [anon_sym_4] = "4",
  [anon_sym_8] = "8",
  [anon_sym_16] = "16",
  [anon_sym_32] = "32",
  [anon_sym_64] = "64",
  [anon_sym_128] = "128",
  [anon_sym_256] = "256",
  [anon_sym_s] = "s",
  [anon_sym_u] = "u",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__int_literal] = "_int_literal",
  [anon_sym_DASH] = "-",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_LTr] = "<<r",
  [anon_sym_GT_GTr] = ">>r",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUNDaligned] = "#aligned",
  [anon_sym_POUNDunaligned] = "#unaligned",
  [anon_sym_DOT] = ".",
  [anon_sym__] = "_",
  [anon_sym_EQ] = "=",
  [anon_sym_ArrayInit] = "ArrayInit",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
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
  [sym__top_annotation] = "_top_annotation",
  [sym__utype] = "_utype",
  [sym__gensize] = "_gensize",
  [sym__size] = "_size",
  [sym__vsize] = "_vsize",
  [sym__signletter] = "_signletter",
  [sym__swsize] = "_swsize",
  [sym__svsize] = "_svsize",
  [sym__ptype] = "_ptype",
  [sym__stor_type] = "_stor_type",
  [sym__annot_stor_type] = "_annot_stor_type",
  [sym_funbody] = "funbody",
  [sym_int] = "int",
  [sym_pexp] = "pexp",
  [sym_conditional_expr] = "conditional_expr",
  [sym__castop] = "_castop",
  [sym__peop1] = "_peop1",
  [sym__binary_expr] = "_binary_expr",
  [sym__cast] = "_cast",
  [sym__prim] = "_prim",
  [sym_var] = "var",
  [sym__mem_ofs] = "_mem_ofs",
  [sym__mem_access] = "_mem_access",
  [sym__unaligned] = "_unaligned",
  [sym__arr_access] = "_arr_access",
  [sym__var_arr_access] = "_var_arr_access",
  [sym__arr_access_len] = "_arr_access_len",
  [sym__arr_access_i] = "_arr_access_i",
  [sym__lvalue] = "_lvalue",
  [sym_instr] = "instr",
  [sym_return_statement] = "return_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_annot_pvardecl_list_repeat1] = "annot_pvardecl_list_repeat1",
  [aux_sym_annot_pvardecl_repeat1] = "annot_pvardecl_repeat1",
  [aux_sym_funbody_repeat1] = "funbody_repeat1",
  [aux_sym_pexp_repeat1] = "pexp_repeat1",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u128] = anon_sym_u128,
  [anon_sym_u256] = anon_sym_u256,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_32] = anon_sym_32,
  [anon_sym_64] = anon_sym_64,
  [anon_sym_128] = anon_sym_128,
  [anon_sym_256] = anon_sym_256,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__int_literal] = sym__int_literal,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT_LTr] = anon_sym_LT_LTr,
  [anon_sym_GT_GTr] = anon_sym_GT_GTr,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUNDaligned] = anon_sym_POUNDaligned,
  [anon_sym_POUNDunaligned] = anon_sym_POUNDunaligned,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym__] = anon_sym__,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_ArrayInit] = anon_sym_ArrayInit,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
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
  [sym__top_annotation] = sym__top_annotation,
  [sym__utype] = sym__utype,
  [sym__gensize] = sym__gensize,
  [sym__size] = sym__size,
  [sym__vsize] = sym__vsize,
  [sym__signletter] = sym__signletter,
  [sym__swsize] = sym__swsize,
  [sym__svsize] = sym__svsize,
  [sym__ptype] = sym__ptype,
  [sym__stor_type] = sym__stor_type,
  [sym__annot_stor_type] = sym__annot_stor_type,
  [sym_funbody] = sym_funbody,
  [sym_int] = sym_int,
  [sym_pexp] = sym_pexp,
  [sym_conditional_expr] = sym_conditional_expr,
  [sym__castop] = sym__castop,
  [sym__peop1] = sym__peop1,
  [sym__binary_expr] = sym__binary_expr,
  [sym__cast] = sym__cast,
  [sym__prim] = sym__prim,
  [sym_var] = sym_var,
  [sym__mem_ofs] = sym__mem_ofs,
  [sym__mem_access] = sym__mem_access,
  [sym__unaligned] = sym__unaligned,
  [sym__arr_access] = sym__arr_access,
  [sym__var_arr_access] = sym__var_arr_access,
  [sym__arr_access_len] = sym__arr_access_len,
  [sym__arr_access_i] = sym__arr_access_i,
  [sym__lvalue] = sym__lvalue,
  [sym_instr] = sym_instr,
  [sym_return_statement] = sym_return_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_annot_pvardecl_list_repeat1] = aux_sym_annot_pvardecl_list_repeat1,
  [aux_sym_annot_pvardecl_repeat1] = aux_sym_annot_pvardecl_repeat1,
  [aux_sym_funbody_repeat1] = aux_sym_funbody_repeat1,
  [aux_sym_pexp_repeat1] = aux_sym_pexp_repeat1,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
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
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
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
  [sym__int_literal] = {
    .visible = false,
    .named = true,
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LTr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GTr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
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
  [anon_sym_POUNDaligned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDunaligned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ArrayInit] = {
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
  [sym__top_annotation] = {
    .visible = false,
    .named = true,
  },
  [sym__utype] = {
    .visible = false,
    .named = true,
  },
  [sym__gensize] = {
    .visible = false,
    .named = true,
  },
  [sym__size] = {
    .visible = false,
    .named = true,
  },
  [sym__vsize] = {
    .visible = false,
    .named = true,
  },
  [sym__signletter] = {
    .visible = false,
    .named = true,
  },
  [sym__swsize] = {
    .visible = false,
    .named = true,
  },
  [sym__svsize] = {
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
  [sym_funbody] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_pexp] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__castop] = {
    .visible = false,
    .named = true,
  },
  [sym__peop1] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__cast] = {
    .visible = false,
    .named = true,
  },
  [sym__prim] = {
    .visible = false,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym__mem_ofs] = {
    .visible = false,
    .named = true,
  },
  [sym__mem_access] = {
    .visible = false,
    .named = true,
  },
  [sym__unaligned] = {
    .visible = false,
    .named = true,
  },
  [sym__arr_access] = {
    .visible = false,
    .named = true,
  },
  [sym__var_arr_access] = {
    .visible = false,
    .named = true,
  },
  [sym__arr_access_len] = {
    .visible = false,
    .named = true,
  },
  [sym__arr_access_i] = {
    .visible = false,
    .named = true,
  },
  [sym__lvalue] = {
    .visible = false,
    .named = true,
  },
  [sym_instr] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
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
  [aux_sym_funbody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pexp_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
  field_left = 5,
  field_name = 6,
  field_operator = 7,
  field_result = 8,
  field_right = 9,
  field_type_parameters = 10,
  field_visibility = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_result] = "result",
  [field_right] = "right",
  [field_type_parameters] = "type_parameters",
  [field_visibility] = "visibility",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 3},
  [4] = {.index = 8, .length = 3},
  [5] = {.index = 11, .length = 3},
  [6] = {.index = 14, .length = 4},
  [7] = {.index = 18, .length = 3},
  [8] = {.index = 21, .length = 4},
  [9] = {.index = 25, .length = 4},
  [10] = {.index = 29, .length = 5},
  [11] = {.index = 34, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type_parameters, 2},
  [2] =
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_right, 0, .inherited = true},
  [5] =
    {field_body, 3},
    {field_name, 1},
    {field_type_parameters, 2},
  [8] =
    {field_name, 2},
    {field_type_parameters, 3},
    {field_visibility, 0},
  [11] =
    {field_name, 1},
    {field_result, 4},
    {field_type_parameters, 2},
  [14] =
    {field_body, 4},
    {field_name, 2},
    {field_type_parameters, 3},
    {field_visibility, 0},
  [18] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [21] =
    {field_body, 5},
    {field_name, 1},
    {field_result, 4},
    {field_type_parameters, 2},
  [25] =
    {field_name, 2},
    {field_result, 5},
    {field_type_parameters, 3},
    {field_visibility, 0},
  [29] =
    {field_body, 6},
    {field_name, 2},
    {field_result, 5},
    {field_type_parameters, 3},
    {field_visibility, 0},
  [34] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
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
  [6] = 4,
  [7] = 3,
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
  [42] = 39,
  [43] = 40,
  [44] = 38,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 45,
  [50] = 50,
  [51] = 51,
  [52] = 48,
  [53] = 53,
  [54] = 51,
  [55] = 55,
  [56] = 47,
  [57] = 57,
  [58] = 58,
  [59] = 57,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 62,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 61,
  [84] = 75,
  [85] = 85,
  [86] = 77,
  [87] = 76,
  [88] = 81,
  [89] = 85,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 103,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 122,
  [134] = 134,
  [135] = 121,
  [136] = 136,
  [137] = 137,
  [138] = 123,
  [139] = 126,
  [140] = 125,
  [141] = 124,
  [142] = 127,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 156,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 154,
  [168] = 164,
  [169] = 169,
  [170] = 170,
  [171] = 159,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 119,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 176,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 186,
  [199] = 188,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 181,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 202,
  [209] = 209,
  [210] = 210,
  [211] = 194,
  [212] = 212,
  [213] = 213,
  [214] = 210,
  [215] = 204,
  [216] = 216,
  [217] = 174,
  [218] = 195,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '!', 210,
        '#', 121,
        '%', 213,
        '&', 216,
        '(', 111,
        ')', 113,
        '*', 211,
        '+', 219,
        ',', 112,
        '-', 200,
        '.', 234,
        '/', 212,
        '1', 134,
        '2', 136,
        '3', 15,
        '4', 138,
        '6', 18,
        '8', 140,
        ':', 208,
        ';', 240,
        '<', 224,
        '=', 237,
        '>', 226,
        '?', 207,
        'A', 84,
        '[', 230,
        ']', 231,
        '^', 221,
        '_', 235,
        'b', 77,
        'c', 76,
        'e', 58,
        'f', 32,
        'g', 64,
        'i', 47,
        'm', 97,
        'p', 96,
        'r', 39,
        's', 152,
        't', 82,
        'u', 153,
        '{', 157,
        '|', 220,
        '}', 158,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 25,
        '#', 120,
        '%', 213,
        '&', 216,
        '(', 111,
        ')', 113,
        '*', 211,
        '+', 219,
        ',', 112,
        '-', 199,
        '.', 234,
        '/', 212,
        '1', 159,
        '2', 137,
        '3', 160,
        '4', 139,
        '6', 161,
        '8', 141,
        ':', 208,
        ';', 240,
        '<', 224,
        '=', 26,
        '>', 226,
        '?', 207,
        '[', 230,
        ']', 231,
        '^', 221,
        'g', 64,
        'i', 48,
        'r', 45,
        's', 95,
        '|', 220,
        '0', 167,
        '5', 167,
        '7', 167,
        '9', 167,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 209,
        '#', 121,
        '(', 111,
        '-', 199,
        '/', 10,
        '[', 230,
        'f', 165,
        't', 270,
        'u', 244,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(198);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 209,
        '#', 120,
        '(', 111,
        ')', 113,
        '-', 199,
        '/', 10,
        '[', 230,
        'f', 165,
        't', 270,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(198);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 209,
        '#', 120,
        '(', 111,
        '-', 199,
        '/', 10,
        '1', 159,
        '2', 162,
        '3', 160,
        '6', 161,
        '8', 141,
        '=', 236,
        '[', 230,
        'f', 165,
        'i', 265,
        't', 270,
        'u', 244,
        '0', 167,
        '4', 167,
        '5', 167,
        '7', 167,
        '9', 167,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(198);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 209,
        '#', 120,
        '(', 111,
        '-', 199,
        '/', 10,
        '1', 159,
        '2', 137,
        '3', 160,
        '4', 139,
        '6', 161,
        '8', 141,
        '[', 230,
        'f', 165,
        't', 270,
        '0', 167,
        '5', 167,
        '7', 167,
        '9', 167,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(198);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 209,
        '#', 120,
        '(', 111,
        '-', 199,
        '/', 10,
        '[', 230,
        'f', 165,
        't', 270,
        'u', 244,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(198);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(271);
      if (lookahead == 'r') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(271);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(313);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == '8') ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(144);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(126);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == '6') ADVANCE(124);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(146);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(128);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '6') ADVANCE(150);
      END_STATE();
    case 22:
      if (lookahead == '6') ADVANCE(132);
      END_STATE();
    case 23:
      if (lookahead == '8') ADVANCE(148);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(130);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(222);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(106);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(117);
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(118);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 100:
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 101:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '!', 25,
        '#', 120,
        '%', 213,
        '&', 216,
        ')', 113,
        '*', 211,
        '+', 219,
        ',', 112,
        '-', 199,
        '/', 212,
        '1', 134,
        '2', 135,
        '3', 15,
        '4', 138,
        '6', 18,
        '8', 140,
        ':', 208,
        ';', 240,
        '<', 224,
        '=', 26,
        '>', 226,
        '?', 207,
        'A', 271,
        ']', 231,
        '^', 221,
        'e', 280,
        'f', 260,
        'i', 261,
        '{', 157,
        '|', 220,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(101);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '#', 120,
        '-', 27,
        '/', 10,
        'A', 271,
        'e', 280,
        'f', 260,
        'i', 261,
        '{', 157,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(102);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_stack);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_u256);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_u256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == '6') ADVANCE(142);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '5') ADVANCE(21);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '5') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_32);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_64);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_128);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_256);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == '2') ADVANCE(164);
      if (lookahead == '6') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == '2') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == '4') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == '5') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == '6') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == '8') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == 'a') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == 'l') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(106);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(313);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(228);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LT_LTr);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_GT_GTr);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(214);
      if (lookahead == '=') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '>') ADVANCE(215);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_POUNDaligned);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_POUNDunaligned);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(222);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_ArrayInit);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_ArrayInit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(245);
      if (lookahead == '2') ADVANCE(248);
      if (lookahead == '3') ADVANCE(246);
      if (lookahead == '6') ADVANCE(247);
      if (lookahead == '8') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(250);
      if (lookahead == '6') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 101},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 101},
  [35] = {.lex_state = 101},
  [36] = {.lex_state = 101},
  [37] = {.lex_state = 101},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 101},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 101},
  [46] = {.lex_state = 101},
  [47] = {.lex_state = 101},
  [48] = {.lex_state = 101},
  [49] = {.lex_state = 101},
  [50] = {.lex_state = 101},
  [51] = {.lex_state = 101},
  [52] = {.lex_state = 101},
  [53] = {.lex_state = 101},
  [54] = {.lex_state = 101},
  [55] = {.lex_state = 101},
  [56] = {.lex_state = 101},
  [57] = {.lex_state = 101},
  [58] = {.lex_state = 101},
  [59] = {.lex_state = 101},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 101},
  [91] = {.lex_state = 101},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 102},
  [101] = {.lex_state = 102},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 101},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 101},
  [112] = {.lex_state = 102},
  [113] = {.lex_state = 102},
  [114] = {.lex_state = 102},
  [115] = {.lex_state = 101},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 101},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 101},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 101},
  [124] = {.lex_state = 101},
  [125] = {.lex_state = 101},
  [126] = {.lex_state = 101},
  [127] = {.lex_state = 101},
  [128] = {.lex_state = 101},
  [129] = {.lex_state = 101},
  [130] = {.lex_state = 101},
  [131] = {.lex_state = 101},
  [132] = {.lex_state = 101},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 101},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 101},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 101},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 101},
  [151] = {.lex_state = 101},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
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
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_32] = ACTIONS(1),
    [anon_sym_64] = ACTIONS(1),
    [anon_sym_128] = ACTIONS(1),
    [anon_sym_256] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT_LTr] = ACTIONS(1),
    [anon_sym_GT_GTr] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUNDaligned] = ACTIONS(1),
    [anon_sym_POUNDunaligned] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_ArrayInit] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(206),
    [sym_function_definition] = STATE(90),
    [sym_call_conv] = STATE(205),
    [sym__top_annotation] = STATE(122),
    [sym_var] = STATE(204),
    [sym__lvalue] = STATE(202),
    [sym_instr] = STATE(90),
    [aux_sym_source_file_repeat1] = STATE(90),
    [aux_sym_annot_pvardecl_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_ArrayInit] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_int,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(53), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(145), 1,
      sym__size,
    STATE(183), 1,
      sym__prim,
    STATE(200), 1,
      sym__utype,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(207), 2,
      sym__swsize,
      sym__cast,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
    ACTIONS(21), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
    ACTIONS(23), 6,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
      anon_sym_64,
      anon_sym_128,
      anon_sym_256,
  [79] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(42), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(145), 1,
      sym__size,
    STATE(149), 1,
      sym__vsize,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_2,
      anon_sym_4,
    ACTIONS(23), 3,
      anon_sym_64,
      anon_sym_128,
      anon_sym_256,
    ACTIONS(41), 3,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
    STATE(77), 3,
      sym__swsize,
      sym__svsize,
      sym__castop,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [154] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(40), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(145), 1,
      sym__size,
    STATE(149), 1,
      sym__vsize,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_2,
      anon_sym_4,
    ACTIONS(23), 3,
      anon_sym_64,
      anon_sym_128,
      anon_sym_256,
    ACTIONS(41), 3,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
    STATE(85), 3,
      sym__swsize,
      sym__svsize,
      sym__castop,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [229] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DOT,
    STATE(32), 1,
      sym__arr_access,
    ACTIONS(47), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [276] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(43), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(145), 1,
      sym__size,
    STATE(149), 1,
      sym__vsize,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_2,
      anon_sym_4,
    ACTIONS(23), 3,
      anon_sym_64,
      anon_sym_128,
      anon_sym_256,
    ACTIONS(41), 3,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
    STATE(89), 3,
      sym__swsize,
      sym__svsize,
      sym__castop,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [351] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(39), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(145), 1,
      sym__size,
    STATE(149), 1,
      sym__vsize,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      anon_sym_2,
      anon_sym_4,
    ACTIONS(23), 3,
      anon_sym_64,
      anon_sym_128,
      anon_sym_256,
    ACTIONS(41), 3,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
    STATE(86), 3,
      sym__swsize,
      sym__svsize,
      sym__castop,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
  [464] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(33), 1,
      sym__unaligned,
    STATE(37), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(82), 1,
      sym__utype,
    STATE(173), 1,
      sym__arr_access_i,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      anon_sym_POUNDaligned,
      anon_sym_POUNDunaligned,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
    ACTIONS(59), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
  [535] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(33), 1,
      sym__unaligned,
    STATE(37), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(82), 1,
      sym__utype,
    STATE(183), 1,
      sym__prim,
    STATE(191), 1,
      sym__arr_access_i,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      anon_sym_POUNDaligned,
      anon_sym_POUNDunaligned,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
    ACTIONS(59), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
  [606] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(63), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [657] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(83), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [706] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(85), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [753] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(87), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(85), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [981] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(85), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1131] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(85), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_if,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1454] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(35), 1,
      sym_pexp,
    STATE(66), 1,
      sym__utype,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
    ACTIONS(141), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
  [1515] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_pexp_repeat1,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1567] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(147), 1,
      anon_sym_COLON,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      sym__arr_access_len,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1619] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(147), 1,
      anon_sym_COLON,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      sym__arr_access_len,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1671] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(147), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      sym__arr_access_len,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1723] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(155), 1,
      anon_sym_if,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1772] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(159), 1,
      anon_sym_if,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1821] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1870] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1917] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(169), 1,
      anon_sym_if,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1966] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(173), 1,
      anon_sym_if,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2015] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(177), 1,
      anon_sym_if,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2064] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2110] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(181), 1,
      anon_sym_COLON,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2156] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2202] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2248] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2294] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2340] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2386] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2432] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2478] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2524] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2570] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2616] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2662] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2708] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_QMARK,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_AMP_AMP,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(71), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(75), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2754] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(34), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2807] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(51), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2857] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(57), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2907] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(41), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2957] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(11), 1,
      sym_pexp,
    STATE(28), 1,
      sym__binary_expr,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3007] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(14), 1,
      sym_pexp,
    STATE(28), 1,
      sym__binary_expr,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3057] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(36), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3107] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(58), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3157] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(18), 1,
      sym_pexp,
    STATE(28), 1,
      sym__binary_expr,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3207] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(46), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3257] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(22), 1,
      sym_pexp,
    STATE(28), 1,
      sym__binary_expr,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3307] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(24), 1,
      sym_pexp,
    STATE(28), 1,
      sym__binary_expr,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3357] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(20), 1,
      sym_pexp,
    STATE(28), 1,
      sym__binary_expr,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3407] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(13), 1,
      sym_pexp,
    STATE(28), 1,
      sym__binary_expr,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3457] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(59), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3507] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(56), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3557] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(52), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3607] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(40), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3657] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(12), 1,
      sym_pexp,
    STATE(28), 1,
      sym__binary_expr,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3707] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(55), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3757] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(50), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3807] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(49), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3857] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(35), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3907] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(54), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3957] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(47), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [4007] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(38), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [4057] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(43), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [4107] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(48), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [4157] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(45), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [4207] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym__int_literal,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_BANG,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(5), 1,
      sym_var,
    STATE(28), 1,
      sym__binary_expr,
    STATE(44), 1,
      sym_pexp,
    STATE(78), 1,
      sym__peop1,
    STATE(183), 1,
      sym__prim,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [4257] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_ArrayInit,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    STATE(202), 1,
      sym__lvalue,
    STATE(204), 1,
      sym_var,
    STATE(205), 1,
      sym_call_conv,
    ACTIONS(9), 2,
      anon_sym_inline,
      anon_sym_export,
    STATE(122), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
    STATE(91), 3,
      sym_function_definition,
      sym_instr,
      aux_sym_source_file_repeat1,
  [4298] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      anon_sym_fn,
    ACTIONS(217), 1,
      anon_sym_POUND,
    ACTIONS(220), 1,
      anon_sym_ArrayInit,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(202), 1,
      sym__lvalue,
    STATE(204), 1,
      sym_var,
    STATE(205), 1,
      sym_call_conv,
    ACTIONS(214), 2,
      anon_sym_inline,
      anon_sym_export,
    STATE(122), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
    STATE(91), 3,
      sym_function_definition,
      sym_instr,
      aux_sym_source_file_repeat1,
  [4339] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym__int_literal,
    STATE(145), 1,
      sym__size,
    STATE(149), 1,
      sym__vsize,
    ACTIONS(39), 2,
      anon_sym_2,
      anon_sym_4,
    ACTIONS(23), 3,
      anon_sym_64,
      anon_sym_128,
      anon_sym_256,
    ACTIONS(41), 3,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
    STATE(110), 3,
      sym__swsize,
      sym__svsize,
      sym__castop,
  [4371] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_ptr,
    STATE(182), 1,
      sym__writable,
    ACTIONS(228), 2,
      anon_sym_const,
      anon_sym_mut,
    STATE(118), 2,
      sym__pointer,
      sym__ptr,
    ACTIONS(232), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [4399] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_2,
    ACTIONS(234), 1,
      anon_sym_4,
    STATE(145), 1,
      sym__size,
    STATE(149), 1,
      sym__vsize,
    ACTIONS(236), 3,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
    ACTIONS(238), 3,
      anon_sym_64,
      anon_sym_128,
      anon_sym_256,
    STATE(110), 3,
      sym__swsize,
      sym__svsize,
      sym__castop,
  [4430] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(246), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym__storage,
    STATE(152), 1,
      sym_annot_pvardecl,
    STATE(155), 1,
      sym__stor_type,
    STATE(161), 1,
      sym__pvardecl,
    ACTIONS(240), 2,
      anon_sym_inline,
      anon_sym_global,
    ACTIONS(244), 2,
      anon_sym_reg,
      anon_sym_stack,
    STATE(99), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [4464] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym__storage,
    STATE(155), 1,
      sym__stor_type,
    STATE(161), 1,
      sym__pvardecl,
    STATE(170), 1,
      sym_annot_pvardecl,
    ACTIONS(240), 2,
      anon_sym_inline,
      anon_sym_global,
    ACTIONS(244), 2,
      anon_sym_reg,
      anon_sym_stack,
    STATE(99), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [4495] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_ArrayInit,
    ACTIONS(252), 1,
      anon_sym_return,
    STATE(180), 1,
      sym_return_statement,
    STATE(208), 1,
      sym__lvalue,
    STATE(215), 1,
      sym_var,
    STATE(106), 2,
      sym_instr,
      aux_sym_funbody_repeat1,
    STATE(133), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [4528] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_ArrayInit,
    ACTIONS(252), 1,
      anon_sym_return,
    STATE(187), 1,
      sym_return_statement,
    STATE(208), 1,
      sym__lvalue,
    STATE(215), 1,
      sym_var,
    STATE(97), 2,
      sym_instr,
      aux_sym_funbody_repeat1,
    STATE(133), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [4561] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym__storage,
    STATE(155), 1,
      sym__stor_type,
    STATE(158), 1,
      sym__pvardecl,
    ACTIONS(240), 2,
      anon_sym_inline,
      anon_sym_global,
    ACTIONS(244), 2,
      anon_sym_reg,
      anon_sym_stack,
    STATE(121), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [4589] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DASH_GT,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_funbody,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(258), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4613] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_DASH_GT,
    STATE(130), 1,
      sym_funbody,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(266), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4637] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym__storage,
    ACTIONS(244), 2,
      anon_sym_reg,
      anon_sym_stack,
    ACTIONS(270), 2,
      anon_sym_inline,
      anon_sym_global,
    STATE(109), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
    STATE(111), 2,
      sym__stor_type,
      sym__annot_stor_type,
  [4663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(119), 2,
      sym__utype,
      sym__ptype,
    ACTIONS(274), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [4681] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym__storage,
    ACTIONS(244), 2,
      anon_sym_reg,
      anon_sym_stack,
    ACTIONS(270), 2,
      anon_sym_inline,
      anon_sym_global,
    STATE(108), 2,
      sym__stor_type,
      sym__annot_stor_type,
    STATE(109), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [4707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      sym__int_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(276), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACK,
  [4725] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_ArrayInit,
    ACTIONS(286), 1,
      anon_sym_return,
    ACTIONS(288), 1,
      sym_identifier,
    STATE(208), 1,
      sym__lvalue,
    STATE(215), 1,
      sym_var,
    STATE(106), 2,
      sym_instr,
      aux_sym_funbody_repeat1,
    STATE(133), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [4755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(184), 2,
      sym__utype,
      sym__ptype,
    ACTIONS(291), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [4773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_funbody,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(295), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4794] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym__storage,
    STATE(117), 1,
      sym__stor_type,
    ACTIONS(244), 2,
      anon_sym_reg,
      anon_sym_stack,
    ACTIONS(270), 2,
      anon_sym_inline,
      anon_sym_global,
    STATE(121), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [4819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 4,
      sym__int_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(297), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACK,
  [4836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_funbody,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(303), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_POUND,
      anon_sym_LBRACE,
    ACTIONS(307), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_POUND,
      anon_sym_LBRACE,
    ACTIONS(311), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_POUND,
      anon_sym_LBRACE,
    ACTIONS(315), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_1,
    STATE(116), 1,
      sym__gensize,
    ACTIONS(319), 7,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
      anon_sym_64,
      anon_sym_128,
  [4927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 4,
      sym__int_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(321), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACK,
  [4944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
    ACTIONS(327), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [4974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LBRACE,
    ACTIONS(333), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [5004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_POUND,
    STATE(121), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
    ACTIONS(337), 4,
      anon_sym_inline,
      anon_sym_reg,
      anon_sym_stack,
      anon_sym_global,
  [5021] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_POUND,
    ACTIONS(344), 1,
      anon_sym_ArrayInit,
    STATE(194), 1,
      sym__lvalue,
    STATE(195), 1,
      sym_var,
    STATE(135), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [5044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(348), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [5059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(352), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [5074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(356), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [5089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(360), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [5104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(364), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [5119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(368), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [5134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(372), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [5149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(376), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [5164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(380), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [5179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(384), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [5194] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_POUND,
    ACTIONS(386), 1,
      anon_sym_ArrayInit,
    STATE(211), 1,
      sym__lvalue,
    STATE(218), 1,
      sym_var,
    STATE(135), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [5217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(390), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [5232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_POUND,
    ACTIONS(395), 2,
      anon_sym_ArrayInit,
      sym_identifier,
    STATE(135), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [5247] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(150), 1,
      sym_var,
    STATE(160), 1,
      sym__unaligned,
    ACTIONS(397), 2,
      anon_sym_POUNDaligned,
      anon_sym_POUNDunaligned,
  [5264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(147), 1,
      sym_var,
    STATE(157), 1,
      sym__unaligned,
    ACTIONS(401), 2,
      anon_sym_POUNDaligned,
      anon_sym_POUNDunaligned,
  [5281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_POUND,
    ACTIONS(348), 3,
      anon_sym_ArrayInit,
      anon_sym_return,
      sym_identifier,
  [5293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_POUND,
    ACTIONS(360), 3,
      anon_sym_ArrayInit,
      anon_sym_return,
      sym_identifier,
  [5305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_POUND,
    ACTIONS(356), 3,
      anon_sym_ArrayInit,
      anon_sym_return,
      sym_identifier,
  [5317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_POUND,
    ACTIONS(352), 3,
      anon_sym_ArrayInit,
      anon_sym_return,
      sym_identifier,
  [5329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_POUND,
    ACTIONS(364), 3,
      anon_sym_ArrayInit,
      anon_sym_return,
      sym_identifier,
  [5341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_annot_pvardecl_list_repeat1,
  [5354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(209), 1,
      sym__mem_ofs,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(105), 1,
      sym__signletter,
    ACTIONS(410), 2,
      anon_sym_s,
      anon_sym_u,
  [5376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_annot_pvardecl_list_repeat1,
  [5389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(201), 1,
      sym__mem_ofs,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_pexp_repeat1,
  [5413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(115), 1,
      sym__signletter,
    ACTIONS(419), 2,
      anon_sym_s,
      anon_sym_u,
  [5424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(196), 1,
      sym__mem_ofs,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(178), 1,
      sym__mem_ofs,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_annot_pvardecl_list_repeat1,
  [5459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_pexp_repeat1,
  [5472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(186), 1,
      sym_var,
  [5482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(162), 1,
      sym_var,
  [5492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_if,
    ACTIONS(175), 1,
      anon_sym_SEMI,
  [5502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(144), 1,
      sym_var,
  [5512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_if,
    ACTIONS(179), 1,
      anon_sym_SEMI,
  [5530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(151), 1,
      sym_var,
  [5540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_if,
    ACTIONS(165), 1,
      anon_sym_SEMI,
  [5566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(181), 1,
      sym_var,
  [5576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_annot_pvardecl_list,
  [5586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      anon_sym_EQ,
  [5596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(198), 1,
      sym_var,
  [5606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(203), 1,
      sym_var,
  [5616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_s,
      anon_sym_u,
  [5624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_if,
    ACTIONS(157), 1,
      anon_sym_SEMI,
  [5642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_annot_pvardecl_list,
  [5652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
  [5659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
  [5666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
  [5673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SEMI,
  [5680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      sym_identifier,
  [5687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
  [5694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACK,
  [5701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
  [5708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
  [5715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_ptr,
  [5722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
  [5729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
  [5736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
  [5743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
  [5750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
  [5757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_SEMI,
  [5764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
  [5771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_identifier,
  [5778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_RBRACK,
  [5785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SEMI,
  [5792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
  [5799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_EQ,
  [5806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
  [5813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
  [5820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
  [5827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
  [5834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SEMI,
  [5841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
  [5848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
  [5855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_EQ,
  [5862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [5869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
  [5876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_fn,
  [5883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
  [5890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
  [5897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_EQ,
  [5904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
  [5911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
  [5918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_EQ,
  [5925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
  [5932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_fn,
  [5939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
  [5946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
  [5953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LBRACK,
  [5960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
  [5967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 229,
  [SMALL_STATE(6)] = 276,
  [SMALL_STATE(7)] = 351,
  [SMALL_STATE(8)] = 426,
  [SMALL_STATE(9)] = 464,
  [SMALL_STATE(10)] = 535,
  [SMALL_STATE(11)] = 606,
  [SMALL_STATE(12)] = 657,
  [SMALL_STATE(13)] = 706,
  [SMALL_STATE(14)] = 753,
  [SMALL_STATE(15)] = 802,
  [SMALL_STATE(16)] = 837,
  [SMALL_STATE(17)] = 872,
  [SMALL_STATE(18)] = 907,
  [SMALL_STATE(19)] = 946,
  [SMALL_STATE(20)] = 981,
  [SMALL_STATE(21)] = 1026,
  [SMALL_STATE(22)] = 1061,
  [SMALL_STATE(23)] = 1096,
  [SMALL_STATE(24)] = 1131,
  [SMALL_STATE(25)] = 1174,
  [SMALL_STATE(26)] = 1209,
  [SMALL_STATE(27)] = 1244,
  [SMALL_STATE(28)] = 1279,
  [SMALL_STATE(29)] = 1314,
  [SMALL_STATE(30)] = 1349,
  [SMALL_STATE(31)] = 1384,
  [SMALL_STATE(32)] = 1419,
  [SMALL_STATE(33)] = 1454,
  [SMALL_STATE(34)] = 1515,
  [SMALL_STATE(35)] = 1567,
  [SMALL_STATE(36)] = 1619,
  [SMALL_STATE(37)] = 1671,
  [SMALL_STATE(38)] = 1723,
  [SMALL_STATE(39)] = 1772,
  [SMALL_STATE(40)] = 1821,
  [SMALL_STATE(41)] = 1870,
  [SMALL_STATE(42)] = 1917,
  [SMALL_STATE(43)] = 1966,
  [SMALL_STATE(44)] = 2015,
  [SMALL_STATE(45)] = 2064,
  [SMALL_STATE(46)] = 2110,
  [SMALL_STATE(47)] = 2156,
  [SMALL_STATE(48)] = 2202,
  [SMALL_STATE(49)] = 2248,
  [SMALL_STATE(50)] = 2294,
  [SMALL_STATE(51)] = 2340,
  [SMALL_STATE(52)] = 2386,
  [SMALL_STATE(53)] = 2432,
  [SMALL_STATE(54)] = 2478,
  [SMALL_STATE(55)] = 2524,
  [SMALL_STATE(56)] = 2570,
  [SMALL_STATE(57)] = 2616,
  [SMALL_STATE(58)] = 2662,
  [SMALL_STATE(59)] = 2708,
  [SMALL_STATE(60)] = 2754,
  [SMALL_STATE(61)] = 2807,
  [SMALL_STATE(62)] = 2857,
  [SMALL_STATE(63)] = 2907,
  [SMALL_STATE(64)] = 2957,
  [SMALL_STATE(65)] = 3007,
  [SMALL_STATE(66)] = 3057,
  [SMALL_STATE(67)] = 3107,
  [SMALL_STATE(68)] = 3157,
  [SMALL_STATE(69)] = 3207,
  [SMALL_STATE(70)] = 3257,
  [SMALL_STATE(71)] = 3307,
  [SMALL_STATE(72)] = 3357,
  [SMALL_STATE(73)] = 3407,
  [SMALL_STATE(74)] = 3457,
  [SMALL_STATE(75)] = 3507,
  [SMALL_STATE(76)] = 3557,
  [SMALL_STATE(77)] = 3607,
  [SMALL_STATE(78)] = 3657,
  [SMALL_STATE(79)] = 3707,
  [SMALL_STATE(80)] = 3757,
  [SMALL_STATE(81)] = 3807,
  [SMALL_STATE(82)] = 3857,
  [SMALL_STATE(83)] = 3907,
  [SMALL_STATE(84)] = 3957,
  [SMALL_STATE(85)] = 4007,
  [SMALL_STATE(86)] = 4057,
  [SMALL_STATE(87)] = 4107,
  [SMALL_STATE(88)] = 4157,
  [SMALL_STATE(89)] = 4207,
  [SMALL_STATE(90)] = 4257,
  [SMALL_STATE(91)] = 4298,
  [SMALL_STATE(92)] = 4339,
  [SMALL_STATE(93)] = 4371,
  [SMALL_STATE(94)] = 4399,
  [SMALL_STATE(95)] = 4430,
  [SMALL_STATE(96)] = 4464,
  [SMALL_STATE(97)] = 4495,
  [SMALL_STATE(98)] = 4528,
  [SMALL_STATE(99)] = 4561,
  [SMALL_STATE(100)] = 4589,
  [SMALL_STATE(101)] = 4613,
  [SMALL_STATE(102)] = 4637,
  [SMALL_STATE(103)] = 4663,
  [SMALL_STATE(104)] = 4681,
  [SMALL_STATE(105)] = 4707,
  [SMALL_STATE(106)] = 4725,
  [SMALL_STATE(107)] = 4755,
  [SMALL_STATE(108)] = 4773,
  [SMALL_STATE(109)] = 4794,
  [SMALL_STATE(110)] = 4819,
  [SMALL_STATE(111)] = 4836,
  [SMALL_STATE(112)] = 4857,
  [SMALL_STATE(113)] = 4874,
  [SMALL_STATE(114)] = 4891,
  [SMALL_STATE(115)] = 4908,
  [SMALL_STATE(116)] = 4927,
  [SMALL_STATE(117)] = 4944,
  [SMALL_STATE(118)] = 4960,
  [SMALL_STATE(119)] = 4974,
  [SMALL_STATE(120)] = 4990,
  [SMALL_STATE(121)] = 5004,
  [SMALL_STATE(122)] = 5021,
  [SMALL_STATE(123)] = 5044,
  [SMALL_STATE(124)] = 5059,
  [SMALL_STATE(125)] = 5074,
  [SMALL_STATE(126)] = 5089,
  [SMALL_STATE(127)] = 5104,
  [SMALL_STATE(128)] = 5119,
  [SMALL_STATE(129)] = 5134,
  [SMALL_STATE(130)] = 5149,
  [SMALL_STATE(131)] = 5164,
  [SMALL_STATE(132)] = 5179,
  [SMALL_STATE(133)] = 5194,
  [SMALL_STATE(134)] = 5217,
  [SMALL_STATE(135)] = 5232,
  [SMALL_STATE(136)] = 5247,
  [SMALL_STATE(137)] = 5264,
  [SMALL_STATE(138)] = 5281,
  [SMALL_STATE(139)] = 5293,
  [SMALL_STATE(140)] = 5305,
  [SMALL_STATE(141)] = 5317,
  [SMALL_STATE(142)] = 5329,
  [SMALL_STATE(143)] = 5341,
  [SMALL_STATE(144)] = 5354,
  [SMALL_STATE(145)] = 5365,
  [SMALL_STATE(146)] = 5376,
  [SMALL_STATE(147)] = 5389,
  [SMALL_STATE(148)] = 5400,
  [SMALL_STATE(149)] = 5413,
  [SMALL_STATE(150)] = 5424,
  [SMALL_STATE(151)] = 5435,
  [SMALL_STATE(152)] = 5446,
  [SMALL_STATE(153)] = 5459,
  [SMALL_STATE(154)] = 5472,
  [SMALL_STATE(155)] = 5482,
  [SMALL_STATE(156)] = 5492,
  [SMALL_STATE(157)] = 5502,
  [SMALL_STATE(158)] = 5512,
  [SMALL_STATE(159)] = 5520,
  [SMALL_STATE(160)] = 5530,
  [SMALL_STATE(161)] = 5540,
  [SMALL_STATE(162)] = 5548,
  [SMALL_STATE(163)] = 5556,
  [SMALL_STATE(164)] = 5566,
  [SMALL_STATE(165)] = 5576,
  [SMALL_STATE(166)] = 5586,
  [SMALL_STATE(167)] = 5596,
  [SMALL_STATE(168)] = 5606,
  [SMALL_STATE(169)] = 5616,
  [SMALL_STATE(170)] = 5624,
  [SMALL_STATE(171)] = 5632,
  [SMALL_STATE(172)] = 5642,
  [SMALL_STATE(173)] = 5652,
  [SMALL_STATE(174)] = 5659,
  [SMALL_STATE(175)] = 5666,
  [SMALL_STATE(176)] = 5673,
  [SMALL_STATE(177)] = 5680,
  [SMALL_STATE(178)] = 5687,
  [SMALL_STATE(179)] = 5694,
  [SMALL_STATE(180)] = 5701,
  [SMALL_STATE(181)] = 5708,
  [SMALL_STATE(182)] = 5715,
  [SMALL_STATE(183)] = 5722,
  [SMALL_STATE(184)] = 5729,
  [SMALL_STATE(185)] = 5736,
  [SMALL_STATE(186)] = 5743,
  [SMALL_STATE(187)] = 5750,
  [SMALL_STATE(188)] = 5757,
  [SMALL_STATE(189)] = 5764,
  [SMALL_STATE(190)] = 5771,
  [SMALL_STATE(191)] = 5778,
  [SMALL_STATE(192)] = 5785,
  [SMALL_STATE(193)] = 5792,
  [SMALL_STATE(194)] = 5799,
  [SMALL_STATE(195)] = 5806,
  [SMALL_STATE(196)] = 5813,
  [SMALL_STATE(197)] = 5820,
  [SMALL_STATE(198)] = 5827,
  [SMALL_STATE(199)] = 5834,
  [SMALL_STATE(200)] = 5841,
  [SMALL_STATE(201)] = 5848,
  [SMALL_STATE(202)] = 5855,
  [SMALL_STATE(203)] = 5862,
  [SMALL_STATE(204)] = 5869,
  [SMALL_STATE(205)] = 5876,
  [SMALL_STATE(206)] = 5883,
  [SMALL_STATE(207)] = 5890,
  [SMALL_STATE(208)] = 5897,
  [SMALL_STATE(209)] = 5904,
  [SMALL_STATE(210)] = 5911,
  [SMALL_STATE(211)] = 5918,
  [SMALL_STATE(212)] = 5925,
  [SMALL_STATE(213)] = 5932,
  [SMALL_STATE(214)] = 5939,
  [SMALL_STATE(215)] = 5946,
  [SMALL_STATE(216)] = 5953,
  [SMALL_STATE(217)] = 5960,
  [SMALL_STATE(218)] = 5967,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexp, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexp, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expr, 5, 0, 11),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexp, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary_expr, 3, 0, 7),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexp, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mem_access, 4, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mem_access, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexp, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_expr, 3, 0, 7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arr_access, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mem_access, 5, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mem_access, 5, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexp, 5, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexp, 5, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mem_access, 8, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mem_access, 8, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mem_access, 7, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mem_access, 7, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexp, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexp, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexp, 1, 0, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexp, 1, 0, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arr_access, 4, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_arr_access, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_arr_access, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access_i, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access_i, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access_i, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexp_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access_len, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mem_ofs, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__storage, 1, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, 0, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__swsize, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__swsize, 2, 0, 0),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funbody_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_funbody_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_funbody_repeat1, 2, 0, 0),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_funbody_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 9),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 9),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__peop1, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__peop1, 2, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 5),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl_list, 4, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annot_pvardecl_list, 4, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl_list, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annot_pvardecl_list, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl_list, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annot_pvardecl_list, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__svsize, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__svsize, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annot_stor_type, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annot_stor_type, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__storage, 2, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stor_type, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stor_type, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pointer, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 8, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 8, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 5, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 5, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 6, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 6, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 7, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 7, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 4, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funbody, 4, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funbody, 4, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 6),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 6),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 8),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 8),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 10),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, 0, 10),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funbody, 3, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funbody, 3, 0, 0),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_annot_pvardecl_repeat1, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_list_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_list_repeat1, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexp_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pvardecl, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lvalue, 1, 0, 0),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__size, 1, 0, 0), REDUCE(sym__vsize, 1, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access_i, 4, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [488] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prim, 2, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_conv, 1, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
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
