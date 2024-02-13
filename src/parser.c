#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 250
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_Stmt_token1 = 1,
  aux_sym_Stmt_token2 = 2,
  anon_sym_COLON = 3,
  aux_sym_Stmt_token3 = 4,
  aux_sym_Stmt_token4 = 5,
  anon_sym_EQ = 6,
  aux_sym_Stmt_token5 = 7,
  aux_sym_Stmt_token6 = 8,
  aux_sym_Stmt_token7 = 9,
  aux_sym_Stmt_token8 = 10,
  aux_sym_Stmt_token9 = 11,
  aux_sym_Stmt_token10 = 12,
  anon_sym_DOT = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_COMMA = 16,
  aux_sym_MoreThanZeroElseIf_token1 = 17,
  aux_sym_OptionalElse_token1 = 18,
  aux_sym_OptionalElse_token2 = 19,
  aux_sym_OptStep_token1 = 20,
  aux_sym_OrExpr_token1 = 21,
  aux_sym_AndExpr_token1 = 22,
  anon_sym_LT_GT = 23,
  anon_sym_LT = 24,
  anon_sym_LT_EQ = 25,
  anon_sym_GT = 26,
  anon_sym_GT_EQ = 27,
  anon_sym_PLUS = 28,
  anon_sym_DASH = 29,
  anon_sym_STAR = 30,
  anon_sym_SLASH = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  sym_ID = 34,
  sym_STR = 35,
  sym_NUM = 36,
  aux_sym_CR_token1 = 37,
  aux_sym_CR_token2 = 38,
  sym_Prog = 39,
  sym_MoreThanOneStmt = 40,
  sym_Stmt = 41,
  sym_ExprStatement = 42,
  sym_Expr = 43,
  sym_Exprs = 44,
  sym_MoreThanOneExpr = 45,
  sym_CRStmtCRs = 46,
  sym_TheRest = 47,
  sym_MoreThanZeroElseIf = 48,
  sym_OptionalElse = 49,
  sym_OptStep = 50,
  sym_CondExpr = 51,
  sym_OrExpr = 52,
  sym_AndExpr = 53,
  sym_EqNeqExpr = 54,
  sym_CompExpr = 55,
  sym_AdditiveExpr = 56,
  sym_MultiplicativeExpr = 57,
  sym_UnaryExpr = 58,
  sym_Primary = 59,
  sym_Idxs = 60,
  sym_CR = 61,
  aux_sym_Prog_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_Stmt_token1] = "Stmt_token1",
  [aux_sym_Stmt_token2] = "Stmt_token2",
  [anon_sym_COLON] = ":",
  [aux_sym_Stmt_token3] = "Stmt_token3",
  [aux_sym_Stmt_token4] = "Stmt_token4",
  [anon_sym_EQ] = "=",
  [aux_sym_Stmt_token5] = "Stmt_token5",
  [aux_sym_Stmt_token6] = "Stmt_token6",
  [aux_sym_Stmt_token7] = "Stmt_token7",
  [aux_sym_Stmt_token8] = "Stmt_token8",
  [aux_sym_Stmt_token9] = "Stmt_token9",
  [aux_sym_Stmt_token10] = "Stmt_token10",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [aux_sym_MoreThanZeroElseIf_token1] = "MoreThanZeroElseIf_token1",
  [aux_sym_OptionalElse_token1] = "OptionalElse_token1",
  [aux_sym_OptionalElse_token2] = "OptionalElse_token2",
  [aux_sym_OptStep_token1] = "OptStep_token1",
  [aux_sym_OrExpr_token1] = "OrExpr_token1",
  [aux_sym_AndExpr_token1] = "AndExpr_token1",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_ID] = "ID",
  [sym_STR] = "STR",
  [sym_NUM] = "NUM",
  [aux_sym_CR_token1] = "CR_token1",
  [aux_sym_CR_token2] = "CR_token2",
  [sym_Prog] = "Prog",
  [sym_MoreThanOneStmt] = "MoreThanOneStmt",
  [sym_Stmt] = "Stmt",
  [sym_ExprStatement] = "ExprStatement",
  [sym_Expr] = "Expr",
  [sym_Exprs] = "Exprs",
  [sym_MoreThanOneExpr] = "MoreThanOneExpr",
  [sym_CRStmtCRs] = "CRStmtCRs",
  [sym_TheRest] = "TheRest",
  [sym_MoreThanZeroElseIf] = "MoreThanZeroElseIf",
  [sym_OptionalElse] = "OptionalElse",
  [sym_OptStep] = "OptStep",
  [sym_CondExpr] = "CondExpr",
  [sym_OrExpr] = "OrExpr",
  [sym_AndExpr] = "AndExpr",
  [sym_EqNeqExpr] = "EqNeqExpr",
  [sym_CompExpr] = "CompExpr",
  [sym_AdditiveExpr] = "AdditiveExpr",
  [sym_MultiplicativeExpr] = "MultiplicativeExpr",
  [sym_UnaryExpr] = "UnaryExpr",
  [sym_Primary] = "Primary",
  [sym_Idxs] = "Idxs",
  [sym_CR] = "CR",
  [aux_sym_Prog_repeat1] = "Prog_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_Stmt_token1] = aux_sym_Stmt_token1,
  [aux_sym_Stmt_token2] = aux_sym_Stmt_token2,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_Stmt_token3] = aux_sym_Stmt_token3,
  [aux_sym_Stmt_token4] = aux_sym_Stmt_token4,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_Stmt_token5] = aux_sym_Stmt_token5,
  [aux_sym_Stmt_token6] = aux_sym_Stmt_token6,
  [aux_sym_Stmt_token7] = aux_sym_Stmt_token7,
  [aux_sym_Stmt_token8] = aux_sym_Stmt_token8,
  [aux_sym_Stmt_token9] = aux_sym_Stmt_token9,
  [aux_sym_Stmt_token10] = aux_sym_Stmt_token10,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_MoreThanZeroElseIf_token1] = aux_sym_MoreThanZeroElseIf_token1,
  [aux_sym_OptionalElse_token1] = aux_sym_OptionalElse_token1,
  [aux_sym_OptionalElse_token2] = aux_sym_OptionalElse_token2,
  [aux_sym_OptStep_token1] = aux_sym_OptStep_token1,
  [aux_sym_OrExpr_token1] = aux_sym_OrExpr_token1,
  [aux_sym_AndExpr_token1] = aux_sym_AndExpr_token1,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_ID] = sym_ID,
  [sym_STR] = sym_STR,
  [sym_NUM] = sym_NUM,
  [aux_sym_CR_token1] = aux_sym_CR_token1,
  [aux_sym_CR_token2] = aux_sym_CR_token2,
  [sym_Prog] = sym_Prog,
  [sym_MoreThanOneStmt] = sym_MoreThanOneStmt,
  [sym_Stmt] = sym_Stmt,
  [sym_ExprStatement] = sym_ExprStatement,
  [sym_Expr] = sym_Expr,
  [sym_Exprs] = sym_Exprs,
  [sym_MoreThanOneExpr] = sym_MoreThanOneExpr,
  [sym_CRStmtCRs] = sym_CRStmtCRs,
  [sym_TheRest] = sym_TheRest,
  [sym_MoreThanZeroElseIf] = sym_MoreThanZeroElseIf,
  [sym_OptionalElse] = sym_OptionalElse,
  [sym_OptStep] = sym_OptStep,
  [sym_CondExpr] = sym_CondExpr,
  [sym_OrExpr] = sym_OrExpr,
  [sym_AndExpr] = sym_AndExpr,
  [sym_EqNeqExpr] = sym_EqNeqExpr,
  [sym_CompExpr] = sym_CompExpr,
  [sym_AdditiveExpr] = sym_AdditiveExpr,
  [sym_MultiplicativeExpr] = sym_MultiplicativeExpr,
  [sym_UnaryExpr] = sym_UnaryExpr,
  [sym_Primary] = sym_Primary,
  [sym_Idxs] = sym_Idxs,
  [sym_CR] = sym_CR,
  [aux_sym_Prog_repeat1] = aux_sym_Prog_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_Stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_Stmt_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Stmt_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_Stmt_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Stmt_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Stmt_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Stmt_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Stmt_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Stmt_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_MoreThanZeroElseIf_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_OptionalElse_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_OptionalElse_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_OptStep_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_OrExpr_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_AndExpr_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_GT] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_ID] = {
    .visible = true,
    .named = true,
  },
  [sym_STR] = {
    .visible = true,
    .named = true,
  },
  [sym_NUM] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_CR_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_CR_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_Prog] = {
    .visible = true,
    .named = true,
  },
  [sym_MoreThanOneStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_Stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_ExprStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_Expr] = {
    .visible = true,
    .named = true,
  },
  [sym_Exprs] = {
    .visible = true,
    .named = true,
  },
  [sym_MoreThanOneExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_CRStmtCRs] = {
    .visible = true,
    .named = true,
  },
  [sym_TheRest] = {
    .visible = true,
    .named = true,
  },
  [sym_MoreThanZeroElseIf] = {
    .visible = true,
    .named = true,
  },
  [sym_OptionalElse] = {
    .visible = true,
    .named = true,
  },
  [sym_OptStep] = {
    .visible = true,
    .named = true,
  },
  [sym_CondExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_OrExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_AndExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_EqNeqExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_CompExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_AdditiveExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_MultiplicativeExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_UnaryExpr] = {
    .visible = true,
    .named = true,
  },
  [sym_Primary] = {
    .visible = true,
    .named = true,
  },
  [sym_Idxs] = {
    .visible = true,
    .named = true,
  },
  [sym_CR] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_Prog_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [16] = 2,
  [17] = 17,
  [18] = 3,
  [19] = 2,
  [20] = 20,
  [21] = 21,
  [22] = 5,
  [23] = 4,
  [24] = 8,
  [25] = 7,
  [26] = 15,
  [27] = 3,
  [28] = 17,
  [29] = 14,
  [30] = 6,
  [31] = 2,
  [32] = 10,
  [33] = 33,
  [34] = 11,
  [35] = 12,
  [36] = 9,
  [37] = 13,
  [38] = 38,
  [39] = 39,
  [40] = 3,
  [41] = 4,
  [42] = 39,
  [43] = 43,
  [44] = 44,
  [45] = 39,
  [46] = 20,
  [47] = 4,
  [48] = 7,
  [49] = 8,
  [50] = 50,
  [51] = 9,
  [52] = 5,
  [53] = 17,
  [54] = 6,
  [55] = 10,
  [56] = 11,
  [57] = 21,
  [58] = 12,
  [59] = 14,
  [60] = 13,
  [61] = 15,
  [62] = 14,
  [63] = 6,
  [64] = 64,
  [65] = 13,
  [66] = 66,
  [67] = 67,
  [68] = 66,
  [69] = 10,
  [70] = 70,
  [71] = 5,
  [72] = 8,
  [73] = 15,
  [74] = 7,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 64,
  [79] = 9,
  [80] = 80,
  [81] = 81,
  [82] = 67,
  [83] = 77,
  [84] = 66,
  [85] = 85,
  [86] = 76,
  [87] = 44,
  [88] = 88,
  [89] = 67,
  [90] = 66,
  [91] = 11,
  [92] = 17,
  [93] = 12,
  [94] = 38,
  [95] = 67,
  [96] = 20,
  [97] = 21,
  [98] = 98,
  [99] = 99,
  [100] = 20,
  [101] = 21,
  [102] = 102,
  [103] = 38,
  [104] = 104,
  [105] = 102,
  [106] = 102,
  [107] = 102,
  [108] = 44,
  [109] = 109,
  [110] = 110,
  [111] = 110,
  [112] = 110,
  [113] = 110,
  [114] = 98,
  [115] = 115,
  [116] = 38,
  [117] = 117,
  [118] = 118,
  [119] = 44,
  [120] = 99,
  [121] = 104,
  [122] = 104,
  [123] = 123,
  [124] = 123,
  [125] = 104,
  [126] = 123,
  [127] = 123,
  [128] = 104,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 139,
  [144] = 139,
  [145] = 131,
  [146] = 115,
  [147] = 147,
  [148] = 131,
  [149] = 117,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 139,
  [155] = 155,
  [156] = 139,
  [157] = 131,
  [158] = 158,
  [159] = 99,
  [160] = 98,
  [161] = 158,
  [162] = 129,
  [163] = 158,
  [164] = 158,
  [165] = 99,
  [166] = 133,
  [167] = 133,
  [168] = 155,
  [169] = 169,
  [170] = 170,
  [171] = 170,
  [172] = 133,
  [173] = 98,
  [174] = 170,
  [175] = 170,
  [176] = 133,
  [177] = 177,
  [178] = 117,
  [179] = 179,
  [180] = 133,
  [181] = 115,
  [182] = 177,
  [183] = 183,
  [184] = 129,
  [185] = 185,
  [186] = 115,
  [187] = 187,
  [188] = 187,
  [189] = 117,
  [190] = 190,
  [191] = 187,
  [192] = 192,
  [193] = 187,
  [194] = 194,
  [195] = 155,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 129,
  [202] = 202,
  [203] = 202,
  [204] = 155,
  [205] = 202,
  [206] = 202,
  [207] = 202,
  [208] = 208,
  [209] = 209,
  [210] = 133,
  [211] = 208,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 217,
  [225] = 218,
  [226] = 219,
  [227] = 221,
  [228] = 223,
  [229] = 223,
  [230] = 230,
  [231] = 218,
  [232] = 219,
  [233] = 221,
  [234] = 234,
  [235] = 223,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 219,
  [241] = 241,
  [242] = 218,
  [243] = 221,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 238,
};

