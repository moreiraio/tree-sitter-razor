#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_ATpage = 1,
  anon_sym_AT_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_ATif = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  aux_sym_interpolated_if_statement_token1 = 7,
  anon_sym_LBRACE = 8,
  sym__code = 9,
  aux_sym_content_token1 = 10,
  anon_sym_CARET_AT = 11,
  sym_template = 12,
  sym__markup = 13,
  sym_route_declaration = 14,
  sym_interpolated_code_block = 15,
  sym_interpolated_if_statement = 16,
  sym_content = 17,
  aux_sym_template_repeat1 = 18,
  aux_sym_interpolated_if_statement_repeat1 = 19,
  aux_sym_content_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATpage] = "@page",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATif] = "@if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_interpolated_if_statement_token1] = "interpolated_if_statement_token1",
  [anon_sym_LBRACE] = "{",
  [sym__code] = "_code",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_CARET_AT] = "^@",
  [sym_template] = "template",
  [sym__markup] = "_markup",
  [sym_route_declaration] = "route_declaration",
  [sym_interpolated_code_block] = "interpolated_code_block",
  [sym_interpolated_if_statement] = "interpolated_if_statement",
  [sym_content] = "content",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_interpolated_if_statement_repeat1] = "interpolated_if_statement_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATpage] = anon_sym_ATpage,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_ATif] = anon_sym_ATif,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_interpolated_if_statement_token1] = aux_sym_interpolated_if_statement_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym__code] = sym__code,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_CARET_AT] = anon_sym_CARET_AT,
  [sym_template] = sym_template,
  [sym__markup] = sym__markup,
  [sym_route_declaration] = sym_route_declaration,
  [sym_interpolated_code_block] = sym_interpolated_code_block,
  [sym_interpolated_if_statement] = sym_interpolated_if_statement,
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
  [anon_sym_ATpage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATif] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__code] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CARET_AT] = {
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
  [sym_route_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_if_statement] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == '^') ADVANCE(2);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '@') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'g') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(3);
      if (lookahead == '{') ADVANCE(11);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == '^') ADVANCE(22);
      if (lookahead == '}') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{') ADVANCE(23);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_ATpage);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_ATif);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_interpolated_if_statement_token1);
      if (lookahead == '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_content_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '^') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_CARET_AT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATpage] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ATif] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_CARET_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(15),
    [sym__markup] = STATE(2),
    [sym_route_declaration] = STATE(2),
    [sym_interpolated_code_block] = STATE(2),
    [sym_interpolated_if_statement] = STATE(2),
    [sym_content] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATpage] = ACTIONS(5),
    [anon_sym_AT_LBRACE] = ACTIONS(7),
    [anon_sym_ATif] = ACTIONS(9),
    [aux_sym_content_token1] = ACTIONS(11),
    [anon_sym_CARET_AT] = ACTIONS(11),
  },
  [2] = {
    [sym__markup] = STATE(3),
    [sym_route_declaration] = STATE(3),
    [sym_interpolated_code_block] = STATE(3),
    [sym_interpolated_if_statement] = STATE(3),
    [sym_content] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_ATpage] = ACTIONS(5),
    [anon_sym_AT_LBRACE] = ACTIONS(7),
    [anon_sym_ATif] = ACTIONS(9),
    [aux_sym_content_token1] = ACTIONS(11),
    [anon_sym_CARET_AT] = ACTIONS(11),
  },
  [3] = {
    [sym__markup] = STATE(3),
    [sym_route_declaration] = STATE(3),
    [sym_interpolated_code_block] = STATE(3),
    [sym_interpolated_if_statement] = STATE(3),
    [sym_content] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_ATpage] = ACTIONS(17),
    [anon_sym_AT_LBRACE] = ACTIONS(20),
    [anon_sym_ATif] = ACTIONS(23),
    [aux_sym_content_token1] = ACTIONS(26),
    [anon_sym_CARET_AT] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(33), 2,
      aux_sym_content_token1,
      anon_sym_CARET_AT,
    ACTIONS(31), 4,
      anon_sym_ATpage,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_ATif,
  [17] = 4,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(39), 2,
      aux_sym_content_token1,
      anon_sym_CARET_AT,
    ACTIONS(37), 4,
      anon_sym_ATpage,
      anon_sym_AT_LBRACE,
      anon_sym_RBRACE,
      anon_sym_ATif,
  [34] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 5,
      anon_sym_ATpage,
      anon_sym_AT_LBRACE,
      anon_sym_ATif,
      aux_sym_content_token1,
      anon_sym_CARET_AT,
  [45] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 5,
      anon_sym_ATpage,
      anon_sym_AT_LBRACE,
      anon_sym_ATif,
      aux_sym_content_token1,
      anon_sym_CARET_AT,
  [56] = 4,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_content_repeat1,
    ACTIONS(11), 2,
      aux_sym_content_token1,
      anon_sym_CARET_AT,
    STATE(10), 2,
      sym_content,
      aux_sym_interpolated_if_statement_repeat1,
  [71] = 2,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 5,
      anon_sym_ATpage,
      anon_sym_AT_LBRACE,
      anon_sym_ATif,
      aux_sym_content_token1,
      anon_sym_CARET_AT,
  [82] = 4,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_content_repeat1,
    ACTIONS(11), 2,
      aux_sym_content_token1,
      anon_sym_CARET_AT,
    STATE(12), 2,
      sym_content,
      aux_sym_interpolated_if_statement_repeat1,
  [97] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 5,
      anon_sym_ATpage,
      anon_sym_AT_LBRACE,
      anon_sym_ATif,
      aux_sym_content_token1,
      anon_sym_CARET_AT,
  [108] = 4,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_content_repeat1,
    ACTIONS(64), 2,
      aux_sym_content_token1,
      anon_sym_CARET_AT,
    STATE(12), 2,
      sym_content,
      aux_sym_interpolated_if_statement_repeat1,
  [123] = 1,
    ACTIONS(67), 1,
      sym__code,
  [127] = 1,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
  [131] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [135] = 1,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
  [139] = 1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
  [143] = 1,
    ACTIONS(77), 1,
      aux_sym_interpolated_if_statement_token1,
  [147] = 1,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 34,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 71,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 97,
  [SMALL_STATE(12)] = 108,
  [SMALL_STATE(13)] = 123,
  [SMALL_STATE(14)] = 127,
  [SMALL_STATE(15)] = 131,
  [SMALL_STATE(16)] = 135,
  [SMALL_STATE(17)] = 139,
  [SMALL_STATE(18)] = 143,
  [SMALL_STATE(19)] = 147,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(6),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(14),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_declaration, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route_declaration, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_code_block, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_code_block, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_if_statement, 6),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_if_statement, 6),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_if_statement, 7),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_if_statement, 7),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_if_statement_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_if_statement_repeat1, 2), SHIFT_REPEAT(4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
