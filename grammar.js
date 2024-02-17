// Reference : https://github.com/kwanghoon/sbparser
// Our SmallBasic Parser works well for samples sb files in the directory.

module.exports = grammar({
    name: "smallbasic",

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

      Prog: $ => $.MoreThanOneStmt, // Stmt로 바로 잇는것도 고려해봐도 좋을듯.

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
        /[Ee][Nn][Dd][Ii][Ff]/, // ignoreCase("EndIf") type : string => regExp / $.EndIf ... EndIf : _ => /[Ee][Nn][Dd][Ii][Ff]/ 이렇게해도 좋지 않을까
        seq(/[Ee][Ll][Ss][Ee]/, $.CRStmtCRs, /[Ee][Nn][Dd][Ii][Ff]/)
      ),

      ExprStatement: $ => choice(
        seq($.ID, "=", $.Expr),
        seq($.ID, ".", $.ID, "=", $.Expr),
        seq($.ID, ".", $.ID, "(", optional($.Exprs), ")"), // ID.ID() Parameter X Case -> optional func
        seq($.ID, "(", ")"),
        seq($.ID, $.Idxs, "=", $.Expr)
      ),

      CRStmtCRs: $ => seq($.CR, repeat($.TheRest)),

      TheRest: $ => seq($.Stmt, $.CR),

      Exprs: $ => $.MoreThanOneExpr, 
      // 아래와 같이 하면 Exprs가 empty str과 매칭되는 케이스가 있는데, 이는 tree-sitter에서 허용 X.
      // 따라서 위와 같이 작성해주어야 한다.
      // choice(seq(), seq($.Expr, ",", $.MoreThanOneExpr)) - (X)

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
      // Identifier & String & Number & CarriageReturn & Comment
      ID: _ => /[_a-zA-Z][_a-zA-Z0-9]*/,

      STR: _ => /\"[^\"]*\"/,

      NUM: _ => /([0-9]*[.])?[0-9]+/,

      CR: _ => choice(/\r\n/, /\n/),

      Comment: _ => token(seq(/\'/, /.*/))
    }
  });