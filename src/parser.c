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
#define STATE_COUNT 177
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
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
  anon_sym_QMARK = 40,
  anon_sym_COLON = 41,
  anon_sym_BANG = 42,
  anon_sym_STAR = 43,
  anon_sym_SLASH = 44,
  anon_sym_PERCENT = 45,
  anon_sym_LT_LT = 46,
  anon_sym_GT_GT = 47,
  anon_sym_AMP = 48,
  anon_sym_LT_LTr = 49,
  anon_sym_GT_GTr = 50,
  anon_sym_PLUS = 51,
  anon_sym_PIPE = 52,
  anon_sym_CARET = 53,
  anon_sym_EQ_EQ = 54,
  anon_sym_BANG_EQ = 55,
  anon_sym_LT = 56,
  anon_sym_LT_EQ = 57,
  anon_sym_GT = 58,
  anon_sym_GT_EQ = 59,
  anon_sym_AMP_AMP = 60,
  anon_sym_PIPE_PIPE = 61,
  anon_sym_LBRACK = 62,
  anon_sym_RBRACK = 63,
  anon_sym_POUNDaligned = 64,
  anon_sym_POUNDunaligned = 65,
  anon_sym_DOT = 66,
  anon_sym__ = 67,
  anon_sym_EQ = 68,
  anon_sym_ArrayInit = 69,
  anon_sym_SEMI = 70,
  anon_sym_if = 71,
  anon_sym_return = 72,
  sym_identifier = 73,
  sym_comment = 74,
  sym_source_file = 75,
  sym_function_definition = 76,
  sym_call_conv = 77,
  sym__pvardecl = 78,
  sym_annot_pvardecl_list = 79,
  sym_annot_pvardecl = 80,
  sym__writable = 81,
  sym__pointer = 82,
  sym__ptr = 83,
  sym__storage = 84,
  sym__top_annotation = 85,
  sym__utype = 86,
  sym__gensize = 87,
  sym__size = 88,
  sym__vsize = 89,
  sym__signletter = 90,
  sym__swsize = 91,
  sym__svsize = 92,
  sym__ptype = 93,
  sym__stor_type = 94,
  sym__annot_stor_type = 95,
  sym_funbody = 96,
  sym_int = 97,
  sym_pexp = 98,
  sym_conditional_expr = 99,
  sym__castop = 100,
  sym__peop1 = 101,
  sym__binary_expr = 102,
  sym__cast = 103,
  sym__prim = 104,
  sym_var = 105,
  sym__mem_ofs = 106,
  sym__mem_access = 107,
  sym__unaligned = 108,
  sym__arr_access = 109,
  sym__var_arr_access = 110,
  sym__arr_access_len = 111,
  sym__arr_access_i = 112,
  sym__lvalue = 113,
  sym_instr = 114,
  sym_return_statement = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym_annot_pvardecl_list_repeat1 = 117,
  aux_sym_annot_pvardecl_repeat1 = 118,
  aux_sym_funbody_repeat1 = 119,
  aux_sym_pexp_repeat1 = 120,
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
  [anon_sym_if] = "if",
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
  [anon_sym_if] = anon_sym_if,
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
  [anon_sym_if] = {
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
  [5] = 4,
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
  [39] = 36,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 41,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 43,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 67,
  [68] = 54,
  [69] = 69,
  [70] = 65,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 80,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
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
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 106,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 111,
  [127] = 107,
  [128] = 108,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 133,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 101,
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
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 165,
  [168] = 168,
  [169] = 169,
  [170] = 163,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 168,
  [175] = 175,
  [176] = 172,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      ADVANCE_MAP(
        '!', 201,
        '#', 114,
        '%', 204,
        '&', 207,
        '(', 104,
        ')', 106,
        '*', 202,
        '+', 210,
        ',', 105,
        '-', 193,
        '.', 225,
        '/', 203,
        '1', 127,
        '2', 129,
        '3', 14,
        '4', 131,
        '6', 17,
        '8', 133,
        ':', 199,
        ';', 231,
        '<', 215,
        '=', 228,
        '>', 217,
        '?', 198,
        'A', 78,
        '[', 221,
        ']', 222,
        '^', 212,
        '_', 226,
        'b', 71,
        'c', 70,
        'e', 92,
        'f', 31,
        'g', 60,
        'i', 45,
        'm', 89,
        'p', 88,
        'r', 38,
        's', 145,
        't', 76,
        'u', 146,
        '{', 150,
        '|', 211,
        '}', 151,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 24,
        '#', 113,
        '%', 204,
        '&', 207,
        '(', 104,
        ')', 106,
        '*', 202,
        '+', 210,
        ',', 105,
        '-', 192,
        '.', 225,
        '/', 203,
        ':', 199,
        ';', 231,
        '<', 215,
        '=', 25,
        '>', 217,
        '?', 198,
        '[', 221,
        ']', 222,
        '^', 212,
        'b', 71,
        'c', 70,
        'g', 60,
        'i', 45,
        'm', 89,
        'p', 88,
        'r', 43,
        's', 87,
        'u', 13,
        '|', 211,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 200,
        '#', 114,
        '(', 104,
        '-', 192,
        '/', 8,
        '[', 221,
        'f', 158,
        't', 262,
        'u', 236,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(191);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 200,
        '#', 113,
        '(', 104,
        ')', 106,
        '-', 192,
        '/', 8,
        '[', 221,
        'f', 158,
        't', 262,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(191);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 200,
        '#', 113,
        '(', 104,
        '-', 192,
        '/', 8,
        '1', 152,
        '2', 155,
        '3', 153,
        '6', 154,
        '8', 134,
        '=', 227,
        '[', 221,
        'f', 158,
        'i', 257,
        't', 262,
        'u', 236,
        '0', 160,
        '4', 160,
        '5', 160,
        '7', 160,
        '9', 160,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(191);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 200,
        '#', 113,
        '(', 104,
        '-', 192,
        '/', 8,
        '1', 152,
        '2', 130,
        '3', 153,
        '4', 132,
        '6', 154,
        '8', 134,
        '[', 221,
        'f', 158,
        't', 262,
        '0', 160,
        '5', 160,
        '7', 160,
        '9', 160,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(191);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 200,
        '#', 113,
        '(', 104,
        '-', 192,
        '/', 8,
        '[', 221,
        'f', 158,
        't', 262,
        'u', 236,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(191);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(305);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '/', 8,
        '1', 152,
        '2', 130,
        '3', 153,
        '4', 132,
        '6', 154,
        '8', 134,
        '0', 160,
        '5', 160,
        '7', 160,
        '9', 160,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(248);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '2') ADVANCE(19);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(18);
      if (lookahead == '8') ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(137);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == '6') ADVANCE(117);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(139);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(121);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '6') ADVANCE(143);
      END_STATE();
    case 21:
      if (lookahead == '6') ADVANCE(125);
      END_STATE();
    case 22:
      if (lookahead == '8') ADVANCE(141);
      END_STATE();
    case 23:
      if (lookahead == '8') ADVANCE(123);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(214);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(213);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(110);
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'x') ADVANCE(74);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 94:
      if (eof) ADVANCE(96);
      ADVANCE_MAP(
        '!', 24,
        '%', 204,
        '&', 207,
        ')', 106,
        '*', 202,
        '+', 210,
        ',', 105,
        '-', 192,
        '/', 203,
        '1', 127,
        '2', 128,
        '3', 14,
        '4', 131,
        '6', 17,
        '8', 133,
        ':', 199,
        ';', 231,
        '<', 215,
        '=', 25,
        '>', 217,
        '?', 198,
        'A', 263,
        ']', 222,
        '^', 212,
        'e', 272,
        'f', 252,
        'i', 253,
        '{', 150,
        '|', 211,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == '{') ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_stack);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_u256);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_u256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == '6') ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '5') ADVANCE(20);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == '5') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_32);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_64);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_128);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_256);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == '2') ADVANCE(157);
      if (lookahead == '6') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == '2') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == '4') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == '5') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == '6') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == '8') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__int_literal);
      if (lookahead == 'l') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__int_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(214);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(305);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LT_LTr);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_GT_GTr);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(220);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(205);
      if (lookahead == '=') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(218);
      if (lookahead == '>') ADVANCE(206);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_POUNDaligned);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_POUNDunaligned);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(213);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_ArrayInit);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_ArrayInit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(237);
      if (lookahead == '2') ADVANCE(240);
      if (lookahead == '3') ADVANCE(238);
      if (lookahead == '6') ADVANCE(239);
      if (lookahead == '8') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(242);
      if (lookahead == '6') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '5') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(298);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(299);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
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
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 94},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
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
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 94},
  [33] = {.lex_state = 94},
  [34] = {.lex_state = 94},
  [35] = {.lex_state = 94},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 94},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 94},
  [42] = {.lex_state = 94},
  [43] = {.lex_state = 94},
  [44] = {.lex_state = 94},
  [45] = {.lex_state = 94},
  [46] = {.lex_state = 94},
  [47] = {.lex_state = 94},
  [48] = {.lex_state = 94},
  [49] = {.lex_state = 94},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
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
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 94},
  [78] = {.lex_state = 94},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 95},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 94},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 95},
  [91] = {.lex_state = 94},
  [92] = {.lex_state = 95},
  [93] = {.lex_state = 94},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 95},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 95},
  [98] = {.lex_state = 94},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 94},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 94},
  [104] = {.lex_state = 94},
  [105] = {.lex_state = 94},
  [106] = {.lex_state = 94},
  [107] = {.lex_state = 94},
  [108] = {.lex_state = 94},
  [109] = {.lex_state = 94},
  [110] = {.lex_state = 94},
  [111] = {.lex_state = 94},
  [112] = {.lex_state = 94},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 94},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 94},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 94},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 94},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(171),
    [sym_function_definition] = STATE(78),
    [sym_call_conv] = STATE(169),
    [sym__lvalue] = STATE(168),
    [sym_instr] = STATE(78),
    [aux_sym_source_file_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_inline] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_ArrayInit] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_int,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(48), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(117), 1,
      sym__size,
    STATE(148), 1,
      sym__prim,
    STATE(175), 1,
      sym__utype,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(154), 2,
      sym__swsize,
      sym__cast,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
    ACTIONS(19), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
    ACTIONS(21), 6,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
      anon_sym_64,
      anon_sym_128,
      anon_sym_256,
  [79] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOT,
    STATE(13), 1,
      sym__arr_access,
    ACTIONS(41), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [126] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(39), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(117), 1,
      sym__size,
    STATE(119), 1,
      sym__vsize,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 2,
      anon_sym_2,
      anon_sym_4,
    ACTIONS(21), 3,
      anon_sym_64,
      anon_sym_128,
      anon_sym_256,
    ACTIONS(49), 3,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
    STATE(70), 3,
      sym__swsize,
      sym__svsize,
      sym__castop,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [201] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(36), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(117), 1,
      sym__size,
    STATE(119), 1,
      sym__vsize,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 2,
      anon_sym_2,
      anon_sym_4,
    ACTIONS(21), 3,
      anon_sym_64,
      anon_sym_128,
      anon_sym_256,
    ACTIONS(49), 3,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
    STATE(65), 3,
      sym__swsize,
      sym__svsize,
      sym__castop,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [314] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_POUND,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(31), 1,
      sym__unaligned,
    STATE(33), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(71), 1,
      sym__utype,
    STATE(148), 1,
      sym__prim,
    STATE(166), 1,
      sym__arr_access_i,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(59), 2,
      anon_sym_POUNDaligned,
      anon_sym_POUNDunaligned,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
    ACTIONS(57), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
  [385] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_POUND,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(31), 1,
      sym__unaligned,
    STATE(33), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(71), 1,
      sym__utype,
    STATE(148), 1,
      sym__prim,
    STATE(162), 1,
      sym__arr_access_i,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(59), 2,
      anon_sym_POUNDaligned,
      anon_sym_POUNDunaligned,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
    ACTIONS(57), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
  [456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [561] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(73), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_if,
  [610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [645] = 3,
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
    ACTIONS(95), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [680] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(99), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_if,
  [729] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(101), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_if,
  [776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [846] = 3,
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
    ACTIONS(101), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(101), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [920] = 3,
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
      anon_sym_if,
  [955] = 3,
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
      anon_sym_if,
  [990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [1025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [1060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [1095] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(127), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_if,
  [1146] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(101), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      anon_sym_if,
  [1189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [1224] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(101), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_if,
  [1269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 7,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
      anon_sym_if,
  [1304] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(35), 1,
      sym_pexp,
    STATE(51), 1,
      sym__utype,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
    ACTIONS(139), 6,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
  [1365] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(141), 1,
      anon_sym_COLON,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      sym__arr_access_len,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1417] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(141), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      sym__arr_access_len,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1469] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_pexp_repeat1,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1521] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(141), 1,
      anon_sym_COLON,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym__arr_access_len,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1573] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    ACTIONS(155), 1,
      anon_sym_if,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1622] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1669] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(161), 1,
      anon_sym_if,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1718] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    ACTIONS(165), 1,
      anon_sym_if,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1767] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(169), 1,
      anon_sym_if,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1816] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(171), 1,
      anon_sym_SEMI,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1862] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1908] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1954] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2000] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(179), 1,
      anon_sym_COLON,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2046] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2092] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2138] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2184] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_AMP_AMP,
    ACTIONS(89), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LTr,
      anon_sym_GT_GTr,
    ACTIONS(79), 4,
      anon_sym_SLASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(83), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2230] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(34), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2283] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(32), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2333] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(16), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2383] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(12), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2433] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(49), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2483] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(37), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2533] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(15), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2583] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(20), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2633] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(45), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2683] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(19), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2733] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(27), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2783] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(29), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2833] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(47), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2883] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(26), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2933] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(41), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [2983] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(40), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3033] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(44), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3083] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(42), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3133] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(43), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3183] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(46), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3233] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(38), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3283] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym__int_literal,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_var,
    STATE(11), 1,
      sym__binary_expr,
    STATE(35), 1,
      sym_pexp,
    STATE(56), 1,
      sym__peop1,
    STATE(148), 1,
      sym__prim,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym_int,
      sym_conditional_expr,
      sym__mem_access,
      sym__var_arr_access,
  [3333] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_ptr,
    STATE(149), 1,
      sym__writable,
    ACTIONS(189), 2,
      anon_sym_const,
      anon_sym_mut,
    STATE(94), 2,
      sym__pointer,
      sym__ptr,
    ACTIONS(193), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [3361] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__int_literal,
    STATE(117), 1,
      sym__size,
    STATE(119), 1,
      sym__vsize,
    ACTIONS(47), 2,
      anon_sym_2,
      anon_sym_4,
    ACTIONS(21), 3,
      anon_sym_64,
      anon_sym_128,
      anon_sym_256,
    ACTIONS(49), 3,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
    STATE(89), 3,
      sym__swsize,
      sym__svsize,
      sym__castop,
  [3393] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_2,
    ACTIONS(197), 1,
      anon_sym_4,
    STATE(117), 1,
      sym__size,
    STATE(119), 1,
      sym__vsize,
    ACTIONS(199), 3,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
    ACTIONS(201), 3,
      anon_sym_64,
      anon_sym_128,
      anon_sym_256,
    STATE(89), 3,
      sym__swsize,
      sym__svsize,
      sym__castop,
  [3424] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      anon_sym_POUND,
    STATE(83), 1,
      sym__storage,
    STATE(124), 1,
      sym_annot_pvardecl,
    STATE(139), 1,
      sym__pvardecl,
    STATE(142), 1,
      sym__stor_type,
    ACTIONS(203), 2,
      anon_sym_inline,
      anon_sym_global,
    ACTIONS(207), 2,
      anon_sym_reg,
      anon_sym_stack,
    STATE(81), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [3458] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_POUND,
    STATE(83), 1,
      sym__storage,
    STATE(136), 1,
      sym_annot_pvardecl,
    STATE(139), 1,
      sym__pvardecl,
    STATE(142), 1,
      sym__stor_type,
    ACTIONS(203), 2,
      anon_sym_inline,
      anon_sym_global,
    ACTIONS(207), 2,
      anon_sym_reg,
      anon_sym_stack,
    STATE(81), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [3489] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      anon_sym_fn,
    ACTIONS(219), 1,
      anon_sym_ArrayInit,
    ACTIONS(222), 1,
      sym_identifier,
    STATE(168), 1,
      sym__lvalue,
    STATE(169), 1,
      sym_call_conv,
    ACTIONS(216), 2,
      anon_sym_inline,
      anon_sym_export,
    STATE(77), 3,
      sym_function_definition,
      sym_instr,
      aux_sym_source_file_repeat1,
  [3520] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_ArrayInit,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    STATE(168), 1,
      sym__lvalue,
    STATE(169), 1,
      sym_call_conv,
    ACTIONS(9), 2,
      anon_sym_inline,
      anon_sym_export,
    STATE(77), 3,
      sym_function_definition,
      sym_instr,
      aux_sym_source_file_repeat1,
  [3551] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_POUND,
    STATE(80), 1,
      sym__storage,
    ACTIONS(207), 2,
      anon_sym_reg,
      anon_sym_stack,
    ACTIONS(227), 2,
      anon_sym_inline,
      anon_sym_global,
    STATE(87), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
    STATE(91), 2,
      sym__stor_type,
      sym__annot_stor_type,
  [3577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(101), 2,
      sym__utype,
      sym__ptype,
    ACTIONS(231), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [3595] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_POUND,
    STATE(83), 1,
      sym__storage,
    STATE(138), 1,
      sym__pvardecl,
    STATE(142), 1,
      sym__stor_type,
    ACTIONS(203), 2,
      anon_sym_inline,
      anon_sym_global,
    ACTIONS(207), 2,
      anon_sym_reg,
      anon_sym_stack,
    STATE(99), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [3623] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_POUND,
    STATE(80), 1,
      sym__storage,
    ACTIONS(207), 2,
      anon_sym_reg,
      anon_sym_stack,
    ACTIONS(227), 2,
      anon_sym_inline,
      anon_sym_global,
    STATE(87), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
    STATE(93), 2,
      sym__stor_type,
      sym__annot_stor_type,
  [3649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(151), 2,
      sym__utype,
      sym__ptype,
    ACTIONS(235), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [3667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 4,
      sym__int_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(237), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACK,
  [3685] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 1,
      anon_sym_DASH_GT,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_funbody,
    ACTIONS(243), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [3708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 4,
      sym__int_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(249), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACK,
  [3725] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_POUND,
    STATE(80), 1,
      sym__storage,
    STATE(98), 1,
      sym__stor_type,
    ACTIONS(207), 2,
      anon_sym_reg,
      anon_sym_stack,
    ACTIONS(227), 2,
      anon_sym_inline,
      anon_sym_global,
    STATE(99), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
  [3750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_1,
    STATE(86), 1,
      sym__gensize,
    ACTIONS(255), 7,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
      anon_sym_16,
      anon_sym_32,
      anon_sym_64,
      anon_sym_128,
  [3769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 4,
      sym__int_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(257), 5,
      anon_sym_LPAREN,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LBRACK,
  [3786] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    STATE(109), 1,
      sym_funbody,
    ACTIONS(263), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [3809] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym_funbody,
    ACTIONS(269), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [3829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    ACTIONS(273), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [3845] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_funbody,
    ACTIONS(277), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [3865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [3879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    ACTIONS(283), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [3895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_u256,
      anon_sym_bool,
      anon_sym_int,
  [3909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
    ACTIONS(289), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [3925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(293), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [3940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_POUND,
    STATE(99), 2,
      sym__top_annotation,
      aux_sym_annot_pvardecl_repeat1,
    ACTIONS(295), 4,
      anon_sym_inline,
      anon_sym_reg,
      anon_sym_stack,
      anon_sym_global,
  [3957] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_ArrayInit,
    ACTIONS(302), 1,
      anon_sym_return,
    ACTIONS(304), 1,
      sym_identifier,
    STATE(152), 1,
      sym_return_statement,
    STATE(174), 1,
      sym__lvalue,
    STATE(113), 2,
      sym_instr,
      aux_sym_funbody_repeat1,
  [3980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(308), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [3995] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_ArrayInit,
    ACTIONS(302), 1,
      anon_sym_return,
    ACTIONS(304), 1,
      sym_identifier,
    STATE(158), 1,
      sym_return_statement,
    STATE(174), 1,
      sym__lvalue,
    STATE(100), 2,
      sym_instr,
      aux_sym_funbody_repeat1,
  [4018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 5,
      anon_sym_fn,
      anon_sym_inline,
      anon_sym_export,
      anon_sym_ArrayInit,
      sym_identifier,
  [4158] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_ArrayInit,
    ACTIONS(353), 1,
      anon_sym_return,
    ACTIONS(355), 1,
      sym_identifier,
    STATE(174), 1,
      sym__lvalue,
    STATE(113), 2,
      sym_instr,
      aux_sym_funbody_repeat1,
  [4178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(125), 1,
      sym_var,
    STATE(141), 1,
      sym__unaligned,
    ACTIONS(358), 2,
      anon_sym_POUNDaligned,
      anon_sym_POUNDunaligned,
  [4195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(129), 1,
      sym_var,
    STATE(140), 1,
      sym__unaligned,
    ACTIONS(362), 2,
      anon_sym_POUNDaligned,
      anon_sym_POUNDunaligned,
  [4212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 3,
      anon_sym_ArrayInit,
      anon_sym_return,
      sym_identifier,
  [4221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(84), 1,
      sym__signletter,
    ACTIONS(364), 2,
      anon_sym_s,
      anon_sym_u,
  [4232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(147), 1,
      sym__mem_ofs,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [4243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(88), 1,
      sym__signletter,
    ACTIONS(368), 2,
      anon_sym_s,
      anon_sym_u,
  [4254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(156), 1,
      sym__mem_ofs,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [4265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_pexp_repeat1,
  [4278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_annot_pvardecl_list_repeat1,
  [4291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_annot_pvardecl_list_repeat1,
  [4304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_annot_pvardecl_list_repeat1,
  [4317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(153), 1,
      sym__mem_ofs,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [4328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_ArrayInit,
      anon_sym_return,
      sym_identifier,
  [4337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_ArrayInit,
      anon_sym_return,
      sym_identifier,
  [4346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 3,
      anon_sym_ArrayInit,
      anon_sym_return,
      sym_identifier,
  [4355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(159), 1,
      sym__mem_ofs,
    ACTIONS(366), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [4366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_pexp_repeat1,
  [4379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_annot_pvardecl_list,
  [4389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(170), 1,
      sym_var,
  [4407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_annot_pvardecl_list,
  [4417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(163), 1,
      sym_var,
  [4427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_s,
      anon_sym_u,
  [4443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(118), 1,
      sym_var,
  [4469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(120), 1,
      sym_var,
  [4479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(132), 1,
      sym_var,
  [4489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
  [4496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
  [4503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
  [4510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
  [4517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
  [4524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
  [4531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_ptr,
  [4538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
  [4545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
  [4552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
  [4559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
  [4573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
  [4580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
  [4587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_identifier,
  [4594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
  [4601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_RBRACK,
  [4608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LBRACK,
  [4615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
  [4622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
  [4629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
  [4636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_identifier,
  [4643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SEMI,
  [4650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
  [4657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SEMI,
  [4664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_EQ,
  [4671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_fn,
  [4678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
  [4685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
  [4692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
  [4699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_fn,
  [4706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_EQ,
  [4713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [4720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 276,
  [SMALL_STATE(7)] = 314,
  [SMALL_STATE(8)] = 385,
  [SMALL_STATE(9)] = 456,
  [SMALL_STATE(10)] = 491,
  [SMALL_STATE(11)] = 526,
  [SMALL_STATE(12)] = 561,
  [SMALL_STATE(13)] = 610,
  [SMALL_STATE(14)] = 645,
  [SMALL_STATE(15)] = 680,
  [SMALL_STATE(16)] = 729,
  [SMALL_STATE(17)] = 776,
  [SMALL_STATE(18)] = 811,
  [SMALL_STATE(19)] = 846,
  [SMALL_STATE(20)] = 881,
  [SMALL_STATE(21)] = 920,
  [SMALL_STATE(22)] = 955,
  [SMALL_STATE(23)] = 990,
  [SMALL_STATE(24)] = 1025,
  [SMALL_STATE(25)] = 1060,
  [SMALL_STATE(26)] = 1095,
  [SMALL_STATE(27)] = 1146,
  [SMALL_STATE(28)] = 1189,
  [SMALL_STATE(29)] = 1224,
  [SMALL_STATE(30)] = 1269,
  [SMALL_STATE(31)] = 1304,
  [SMALL_STATE(32)] = 1365,
  [SMALL_STATE(33)] = 1417,
  [SMALL_STATE(34)] = 1469,
  [SMALL_STATE(35)] = 1521,
  [SMALL_STATE(36)] = 1573,
  [SMALL_STATE(37)] = 1622,
  [SMALL_STATE(38)] = 1669,
  [SMALL_STATE(39)] = 1718,
  [SMALL_STATE(40)] = 1767,
  [SMALL_STATE(41)] = 1816,
  [SMALL_STATE(42)] = 1862,
  [SMALL_STATE(43)] = 1908,
  [SMALL_STATE(44)] = 1954,
  [SMALL_STATE(45)] = 2000,
  [SMALL_STATE(46)] = 2046,
  [SMALL_STATE(47)] = 2092,
  [SMALL_STATE(48)] = 2138,
  [SMALL_STATE(49)] = 2184,
  [SMALL_STATE(50)] = 2230,
  [SMALL_STATE(51)] = 2283,
  [SMALL_STATE(52)] = 2333,
  [SMALL_STATE(53)] = 2383,
  [SMALL_STATE(54)] = 2433,
  [SMALL_STATE(55)] = 2483,
  [SMALL_STATE(56)] = 2533,
  [SMALL_STATE(57)] = 2583,
  [SMALL_STATE(58)] = 2633,
  [SMALL_STATE(59)] = 2683,
  [SMALL_STATE(60)] = 2733,
  [SMALL_STATE(61)] = 2783,
  [SMALL_STATE(62)] = 2833,
  [SMALL_STATE(63)] = 2883,
  [SMALL_STATE(64)] = 2933,
  [SMALL_STATE(65)] = 2983,
  [SMALL_STATE(66)] = 3033,
  [SMALL_STATE(67)] = 3083,
  [SMALL_STATE(68)] = 3133,
  [SMALL_STATE(69)] = 3183,
  [SMALL_STATE(70)] = 3233,
  [SMALL_STATE(71)] = 3283,
  [SMALL_STATE(72)] = 3333,
  [SMALL_STATE(73)] = 3361,
  [SMALL_STATE(74)] = 3393,
  [SMALL_STATE(75)] = 3424,
  [SMALL_STATE(76)] = 3458,
  [SMALL_STATE(77)] = 3489,
  [SMALL_STATE(78)] = 3520,
  [SMALL_STATE(79)] = 3551,
  [SMALL_STATE(80)] = 3577,
  [SMALL_STATE(81)] = 3595,
  [SMALL_STATE(82)] = 3623,
  [SMALL_STATE(83)] = 3649,
  [SMALL_STATE(84)] = 3667,
  [SMALL_STATE(85)] = 3685,
  [SMALL_STATE(86)] = 3708,
  [SMALL_STATE(87)] = 3725,
  [SMALL_STATE(88)] = 3750,
  [SMALL_STATE(89)] = 3769,
  [SMALL_STATE(90)] = 3786,
  [SMALL_STATE(91)] = 3809,
  [SMALL_STATE(92)] = 3829,
  [SMALL_STATE(93)] = 3845,
  [SMALL_STATE(94)] = 3865,
  [SMALL_STATE(95)] = 3879,
  [SMALL_STATE(96)] = 3895,
  [SMALL_STATE(97)] = 3909,
  [SMALL_STATE(98)] = 3925,
  [SMALL_STATE(99)] = 3940,
  [SMALL_STATE(100)] = 3957,
  [SMALL_STATE(101)] = 3980,
  [SMALL_STATE(102)] = 3995,
  [SMALL_STATE(103)] = 4018,
  [SMALL_STATE(104)] = 4032,
  [SMALL_STATE(105)] = 4046,
  [SMALL_STATE(106)] = 4060,
  [SMALL_STATE(107)] = 4074,
  [SMALL_STATE(108)] = 4088,
  [SMALL_STATE(109)] = 4102,
  [SMALL_STATE(110)] = 4116,
  [SMALL_STATE(111)] = 4130,
  [SMALL_STATE(112)] = 4144,
  [SMALL_STATE(113)] = 4158,
  [SMALL_STATE(114)] = 4178,
  [SMALL_STATE(115)] = 4195,
  [SMALL_STATE(116)] = 4212,
  [SMALL_STATE(117)] = 4221,
  [SMALL_STATE(118)] = 4232,
  [SMALL_STATE(119)] = 4243,
  [SMALL_STATE(120)] = 4254,
  [SMALL_STATE(121)] = 4265,
  [SMALL_STATE(122)] = 4278,
  [SMALL_STATE(123)] = 4291,
  [SMALL_STATE(124)] = 4304,
  [SMALL_STATE(125)] = 4317,
  [SMALL_STATE(126)] = 4328,
  [SMALL_STATE(127)] = 4337,
  [SMALL_STATE(128)] = 4346,
  [SMALL_STATE(129)] = 4355,
  [SMALL_STATE(130)] = 4366,
  [SMALL_STATE(131)] = 4379,
  [SMALL_STATE(132)] = 4389,
  [SMALL_STATE(133)] = 4397,
  [SMALL_STATE(134)] = 4407,
  [SMALL_STATE(135)] = 4417,
  [SMALL_STATE(136)] = 4427,
  [SMALL_STATE(137)] = 4435,
  [SMALL_STATE(138)] = 4443,
  [SMALL_STATE(139)] = 4451,
  [SMALL_STATE(140)] = 4459,
  [SMALL_STATE(141)] = 4469,
  [SMALL_STATE(142)] = 4479,
  [SMALL_STATE(143)] = 4489,
  [SMALL_STATE(144)] = 4496,
  [SMALL_STATE(145)] = 4503,
  [SMALL_STATE(146)] = 4510,
  [SMALL_STATE(147)] = 4517,
  [SMALL_STATE(148)] = 4524,
  [SMALL_STATE(149)] = 4531,
  [SMALL_STATE(150)] = 4538,
  [SMALL_STATE(151)] = 4545,
  [SMALL_STATE(152)] = 4552,
  [SMALL_STATE(153)] = 4559,
  [SMALL_STATE(154)] = 4566,
  [SMALL_STATE(155)] = 4573,
  [SMALL_STATE(156)] = 4580,
  [SMALL_STATE(157)] = 4587,
  [SMALL_STATE(158)] = 4594,
  [SMALL_STATE(159)] = 4601,
  [SMALL_STATE(160)] = 4608,
  [SMALL_STATE(161)] = 4615,
  [SMALL_STATE(162)] = 4622,
  [SMALL_STATE(163)] = 4629,
  [SMALL_STATE(164)] = 4636,
  [SMALL_STATE(165)] = 4643,
  [SMALL_STATE(166)] = 4650,
  [SMALL_STATE(167)] = 4657,
  [SMALL_STATE(168)] = 4664,
  [SMALL_STATE(169)] = 4671,
  [SMALL_STATE(170)] = 4678,
  [SMALL_STATE(171)] = 4685,
  [SMALL_STATE(172)] = 4692,
  [SMALL_STATE(173)] = 4699,
  [SMALL_STATE(174)] = 4706,
  [SMALL_STATE(175)] = 4713,
  [SMALL_STATE(176)] = 4720,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexp, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexp, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexp, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexp, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mem_access, 7, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mem_access, 7, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexp, 1, 0, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexp, 1, 0, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexp, 4, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_arr_access, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var_arr_access, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mem_access, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mem_access, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexp, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary_expr, 3, 0, 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mem_access, 8, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mem_access, 8, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary_expr, 3, 0, 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arr_access, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexp, 4, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mem_access, 5, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mem_access, 5, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expr, 5, 0, 11),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexp, 5, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexp, 5, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arr_access, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access_i, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access_i, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access_i, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexp_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access_len, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mem_ofs, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__storage, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__swsize, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__swsize, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, 0, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__svsize, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__svsize, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__peop1, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__peop1, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 9),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 9),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl_list, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annot_pvardecl_list, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 5),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__storage, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl_list, 4, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annot_pvardecl_list, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pointer, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl_list, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annot_pvardecl_list, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annot_stor_type, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__annot_stor_type, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_repeat1, 2, 0, 0),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stor_type, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stor_type, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funbody, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funbody, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 10),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, 0, 10),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 4, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 4, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 6, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 6, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 7, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 7, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 6),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 6),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funbody, 4, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funbody, 4, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instr, 5, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instr, 5, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 8),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 8),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_funbody_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_funbody_repeat1, 2, 0, 0),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_funbody_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexp_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_list_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annot_pvardecl_list_repeat1, 2, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pvardecl, 2, 0, 0),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__size, 1, 0, 0), REDUCE(sym__vsize, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl, 2, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annot_pvardecl, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arr_access_i, 4, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prim, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [441] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_conv, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
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
