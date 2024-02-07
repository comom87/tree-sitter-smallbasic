#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  aux_sym_MoreThanZeroElseIf_token1 = 13,
  aux_sym_OptionalElse_token1 = 14,
  aux_sym_OptionalElse_token2 = 15,
  anon_sym_DOT = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  aux_sym_CRStmtCRs_token1 = 19,
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
  aux_sym_Primary_token1 = 32,
  aux_sym_Primary_token2 = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  sym_ID = 36,
  sym_Start = 37,
  sym_Prog = 38,
  sym_Stmt = 39,
  sym_MoreThanZeroElseIf = 40,
  sym_OptionalElse = 41,
  sym_ExprStatement = 42,
  sym_CRStmtCRs = 43,
  sym_TheRest = 44,
  sym_MoreThanOneStmt = 45,
  sym_OptStep = 46,
  sym_Expr = 47,
  sym_Exprs = 48,
  sym_MoreThanOneExpr = 49,
  sym_CondExpr = 50,
  sym_OrExpr = 51,
  sym_AndExpr = 52,
  sym_EqNeqExpr = 53,
  sym_CompExpr = 54,
  sym_AdditiveExpr = 55,
  sym_MultiplicativeExpr = 56,
  sym_UnaryExpr = 57,
  sym_Primary = 58,
  sym_Idxs = 59,
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
  [aux_sym_MoreThanZeroElseIf_token1] = "MoreThanZeroElseIf_token1",
  [aux_sym_OptionalElse_token1] = "OptionalElse_token1",
  [aux_sym_OptionalElse_token2] = "OptionalElse_token2",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_CRStmtCRs_token1] = "CRStmtCRs_token1",
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
  [aux_sym_Primary_token1] = "Primary_token1",
  [aux_sym_Primary_token2] = "Primary_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_ID] = "ID",
  [sym_Start] = "Start",
  [sym_Prog] = "Prog",
  [sym_Stmt] = "Stmt",
  [sym_MoreThanZeroElseIf] = "MoreThanZeroElseIf",
  [sym_OptionalElse] = "OptionalElse",
  [sym_ExprStatement] = "ExprStatement",
  [sym_CRStmtCRs] = "CRStmtCRs",
  [sym_TheRest] = "TheRest",
  [sym_MoreThanOneStmt] = "MoreThanOneStmt",
  [sym_OptStep] = "OptStep",
  [sym_Expr] = "Expr",
  [sym_Exprs] = "Exprs",
  [sym_MoreThanOneExpr] = "MoreThanOneExpr",
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
  [aux_sym_MoreThanZeroElseIf_token1] = aux_sym_MoreThanZeroElseIf_token1,
  [aux_sym_OptionalElse_token1] = aux_sym_OptionalElse_token1,
  [aux_sym_OptionalElse_token2] = aux_sym_OptionalElse_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_CRStmtCRs_token1] = aux_sym_CRStmtCRs_token1,
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
  [aux_sym_Primary_token1] = aux_sym_Primary_token1,
  [aux_sym_Primary_token2] = aux_sym_Primary_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_ID] = sym_ID,
  [sym_Start] = sym_Start,
  [sym_Prog] = sym_Prog,
  [sym_Stmt] = sym_Stmt,
  [sym_MoreThanZeroElseIf] = sym_MoreThanZeroElseIf,
  [sym_OptionalElse] = sym_OptionalElse,
  [sym_ExprStatement] = sym_ExprStatement,
  [sym_CRStmtCRs] = sym_CRStmtCRs,
  [sym_TheRest] = sym_TheRest,
  [sym_MoreThanOneStmt] = sym_MoreThanOneStmt,
  [sym_OptStep] = sym_OptStep,
  [sym_Expr] = sym_Expr,
  [sym_Exprs] = sym_Exprs,
  [sym_MoreThanOneExpr] = sym_MoreThanOneExpr,
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
  [aux_sym_CRStmtCRs_token1] = {
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
  [aux_sym_Primary_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Primary_token2] = {
    .visible = false,
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
  [sym_Start] = {
    .visible = true,
    .named = true,
  },
  [sym_Prog] = {
    .visible = true,
    .named = true,
  },
  [sym_Stmt] = {
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
  [sym_ExprStatement] = {
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
  [sym_MoreThanOneStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_OptStep] = {
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
  [10] = 2,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 3,
  [18] = 18,
  [19] = 19,
  [20] = 4,
  [21] = 6,
  [22] = 11,
  [23] = 16,
  [24] = 8,
  [25] = 7,
  [26] = 5,
  [27] = 9,
  [28] = 12,
  [29] = 13,
  [30] = 14,
  [31] = 15,
  [32] = 32,
  [33] = 33,
  [34] = 19,
  [35] = 18,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 32,
  [40] = 33,
  [41] = 38,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 43,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 46,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 58,
  [64] = 60,
  [65] = 65,
  [66] = 66,
  [67] = 52,
  [68] = 68,
  [69] = 69,
  [70] = 53,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 68,
  [80] = 80,
  [81] = 81,
  [82] = 66,
  [83] = 83,
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
  [128] = 115,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 120,
  [133] = 109,
  [134] = 118,
  [135] = 129,
  [136] = 136,
  [137] = 137,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(31);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(29);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(15);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(93);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(32);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(14);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 28:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 35:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(10);
      END_STATE();
    case 39:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(10);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 40:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(67);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_Stmt_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_Stmt_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_Stmt_token2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_Stmt_token3);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_Stmt_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_Stmt_token4);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_Stmt_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_Stmt_token5);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_Stmt_token6);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_Stmt_token7);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_Stmt_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_Stmt_token8);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_Stmt_token9);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_Stmt_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_Stmt_token10);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_MoreThanZeroElseIf_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_OptionalElse_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_OptionalElse_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_CRStmtCRs_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_OptStep_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_OrExpr_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_AndExpr_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_Primary_token1);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_Primary_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_Primary_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ID);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_ID);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 43},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 43},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 43},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 43},
  [83] = {.lex_state = 43},
  [84] = {.lex_state = 43},
  [85] = {.lex_state = 43},
  [86] = {.lex_state = 43},
  [87] = {.lex_state = 43},
  [88] = {.lex_state = 43},
  [89] = {.lex_state = 43},
  [90] = {.lex_state = 43},
  [91] = {.lex_state = 43},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 43},
  [94] = {.lex_state = 43},
  [95] = {.lex_state = 43},
  [96] = {.lex_state = 43},
  [97] = {.lex_state = 43},
  [98] = {.lex_state = 43},
  [99] = {.lex_state = 43},
  [100] = {.lex_state = 43},
  [101] = {.lex_state = 43},
  [102] = {.lex_state = 43},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 43},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 43},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 43},
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
    [aux_sym_MoreThanZeroElseIf_token1] = ACTIONS(1),
    [aux_sym_OptionalElse_token1] = ACTIONS(1),
    [aux_sym_OptionalElse_token2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [aux_sym_Primary_token1] = ACTIONS(1),
    [aux_sym_Primary_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_Start] = STATE(123),
    [sym_Prog] = STATE(106),
    [sym_Stmt] = STATE(94),
    [sym_ExprStatement] = STATE(95),
    [sym_MoreThanOneStmt] = STATE(119),
    [aux_sym_Stmt_token1] = ACTIONS(3),
    [aux_sym_Stmt_token3] = ACTIONS(5),
    [aux_sym_Stmt_token4] = ACTIONS(7),
    [aux_sym_Stmt_token7] = ACTIONS(9),
    [aux_sym_Stmt_token9] = ACTIONS(11),
    [sym_ID] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_Idxs,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 15,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
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
  [31] = 4,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_Idxs,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 15,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
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
  [59] = 3,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 15,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
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
  [84] = 3,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 13,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [108] = 2,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 15,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
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
  [130] = 2,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 15,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
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
  [152] = 2,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 15,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
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
  [174] = 2,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 15,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
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
  [196] = 5,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_Idxs,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(19), 12,
      anon_sym_EQ,
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
  [224] = 2,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 15,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
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
  [246] = 2,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 15,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
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
  [268] = 2,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 15,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
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
  [290] = 2,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 15,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
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
  [312] = 2,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 15,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
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
  [334] = 3,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 13,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [358] = 4,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_Idxs,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(25), 12,
      anon_sym_EQ,
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
  [383] = 3,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(75), 11,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
  [405] = 3,
    ACTIONS(79), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 11,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
  [427] = 3,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(31), 12,
      anon_sym_EQ,
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
  [449] = 2,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(41), 12,
      anon_sym_EQ,
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
  [468] = 2,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(53), 12,
      anon_sym_EQ,
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
  [487] = 3,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(73), 10,
      anon_sym_EQ,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [508] = 2,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(19), 12,
      anon_sym_EQ,
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
  [527] = 2,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(45), 12,
      anon_sym_EQ,
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
  [546] = 3,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(35), 10,
      anon_sym_EQ,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [567] = 2,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(31), 12,
      anon_sym_EQ,
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
  [586] = 2,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(57), 12,
      anon_sym_EQ,
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
  [605] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(61), 12,
      anon_sym_EQ,
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
  [624] = 2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(65), 12,
      anon_sym_EQ,
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
  [643] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(69), 12,
      anon_sym_EQ,
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
  [662] = 3,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 9,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_RBRACK,
  [682] = 3,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(95), 9,
      anon_sym_EQ,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_RBRACK,
  [702] = 3,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 8,
      anon_sym_EQ,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [721] = 3,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 8,
      anon_sym_EQ,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [740] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    STATE(14), 1,
      sym_Primary,
    STATE(15), 1,
      sym_UnaryExpr,
    STATE(16), 1,
      sym_MultiplicativeExpr,
    STATE(19), 1,
      sym_AdditiveExpr,
    STATE(32), 1,
      sym_CompExpr,
    STATE(46), 1,
      sym_EqNeqExpr,
    ACTIONS(103), 2,
      aux_sym_Primary_token1,
      aux_sym_Primary_token2,
  [772] = 10,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      sym_ID,
    STATE(23), 1,
      sym_MultiplicativeExpr,
    STATE(30), 1,
      sym_Primary,
    STATE(31), 1,
      sym_UnaryExpr,
    STATE(34), 1,
      sym_AdditiveExpr,
    STATE(39), 1,
      sym_CompExpr,
    STATE(57), 1,
      sym_EqNeqExpr,
    ACTIONS(111), 2,
      aux_sym_Primary_token1,
      aux_sym_Primary_token2,
  [804] = 9,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    STATE(14), 1,
      sym_Primary,
    STATE(15), 1,
      sym_UnaryExpr,
    STATE(16), 1,
      sym_MultiplicativeExpr,
    STATE(19), 1,
      sym_AdditiveExpr,
    STATE(33), 1,
      sym_CompExpr,
    ACTIONS(103), 2,
      aux_sym_Primary_token1,
      aux_sym_Primary_token2,
  [833] = 3,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(115), 4,
      anon_sym_EQ,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [850] = 3,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(119), 4,
      anon_sym_EQ,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_LT_GT,
  [867] = 9,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      sym_ID,
    STATE(23), 1,
      sym_MultiplicativeExpr,
    STATE(30), 1,
      sym_Primary,
    STATE(31), 1,
      sym_UnaryExpr,
    STATE(34), 1,
      sym_AdditiveExpr,
    STATE(40), 1,
      sym_CompExpr,
    ACTIONS(111), 2,
      aux_sym_Primary_token1,
      aux_sym_Primary_token2,
  [896] = 9,
    ACTIONS(3), 1,
      aux_sym_Stmt_token1,
    ACTIONS(5), 1,
      aux_sym_Stmt_token3,
    ACTIONS(7), 1,
      aux_sym_Stmt_token4,
    ACTIONS(9), 1,
      aux_sym_Stmt_token7,
    ACTIONS(11), 1,
      aux_sym_Stmt_token9,
    ACTIONS(13), 1,
      sym_ID,
    STATE(94), 1,
      sym_Stmt,
    STATE(95), 1,
      sym_ExprStatement,
    STATE(136), 1,
      sym_MoreThanOneStmt,
  [924] = 8,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      sym_ID,
    STATE(23), 1,
      sym_MultiplicativeExpr,
    STATE(30), 1,
      sym_Primary,
    STATE(31), 1,
      sym_UnaryExpr,
    STATE(35), 1,
      sym_AdditiveExpr,
    ACTIONS(111), 2,
      aux_sym_Primary_token1,
      aux_sym_Primary_token2,
  [950] = 9,
    ACTIONS(3), 1,
      aux_sym_Stmt_token1,
    ACTIONS(5), 1,
      aux_sym_Stmt_token3,
    ACTIONS(7), 1,
      aux_sym_Stmt_token4,
    ACTIONS(9), 1,
      aux_sym_Stmt_token7,
    ACTIONS(11), 1,
      aux_sym_Stmt_token9,
    ACTIONS(13), 1,
      sym_ID,
    STATE(56), 1,
      sym_TheRest,
    STATE(95), 1,
      sym_ExprStatement,
    STATE(137), 1,
      sym_Stmt,
  [978] = 9,
    ACTIONS(3), 1,
      aux_sym_Stmt_token1,
    ACTIONS(5), 1,
      aux_sym_Stmt_token3,
    ACTIONS(7), 1,
      aux_sym_Stmt_token4,
    ACTIONS(9), 1,
      aux_sym_Stmt_token7,
    ACTIONS(11), 1,
      aux_sym_Stmt_token9,
    ACTIONS(13), 1,
      sym_ID,
    STATE(55), 1,
      sym_TheRest,
    STATE(95), 1,
      sym_ExprStatement,
    STATE(137), 1,
      sym_Stmt,
  [1006] = 2,
    ACTIONS(121), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(123), 7,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
      anon_sym_RBRACK,
  [1020] = 8,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    STATE(14), 1,
      sym_Primary,
    STATE(15), 1,
      sym_UnaryExpr,
    STATE(16), 1,
      sym_MultiplicativeExpr,
    STATE(18), 1,
      sym_AdditiveExpr,
    ACTIONS(103), 2,
      aux_sym_Primary_token1,
      aux_sym_Primary_token2,
  [1046] = 7,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      sym_ID,
    STATE(26), 1,
      sym_MultiplicativeExpr,
    STATE(30), 1,
      sym_Primary,
    STATE(31), 1,
      sym_UnaryExpr,
    ACTIONS(111), 2,
      aux_sym_Primary_token1,
      aux_sym_Primary_token2,
  [1069] = 7,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    STATE(5), 1,
      sym_MultiplicativeExpr,
    STATE(14), 1,
      sym_Primary,
    STATE(15), 1,
      sym_UnaryExpr,
    ACTIONS(103), 2,
      aux_sym_Primary_token1,
      aux_sym_Primary_token2,
  [1092] = 6,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      sym_ID,
    STATE(25), 1,
      sym_UnaryExpr,
    STATE(30), 1,
      sym_Primary,
    ACTIONS(111), 2,
      aux_sym_Primary_token1,
      aux_sym_Primary_token2,
  [1112] = 6,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_ID,
    STATE(7), 1,
      sym_UnaryExpr,
    STATE(14), 1,
      sym_Primary,
    ACTIONS(103), 2,
      aux_sym_Primary_token1,
      aux_sym_Primary_token2,
  [1132] = 2,
    ACTIONS(127), 1,
      aux_sym_AndExpr_token1,
    ACTIONS(125), 6,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
      aux_sym_OrExpr_token1,
      anon_sym_RBRACK,
  [1144] = 2,
    ACTIONS(131), 1,
      aux_sym_OrExpr_token1,
    ACTIONS(129), 5,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
      anon_sym_RBRACK,
  [1155] = 6,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_DOT,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_Idxs,
  [1174] = 2,
    ACTIONS(143), 1,
      aux_sym_OptionalElse_token2,
    ACTIONS(141), 5,
      aux_sym_Stmt_token2,
      aux_sym_Stmt_token6,
      aux_sym_Stmt_token8,
      aux_sym_MoreThanZeroElseIf_token1,
      aux_sym_OptionalElse_token1,
  [1185] = 2,
    ACTIONS(147), 1,
      aux_sym_OptionalElse_token2,
    ACTIONS(145), 5,
      aux_sym_Stmt_token2,
      aux_sym_Stmt_token6,
      aux_sym_Stmt_token8,
      aux_sym_MoreThanZeroElseIf_token1,
      aux_sym_OptionalElse_token1,
  [1196] = 3,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
    ACTIONS(149), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(151), 2,
      aux_sym_OrExpr_token1,
      aux_sym_AndExpr_token1,
  [1209] = 5,
    STATE(53), 1,
      sym_OrExpr,
    STATE(61), 1,
      sym_Expr,
    STATE(66), 1,
      sym_CondExpr,
    STATE(118), 1,
      sym_Exprs,
    STATE(125), 1,
      sym_MoreThanOneExpr,
  [1225] = 5,
    STATE(53), 1,
      sym_OrExpr,
    STATE(61), 1,
      sym_Expr,
    STATE(66), 1,
      sym_CondExpr,
    STATE(125), 1,
      sym_MoreThanOneExpr,
    STATE(131), 1,
      sym_Exprs,
  [1241] = 4,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_ID,
    STATE(13), 1,
      sym_Primary,
    ACTIONS(103), 2,
      aux_sym_Primary_token1,
      aux_sym_Primary_token2,
  [1255] = 5,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_OrExpr,
    STATE(61), 1,
      sym_Expr,
    STATE(66), 1,
      sym_CondExpr,
    STATE(116), 1,
      sym_MoreThanOneExpr,
  [1271] = 5,
    ACTIONS(155), 1,
      aux_sym_MoreThanZeroElseIf_token1,
    ACTIONS(157), 1,
      aux_sym_OptionalElse_token1,
    ACTIONS(159), 1,
      aux_sym_OptionalElse_token2,
    STATE(84), 1,
      sym_MoreThanZeroElseIf,
    STATE(89), 1,
      sym_OptionalElse,
  [1287] = 5,
    STATE(53), 1,
      sym_OrExpr,
    STATE(61), 1,
      sym_Expr,
    STATE(66), 1,
      sym_CondExpr,
    STATE(125), 1,
      sym_MoreThanOneExpr,
    STATE(134), 1,
      sym_Exprs,
  [1303] = 4,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym_ID,
    STATE(29), 1,
      sym_Primary,
    ACTIONS(111), 2,
      aux_sym_Primary_token1,
      aux_sym_Primary_token2,
  [1317] = 5,
    ACTIONS(155), 1,
      aux_sym_MoreThanZeroElseIf_token1,
    ACTIONS(157), 1,
      aux_sym_OptionalElse_token1,
    ACTIONS(159), 1,
      aux_sym_OptionalElse_token2,
    STATE(89), 1,
      sym_OptionalElse,
    STATE(99), 1,
      sym_MoreThanZeroElseIf,
  [1333] = 1,
    ACTIONS(161), 5,
      aux_sym_Stmt_token5,
      aux_sym_Stmt_token10,
      anon_sym_RPAREN,
      aux_sym_OptStep_token1,
      anon_sym_RBRACK,
  [1341] = 3,
    ACTIONS(163), 1,
      aux_sym_OrExpr_token1,
    ACTIONS(165), 1,
      aux_sym_AndExpr_token1,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1352] = 3,
    STATE(53), 1,
      sym_OrExpr,
    STATE(66), 1,
      sym_CondExpr,
    STATE(120), 1,
      sym_Expr,
  [1362] = 3,
    STATE(53), 1,
      sym_OrExpr,
    STATE(66), 1,
      sym_CondExpr,
    STATE(103), 1,
      sym_Expr,
  [1372] = 2,
    ACTIONS(167), 1,
      aux_sym_OrExpr_token1,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1380] = 3,
    STATE(70), 1,
      sym_OrExpr,
    STATE(82), 1,
      sym_CondExpr,
    STATE(93), 1,
      sym_Expr,
  [1390] = 3,
    STATE(53), 1,
      sym_OrExpr,
    STATE(66), 1,
      sym_CondExpr,
    STATE(135), 1,
      sym_Expr,
  [1400] = 3,
    STATE(53), 1,
      sym_OrExpr,
    STATE(66), 1,
      sym_CondExpr,
    STATE(113), 1,
      sym_Expr,
  [1410] = 3,
    STATE(53), 1,
      sym_OrExpr,
    STATE(66), 1,
      sym_CondExpr,
    STATE(129), 1,
      sym_Expr,
  [1420] = 3,
    STATE(70), 1,
      sym_OrExpr,
    STATE(82), 1,
      sym_CondExpr,
    STATE(91), 1,
      sym_Expr,
  [1430] = 3,
    STATE(53), 1,
      sym_OrExpr,
    STATE(66), 1,
      sym_CondExpr,
    STATE(111), 1,
      sym_Expr,
  [1440] = 3,
    STATE(70), 1,
      sym_OrExpr,
    STATE(82), 1,
      sym_CondExpr,
    STATE(90), 1,
      sym_Expr,
  [1450] = 3,
    STATE(70), 1,
      sym_OrExpr,
    STATE(82), 1,
      sym_CondExpr,
    STATE(97), 1,
      sym_Expr,
  [1460] = 3,
    STATE(53), 1,
      sym_OrExpr,
    STATE(66), 1,
      sym_CondExpr,
    STATE(132), 1,
      sym_Expr,
  [1470] = 3,
    STATE(70), 1,
      sym_OrExpr,
    STATE(82), 1,
      sym_CondExpr,
    STATE(124), 1,
      sym_Expr,
  [1480] = 3,
    STATE(53), 1,
      sym_OrExpr,
    STATE(66), 1,
      sym_CondExpr,
    STATE(112), 1,
      sym_Expr,
  [1490] = 1,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1495] = 2,
    ACTIONS(169), 1,
      aux_sym_CRStmtCRs_token1,
    STATE(117), 1,
      sym_CRStmtCRs,
  [1502] = 1,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1507] = 1,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1512] = 2,
    ACTIONS(169), 1,
      aux_sym_CRStmtCRs_token1,
    STATE(121), 1,
      sym_CRStmtCRs,
  [1519] = 2,
    ACTIONS(169), 1,
      aux_sym_CRStmtCRs_token1,
    STATE(65), 1,
      sym_CRStmtCRs,
  [1526] = 1,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1531] = 1,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1536] = 1,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1541] = 1,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1546] = 2,
    ACTIONS(183), 1,
      anon_sym_EQ,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
  [1553] = 1,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1558] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      aux_sym_CRStmtCRs_token1,
  [1565] = 1,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1570] = 2,
    ACTIONS(169), 1,
      aux_sym_CRStmtCRs_token1,
    STATE(108), 1,
      sym_CRStmtCRs,
  [1577] = 2,
    ACTIONS(169), 1,
      aux_sym_CRStmtCRs_token1,
    STATE(122), 1,
      sym_CRStmtCRs,
  [1584] = 1,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1589] = 1,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1594] = 1,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1599] = 2,
    ACTIONS(169), 1,
      aux_sym_CRStmtCRs_token1,
    STATE(62), 1,
      sym_CRStmtCRs,
  [1606] = 1,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1611] = 2,
    ACTIONS(203), 1,
      aux_sym_OptStep_token1,
    STATE(86), 1,
      sym_OptStep,
  [1618] = 1,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym_CRStmtCRs_token1,
  [1623] = 1,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
  [1627] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [1631] = 1,
    ACTIONS(211), 1,
      anon_sym_EQ,
  [1635] = 1,
    ACTIONS(213), 1,
      aux_sym_OptionalElse_token1,
  [1639] = 1,
    ACTIONS(215), 1,
      sym_ID,
  [1643] = 1,
    ACTIONS(217), 1,
      sym_ID,
  [1647] = 1,
    ACTIONS(219), 1,
      aux_sym_Stmt_token10,
  [1651] = 1,
    ACTIONS(221), 1,
      aux_sym_Stmt_token10,
  [1655] = 1,
    ACTIONS(223), 1,
      aux_sym_Stmt_token5,
  [1659] = 1,
    ACTIONS(225), 1,
      anon_sym_EQ,
  [1663] = 1,
    STATE(67), 1,
      sym_AndExpr,
  [1667] = 1,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
  [1671] = 1,
    ACTIONS(229), 1,
      aux_sym_Stmt_token8,
  [1675] = 1,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
  [1679] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [1683] = 1,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
  [1687] = 1,
    ACTIONS(237), 1,
      aux_sym_Stmt_token6,
  [1691] = 1,
    ACTIONS(229), 1,
      aux_sym_Stmt_token2,
  [1695] = 1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [1699] = 1,
    ACTIONS(241), 1,
      aux_sym_CRStmtCRs_token1,
  [1703] = 1,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
  [1707] = 1,
    ACTIONS(245), 1,
      sym_ID,
  [1711] = 1,
    ACTIONS(247), 1,
      sym_ID,
  [1715] = 1,
    STATE(52), 1,
      sym_AndExpr,
  [1719] = 1,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
  [1723] = 1,
    ACTIONS(133), 1,
      sym_ID,
  [1727] = 1,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
  [1731] = 1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [1735] = 1,
    ACTIONS(255), 1,
      sym_ID,
  [1739] = 1,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
  [1743] = 1,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
  [1747] = 1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [1751] = 1,
    ACTIONS(263), 1,
      aux_sym_CRStmtCRs_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 152,
  [SMALL_STATE(9)] = 174,
  [SMALL_STATE(10)] = 196,
  [SMALL_STATE(11)] = 224,
  [SMALL_STATE(12)] = 246,
  [SMALL_STATE(13)] = 268,
  [SMALL_STATE(14)] = 290,
  [SMALL_STATE(15)] = 312,
  [SMALL_STATE(16)] = 334,
  [SMALL_STATE(17)] = 358,
  [SMALL_STATE(18)] = 383,
  [SMALL_STATE(19)] = 405,
  [SMALL_STATE(20)] = 427,
  [SMALL_STATE(21)] = 449,
  [SMALL_STATE(22)] = 468,
  [SMALL_STATE(23)] = 487,
  [SMALL_STATE(24)] = 508,
  [SMALL_STATE(25)] = 527,
  [SMALL_STATE(26)] = 546,
  [SMALL_STATE(27)] = 567,
  [SMALL_STATE(28)] = 586,
  [SMALL_STATE(29)] = 605,
  [SMALL_STATE(30)] = 624,
  [SMALL_STATE(31)] = 643,
  [SMALL_STATE(32)] = 662,
  [SMALL_STATE(33)] = 682,
  [SMALL_STATE(34)] = 702,
  [SMALL_STATE(35)] = 721,
  [SMALL_STATE(36)] = 740,
  [SMALL_STATE(37)] = 772,
  [SMALL_STATE(38)] = 804,
  [SMALL_STATE(39)] = 833,
  [SMALL_STATE(40)] = 850,
  [SMALL_STATE(41)] = 867,
  [SMALL_STATE(42)] = 896,
  [SMALL_STATE(43)] = 924,
  [SMALL_STATE(44)] = 950,
  [SMALL_STATE(45)] = 978,
  [SMALL_STATE(46)] = 1006,
  [SMALL_STATE(47)] = 1020,
  [SMALL_STATE(48)] = 1046,
  [SMALL_STATE(49)] = 1069,
  [SMALL_STATE(50)] = 1092,
  [SMALL_STATE(51)] = 1112,
  [SMALL_STATE(52)] = 1132,
  [SMALL_STATE(53)] = 1144,
  [SMALL_STATE(54)] = 1155,
  [SMALL_STATE(55)] = 1174,
  [SMALL_STATE(56)] = 1185,
  [SMALL_STATE(57)] = 1196,
  [SMALL_STATE(58)] = 1209,
  [SMALL_STATE(59)] = 1225,
  [SMALL_STATE(60)] = 1241,
  [SMALL_STATE(61)] = 1255,
  [SMALL_STATE(62)] = 1271,
  [SMALL_STATE(63)] = 1287,
  [SMALL_STATE(64)] = 1303,
  [SMALL_STATE(65)] = 1317,
  [SMALL_STATE(66)] = 1333,
  [SMALL_STATE(67)] = 1341,
  [SMALL_STATE(68)] = 1352,
  [SMALL_STATE(69)] = 1362,
  [SMALL_STATE(70)] = 1372,
  [SMALL_STATE(71)] = 1380,
  [SMALL_STATE(72)] = 1390,
  [SMALL_STATE(73)] = 1400,
  [SMALL_STATE(74)] = 1410,
  [SMALL_STATE(75)] = 1420,
  [SMALL_STATE(76)] = 1430,
  [SMALL_STATE(77)] = 1440,
  [SMALL_STATE(78)] = 1450,
  [SMALL_STATE(79)] = 1460,
  [SMALL_STATE(80)] = 1470,
  [SMALL_STATE(81)] = 1480,
  [SMALL_STATE(82)] = 1490,
  [SMALL_STATE(83)] = 1495,
  [SMALL_STATE(84)] = 1502,
  [SMALL_STATE(85)] = 1507,
  [SMALL_STATE(86)] = 1512,
  [SMALL_STATE(87)] = 1519,
  [SMALL_STATE(88)] = 1526,
  [SMALL_STATE(89)] = 1531,
  [SMALL_STATE(90)] = 1536,
  [SMALL_STATE(91)] = 1541,
  [SMALL_STATE(92)] = 1546,
  [SMALL_STATE(93)] = 1553,
  [SMALL_STATE(94)] = 1558,
  [SMALL_STATE(95)] = 1565,
  [SMALL_STATE(96)] = 1570,
  [SMALL_STATE(97)] = 1577,
  [SMALL_STATE(98)] = 1584,
  [SMALL_STATE(99)] = 1589,
  [SMALL_STATE(100)] = 1594,
  [SMALL_STATE(101)] = 1599,
  [SMALL_STATE(102)] = 1606,
  [SMALL_STATE(103)] = 1611,
  [SMALL_STATE(104)] = 1618,
  [SMALL_STATE(105)] = 1623,
  [SMALL_STATE(106)] = 1627,
  [SMALL_STATE(107)] = 1631,
  [SMALL_STATE(108)] = 1635,
  [SMALL_STATE(109)] = 1639,
  [SMALL_STATE(110)] = 1643,
  [SMALL_STATE(111)] = 1647,
  [SMALL_STATE(112)] = 1651,
  [SMALL_STATE(113)] = 1655,
  [SMALL_STATE(114)] = 1659,
  [SMALL_STATE(115)] = 1663,
  [SMALL_STATE(116)] = 1667,
  [SMALL_STATE(117)] = 1671,
  [SMALL_STATE(118)] = 1675,
  [SMALL_STATE(119)] = 1679,
  [SMALL_STATE(120)] = 1683,
  [SMALL_STATE(121)] = 1687,
  [SMALL_STATE(122)] = 1691,
  [SMALL_STATE(123)] = 1695,
  [SMALL_STATE(124)] = 1699,
  [SMALL_STATE(125)] = 1703,
  [SMALL_STATE(126)] = 1707,
  [SMALL_STATE(127)] = 1711,
  [SMALL_STATE(128)] = 1715,
  [SMALL_STATE(129)] = 1719,
  [SMALL_STATE(130)] = 1723,
  [SMALL_STATE(131)] = 1727,
  [SMALL_STATE(132)] = 1731,
  [SMALL_STATE(133)] = 1735,
  [SMALL_STATE(134)] = 1739,
  [SMALL_STATE(135)] = 1743,
  [SMALL_STATE(136)] = 1747,
  [SMALL_STATE(137)] = 1751,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Primary, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Primary, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Idxs, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Idxs, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Primary, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Primary, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AdditiveExpr, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AdditiveExpr, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Primary, 6),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Primary, 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MultiplicativeExpr, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MultiplicativeExpr, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Idxs, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Idxs, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Primary, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Primary, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UnaryExpr, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_UnaryExpr, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UnaryExpr, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_UnaryExpr, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MultiplicativeExpr, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MultiplicativeExpr, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AdditiveExpr, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AdditiveExpr, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CompExpr, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CompExpr, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CompExpr, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CompExpr, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EqNeqExpr, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EqNeqExpr, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EqNeqExpr, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_EqNeqExpr, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AndExpr, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OrExpr, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CondExpr, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CRStmtCRs, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CRStmtCRs, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TheRest, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TheRest, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AndExpr, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanOneExpr, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Expr, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OrExpr, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmt, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmt, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OptionalElse, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanZeroElseIf, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExprStatement, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExprStatement, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExprStatement, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanOneStmt, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmt, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmt, 9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanZeroElseIf, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OptionalElse, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExprStatement, 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmt, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Start, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanOneExpr, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Prog, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [239] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OptStep, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Exprs, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MoreThanOneStmt, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