static inline bool anon_sym_LPAREN_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool aux_sym_CR_token2_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? c == '\t'
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8203)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(41);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (aux_sym_CR_token2_character_set_1(lookahead)) SKIP(1)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (aux_sym_CR_token2_character_set_1(lookahead)) SKIP(1)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      if (aux_sym_CR_token2_character_set_1(lookahead)) SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      if (aux_sym_CR_token2_character_set_1(lookahead)) SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (aux_sym_CR_token2_character_set_1(lookahead)) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (aux_sym_CR_token2_character_set_1(lookahead)) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (aux_sym_CR_token2_character_set_1(lookahead)) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (aux_sym_CR_token2_character_set_1(lookahead)) SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(9)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(148);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 14:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 16:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 27:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 29:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 30:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(28);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(22);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 33:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 38:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 40:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 46:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 47:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 51:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 55:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (aux_sym_CR_token2_character_set_1(lookahead)) SKIP(55)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 56:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (aux_sym_CR_token2_character_set_1(lookahead)) SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 57:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (aux_sym_CR_token2_character_set_1(lookahead)) SKIP(57)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(58)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_Stmt_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_Stmt_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_Stmt_token2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_Stmt_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_Stmt_token3);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_Stmt_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_Stmt_token4);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_Stmt_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_Stmt_token5);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_Stmt_token6);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_Stmt_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_Stmt_token7);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_Stmt_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_Stmt_token8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_Stmt_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_Stmt_token9);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_Stmt_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_Stmt_token10);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_MoreThanZeroElseIf_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_MoreThanZeroElseIf_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_OptionalElse_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_OptionalElse_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_OptionalElse_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_OptionalElse_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_OptStep_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_OrExpr_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_OrExpr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_AndExpr_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_AndExpr_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ID);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_STR);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_NUM);
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_NUM);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_CR_token1);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_CR_token1);
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_CR_token1);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_CR_token1);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_CR_token2);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_CR_token2);
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_CR_token2);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_CR_token2);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 55},
  [3] = {.lex_state = 55},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 55},
  [6] = {.lex_state = 55},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 55},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 55},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 55},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 55},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 55},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 55},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 55},
  [99] = {.lex_state = 55},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 58},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 55},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 55},
  [118] = {.lex_state = 58},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 23},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 26},
  [129] = {.lex_state = 56},
  [130] = {.lex_state = 57},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 57},
  [133] = {.lex_state = 21},
  [134] = {.lex_state = 57},
  [135] = {.lex_state = 57},
  [136] = {.lex_state = 57},
  [137] = {.lex_state = 57},
  [138] = {.lex_state = 57},
  [139] = {.lex_state = 58},
  [140] = {.lex_state = 57},
  [141] = {.lex_state = 57},
  [142] = {.lex_state = 57},
  [143] = {.lex_state = 58},
  [144] = {.lex_state = 58},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 57},
  [148] = {.lex_state = 11},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 57},
  [151] = {.lex_state = 57},
  [152] = {.lex_state = 58},
  [153] = {.lex_state = 57},
  [154] = {.lex_state = 58},
  [155] = {.lex_state = 57},
  [156] = {.lex_state = 58},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 24},
  [167] = {.lex_state = 26},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 58},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 25},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 23},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 58},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 55},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 55},
  [197] = {.lex_state = 55},
  [198] = {.lex_state = 55},
  [199] = {.lex_state = 55},
  [200] = {.lex_state = 55},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 55},
  [203] = {.lex_state = 55},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 55},
  [206] = {.lex_state = 55},
  [207] = {.lex_state = 55},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 55},
  [210] = {.lex_state = 55},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 55},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 11},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 11},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 11},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_Stmt_token1] = ACTIONS(1),
    [aux_sym_Stmt_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_Stmt_token3] = ACTIONS(1),
    [aux_sym_Stmt_token4] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_Stmt_token5] = ACTIONS(1),
    [aux_sym_Stmt_token6] = ACTIONS(1),
    [aux_sym_Stmt_token7] = ACTIONS(1),
    [aux_sym_Stmt_token8] = ACTIONS(1),
    [aux_sym_Stmt_token9] = ACTIONS(1),
    [aux_sym_Stmt_token10] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_MoreThanZeroElseIf_token1] = ACTIONS(1),
    [aux_sym_OptionalElse_token1] = ACTIONS(1),
    [aux_sym_OptionalElse_token2] = ACTIONS(1),
    [aux_sym_OptStep_token1] = ACTIONS(1),
    [aux_sym_OrExpr_token1] = ACTIONS(1),
    [aux_sym_AndExpr_token1] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_STR] = ACTIONS(1),
    [sym_NUM] = ACTIONS(1),
  },
  [1] = {
    [sym_Prog] = STATE(214),
    [sym_MoreThanOneStmt] = STATE(118),
    [sym_Stmt] = STATE(130),
    [sym_ExprStatement] = STATE(147),
    [aux_sym_Prog_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_Stmt_token1] = ACTIONS(5),
    [aux_sym_Stmt_token3] = ACTIONS(7),
    [aux_sym_Stmt_token4] = ACTIONS(9),
    [aux_sym_Stmt_token7] = ACTIONS(11),
    [aux_sym_Stmt_token9] = ACTIONS(13),
    [sym_ID] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_Idxs,
    ACTIONS(19), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [35] = 4,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_Idxs,
    ACTIONS(27), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [67] = 3,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [96] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [122] = 2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [148] = 2,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [174] = 2,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [200] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(45), 18,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [228] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [254] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [280] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [306] = 2,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [332] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [358] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 18,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [386] = 5,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_Idxs,
    ACTIONS(19), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(17), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [418] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 20,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [444] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_Idxs,
    ACTIONS(27), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(25), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [473] = 5,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      sym_Idxs,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [503] = 3,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 16,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [529] = 3,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(89), 16,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [555] = 2,
    ACTIONS(37), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(35), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [578] = 2,
    ACTIONS(31), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(29), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [601] = 2,
    ACTIONS(19), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(17), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [624] = 2,
    ACTIONS(19), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(17), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [647] = 3,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(65), 11,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_STR,
      sym_NUM,
  [672] = 4,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      sym_Idxs,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [699] = 2,
    ACTIONS(75), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(73), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [722] = 2,
    ACTIONS(63), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(61), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [745] = 2,
    ACTIONS(41), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(39), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [768] = 4,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(93), 1,
      sym_Idxs,
    ACTIONS(19), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [795] = 2,
    ACTIONS(51), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(49), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [818] = 18,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(22), 1,
      sym_UnaryExpr,
    STATE(32), 1,
      sym_Primary,
    STATE(33), 1,
      sym_Expr,
    STATE(36), 1,
      sym_MultiplicativeExpr,
    STATE(46), 1,
      sym_AdditiveExpr,
    STATE(94), 1,
      sym_CompExpr,
    STATE(114), 1,
      sym_EqNeqExpr,
    STATE(149), 1,
      sym_AndExpr,
    STATE(162), 1,
      sym_OrExpr,
    STATE(168), 1,
      sym_CondExpr,
    STATE(236), 1,
      sym_MoreThanOneExpr,
  [873] = 2,
    ACTIONS(55), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(53), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [896] = 2,
    ACTIONS(59), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(57), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [919] = 3,
    ACTIONS(91), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(45), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(43), 11,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_STR,
      sym_NUM,
  [944] = 2,
    ACTIONS(31), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(29), 13,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_STR,
      sym_NUM,
  [967] = 3,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 4,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(113), 12,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [991] = 17,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(22), 1,
      sym_UnaryExpr,
    STATE(32), 1,
      sym_Primary,
    STATE(33), 1,
      sym_Expr,
    STATE(36), 1,
      sym_MultiplicativeExpr,
    STATE(46), 1,
      sym_AdditiveExpr,
    STATE(94), 1,
      sym_CompExpr,
    STATE(114), 1,
      sym_EqNeqExpr,
    STATE(149), 1,
      sym_AndExpr,
    STATE(162), 1,
      sym_OrExpr,
    STATE(168), 1,
      sym_CondExpr,
    STATE(213), 1,
      sym_MoreThanOneExpr,
    STATE(223), 1,
      sym_Exprs,
  [1043] = 3,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      sym_Idxs,
    ACTIONS(27), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [1067] = 3,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [1091] = 17,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(22), 1,
      sym_UnaryExpr,
    STATE(32), 1,
      sym_Primary,
    STATE(33), 1,
      sym_Expr,
    STATE(36), 1,
      sym_MultiplicativeExpr,
    STATE(46), 1,
      sym_AdditiveExpr,
    STATE(94), 1,
      sym_CompExpr,
    STATE(114), 1,
      sym_EqNeqExpr,
    STATE(149), 1,
      sym_AndExpr,
    STATE(162), 1,
      sym_OrExpr,
    STATE(168), 1,
      sym_CondExpr,
    STATE(213), 1,
      sym_MoreThanOneExpr,
    STATE(228), 1,
      sym_Exprs,
  [1143] = 17,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(22), 1,
      sym_UnaryExpr,
    STATE(32), 1,
      sym_Primary,
    STATE(33), 1,
      sym_Expr,
    STATE(36), 1,
      sym_MultiplicativeExpr,
    STATE(46), 1,
      sym_AdditiveExpr,
    STATE(94), 1,
      sym_CompExpr,
    STATE(114), 1,
      sym_EqNeqExpr,
    STATE(149), 1,
      sym_AndExpr,
    STATE(162), 1,
      sym_OrExpr,
    STATE(168), 1,
      sym_CondExpr,
    STATE(213), 1,
      sym_MoreThanOneExpr,
    STATE(222), 1,
      sym_Exprs,
  [1195] = 3,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 4,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(121), 12,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      anon_sym_EQ,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [1219] = 17,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(22), 1,
      sym_UnaryExpr,
    STATE(32), 1,
      sym_Primary,
    STATE(33), 1,
      sym_Expr,
    STATE(36), 1,
      sym_MultiplicativeExpr,
    STATE(46), 1,
      sym_AdditiveExpr,
    STATE(94), 1,
      sym_CompExpr,
    STATE(114), 1,
      sym_EqNeqExpr,
    STATE(149), 1,
      sym_AndExpr,
    STATE(162), 1,
      sym_OrExpr,
    STATE(168), 1,
      sym_CondExpr,
    STATE(213), 1,
      sym_MoreThanOneExpr,
    STATE(229), 1,
      sym_Exprs,
  [1271] = 4,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(83), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(81), 9,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_STR,
      sym_NUM,
  [1296] = 2,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [1317] = 2,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [1338] = 2,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [1359] = 16,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(22), 1,
      sym_UnaryExpr,
    STATE(32), 1,
      sym_Primary,
    STATE(33), 1,
      sym_Expr,
    STATE(36), 1,
      sym_MultiplicativeExpr,
    STATE(46), 1,
      sym_AdditiveExpr,
    STATE(94), 1,
      sym_CompExpr,
    STATE(114), 1,
      sym_EqNeqExpr,
    STATE(149), 1,
      sym_AndExpr,
    STATE(162), 1,
      sym_OrExpr,
    STATE(168), 1,
      sym_CondExpr,
    STATE(237), 1,
      sym_MoreThanOneExpr,
  [1408] = 3,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 12,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [1431] = 2,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [1452] = 2,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [1473] = 2,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [1494] = 2,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [1515] = 2,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [1536] = 4,
    ACTIONS(123), 1,
      anon_sym_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH,
    ACTIONS(89), 5,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT,
      anon_sym_GT,
      sym_ID,
    ACTIONS(87), 9,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_STR,
      sym_NUM,
  [1561] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [1582] = 2,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [1603] = 2,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 14,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RBRACK,
  [1624] = 3,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(65), 12,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [1647] = 1,
    ACTIONS(63), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [1665] = 1,
    ACTIONS(41), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [1683] = 15,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      sym_STR,
    ACTIONS(143), 1,
      sym_NUM,
    STATE(5), 1,
      sym_UnaryExpr,
    STATE(9), 1,
      sym_MultiplicativeExpr,
    STATE(10), 1,
      sym_Primary,
    STATE(20), 1,
      sym_AdditiveExpr,
    STATE(38), 1,
      sym_CompExpr,
    STATE(98), 1,
      sym_EqNeqExpr,
    STATE(117), 1,
      sym_AndExpr,
    STATE(129), 1,
      sym_OrExpr,
    STATE(132), 1,
      sym_Expr,
    STATE(155), 1,
      sym_CondExpr,
  [1729] = 1,
    ACTIONS(31), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [1747] = 15,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(160), 1,
      sym_EqNeqExpr,
    STATE(178), 1,
      sym_AndExpr,
    STATE(184), 1,
      sym_OrExpr,
    STATE(195), 1,
      sym_CondExpr,
    STATE(242), 1,
      sym_Expr,
  [1793] = 15,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(160), 1,
      sym_EqNeqExpr,
    STATE(178), 1,
      sym_AndExpr,
    STATE(184), 1,
      sym_OrExpr,
    STATE(195), 1,
      sym_CondExpr,
    STATE(221), 1,
      sym_Expr,
  [1839] = 15,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(160), 1,
      sym_EqNeqExpr,
    STATE(178), 1,
      sym_AndExpr,
    STATE(184), 1,
      sym_OrExpr,
    STATE(195), 1,
      sym_CondExpr,
    STATE(218), 1,
      sym_Expr,
  [1885] = 1,
    ACTIONS(51), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [1903] = 15,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(160), 1,
      sym_EqNeqExpr,
    STATE(178), 1,
      sym_AndExpr,
    STATE(184), 1,
      sym_OrExpr,
    STATE(195), 1,
      sym_CondExpr,
    STATE(248), 1,
      sym_Expr,
  [1949] = 1,
    ACTIONS(37), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [1967] = 1,
    ACTIONS(19), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [1985] = 2,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 13,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [2005] = 1,
    ACTIONS(19), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [2023] = 15,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(69), 1,
      sym_Primary,
    STATE(71), 1,
      sym_UnaryExpr,
    STATE(79), 1,
      sym_MultiplicativeExpr,
    STATE(100), 1,
      sym_AdditiveExpr,
    STATE(116), 1,
      sym_CompExpr,
    STATE(155), 1,
      sym_CondExpr,
    STATE(173), 1,
      sym_EqNeqExpr,
    STATE(189), 1,
      sym_AndExpr,
    STATE(196), 1,
      sym_Expr,
    STATE(201), 1,
      sym_OrExpr,
  [2069] = 15,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      sym_STR,
    ACTIONS(143), 1,
      sym_NUM,
    STATE(5), 1,
      sym_UnaryExpr,
    STATE(9), 1,
      sym_MultiplicativeExpr,
    STATE(10), 1,
      sym_Primary,
    STATE(20), 1,
      sym_AdditiveExpr,
    STATE(38), 1,
      sym_CompExpr,
    STATE(98), 1,
      sym_EqNeqExpr,
    STATE(117), 1,
      sym_AndExpr,
    STATE(129), 1,
      sym_OrExpr,
    STATE(140), 1,
      sym_Expr,
    STATE(155), 1,
      sym_CondExpr,
  [2115] = 15,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      sym_STR,
    ACTIONS(143), 1,
      sym_NUM,
    STATE(5), 1,
      sym_UnaryExpr,
    STATE(9), 1,
      sym_MultiplicativeExpr,
    STATE(10), 1,
      sym_Primary,
    STATE(20), 1,
      sym_AdditiveExpr,
    STATE(38), 1,
      sym_CompExpr,
    STATE(98), 1,
      sym_EqNeqExpr,
    STATE(117), 1,
      sym_AndExpr,
    STATE(129), 1,
      sym_OrExpr,
    STATE(142), 1,
      sym_Expr,
    STATE(155), 1,
      sym_CondExpr,
  [2161] = 15,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(69), 1,
      sym_Primary,
    STATE(71), 1,
      sym_UnaryExpr,
    STATE(79), 1,
      sym_MultiplicativeExpr,
    STATE(100), 1,
      sym_AdditiveExpr,
    STATE(116), 1,
      sym_CompExpr,
    STATE(132), 1,
      sym_Expr,
    STATE(155), 1,
      sym_CondExpr,
    STATE(173), 1,
      sym_EqNeqExpr,
    STATE(189), 1,
      sym_AndExpr,
    STATE(201), 1,
      sym_OrExpr,
  [2207] = 2,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(45), 13,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [2227] = 15,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(69), 1,
      sym_Primary,
    STATE(71), 1,
      sym_UnaryExpr,
    STATE(79), 1,
      sym_MultiplicativeExpr,
    STATE(100), 1,
      sym_AdditiveExpr,
    STATE(116), 1,
      sym_CompExpr,
    STATE(173), 1,
      sym_EqNeqExpr,
    STATE(189), 1,
      sym_AndExpr,
    STATE(192), 1,
      sym_Expr,
    STATE(201), 1,
      sym_OrExpr,
    STATE(204), 1,
      sym_CondExpr,
  [2273] = 15,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(160), 1,
      sym_EqNeqExpr,
    STATE(178), 1,
      sym_AndExpr,
    STATE(184), 1,
      sym_OrExpr,
    STATE(195), 1,
      sym_CondExpr,
    STATE(230), 1,
      sym_Expr,
  [2319] = 15,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(160), 1,
      sym_EqNeqExpr,
    STATE(178), 1,
      sym_AndExpr,
    STATE(184), 1,
      sym_OrExpr,
    STATE(195), 1,
      sym_CondExpr,
    STATE(227), 1,
      sym_Expr,
  [2365] = 15,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(69), 1,
      sym_Primary,
    STATE(71), 1,
      sym_UnaryExpr,
    STATE(79), 1,
      sym_MultiplicativeExpr,
    STATE(100), 1,
      sym_AdditiveExpr,
    STATE(116), 1,
      sym_CompExpr,
    STATE(142), 1,
      sym_Expr,
    STATE(155), 1,
      sym_CondExpr,
    STATE(173), 1,
      sym_EqNeqExpr,
    STATE(189), 1,
      sym_AndExpr,
    STATE(201), 1,
      sym_OrExpr,
  [2411] = 15,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(160), 1,
      sym_EqNeqExpr,
    STATE(178), 1,
      sym_AndExpr,
    STATE(184), 1,
      sym_OrExpr,
    STATE(195), 1,
      sym_CondExpr,
    STATE(231), 1,
      sym_Expr,
  [2457] = 15,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(69), 1,
      sym_Primary,
    STATE(71), 1,
      sym_UnaryExpr,
    STATE(79), 1,
      sym_MultiplicativeExpr,
    STATE(100), 1,
      sym_AdditiveExpr,
    STATE(116), 1,
      sym_CompExpr,
    STATE(155), 1,
      sym_CondExpr,
    STATE(173), 1,
      sym_EqNeqExpr,
    STATE(189), 1,
      sym_AndExpr,
    STATE(201), 1,
      sym_OrExpr,
    STATE(209), 1,
      sym_Expr,
  [2503] = 15,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(69), 1,
      sym_Primary,
    STATE(71), 1,
      sym_UnaryExpr,
    STATE(79), 1,
      sym_MultiplicativeExpr,
    STATE(100), 1,
      sym_AdditiveExpr,
    STATE(116), 1,
      sym_CompExpr,
    STATE(140), 1,
      sym_Expr,
    STATE(155), 1,
      sym_CondExpr,
    STATE(173), 1,
      sym_EqNeqExpr,
    STATE(189), 1,
      sym_AndExpr,
    STATE(201), 1,
      sym_OrExpr,
  [2549] = 4,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(121), 3,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      sym_ID,
    ACTIONS(119), 8,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_DASH,
      sym_STR,
      sym_NUM,
  [2573] = 15,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(160), 1,
      sym_EqNeqExpr,
    STATE(178), 1,
      sym_AndExpr,
    STATE(184), 1,
      sym_OrExpr,
    STATE(195), 1,
      sym_CondExpr,
    STATE(215), 1,
      sym_Expr,
  [2619] = 15,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(160), 1,
      sym_EqNeqExpr,
    STATE(178), 1,
      sym_AndExpr,
    STATE(184), 1,
      sym_OrExpr,
    STATE(195), 1,
      sym_CondExpr,
    STATE(233), 1,
      sym_Expr,
  [2665] = 15,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(160), 1,
      sym_EqNeqExpr,
    STATE(178), 1,
      sym_AndExpr,
    STATE(184), 1,
      sym_OrExpr,
    STATE(195), 1,
      sym_CondExpr,
    STATE(225), 1,
      sym_Expr,
  [2711] = 1,
    ACTIONS(55), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [2729] = 1,
    ACTIONS(75), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [2747] = 1,
    ACTIONS(59), 15,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [2765] = 4,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(113), 3,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      sym_ID,
    ACTIONS(111), 8,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_GT,
      anon_sym_DASH,
      sym_STR,
      sym_NUM,
  [2789] = 15,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(160), 1,
      sym_EqNeqExpr,
    STATE(178), 1,
      sym_AndExpr,
    STATE(184), 1,
      sym_OrExpr,
    STATE(195), 1,
      sym_CondExpr,
    STATE(243), 1,
      sym_Expr,
  [2835] = 3,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(81), 10,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
  [2856] = 3,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 10,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
  [2877] = 3,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(175), 10,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [2897] = 3,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(181), 10,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [2917] = 2,
    ACTIONS(183), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 11,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [2935] = 2,
    ACTIONS(183), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(89), 11,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [2953] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(22), 1,
      sym_UnaryExpr,
    STATE(32), 1,
      sym_Primary,
    STATE(36), 1,
      sym_MultiplicativeExpr,
    STATE(46), 1,
      sym_AdditiveExpr,
    STATE(94), 1,
      sym_CompExpr,
    STATE(114), 1,
      sym_EqNeqExpr,
    STATE(146), 1,
      sym_AndExpr,
  [2990] = 3,
    ACTIONS(185), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(111), 8,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_RBRACK,
  [3009] = 10,
    ACTIONS(5), 1,
      aux_sym_Stmt_token1,
    ACTIONS(7), 1,
      aux_sym_Stmt_token3,
    ACTIONS(9), 1,
      aux_sym_Stmt_token4,
    ACTIONS(11), 1,
      aux_sym_Stmt_token7,
    ACTIONS(13), 1,
      aux_sym_Stmt_token9,
    ACTIONS(191), 1,
      sym_ID,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(183), 1,
      sym_TheRest,
    STATE(205), 1,
      sym_Stmt,
    ACTIONS(189), 3,
      aux_sym_MoreThanZeroElseIf_token1,
      aux_sym_OptionalElse_token1,
      aux_sym_OptionalElse_token2,
  [3042] = 12,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(160), 1,
      sym_EqNeqExpr,
    STATE(181), 1,
      sym_AndExpr,
  [3079] = 12,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      sym_STR,
    ACTIONS(143), 1,
      sym_NUM,
    STATE(5), 1,
      sym_UnaryExpr,
    STATE(9), 1,
      sym_MultiplicativeExpr,
    STATE(10), 1,
      sym_Primary,
    STATE(20), 1,
      sym_AdditiveExpr,
    STATE(38), 1,
      sym_CompExpr,
    STATE(98), 1,
      sym_EqNeqExpr,
    STATE(115), 1,
      sym_AndExpr,
  [3116] = 12,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(69), 1,
      sym_Primary,
    STATE(71), 1,
      sym_UnaryExpr,
    STATE(79), 1,
      sym_MultiplicativeExpr,
    STATE(100), 1,
      sym_AdditiveExpr,
    STATE(116), 1,
      sym_CompExpr,
    STATE(173), 1,
      sym_EqNeqExpr,
    STATE(186), 1,
      sym_AndExpr,
  [3153] = 3,
    ACTIONS(185), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(119), 8,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_RBRACK,
  [3172] = 10,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      aux_sym_Stmt_token1,
    ACTIONS(198), 1,
      aux_sym_Stmt_token3,
    ACTIONS(201), 1,
      aux_sym_Stmt_token4,
    ACTIONS(204), 1,
      aux_sym_Stmt_token7,
    ACTIONS(207), 1,
      aux_sym_Stmt_token9,
    ACTIONS(210), 1,
      sym_ID,
    STATE(130), 1,
      sym_Stmt,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(109), 2,
      sym_MoreThanOneStmt,
      aux_sym_Prog_repeat1,
  [3204] = 11,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(69), 1,
      sym_Primary,
    STATE(71), 1,
      sym_UnaryExpr,
    STATE(79), 1,
      sym_MultiplicativeExpr,
    STATE(100), 1,
      sym_AdditiveExpr,
    STATE(116), 1,
      sym_CompExpr,
    STATE(165), 1,
      sym_EqNeqExpr,
  [3238] = 11,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(22), 1,
      sym_UnaryExpr,
    STATE(32), 1,
      sym_Primary,
    STATE(36), 1,
      sym_MultiplicativeExpr,
    STATE(46), 1,
      sym_AdditiveExpr,
    STATE(94), 1,
      sym_CompExpr,
    STATE(120), 1,
      sym_EqNeqExpr,
  [3272] = 11,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      sym_STR,
    ACTIONS(143), 1,
      sym_NUM,
    STATE(5), 1,
      sym_UnaryExpr,
    STATE(9), 1,
      sym_MultiplicativeExpr,
    STATE(10), 1,
      sym_Primary,
    STATE(20), 1,
      sym_AdditiveExpr,
    STATE(38), 1,
      sym_CompExpr,
    STATE(99), 1,
      sym_EqNeqExpr,
  [3306] = 11,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(103), 1,
      sym_CompExpr,
    STATE(159), 1,
      sym_EqNeqExpr,
  [3340] = 3,
    ACTIONS(213), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(175), 3,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      sym_ID,
    ACTIONS(173), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      sym_STR,
      sym_NUM,
  [3358] = 3,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      aux_sym_AndExpr_token1,
    ACTIONS(217), 9,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3376] = 2,
    ACTIONS(221), 4,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(113), 7,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3392] = 3,
    ACTIONS(219), 1,
      aux_sym_AndExpr_token1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 9,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OrExpr_token1,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3410] = 10,
    ACTIONS(5), 1,
      aux_sym_Stmt_token1,
    ACTIONS(7), 1,
      aux_sym_Stmt_token3,
    ACTIONS(9), 1,
      aux_sym_Stmt_token4,
    ACTIONS(11), 1,
      aux_sym_Stmt_token7,
    ACTIONS(13), 1,
      aux_sym_Stmt_token9,
    ACTIONS(15), 1,
      sym_ID,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(130), 1,
      sym_Stmt,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(109), 2,
      sym_MoreThanOneStmt,
      aux_sym_Prog_repeat1,
  [3442] = 2,
    ACTIONS(221), 4,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(121), 7,
      anon_sym_EQ,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3458] = 3,
    ACTIONS(213), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(181), 3,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      sym_ID,
    ACTIONS(179), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      sym_STR,
      sym_NUM,
  [3476] = 10,
    ACTIONS(5), 1,
      aux_sym_Stmt_token1,
    ACTIONS(7), 1,
      aux_sym_Stmt_token3,
    ACTIONS(9), 1,
      aux_sym_Stmt_token4,
    ACTIONS(11), 1,
      aux_sym_Stmt_token7,
    ACTIONS(13), 1,
      aux_sym_Stmt_token9,
    ACTIONS(189), 1,
      aux_sym_Stmt_token8,
    ACTIONS(191), 1,
      sym_ID,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(183), 1,
      sym_TheRest,
    STATE(203), 1,
      sym_Stmt,
  [3507] = 10,
    ACTIONS(5), 1,
      aux_sym_Stmt_token1,
    ACTIONS(7), 1,
      aux_sym_Stmt_token3,
    ACTIONS(9), 1,
      aux_sym_Stmt_token4,
    ACTIONS(11), 1,
      aux_sym_Stmt_token7,
    ACTIONS(13), 1,
      aux_sym_Stmt_token9,
    ACTIONS(189), 1,
      aux_sym_Stmt_token6,
    ACTIONS(191), 1,
      sym_ID,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(183), 1,
      sym_TheRest,
    STATE(202), 1,
      sym_Stmt,
  [3538] = 10,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      sym_STR,
    ACTIONS(143), 1,
      sym_NUM,
    STATE(5), 1,
      sym_UnaryExpr,
    STATE(9), 1,
      sym_MultiplicativeExpr,
    STATE(10), 1,
      sym_Primary,
    STATE(20), 1,
      sym_AdditiveExpr,
    STATE(44), 1,
      sym_CompExpr,
  [3569] = 10,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(69), 1,
      sym_Primary,
    STATE(71), 1,
      sym_UnaryExpr,
    STATE(79), 1,
      sym_MultiplicativeExpr,
    STATE(100), 1,
      sym_AdditiveExpr,
    STATE(119), 1,
      sym_CompExpr,
  [3600] = 10,
    ACTIONS(5), 1,
      aux_sym_Stmt_token1,
    ACTIONS(7), 1,
      aux_sym_Stmt_token3,
    ACTIONS(9), 1,
      aux_sym_Stmt_token4,
    ACTIONS(11), 1,
      aux_sym_Stmt_token7,
    ACTIONS(13), 1,
      aux_sym_Stmt_token9,
    ACTIONS(189), 1,
      aux_sym_Stmt_token2,
    ACTIONS(191), 1,
      sym_ID,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(183), 1,
      sym_TheRest,
    STATE(207), 1,
      sym_Stmt,
  [3631] = 10,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(22), 1,
      sym_UnaryExpr,
    STATE(32), 1,
      sym_Primary,
    STATE(36), 1,
      sym_MultiplicativeExpr,
    STATE(46), 1,
      sym_AdditiveExpr,
    STATE(87), 1,
      sym_CompExpr,
  [3662] = 10,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(96), 1,
      sym_AdditiveExpr,
    STATE(108), 1,
      sym_CompExpr,
  [3693] = 10,
    ACTIONS(5), 1,
      aux_sym_Stmt_token1,
    ACTIONS(7), 1,
      aux_sym_Stmt_token3,
    ACTIONS(9), 1,
      aux_sym_Stmt_token4,
    ACTIONS(11), 1,
      aux_sym_Stmt_token7,
    ACTIONS(13), 1,
      aux_sym_Stmt_token9,
    ACTIONS(189), 1,
      aux_sym_OptionalElse_token1,
    ACTIONS(191), 1,
      sym_ID,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(183), 1,
      sym_TheRest,
    STATE(206), 1,
      sym_Stmt,
  [3724] = 3,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 1,
      aux_sym_OrExpr_token1,
    ACTIONS(231), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3741] = 4,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym_CR,
    ACTIONS(239), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
    ACTIONS(237), 6,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
  [3760] = 9,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(51), 1,
      sym_MultiplicativeExpr,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(97), 1,
      sym_AdditiveExpr,
  [3788] = 2,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3802] = 1,
    ACTIONS(245), 9,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_MoreThanZeroElseIf_token1,
      aux_sym_OptionalElse_token1,
      aux_sym_OptionalElse_token2,
      sym_ID,
  [3814] = 2,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3828] = 2,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3842] = 2,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3856] = 2,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3870] = 2,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3884] = 9,
    ACTIONS(5), 1,
      aux_sym_Stmt_token1,
    ACTIONS(7), 1,
      aux_sym_Stmt_token3,
    ACTIONS(9), 1,
      aux_sym_Stmt_token4,
    ACTIONS(11), 1,
      aux_sym_Stmt_token7,
    ACTIONS(13), 1,
      aux_sym_Stmt_token9,
    ACTIONS(191), 1,
      sym_ID,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(179), 1,
      sym_TheRest,
    STATE(203), 1,
      sym_Stmt,
  [3912] = 2,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3926] = 2,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3940] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [3954] = 9,
    ACTIONS(5), 1,
      aux_sym_Stmt_token1,
    ACTIONS(7), 1,
      aux_sym_Stmt_token3,
    ACTIONS(9), 1,
      aux_sym_Stmt_token4,
    ACTIONS(11), 1,
      aux_sym_Stmt_token7,
    ACTIONS(13), 1,
      aux_sym_Stmt_token9,
    ACTIONS(191), 1,
      sym_ID,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(179), 1,
      sym_TheRest,
    STATE(205), 1,
      sym_Stmt,
  [3982] = 9,
    ACTIONS(5), 1,
      aux_sym_Stmt_token1,
    ACTIONS(7), 1,
      aux_sym_Stmt_token3,
    ACTIONS(9), 1,
      aux_sym_Stmt_token4,
    ACTIONS(11), 1,
      aux_sym_Stmt_token7,
    ACTIONS(13), 1,
      aux_sym_Stmt_token9,
    ACTIONS(191), 1,
      sym_ID,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(179), 1,
      sym_TheRest,
    STATE(206), 1,
      sym_Stmt,
  [4010] = 9,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(69), 1,
      sym_Primary,
    STATE(71), 1,
      sym_UnaryExpr,
    STATE(79), 1,
      sym_MultiplicativeExpr,
    STATE(101), 1,
      sym_AdditiveExpr,
  [4038] = 3,
    ACTIONS(279), 1,
      aux_sym_AndExpr_token1,
    ACTIONS(217), 2,
      aux_sym_OrExpr_token1,
      sym_ID,
    ACTIONS(215), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      sym_STR,
      sym_NUM,
  [4054] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4068] = 9,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(22), 1,
      sym_UnaryExpr,
    STATE(32), 1,
      sym_Primary,
    STATE(36), 1,
      sym_MultiplicativeExpr,
    STATE(57), 1,
      sym_AdditiveExpr,
  [4096] = 3,
    ACTIONS(279), 1,
      aux_sym_AndExpr_token1,
    ACTIONS(225), 2,
      aux_sym_OrExpr_token1,
      sym_ID,
    ACTIONS(223), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      sym_STR,
      sym_NUM,
  [4112] = 2,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4126] = 2,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4140] = 9,
    ACTIONS(5), 1,
      aux_sym_Stmt_token1,
    ACTIONS(7), 1,
      aux_sym_Stmt_token3,
    ACTIONS(9), 1,
      aux_sym_Stmt_token4,
    ACTIONS(11), 1,
      aux_sym_Stmt_token7,
    ACTIONS(13), 1,
      aux_sym_Stmt_token9,
    ACTIONS(15), 1,
      sym_ID,
    STATE(130), 1,
      sym_Stmt,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(169), 1,
      sym_MoreThanOneStmt,
  [4168] = 2,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4182] = 9,
    ACTIONS(5), 1,
      aux_sym_Stmt_token1,
    ACTIONS(7), 1,
      aux_sym_Stmt_token3,
    ACTIONS(9), 1,
      aux_sym_Stmt_token4,
    ACTIONS(11), 1,
      aux_sym_Stmt_token7,
    ACTIONS(13), 1,
      aux_sym_Stmt_token9,
    ACTIONS(191), 1,
      sym_ID,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(179), 1,
      sym_TheRest,
    STATE(207), 1,
      sym_Stmt,
  [4210] = 2,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(299), 8,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4224] = 9,
    ACTIONS(5), 1,
      aux_sym_Stmt_token1,
    ACTIONS(7), 1,
      aux_sym_Stmt_token3,
    ACTIONS(9), 1,
      aux_sym_Stmt_token4,
    ACTIONS(11), 1,
      aux_sym_Stmt_token7,
    ACTIONS(13), 1,
      aux_sym_Stmt_token9,
    ACTIONS(191), 1,
      sym_ID,
    STATE(147), 1,
      sym_ExprStatement,
    STATE(179), 1,
      sym_TheRest,
    STATE(202), 1,
      sym_Stmt,
  [4252] = 9,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      sym_STR,
    ACTIONS(143), 1,
      sym_NUM,
    STATE(5), 1,
      sym_UnaryExpr,
    STATE(9), 1,
      sym_MultiplicativeExpr,
    STATE(10), 1,
      sym_Primary,
    STATE(21), 1,
      sym_AdditiveExpr,
  [4280] = 8,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(22), 1,
      sym_UnaryExpr,
    STATE(26), 1,
      sym_MultiplicativeExpr,
    STATE(32), 1,
      sym_Primary,
  [4305] = 2,
    ACTIONS(301), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(179), 6,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_RBRACK,
  [4318] = 2,
    ACTIONS(301), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(173), 6,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_RBRACK,
  [4331] = 8,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(69), 1,
      sym_Primary,
    STATE(71), 1,
      sym_UnaryExpr,
    STATE(73), 1,
      sym_MultiplicativeExpr,
  [4356] = 3,
    ACTIONS(231), 1,
      sym_ID,
    ACTIONS(303), 1,
      aux_sym_OrExpr_token1,
    ACTIONS(229), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      sym_STR,
      sym_NUM,
  [4371] = 8,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(52), 1,
      sym_UnaryExpr,
    STATE(55), 1,
      sym_Primary,
    STATE(61), 1,
      sym_MultiplicativeExpr,
  [4396] = 8,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      sym_STR,
    ACTIONS(143), 1,
      sym_NUM,
    STATE(5), 1,
      sym_UnaryExpr,
    STATE(10), 1,
      sym_Primary,
    STATE(15), 1,
      sym_MultiplicativeExpr,
  [4421] = 2,
    ACTIONS(305), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(181), 5,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4433] = 1,
    ACTIONS(245), 7,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token6,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
  [4443] = 1,
    ACTIONS(245), 7,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      aux_sym_OptionalElse_token1,
      sym_ID,
  [4453] = 1,
    ACTIONS(297), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      sym_ID,
      sym_STR,
      sym_NUM,
  [4463] = 2,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 6,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
  [4475] = 7,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(55), 1,
      sym_Primary,
    STATE(59), 1,
      sym_UnaryExpr,
  [4497] = 7,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      sym_STR,
    ACTIONS(143), 1,
      sym_NUM,
    STATE(10), 1,
      sym_Primary,
    STATE(14), 1,
      sym_UnaryExpr,
  [4519] = 1,
    ACTIONS(245), 7,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token2,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
  [4529] = 2,
    ACTIONS(305), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(175), 5,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4541] = 7,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(29), 1,
      sym_UnaryExpr,
    STATE(32), 1,
      sym_Primary,
  [4563] = 7,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(62), 1,
      sym_UnaryExpr,
    STATE(69), 1,
      sym_Primary,
  [4585] = 1,
    ACTIONS(245), 7,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token8,
      aux_sym_Stmt_token9,
      sym_ID,
  [4595] = 6,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(313), 1,
      anon_sym_EQ,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_Idxs,
  [4614] = 2,
    ACTIONS(319), 1,
      aux_sym_AndExpr_token1,
    ACTIONS(223), 5,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      anon_sym_RBRACK,
  [4625] = 2,
    ACTIONS(323), 1,
      aux_sym_OptionalElse_token2,
    ACTIONS(321), 5,
      aux_sym_Stmt_token2,
      aux_sym_Stmt_token6,
      aux_sym_Stmt_token8,
      aux_sym_MoreThanZeroElseIf_token1,
      aux_sym_OptionalElse_token1,
  [4636] = 1,
    ACTIONS(245), 6,
      aux_sym_Stmt_token1,
      aux_sym_Stmt_token3,
      aux_sym_Stmt_token4,
      aux_sym_Stmt_token7,
      aux_sym_Stmt_token9,
      sym_ID,
  [4645] = 2,
    ACTIONS(319), 1,
      aux_sym_AndExpr_token1,
    ACTIONS(215), 5,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OrExpr_token1,
      anon_sym_RBRACK,
  [4656] = 6,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      anon_sym_EQ,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(224), 1,
      sym_Idxs,
  [4675] = 2,
    ACTIONS(331), 1,
      aux_sym_OptionalElse_token2,
    ACTIONS(329), 5,
      aux_sym_Stmt_token2,
      aux_sym_Stmt_token6,
      aux_sym_Stmt_token8,
      aux_sym_MoreThanZeroElseIf_token1,
      aux_sym_OptionalElse_token1,
  [4686] = 2,
    ACTIONS(333), 1,
      aux_sym_OrExpr_token1,
    ACTIONS(229), 4,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4696] = 5,
    ACTIONS(335), 1,
      aux_sym_MoreThanZeroElseIf_token1,
    ACTIONS(337), 1,
      aux_sym_OptionalElse_token1,
    ACTIONS(339), 1,
      aux_sym_OptionalElse_token2,
    STATE(137), 1,
      sym_OptionalElse,
    STATE(151), 1,
      sym_MoreThanZeroElseIf,
  [4712] = 2,
    ACTIONS(341), 1,
      aux_sym_AndExpr_token1,
    ACTIONS(217), 4,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4722] = 5,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_ID,
    ACTIONS(163), 1,
      sym_STR,
    ACTIONS(165), 1,
      sym_NUM,
    STATE(91), 1,
      sym_Primary,
  [4738] = 5,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_ID,
    ACTIONS(151), 1,
      sym_STR,
    ACTIONS(153), 1,
      sym_NUM,
    STATE(56), 1,
      sym_Primary,
  [4754] = 2,
    ACTIONS(341), 1,
      aux_sym_AndExpr_token1,
    ACTIONS(225), 4,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4764] = 5,
    ACTIONS(335), 1,
      aux_sym_MoreThanZeroElseIf_token1,
    ACTIONS(337), 1,
      aux_sym_OptionalElse_token1,
    ACTIONS(339), 1,
      aux_sym_OptionalElse_token2,
    STATE(136), 1,
      sym_MoreThanZeroElseIf,
    STATE(137), 1,
      sym_OptionalElse,
  [4780] = 5,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_ID,
    ACTIONS(107), 1,
      sym_STR,
    ACTIONS(109), 1,
      sym_NUM,
    STATE(34), 1,
      sym_Primary,
  [4796] = 4,
    ACTIONS(343), 1,
      aux_sym_OptStep_token1,
    STATE(199), 1,
      sym_OptStep,
    STATE(212), 1,
      sym_CR,
    ACTIONS(345), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4810] = 5,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_ID,
    ACTIONS(141), 1,
      sym_STR,
    ACTIONS(143), 1,
      sym_NUM,
    STATE(11), 1,
      sym_Primary,
  [4826] = 3,
    STATE(144), 1,
      sym_CR,
    STATE(234), 1,
      sym_CRStmtCRs,
    ACTIONS(239), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4837] = 1,
    ACTIONS(297), 4,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4844] = 3,
    STATE(154), 1,
      sym_CR,
    STATE(246), 1,
      sym_CRStmtCRs,
    ACTIONS(239), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4855] = 3,
    STATE(139), 1,
      sym_CR,
    STATE(247), 1,
      sym_CRStmtCRs,
    ACTIONS(239), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4866] = 3,
    STATE(143), 1,
      sym_CR,
    STATE(185), 1,
      sym_CRStmtCRs,
    ACTIONS(239), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4877] = 3,
    STATE(156), 1,
      sym_CR,
    STATE(239), 1,
      sym_CRStmtCRs,
    ACTIONS(239), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4888] = 3,
    STATE(143), 1,
      sym_CR,
    STATE(190), 1,
      sym_CRStmtCRs,
    ACTIONS(239), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4899] = 2,
    ACTIONS(347), 1,
      aux_sym_OrExpr_token1,
    ACTIONS(231), 3,
      aux_sym_OptStep_token1,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4908] = 2,
    STATE(122), 1,
      sym_CR,
    ACTIONS(349), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4916] = 2,
    STATE(121), 1,
      sym_CR,
    ACTIONS(351), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4924] = 1,
    ACTIONS(299), 3,
      aux_sym_OptStep_token1,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4930] = 2,
    STATE(104), 1,
      sym_CR,
    ACTIONS(353), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4938] = 2,
    STATE(128), 1,
      sym_CR,
    ACTIONS(355), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4946] = 2,
    STATE(125), 1,
      sym_CR,
    ACTIONS(357), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4954] = 2,
    ACTIONS(359), 1,
      anon_sym_EQ,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
  [4961] = 1,
    ACTIONS(363), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4966] = 1,
    ACTIONS(245), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4971] = 2,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_EQ,
  [4978] = 1,
    ACTIONS(367), 2,
      aux_sym_CR_token1,
      aux_sym_CR_token2,
  [4983] = 1,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
  [4987] = 1,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
  [4991] = 1,
    ACTIONS(373), 1,
      aux_sym_Stmt_token5,
  [4995] = 1,
    ACTIONS(375), 1,
      sym_ID,
  [4999] = 1,
    ACTIONS(377), 1,
      anon_sym_EQ,
  [5003] = 1,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
  [5007] = 1,
    ACTIONS(381), 1,
      sym_ID,
  [5011] = 1,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
  [5015] = 1,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
  [5019] = 1,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
  [5023] = 1,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
  [5027] = 1,
    ACTIONS(391), 1,
      anon_sym_EQ,
  [5031] = 1,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
  [5035] = 1,
    ACTIONS(395), 1,
      sym_ID,
  [5039] = 1,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
  [5043] = 1,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
  [5047] = 1,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [5051] = 1,
    ACTIONS(403), 1,
      aux_sym_Stmt_token10,
  [5055] = 1,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [5059] = 1,
    ACTIONS(407), 1,
      sym_ID,
  [5063] = 1,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
  [5067] = 1,
    ACTIONS(411), 1,
      aux_sym_OptionalElse_token1,
  [5071] = 1,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
  [5075] = 1,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [5079] = 1,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
  [5083] = 1,
    ACTIONS(419), 1,
      sym_ID,
  [5087] = 1,
    ACTIONS(421), 1,
      aux_sym_Stmt_token6,
  [5091] = 1,
    ACTIONS(423), 1,
      sym_ID,
  [5095] = 1,
    ACTIONS(425), 1,
      sym_ID,
  [5099] = 1,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
  [5103] = 1,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
  [5107] = 1,
    ACTIONS(431), 1,
      anon_sym_EQ,
  [5111] = 1,
    ACTIONS(311), 1,
      sym_ID,
  [5115] = 1,
    ACTIONS(433), 1,
      aux_sym_Stmt_token2,
  [5119] = 1,
    ACTIONS(433), 1,
      aux_sym_Stmt_token8,
  [5123] = 1,
    ACTIONS(435), 1,
      aux_sym_Stmt_token10,
  [5127] = 1,
    ACTIONS(437), 1,
      sym_ID,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 122,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 200,
  [SMALL_STATE(10)] = 228,
  [SMALL_STATE(11)] = 254,
  [SMALL_STATE(12)] = 280,
  [SMALL_STATE(13)] = 306,
  [SMALL_STATE(14)] = 332,
  [SMALL_STATE(15)] = 358,
  [SMALL_STATE(16)] = 386,
  [SMALL_STATE(17)] = 418,
  [SMALL_STATE(18)] = 444,
  [SMALL_STATE(19)] = 473,
  [SMALL_STATE(20)] = 503,
  [SMALL_STATE(21)] = 529,
  [SMALL_STATE(22)] = 555,
  [SMALL_STATE(23)] = 578,
  [SMALL_STATE(24)] = 601,
  [SMALL_STATE(25)] = 624,
  [SMALL_STATE(26)] = 647,
  [SMALL_STATE(27)] = 672,
  [SMALL_STATE(28)] = 699,
  [SMALL_STATE(29)] = 722,
  [SMALL_STATE(30)] = 745,
  [SMALL_STATE(31)] = 768,
  [SMALL_STATE(32)] = 795,
  [SMALL_STATE(33)] = 818,
  [SMALL_STATE(34)] = 873,
  [SMALL_STATE(35)] = 896,
  [SMALL_STATE(36)] = 919,
  [SMALL_STATE(37)] = 944,
  [SMALL_STATE(38)] = 967,
  [SMALL_STATE(39)] = 991,
  [SMALL_STATE(40)] = 1043,
  [SMALL_STATE(41)] = 1067,
  [SMALL_STATE(42)] = 1091,
  [SMALL_STATE(43)] = 1143,
  [SMALL_STATE(44)] = 1195,
  [SMALL_STATE(45)] = 1219,
  [SMALL_STATE(46)] = 1271,
  [SMALL_STATE(47)] = 1296,
  [SMALL_STATE(48)] = 1317,
  [SMALL_STATE(49)] = 1338,
  [SMALL_STATE(50)] = 1359,
  [SMALL_STATE(51)] = 1408,
  [SMALL_STATE(52)] = 1431,
  [SMALL_STATE(53)] = 1452,
  [SMALL_STATE(54)] = 1473,
  [SMALL_STATE(55)] = 1494,
  [SMALL_STATE(56)] = 1515,
  [SMALL_STATE(57)] = 1536,
  [SMALL_STATE(58)] = 1561,
  [SMALL_STATE(59)] = 1582,
  [SMALL_STATE(60)] = 1603,
  [SMALL_STATE(61)] = 1624,
  [SMALL_STATE(62)] = 1647,
  [SMALL_STATE(63)] = 1665,
  [SMALL_STATE(64)] = 1683,
  [SMALL_STATE(65)] = 1729,
  [SMALL_STATE(66)] = 1747,
  [SMALL_STATE(67)] = 1793,
  [SMALL_STATE(68)] = 1839,
  [SMALL_STATE(69)] = 1885,
  [SMALL_STATE(70)] = 1903,
  [SMALL_STATE(71)] = 1949,
  [SMALL_STATE(72)] = 1967,
  [SMALL_STATE(73)] = 1985,
  [SMALL_STATE(74)] = 2005,
  [SMALL_STATE(75)] = 2023,
  [SMALL_STATE(76)] = 2069,
  [SMALL_STATE(77)] = 2115,
  [SMALL_STATE(78)] = 2161,
  [SMALL_STATE(79)] = 2207,
  [SMALL_STATE(80)] = 2227,
  [SMALL_STATE(81)] = 2273,
  [SMALL_STATE(82)] = 2319,
  [SMALL_STATE(83)] = 2365,
  [SMALL_STATE(84)] = 2411,
  [SMALL_STATE(85)] = 2457,
  [SMALL_STATE(86)] = 2503,
  [SMALL_STATE(87)] = 2549,
  [SMALL_STATE(88)] = 2573,
  [SMALL_STATE(89)] = 2619,
  [SMALL_STATE(90)] = 2665,
  [SMALL_STATE(91)] = 2711,
  [SMALL_STATE(92)] = 2729,
  [SMALL_STATE(93)] = 2747,
  [SMALL_STATE(94)] = 2765,
  [SMALL_STATE(95)] = 2789,
  [SMALL_STATE(96)] = 2835,
  [SMALL_STATE(97)] = 2856,
  [SMALL_STATE(98)] = 2877,
  [SMALL_STATE(99)] = 2897,
  [SMALL_STATE(100)] = 2917,
  [SMALL_STATE(101)] = 2935,
  [SMALL_STATE(102)] = 2953,
  [SMALL_STATE(103)] = 2990,
  [SMALL_STATE(104)] = 3009,
  [SMALL_STATE(105)] = 3042,
  [SMALL_STATE(106)] = 3079,
  [SMALL_STATE(107)] = 3116,
  [SMALL_STATE(108)] = 3153,
  [SMALL_STATE(109)] = 3172,
  [SMALL_STATE(110)] = 3204,
  [SMALL_STATE(111)] = 3238,
  [SMALL_STATE(112)] = 3272,
  [SMALL_STATE(113)] = 3306,
  [SMALL_STATE(114)] = 3340,
  [SMALL_STATE(115)] = 3358,
  [SMALL_STATE(116)] = 3376,
  [SMALL_STATE(117)] = 3392,
  [SMALL_STATE(118)] = 3410,
  [SMALL_STATE(119)] = 3442,
  [SMALL_STATE(120)] = 3458,
  [SMALL_STATE(121)] = 3476,
  [SMALL_STATE(122)] = 3507,
  [SMALL_STATE(123)] = 3538,
  [SMALL_STATE(124)] = 3569,
  [SMALL_STATE(125)] = 3600,
  [SMALL_STATE(126)] = 3631,
  [SMALL_STATE(127)] = 3662,
  [SMALL_STATE(128)] = 3693,
  [SMALL_STATE(129)] = 3724,
  [SMALL_STATE(130)] = 3741,
  [SMALL_STATE(131)] = 3760,
  [SMALL_STATE(132)] = 3788,
  [SMALL_STATE(133)] = 3802,
  [SMALL_STATE(134)] = 3814,
  [SMALL_STATE(135)] = 3828,
  [SMALL_STATE(136)] = 3842,
  [SMALL_STATE(137)] = 3856,
  [SMALL_STATE(138)] = 3870,
  [SMALL_STATE(139)] = 3884,
  [SMALL_STATE(140)] = 3912,
  [SMALL_STATE(141)] = 3926,
  [SMALL_STATE(142)] = 3940,
  [SMALL_STATE(143)] = 3954,
  [SMALL_STATE(144)] = 3982,
  [SMALL_STATE(145)] = 4010,
  [SMALL_STATE(146)] = 4038,
  [SMALL_STATE(147)] = 4054,
  [SMALL_STATE(148)] = 4068,
  [SMALL_STATE(149)] = 4096,
  [SMALL_STATE(150)] = 4112,
  [SMALL_STATE(151)] = 4126,
  [SMALL_STATE(152)] = 4140,
  [SMALL_STATE(153)] = 4168,
  [SMALL_STATE(154)] = 4182,
  [SMALL_STATE(155)] = 4210,
  [SMALL_STATE(156)] = 4224,
  [SMALL_STATE(157)] = 4252,
  [SMALL_STATE(158)] = 4280,
  [SMALL_STATE(159)] = 4305,
  [SMALL_STATE(160)] = 4318,
  [SMALL_STATE(161)] = 4331,
  [SMALL_STATE(162)] = 4356,
  [SMALL_STATE(163)] = 4371,
  [SMALL_STATE(164)] = 4396,
  [SMALL_STATE(165)] = 4421,
  [SMALL_STATE(166)] = 4433,
  [SMALL_STATE(167)] = 4443,
  [SMALL_STATE(168)] = 4453,
  [SMALL_STATE(169)] = 4463,
  [SMALL_STATE(170)] = 4475,
  [SMALL_STATE(171)] = 4497,
  [SMALL_STATE(172)] = 4519,
  [SMALL_STATE(173)] = 4529,
  [SMALL_STATE(174)] = 4541,
  [SMALL_STATE(175)] = 4563,
  [SMALL_STATE(176)] = 4585,
  [SMALL_STATE(177)] = 4595,
  [SMALL_STATE(178)] = 4614,
  [SMALL_STATE(179)] = 4625,
  [SMALL_STATE(180)] = 4636,
  [SMALL_STATE(181)] = 4645,
  [SMALL_STATE(182)] = 4656,
  [SMALL_STATE(183)] = 4675,
  [SMALL_STATE(184)] = 4686,
  [SMALL_STATE(185)] = 4696,
  [SMALL_STATE(186)] = 4712,
  [SMALL_STATE(187)] = 4722,
  [SMALL_STATE(188)] = 4738,
  [SMALL_STATE(189)] = 4754,
  [SMALL_STATE(190)] = 4764,
  [SMALL_STATE(191)] = 4780,
  [SMALL_STATE(192)] = 4796,
  [SMALL_STATE(193)] = 4810,
  [SMALL_STATE(194)] = 4826,
  [SMALL_STATE(195)] = 4837,
  [SMALL_STATE(196)] = 4844,
  [SMALL_STATE(197)] = 4855,
  [SMALL_STATE(198)] = 4866,
  [SMALL_STATE(199)] = 4877,
  [SMALL_STATE(200)] = 4888,
  [SMALL_STATE(201)] = 4899,
  [SMALL_STATE(202)] = 4908,
  [SMALL_STATE(203)] = 4916,
  [SMALL_STATE(204)] = 4924,
  [SMALL_STATE(205)] = 4930,
  [SMALL_STATE(206)] = 4938,
  [SMALL_STATE(207)] = 4946,
  [SMALL_STATE(208)] = 4954,
  [SMALL_STATE(209)] = 4961,
  [SMALL_STATE(210)] = 4966,
  [SMALL_STATE(211)] = 4971,
  [SMALL_STATE(212)] = 4978,
  [SMALL_STATE(213)] = 4983,
  [SMALL_STATE(214)] = 4987,
  [SMALL_STATE(215)] = 4991,
  [SMALL_STATE(216)] = 4995,
  [SMALL_STATE(217)] = 4999,
  [SMALL_STATE(218)] = 5003,
  [SMALL_STATE(219)] = 5007,
  [SMALL_STATE(220)] = 5011,
  [SMALL_STATE(221)] = 5015,
  [SMALL_STATE(222)] = 5019,
  [SMALL_STATE(223)] = 5023,
  [SMALL_STATE(224)] = 5027,
  [SMALL_STATE(225)] = 5031,
  [SMALL_STATE(226)] = 5035,
  [SMALL_STATE(227)] = 5039,
  [SMALL_STATE(228)] = 5043,
  [SMALL_STATE(229)] = 5047,
  [SMALL_STATE(230)] = 5051,
  [SMALL_STATE(231)] = 5055,
  [SMALL_STATE(232)] = 5059,
  [SMALL_STATE(233)] = 5063,
  [SMALL_STATE(234)] = 5067,
  [SMALL_STATE(235)] = 5071,
  [SMALL_STATE(236)] = 5075,
  [SMALL_STATE(237)] = 5079,
  [SMALL_STATE(238)] = 5083,
  [SMALL_STATE(239)] = 5087,
  [SMALL_STATE(240)] = 5091,
  [SMALL_STATE(241)] = 5095,
  [SMALL_STATE(242)] = 5099,
  [SMALL_STATE(243)] = 5103,
  [SMALL_STATE(244)] = 5107,
  [SMALL_STATE(245)] = 5111,
  [SMALL_STATE(246)] = 5115,
  [SMALL_STATE(247)] = 5119,
  [SMALL_STATE(248)] = 5123,
  [SMALL_STATE(249)] = 5127,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Prog, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Primary, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Primary, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Idxs, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Idxs, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Primary, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Primary, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MultiplicativeExpr, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MultiplicativeExpr, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Idxs, 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Idxs, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AdditiveExpr, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AdditiveExpr, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UnaryExpr, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_UnaryExpr, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UnaryExpr, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_UnaryExpr, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Primary, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Primary, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MultiplicativeExpr, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MultiplicativeExpr, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AdditiveExpr, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AdditiveExpr, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Primary, 6),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Primary, 6),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CompExpr, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CompExpr, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CompExpr, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CompExpr, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanOneExpr, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EqNeqExpr, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EqNeqExpr, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EqNeqExpr, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EqNeqExpr, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_CompExpr, 1), SHIFT(158),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_CompExpr, 3), SHIFT(158),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AndExpr, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AndExpr, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AndExpr, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AndExpr, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TheRest, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_Prog_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Prog_repeat1, 2), SHIFT_REPEAT(75),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Prog_repeat1, 2), SHIFT_REPEAT(245),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Prog_repeat1, 2), SHIFT_REPEAT(241),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Prog_repeat1, 2), SHIFT_REPEAT(216),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Prog_repeat1, 2), SHIFT_REPEAT(70),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_Prog_repeat1, 2), SHIFT_REPEAT(182),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OrExpr, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OrExpr, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OrExpr, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OrExpr, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Prog, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CondExpr, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CondExpr, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanOneStmt, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MoreThanOneStmt, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExprStatement, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ExprStatement, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CR, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OptionalElse, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OptionalElse, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OptionalElse, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OptionalElse, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmt, 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Stmt, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanZeroElseIf, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MoreThanZeroElseIf, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmt, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Stmt, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExprStatement, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ExprStatement, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmt, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Stmt, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExprStatement, 5),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ExprStatement, 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmt, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Stmt, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExprStatement, 6),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ExprStatement, 6),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanZeroElseIf, 5),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MoreThanZeroElseIf, 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmt, 9),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Stmt, 9),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Expr, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Expr, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanOneStmt, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MoreThanOneStmt, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CRStmtCRs, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CRStmtCRs, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TheRest, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TheRest, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OptStep, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OptStep, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Exprs, 1),
  [371] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanOneExpr, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanOneExpr, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nodejs(void) {
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
