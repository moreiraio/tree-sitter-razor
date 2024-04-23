module.exports = grammar({
  name: "razor",

    //extras: $ => [] in your grammar
    extras: $ => [
      //Space
      /\s/,
  ],

  rules: {
    template: $ => repeat(
      $._markup
    ),


        _markup: $ => choice(
            $.route_declaration,
            $.interpolated_code_block,
            $.interpolated_if_statement,
            //$.code_block,
            $.content,

            // other interpolated control flow statements ...
        ),

        route_declaration: $ => seq("@page"),

        interpolated_code_block: $ => seq('@{', $._code, '}'),

        interpolated_if_statement: $ => seq(
          '@if', '(',')',/\n/,
          '{', repeat($.content), '}'

        ),

        code_block: $ => seq('{', $._code, '}'),

        _code: $ => /.*/,


    // All other content
    //content: $ => /([^\@]|\@[{])+/
    content: $ => prec.right(repeat1(choice(/[^<@(){}]+|</, '^@'))),
  }
});

function commaSep (rule) {
  return optional(seq(rule, repeat(seq(',', rule))));
}
