#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_ATModel = 1,
  aux_sym_model_token1 = 2,
  anon_sym_AT = 3,
  anon_sym_LPAREN_RPAREN = 4,
  anon_sym_ATViewData_LBRACK = 5,
  anon_sym_DQUOTE_RBRACK = 6,
  aux_sym_await_token1 = 7,
  anon_sym_ATpage = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_if = 11,
  anon_sym_for = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  aux_sym_interpolated_if_statement_token1 = 15,
  sym_comment = 16,
  aux_sym_content_token1 = 17,
  anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK = 18,
  sym_template = 19,
  sym__markup = 20,
  sym_model = 21,
  sym_render = 22,
  sym_viewdata = 23,
  sym_await = 24,
  sym_route_declaration = 25,
  sym_interpolated_code_block = 26,
  sym_curly_braces_content = 27,
  sym_if = 28,
  sym_for = 29,
  sym__opening_bracket = 30,
  sym__closing_bracket = 31,
  sym_interpolated_if_statement = 32,
  sym_interpolated_for_statement = 33,
  sym_content = 34,
  aux_sym_template_repeat1 = 35,
  aux_sym_interpolated_if_statement_repeat1 = 36,
  aux_sym_content_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATModel] = "@Model",
  [aux_sym_model_token1] = "model_token1",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_ATViewData_LBRACK] = "@ViewData[",
  [anon_sym_DQUOTE_RBRACK] = "\"]",
  [aux_sym_await_token1] = "await_token1",
  [anon_sym_ATpage] = "@page",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_if] = "if",
  [anon_sym_for] = "for",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_interpolated_if_statement_token1] = "interpolated_if_statement_token1",
  [sym_comment] = "comment",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = "^[@}]",
  [sym_template] = "template",
  [sym__markup] = "_markup",
  [sym_model] = "model",
  [sym_render] = "render",
  [sym_viewdata] = "viewdata",
  [sym_await] = "await",
  [sym_route_declaration] = "route_declaration",
  [sym_interpolated_code_block] = "interpolated_code_block",
  [sym_curly_braces_content] = "curly_braces_content",
  [sym_if] = "if",
  [sym_for] = "for",
  [sym__opening_bracket] = "_opening_bracket",
  [sym__closing_bracket] = "_closing_bracket",
  [sym_interpolated_if_statement] = "interpolated_if_statement",
  [sym_interpolated_for_statement] = "interpolated_for_statement",
  [sym_content] = "content",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_interpolated_if_statement_repeat1] = "interpolated_if_statement_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATModel] = anon_sym_ATModel,
  [aux_sym_model_token1] = aux_sym_model_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_ATViewData_LBRACK] = anon_sym_ATViewData_LBRACK,
  [anon_sym_DQUOTE_RBRACK] = anon_sym_DQUOTE_RBRACK,
  [aux_sym_await_token1] = aux_sym_await_token1,
  [anon_sym_ATpage] = anon_sym_ATpage,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_interpolated_if_statement_token1] = aux_sym_interpolated_if_statement_token1,
  [sym_comment] = sym_comment,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [sym_template] = sym_template,
  [sym__markup] = sym__markup,
  [sym_model] = sym_model,
  [sym_render] = sym_render,
  [sym_viewdata] = sym_viewdata,
  [sym_await] = sym_await,
  [sym_route_declaration] = sym_route_declaration,
  [sym_interpolated_code_block] = sym_interpolated_code_block,
  [sym_curly_braces_content] = sym_curly_braces_content,
  [sym_if] = sym_if,
  [sym_for] = sym_for,
  [sym__opening_bracket] = sym__opening_bracket,
  [sym__closing_bracket] = sym__closing_bracket,
  [sym_interpolated_if_statement] = sym_interpolated_if_statement,
  [sym_interpolated_for_statement] = sym_interpolated_for_statement,
  [sym_content] = sym_content,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_interpolated_if_statement_repeat1] = aux_sym_interpolated_if_statement_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATModel] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_model_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATViewData_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_await_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ATpage] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
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
  [aux_sym_interpolated_if_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__markup] = {
    .visible = false,
    .named = true,
  },
  [sym_model] = {
    .visible = true,
    .named = true,
  },
  [sym_render] = {
    .visible = true,
    .named = true,
  },
  [sym_viewdata] = {
    .visible = true,
    .named = true,
  },
  [sym_await] = {
    .visible = true,
    .named = true,
  },
  [sym_route_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_curly_braces_content] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym__opening_bracket] = {
    .visible = false,
    .named = true,
  },
  [sym__closing_bracket] = {
    .visible = false,
    .named = true,
  },
  [sym_interpolated_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolated_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
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
  [5] = 4,
  [6] = 3,
  [7] = 2,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 18,
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
  [32] = 21,
  [33] = 27,
  [34] = 26,
  [35] = 23,
  [36] = 24,
  [37] = 37,
  [38] = 31,
  [39] = 30,
  [40] = 37,
  [41] = 29,
  [42] = 28,
  [43] = 22,
  [44] = 25,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 48,
  [51] = 49,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 55,
  [58] = 52,
  [59] = 56,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 61,
  [66] = 66,
  [67] = 63,
  [68] = 66,
  [69] = 64,
  [70] = 70,
  [71] = 70,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 72,
  [76] = 76,
  [77] = 62,
  [78] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '^') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '@') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '[') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '[') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == 'w') ADVANCE(8);
      END_STATE();
    case 32:
      if (lookahead == 'w') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(12);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '^') ADVANCE(73);
      if (lookahead == '}') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{') ADVANCE(74);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_ATModel);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_model_token1);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_model_token1);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_model_token1);
      if (lookahead == 'f') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_model_token1);
      if (lookahead == 'o') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_model_token1);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_model_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_model_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == 'M') ADVANCE(27);
      if (lookahead == 'V') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_ATViewData_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DQUOTE_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_await_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_await_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_await_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_ATpage);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_interpolated_if_statement_token1);
      if (lookahead == '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(66);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_content_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '^') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '@') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 34},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 34},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 34},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 34},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 34},
  [41] = {.lex_state = 34},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 38},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 42},
  [54] = {.lex_state = 42},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 42},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 42},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 42},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 42},
  [66] = {.lex_state = 42},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 42},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATModel] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE_RBRACK] = ACTIONS(1),
    [aux_sym_await_token1] = ACTIONS(1),
    [anon_sym_ATpage] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(60),
    [sym__markup] = STATE(14),
    [sym_model] = STATE(14),
    [sym_render] = STATE(14),
    [sym_viewdata] = STATE(14),
    [sym_await] = STATE(14),
    [sym_route_declaration] = STATE(14),
    [sym_interpolated_code_block] = STATE(14),
    [sym_interpolated_if_statement] = STATE(14),
    [sym_interpolated_for_statement] = STATE(14),
    [sym_content] = STATE(14),
    [aux_sym_template_repeat1] = STATE(14),
    [aux_sym_content_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATModel] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(9),
    [aux_sym_await_token1] = ACTIONS(11),
    [anon_sym_ATpage] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [aux_sym_content_token1] = ACTIONS(17),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(17),
  },
  [2] = {
    [sym__markup] = STATE(11),
    [sym_model] = STATE(11),
    [sym_render] = STATE(11),
    [sym_viewdata] = STATE(11),
    [sym_await] = STATE(11),
    [sym_route_declaration] = STATE(11),
    [sym_interpolated_code_block] = STATE(11),
    [sym__closing_bracket] = STATE(42),
    [sym_interpolated_if_statement] = STATE(11),
    [sym_interpolated_for_statement] = STATE(11),
    [sym_content] = STATE(11),
    [aux_sym_template_repeat1] = STATE(11),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(23),
    [aux_sym_await_token1] = ACTIONS(25),
    [anon_sym_ATpage] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [aux_sym_content_token1] = ACTIONS(33),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(33),
  },
  [3] = {
    [sym__markup] = STATE(7),
    [sym_model] = STATE(7),
    [sym_render] = STATE(7),
    [sym_viewdata] = STATE(7),
    [sym_await] = STATE(7),
    [sym_route_declaration] = STATE(7),
    [sym_interpolated_code_block] = STATE(7),
    [sym__closing_bracket] = STATE(30),
    [sym_interpolated_if_statement] = STATE(7),
    [sym_interpolated_for_statement] = STATE(7),
    [sym_content] = STATE(7),
    [aux_sym_template_repeat1] = STATE(7),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(23),
    [aux_sym_await_token1] = ACTIONS(25),
    [anon_sym_ATpage] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
    [aux_sym_content_token1] = ACTIONS(33),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(33),
  },
  [4] = {
    [sym__markup] = STATE(8),
    [sym_model] = STATE(8),
    [sym_render] = STATE(8),
    [sym_viewdata] = STATE(8),
    [sym_await] = STATE(8),
    [sym_route_declaration] = STATE(8),
    [sym_interpolated_code_block] = STATE(8),
    [sym__closing_bracket] = STATE(32),
    [sym_interpolated_if_statement] = STATE(8),
    [sym_interpolated_for_statement] = STATE(8),
    [sym_content] = STATE(8),
    [aux_sym_template_repeat1] = STATE(8),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(23),
    [aux_sym_await_token1] = ACTIONS(25),
    [anon_sym_ATpage] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
    [aux_sym_content_token1] = ACTIONS(33),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(33),
  },
  [5] = {
    [sym__markup] = STATE(9),
    [sym_model] = STATE(9),
    [sym_render] = STATE(9),
    [sym_viewdata] = STATE(9),
    [sym_await] = STATE(9),
    [sym_route_declaration] = STATE(9),
    [sym_interpolated_code_block] = STATE(9),
    [sym__closing_bracket] = STATE(21),
    [sym_interpolated_if_statement] = STATE(9),
    [sym_interpolated_for_statement] = STATE(9),
    [sym_content] = STATE(9),
    [aux_sym_template_repeat1] = STATE(9),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(23),
    [aux_sym_await_token1] = ACTIONS(25),
    [anon_sym_ATpage] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(45),
    [aux_sym_content_token1] = ACTIONS(33),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(33),
  },
  [6] = {
    [sym__markup] = STATE(2),
    [sym_model] = STATE(2),
    [sym_render] = STATE(2),
    [sym_viewdata] = STATE(2),
    [sym_await] = STATE(2),
    [sym_route_declaration] = STATE(2),
    [sym_interpolated_code_block] = STATE(2),
    [sym__closing_bracket] = STATE(39),
    [sym_interpolated_if_statement] = STATE(2),
    [sym_interpolated_for_statement] = STATE(2),
    [sym_content] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(23),
    [aux_sym_await_token1] = ACTIONS(25),
    [anon_sym_ATpage] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
    [aux_sym_content_token1] = ACTIONS(33),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(33),
  },
  [7] = {
    [sym__markup] = STATE(11),
    [sym_model] = STATE(11),
    [sym_render] = STATE(11),
    [sym_viewdata] = STATE(11),
    [sym_await] = STATE(11),
    [sym_route_declaration] = STATE(11),
    [sym_interpolated_code_block] = STATE(11),
    [sym__closing_bracket] = STATE(28),
    [sym_interpolated_if_statement] = STATE(11),
    [sym_interpolated_for_statement] = STATE(11),
    [sym_content] = STATE(11),
    [aux_sym_template_repeat1] = STATE(11),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(23),
    [aux_sym_await_token1] = ACTIONS(25),
    [anon_sym_ATpage] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(51),
    [sym_comment] = ACTIONS(31),
    [aux_sym_content_token1] = ACTIONS(33),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(33),
  },
  [8] = {
    [sym__markup] = STATE(11),
    [sym_model] = STATE(11),
    [sym_render] = STATE(11),
    [sym_viewdata] = STATE(11),
    [sym_await] = STATE(11),
    [sym_route_declaration] = STATE(11),
    [sym_interpolated_code_block] = STATE(11),
    [sym__closing_bracket] = STATE(29),
    [sym_interpolated_if_statement] = STATE(11),
    [sym_interpolated_for_statement] = STATE(11),
    [sym_content] = STATE(11),
    [aux_sym_template_repeat1] = STATE(11),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(23),
    [aux_sym_await_token1] = ACTIONS(25),
    [anon_sym_ATpage] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(53),
    [sym_comment] = ACTIONS(31),
    [aux_sym_content_token1] = ACTIONS(33),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(33),
  },
  [9] = {
    [sym__markup] = STATE(11),
    [sym_model] = STATE(11),
    [sym_render] = STATE(11),
    [sym_viewdata] = STATE(11),
    [sym_await] = STATE(11),
    [sym_route_declaration] = STATE(11),
    [sym_interpolated_code_block] = STATE(11),
    [sym__closing_bracket] = STATE(41),
    [sym_interpolated_if_statement] = STATE(11),
    [sym_interpolated_for_statement] = STATE(11),
    [sym_content] = STATE(11),
    [aux_sym_template_repeat1] = STATE(11),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(23),
    [aux_sym_await_token1] = ACTIONS(25),
    [anon_sym_ATpage] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(55),
    [sym_comment] = ACTIONS(31),
    [aux_sym_content_token1] = ACTIONS(33),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(33),
  },
  [10] = {
    [sym__markup] = STATE(13),
    [sym_model] = STATE(13),
    [sym_render] = STATE(13),
    [sym_viewdata] = STATE(13),
    [sym_await] = STATE(13),
    [sym_route_declaration] = STATE(13),
    [sym_interpolated_code_block] = STATE(13),
    [sym_interpolated_if_statement] = STATE(13),
    [sym_interpolated_for_statement] = STATE(13),
    [sym_content] = STATE(13),
    [aux_sym_template_repeat1] = STATE(13),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(23),
    [aux_sym_await_token1] = ACTIONS(25),
    [anon_sym_ATpage] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym_comment] = ACTIONS(59),
    [aux_sym_content_token1] = ACTIONS(33),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(33),
  },
  [11] = {
    [sym__markup] = STATE(11),
    [sym_model] = STATE(11),
    [sym_render] = STATE(11),
    [sym_viewdata] = STATE(11),
    [sym_await] = STATE(11),
    [sym_route_declaration] = STATE(11),
    [sym_interpolated_code_block] = STATE(11),
    [sym_interpolated_if_statement] = STATE(11),
    [sym_interpolated_for_statement] = STATE(11),
    [sym_content] = STATE(11),
    [aux_sym_template_repeat1] = STATE(11),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(61),
    [anon_sym_AT] = ACTIONS(64),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(67),
    [aux_sym_await_token1] = ACTIONS(70),
    [anon_sym_ATpage] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(76),
    [sym_comment] = ACTIONS(78),
    [aux_sym_content_token1] = ACTIONS(81),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(81),
  },
  [12] = {
    [sym__markup] = STATE(15),
    [sym_model] = STATE(15),
    [sym_render] = STATE(15),
    [sym_viewdata] = STATE(15),
    [sym_await] = STATE(15),
    [sym_route_declaration] = STATE(15),
    [sym_interpolated_code_block] = STATE(15),
    [sym_interpolated_if_statement] = STATE(15),
    [sym_interpolated_for_statement] = STATE(15),
    [sym_content] = STATE(15),
    [aux_sym_template_repeat1] = STATE(15),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(23),
    [aux_sym_await_token1] = ACTIONS(25),
    [anon_sym_ATpage] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(84),
    [sym_comment] = ACTIONS(86),
    [aux_sym_content_token1] = ACTIONS(33),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(33),
  },
  [13] = {
    [sym__markup] = STATE(11),
    [sym_model] = STATE(11),
    [sym_render] = STATE(11),
    [sym_viewdata] = STATE(11),
    [sym_await] = STATE(11),
    [sym_route_declaration] = STATE(11),
    [sym_interpolated_code_block] = STATE(11),
    [sym_interpolated_if_statement] = STATE(11),
    [sym_interpolated_for_statement] = STATE(11),
    [sym_content] = STATE(11),
    [aux_sym_template_repeat1] = STATE(11),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(23),
    [aux_sym_await_token1] = ACTIONS(25),
    [anon_sym_ATpage] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(31),
    [aux_sym_content_token1] = ACTIONS(33),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(33),
  },
  [14] = {
    [sym__markup] = STATE(16),
    [sym_model] = STATE(16),
    [sym_render] = STATE(16),
    [sym_viewdata] = STATE(16),
    [sym_await] = STATE(16),
    [sym_route_declaration] = STATE(16),
    [sym_interpolated_code_block] = STATE(16),
    [sym_interpolated_if_statement] = STATE(16),
    [sym_interpolated_for_statement] = STATE(16),
    [sym_content] = STATE(16),
    [aux_sym_template_repeat1] = STATE(16),
    [aux_sym_content_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_ATModel] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(9),
    [aux_sym_await_token1] = ACTIONS(11),
    [anon_sym_ATpage] = ACTIONS(13),
    [sym_comment] = ACTIONS(92),
    [aux_sym_content_token1] = ACTIONS(17),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(17),
  },
  [15] = {
    [sym__markup] = STATE(11),
    [sym_model] = STATE(11),
    [sym_render] = STATE(11),
    [sym_viewdata] = STATE(11),
    [sym_await] = STATE(11),
    [sym_route_declaration] = STATE(11),
    [sym_interpolated_code_block] = STATE(11),
    [sym_interpolated_if_statement] = STATE(11),
    [sym_interpolated_for_statement] = STATE(11),
    [sym_content] = STATE(11),
    [aux_sym_template_repeat1] = STATE(11),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_ATModel] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(23),
    [aux_sym_await_token1] = ACTIONS(25),
    [anon_sym_ATpage] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(94),
    [sym_comment] = ACTIONS(31),
    [aux_sym_content_token1] = ACTIONS(33),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(33),
  },
  [16] = {
    [sym__markup] = STATE(16),
    [sym_model] = STATE(16),
    [sym_render] = STATE(16),
    [sym_viewdata] = STATE(16),
    [sym_await] = STATE(16),
    [sym_route_declaration] = STATE(16),
    [sym_interpolated_code_block] = STATE(16),
    [sym_interpolated_if_statement] = STATE(16),
    [sym_interpolated_for_statement] = STATE(16),
    [sym_content] = STATE(16),
    [aux_sym_template_repeat1] = STATE(16),
    [aux_sym_content_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_ATModel] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(101),
    [anon_sym_ATViewData_LBRACK] = ACTIONS(104),
    [aux_sym_await_token1] = ACTIONS(107),
    [anon_sym_ATpage] = ACTIONS(110),
    [sym_comment] = ACTIONS(113),
    [aux_sym_content_token1] = ACTIONS(116),
    [anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK] = ACTIONS(116),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(18), 1,
      aux_sym_content_repeat1,
    ACTIONS(121), 2,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
    ACTIONS(119), 7,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
  [17] = 3,
    STATE(18), 1,
      aux_sym_content_repeat1,
    ACTIONS(125), 2,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
    ACTIONS(123), 7,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
  [34] = 4,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_content_repeat1,
    ACTIONS(130), 2,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
    ACTIONS(119), 6,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
  [53] = 4,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_content_repeat1,
    ACTIONS(134), 2,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
    ACTIONS(123), 6,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
  [72] = 2,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 8,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [86] = 2,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 8,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [100] = 2,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 8,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [114] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 8,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [128] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 8,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [142] = 2,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 8,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [156] = 2,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 8,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [170] = 1,
    ACTIONS(165), 9,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [182] = 1,
    ACTIONS(167), 9,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [194] = 1,
    ACTIONS(169), 9,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [206] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 8,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [220] = 1,
    ACTIONS(139), 9,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [232] = 1,
    ACTIONS(163), 9,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [244] = 1,
    ACTIONS(159), 9,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [256] = 1,
    ACTIONS(147), 9,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [268] = 1,
    ACTIONS(151), 9,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [280] = 1,
    ACTIONS(175), 9,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [292] = 1,
    ACTIONS(173), 9,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [304] = 2,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 8,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [318] = 2,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 8,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [332] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 8,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [346] = 2,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 8,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [360] = 1,
    ACTIONS(143), 9,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [372] = 1,
    ACTIONS(155), 9,
      anon_sym_ATModel,
      anon_sym_AT,
      anon_sym_ATViewData_LBRACK,
      aux_sym_await_token1,
      anon_sym_ATpage,
      anon_sym_RBRACE,
      sym_comment,
      aux_sym_content_token1,
      anon_sym_CARET_LBRACK_AT_RBRACE_RBRACK,
  [384] = 7,
    ACTIONS(185), 1,
      aux_sym_model_token1,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_if,
    ACTIONS(191), 1,
      anon_sym_for,
    STATE(40), 1,
      sym_curly_braces_content,
    STATE(62), 1,
      sym_if,
    STATE(74), 1,
      sym_for,
  [406] = 7,
    ACTIONS(189), 1,
      anon_sym_if,
    ACTIONS(191), 1,
      anon_sym_for,
    ACTIONS(193), 1,
      aux_sym_model_token1,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_curly_braces_content,
    STATE(77), 1,
      sym_if,
    STATE(78), 1,
      sym_for,
  [428] = 3,
    ACTIONS(197), 1,
      aux_sym_model_token1,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_interpolated_if_statement_repeat1,
  [438] = 3,
    ACTIONS(202), 1,
      aux_sym_model_token1,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_interpolated_if_statement_repeat1,
  [448] = 3,
    ACTIONS(202), 1,
      aux_sym_model_token1,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_interpolated_if_statement_repeat1,
  [458] = 3,
    ACTIONS(202), 1,
      aux_sym_model_token1,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_interpolated_if_statement_repeat1,
  [468] = 3,
    ACTIONS(202), 1,
      aux_sym_model_token1,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_interpolated_if_statement_repeat1,
  [478] = 2,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym__opening_bracket,
  [485] = 2,
    ACTIONS(214), 1,
      aux_sym_model_token1,
    STATE(50), 1,
      aux_sym_interpolated_if_statement_repeat1,
  [492] = 2,
    ACTIONS(216), 1,
      aux_sym_model_token1,
    STATE(48), 1,
      aux_sym_interpolated_if_statement_repeat1,
  [499] = 2,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym__opening_bracket,
  [506] = 2,
    ACTIONS(220), 1,
      aux_sym_model_token1,
    STATE(49), 1,
      aux_sym_interpolated_if_statement_repeat1,
  [513] = 2,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      sym__opening_bracket,
  [520] = 2,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym__opening_bracket,
  [527] = 2,
    ACTIONS(226), 1,
      aux_sym_model_token1,
    STATE(51), 1,
      aux_sym_interpolated_if_statement_repeat1,
  [534] = 1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [538] = 1,
    ACTIONS(230), 1,
      aux_sym_model_token1,
  [542] = 1,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
  [546] = 1,
    ACTIONS(234), 1,
      anon_sym_LPAREN_RPAREN,
  [550] = 1,
    ACTIONS(236), 1,
      anon_sym_DQUOTE_RBRACK,
  [554] = 1,
    ACTIONS(238), 1,
      aux_sym_model_token1,
  [558] = 1,
    ACTIONS(240), 1,
      aux_sym_model_token1,
  [562] = 1,
    ACTIONS(242), 1,
      anon_sym_LPAREN_RPAREN,
  [566] = 1,
    ACTIONS(244), 1,
      aux_sym_model_token1,
  [570] = 1,
    ACTIONS(246), 1,
      anon_sym_DQUOTE_RBRACK,
  [574] = 1,
    ACTIONS(248), 1,
      aux_sym_interpolated_if_statement_token1,
  [578] = 1,
    ACTIONS(250), 1,
      aux_sym_interpolated_if_statement_token1,
  [582] = 1,
    ACTIONS(252), 1,
      aux_sym_interpolated_if_statement_token1,
  [586] = 1,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
  [590] = 1,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
  [594] = 1,
    ACTIONS(258), 1,
      aux_sym_interpolated_if_statement_token1,
  [598] = 1,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
  [602] = 1,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
  [606] = 1,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 17,
  [SMALL_STATE(19)] = 34,
  [SMALL_STATE(20)] = 53,
  [SMALL_STATE(21)] = 72,
  [SMALL_STATE(22)] = 86,
  [SMALL_STATE(23)] = 100,
  [SMALL_STATE(24)] = 114,
  [SMALL_STATE(25)] = 128,
  [SMALL_STATE(26)] = 142,
  [SMALL_STATE(27)] = 156,
  [SMALL_STATE(28)] = 170,
  [SMALL_STATE(29)] = 182,
  [SMALL_STATE(30)] = 194,
  [SMALL_STATE(31)] = 206,
  [SMALL_STATE(32)] = 220,
  [SMALL_STATE(33)] = 232,
  [SMALL_STATE(34)] = 244,
  [SMALL_STATE(35)] = 256,
  [SMALL_STATE(36)] = 268,
  [SMALL_STATE(37)] = 280,
  [SMALL_STATE(38)] = 292,
  [SMALL_STATE(39)] = 304,
  [SMALL_STATE(40)] = 318,
  [SMALL_STATE(41)] = 332,
  [SMALL_STATE(42)] = 346,
  [SMALL_STATE(43)] = 360,
  [SMALL_STATE(44)] = 372,
  [SMALL_STATE(45)] = 384,
  [SMALL_STATE(46)] = 406,
  [SMALL_STATE(47)] = 428,
  [SMALL_STATE(48)] = 438,
  [SMALL_STATE(49)] = 448,
  [SMALL_STATE(50)] = 458,
  [SMALL_STATE(51)] = 468,
  [SMALL_STATE(52)] = 478,
  [SMALL_STATE(53)] = 485,
  [SMALL_STATE(54)] = 492,
  [SMALL_STATE(55)] = 499,
  [SMALL_STATE(56)] = 506,
  [SMALL_STATE(57)] = 513,
  [SMALL_STATE(58)] = 520,
  [SMALL_STATE(59)] = 527,
  [SMALL_STATE(60)] = 534,
  [SMALL_STATE(61)] = 538,
  [SMALL_STATE(62)] = 542,
  [SMALL_STATE(63)] = 546,
  [SMALL_STATE(64)] = 550,
  [SMALL_STATE(65)] = 554,
  [SMALL_STATE(66)] = 558,
  [SMALL_STATE(67)] = 562,
  [SMALL_STATE(68)] = 566,
  [SMALL_STATE(69)] = 570,
  [SMALL_STATE(70)] = 574,
  [SMALL_STATE(71)] = 578,
  [SMALL_STATE(72)] = 582,
  [SMALL_STATE(73)] = 586,
  [SMALL_STATE(74)] = 590,
  [SMALL_STATE(75)] = 594,
  [SMALL_STATE(76)] = 598,
  [SMALL_STATE(77)] = 602,
  [SMALL_STATE(78)] = 606,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(61),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(46),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(68),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(43),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(44),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(11),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(17),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(65),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(45),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(66),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(22),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(25),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(16),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(19),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(20),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_if_statement, 8),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_if_statement, 8),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_await, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_braces_content, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_braces_content, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_render, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_render, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_declaration, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_declaration, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_viewdata, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_viewdata, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_braces_content, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_braces_content, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_for_statement, 9),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_if_statement, 9),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_for_statement, 8),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_code_block, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_for_statement, 8),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_code_block, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_if_statement, 9),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_for_statement, 9),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_if_statement_repeat1, 2), SHIFT_REPEAT(47),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_if_statement_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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

TS_PUBLIC const TSLanguage *tree_sitter_razor() {
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
