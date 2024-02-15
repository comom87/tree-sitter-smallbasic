module.exports = grammar({
    name: "nodejs",

    // 공백 문자 혹은 주석 관련 심볼 처리
    // \s : 공백 문자 처리(Space/Tab/CR/NewLine/VerticalTab)
    // \p{Zs} : 유니코드 공백문자 처리
    // \uFEFF : 바이트 순서 표시
    // \u2028 : Line Separator
    // \u2029 : Paragraph Separator
    // \u2060 : Word Joiner
    extras: $ => [
      $.Comment,
      /[\s\t\p{Zs}\uFEFF\u2028\u2029\u2060\u200B]/
    ],
  
    rules: {
      // Non-Terminal
      Start: $ => repeat($.Prog),

      Prog: $ => $.MoreThanOneStmt,

      MoreThanOneStmt: $ => $.Stmt,

      OptStep: $ => seq(/[Ss][Tt][Ee][Pp]/, $.Expr),

      Stmt: $ => choice(
        $.ExprStatement,
        seq(/[Ww][Hh][Ii][Ll][Ee]/, $.Expr, repeat($.CRStmtCRs), /[Ee][Nn][Dd][Ww][Hh][Ii][Ll][Ee]/),
        seq($.ID, ":"),
        seq(/[Gg][Oo][Tt][Oo]/, $.ID),
        seq(/[Ff][Oo][Rr]/, $.ID, "=", $.Expr, /[Tt][Oo]/, $.Expr, optional($.OptStep), repeat($.CRStmtCRs), /[Ee][Nn][Dd][Ff][Oo][Rr]/),
        seq(/[Ss][Uu][Bb]/, $.ID, $.CRStmtCRs, /[Ee][Nn][Dd][Ss][Uu][Bb]/),
        seq(/[Ii][Ff]/, $.Expr, /[Tt][Hh][Ee][Nn]/, repeat($.CRStmtCRs), $.MoreThanZeroElseIf)
      ),
      
      MoreThanZeroElseIf: $ => choice(
        $.OptionalElse,
        seq(/[Ee][Ll][Ss][Ee][Ii][Ff]/, $.Expr, /[Tt][Hh][Ee][Nn]/, repeat($.CRStmtCRs), $.MoreThanZeroElseIf)
      ),

      OptionalElse: $ => choice(
        /[Ee][Nn][Dd][Ii][Ff]/,
        seq(/[Ee][Ll][Ss][Ee]/, $.CRStmtCRs, /[Ee][Nn][Dd][Ii][Ff]/)
      ),

      ExprStatement: $ => choice(
        seq($.ID, "=", $.Expr),
        seq($.ID, ".", $.ID, "=", $.Expr),
        seq($.ID, ".", $.ID, "(", optional($.Exprs), ")"),
        seq($.ID, "(", ")"),
        seq($.ID, $.Idxs, "=", $.Expr)
      ),

      CRStmtCRs: $ => seq($.CR, repeat($.TheRest)),

      TheRest: $ => seq($.Stmt, $.CR),

      Exprs: $ => $.MoreThanOneExpr,

      MoreThanOneExpr: $ => choice(
        $.Expr,
        seq($.Expr, ",", $.MoreThanOneExpr)
      ),

      Expr: $ => $.CondExpr,

      CondExpr: $ => $.OrExpr,

      OrExpr: $ => choice(
        seq($.OrExpr, /[Oo][Rr]/, $.AndExpr),
        $.AndExpr
      ),

      AndExpr: $ => choice(
        seq($.AndExpr, /[Aa][Nn][Dd]/, $.EqNeqExpr),
        $.EqNeqExpr
      ),

      EqNeqExpr: $ => choice(
        seq($.EqNeqExpr, "=", $.CompExpr),
        seq($.EqNeqExpr, "<>", $.CompExpr),
        $.CompExpr
      ),

      CompExpr: $ => choice(
        seq($.CompExpr, "<", $.AdditiveExpr),
        seq($.CompExpr, "<=", $.AdditiveExpr),
        seq($.CompExpr, ">", $.AdditiveExpr),
        seq($.CompExpr, ">=", $.AdditiveExpr),
        $.AdditiveExpr
      ),

      AdditiveExpr: $ => choice(
        seq($.AdditiveExpr, "+", $.MultiplicativeExpr),
        seq($.AdditiveExpr, "-", $.MultiplicativeExpr),
        $.MultiplicativeExpr
      ),

      MultiplicativeExpr: $ => choice(
        seq($.MultiplicativeExpr, "*", $.UnaryExpr),
        seq($.MultiplicativeExpr, "/", $.UnaryExpr),
        $.UnaryExpr,
      ),

      UnaryExpr: $ => choice(
        seq("-", $.Primary),
        $.Primary
      ),

      Primary: $ => choice(
        $.NUM,
        $.STR,
        seq("(", $.Expr, ")"),
        $.ID,
        seq($.ID, ".", $.ID),
        seq($.ID, ".", $.ID, "(", optional($.Exprs), ")"),
        seq($.ID, $.Idxs)
      ),

      Idxs: $ => choice(
        seq("[", $.Expr, "]"),
        seq("[", $.Expr, "]", $.Idxs)
      ),

      // Terminal
      ID: _ => /[_a-zA-Z][_a-zA-Z0-9]*/,

      STR: _ => /\"[^\"]*\"/,

      NUM: _ => /([0-9]*[.])?[0-9]+/,

      CR: _ => choice(/\r\n/, /\n/),

      Comment: _ => token(seq(/\'/, /.*/))
      
      // // Non-Terminals
      // Start: $ => $.Prog,

      // Prog: $ => $.MoreThanOneStmt,

      // Stmt: $ => choice(
      //   $.ExprStatement,
      //   seq( /[Ww][Hh][Ii][Ll][Ee]/,  $.Expr, $.CRStmtCRs, /[Ee][Nn][Dd][Ww][Hh][Ii][Ll][Ee]/),
      //   seq($.ID, ":"),
      //   seq(/[Gg][Oo][Tt][Oo]/, $.ID),
      //   seq(/[Ff][Oo][Rr]/, $.ID, "=", $.Expr, /[Tt][Oo]/, $.Expr, $.OptStep, $.CRStmtCRs, /[Ee][Nn][Dd][Ff][Oo][Rr]/),
      //   seq(/[Ss][Uu][Bb]/, $.ID, $.CRStmtCRs, /[Ee][Nn][Dd][Ss][Uu][Bb]/),
      //   seq(/[Ii][Ff]/, $.Expr, /[Tt][Hh][Ee][Nn]/, $.CRStmtCRs, $.MoreThanZeroElseIf),
      //   // *공백이 오는 경우 표현(확인 후 작성 필요)
      // ),

      // MoreThanZeroElseIf: $ => choice(
      //   $.OptionalElse,
      //   seq(/[Ee][Ll][Ss][Ee][Ii][Ff]/, $.Expr, /[Tt][Hh][Ee][Nn]/, $.CRStmtCRs, $.MoreThanZeroElseIf),
      // ),
      
      // OptionalElse: $ => choice(
      //   /[Ee][Nn][Dd][Ii][Ff]/,
      //   seq(/[Ee][Ll][Ss][Ee]/, $.CRStmtCRs, /[Ee][Nn][Dd][Ii][Ff]/)
      // ),

      // ExprStatement: $ => choice(
      //   seq($.ID, "=", $.Expr),
      //   seq($.ID, ".", $.ID, "=", $.Expr),
      //   seq($.ID, ".", $.ID, "(", $.Exprs, ")"),
      //   seq($.ID, "(", ")"),
      //   seq($.ID, $.Idxs, "=", $.Expr),
      // ),
      
      // // CRStmtCRS -> CR TheRest
      // // CR은 다음 2가지 "\r\n" or "\n"
      // // "\r\n" or "\n" 정규표현식 : /\r\n|\n/ 캐리지리턴이 있거나 없거나 둘 중 하나
      // CRStmtCRs: $ => seq(choice(/\r\n|\n/) ,$.TheRest),

      // TheRest: $ => choice(
      //   // *공백이 오는 경우 표현(확인 후 작성 필요)
      //   seq($.Stmt, choice(/\r\n|\n/), $.TheRest),
      // ),

      // MoreThanOneStmt: $ => choice(
      //   $.Stmt,
      //   seq($.Stmt, choice(/\r\n|\n/), $.MoreThanOneStmt),
      // ),

      // OptStep: $ => choice(
      //   // *공백이 오는 경우 표현(확인 후 작성 필요),
      //   seq(/[Ss][Tt][Ee][Pp]/, $.Expr),
      // ),

      // Expr: $ => $.CondExpr,

      // Exprs: $ => choice(
      //   // *공백이 오는 경우 표현(확인 후 작성 필요),
      //   $.MoreThanOneExpr,
      // ),

      // MoreThanOneExpr: $ => choice(
      //   $.Expr,
      //   seq($.Expr, $.MoreThanOneExpr),
      // ),

      // CondExpr: $ => $.OrExpr,

      // OrExpr: $ => choice(
      //   seq($.OrExpr, /[Oo][Rr]/, $.AndExpr),
      // ),

      // AndExpr: $ => choice(
      //   seq($.AndExpr, /[Aa][Nn][Dd]/, $.EqNeqExpr),
      // ),
      
      // // <>의 뜻은 NotEqual(!=와 같음)
      // EqNeqExpr: $ => choice(
      //   seq($.EqNeqExpr, "=", $.CompExpr),
      //   seq($.EqNeqExpr, "<>", $.CompExpr),
      //   $.CompExpr,
      // ),

      // CompExpr: $ => choice(
      //   seq($.CompExpr, "<", $.AdditiveExpr),
      //   seq($.CompExpr, "<=", $.AdditiveExpr),
      //   seq($.CompExpr, ">", $.AdditiveExpr),
      //   seq($.CompExpr, ">=", $.AdditiveExpr),
      //   $.AdditiveExpr,
      // ),

      // AdditiveExpr: $ => choice(
      //   seq($.AdditiveExpr, "+", $.MultiplicativeExpr),
      //   seq($.AdditiveExpr, "-", $.MultiplicativeExpr),
      //   $.MultiplicativeExpr
      // ),

      // MultiplicativeExpr: $ => choice(
      //   seq($.MultiplicativeExpr, "*", $.UnaryExpr),
      //   seq($.MultiplicativeExpr, "/", $.UnaryExpr),
      //   $.UnaryExpr
      // ),

      // UnaryExpr: $ => choice(
      //   seq("-", $.Primary),
      //   $.Primary
      // ),

      // Primary: $ => choice(
      //   /([0-9]*[.])?[0-9]+/,
      //   /\"[^\"]*\"/,
      //   seq("(", $.Expr, ")"),
      //   $.ID,
      //   seq($.ID, ".", $.ID),
      //   seq($.ID, ".", $.ID, "(", $.Exprs, ")"),
      //   seq($.ID, $.Idxs)
      // ),

      // Idxs: $ => choice(
      //   seq("[", $.Expr, "]"),
      //   seq("[", $.Expr, "]", $.Idxs)
      // ),

      // // Terminals
      // ID: _ => /[_a-zA-Z][_a-zA-Z0-9]*/

    }
  });