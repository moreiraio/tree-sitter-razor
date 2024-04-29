module.exports = grammar({
  name: "razor",

    //extras: $ => [] in your grammar
    extras: $ => [
      //Space
      /\s/,
  ],

  conflicts: $ => [
    [$.comment,$.content ]

  ],

  rules: {
    template: $ => repeat(
      $._markup
    ),


        _markup: $ => choice(
            $.route_declaration,
            $.interpolated_code_block,
            $.interpolated_if_statement,
            $.interpolated_for_statement,
            //$.code_block,
            $.comment,
            $.render,
            $.viewdata,
            $.model,
            $.await,
            $.content,

            // other interpolated control flow statements ...
        ),

      model: $ =>  seq("@Model",/.?[A-z0-9]*/),
      render: $ =>  seq("@",/.?[A-z0-9]*/,"()"),
      viewdata: $ =>  seq("@ViewData[",/.?[A-z0-9]*/,"\"]",),
      await: $ =>  seq(/@await(.?[A-z0-9])*(.*)/),

        route_declaration: $ => seq("@page"),

        interpolated_code_block: $ => seq('@',$.curly_braces_content),


        curly_braces_content: $ =>
          seq(
            '{',
            repeat($._markup),
            '}'
          ),

        // Unicode categories: L = Letter, Nl Letter_Number, = Nd = Decimal_Number, Pc = Connector_Punctuation, Cf = Format, Mn = Nonspacing_Mark, Mc = Spacing_Mark
        _identifier_token: $ => token(seq(optional('@'), /[\p{L}\p{Nl}_][\p{L}\p{Nl}\p{Nd}\p{Pc}\p{Cf}\p{Mn}\p{Mc}]*/)),
        //identifier: $ => choice($._identifier_token, $._contextual_keywords),


        //cscode: $ => /[^\{\}].*/,

        if: $ => seq("if"),
        for: $ => seq("for"),
        _opening_bracket : $ => seq("{"),
        _closing_bracket : $ => seq("}"),

        interpolated_if_statement: $ => seq(
          '@', $.if, '(',
          repeat1(/.?[A-z0-9]*/),
          ')'
          ,/\n/,
          $._opening_bracket, repeat($._markup), $._closing_bracket

        ),
        interpolated_for_statement: $ => seq(
          '@', $.for, '(',
          repeat1(/.?[A-z0-9]*/),
          ')'
          ,/\n/,
          $._opening_bracket, repeat($._markup), $._closing_bracket

        ),

        comment: $ => token(choice(
        seq('//', /[^\n\r]*/),
        seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
        )
        )),

        code_block: $ => seq('{', repeat($._markup), '}'),

      cscode: $ => /[\p{L}\p{Nl}_][\p{L}\p{Nl}\p{Nd}\p{Pc}\p{Cf}\p{Mn}\p{Mc}\s]*/,
      _code: $ => /.*/,


    // All other content
    //content: $ => /([^\@]|\@[{])+/
    content: $ => prec.right(repeat1(choice(/[^<@(){}]+|</, '^[@}]'))),
  }
});

function commaSep (rule) {
  return optional(seq(rule, repeat(seq(',', rule))));
}
