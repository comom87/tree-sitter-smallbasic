module.exports = grammar({
  // 적용하고자 하는 프로그래밍언어를 관례적으로 작성(기능상에 문제는 X)
  // 추후 smallbasic으로 수정 혹은 grammar.js만 옮겨 프로젝트 재생성
  name: "nodejs",

  // 충돌되는 일부 rules에 대한 우선순위 정의(전자가 우선순위 높은것)
  conflicts: $ => [
    [$.CompExpr, $.AdditiveExpr]
  ],
  
  // 공백 문자 혹은 주석 관련 심볼 처리
  extras: $ => [
    // $.comment, 주석관련 심볼 처리
    /[\s\p{Zs}\uFEFF\u2028\u2029\u2060\u200B]/,
  ],

  rules: {
    // Non-Terminals
    // Start: $ => $.Prog,

    // Program이 MoreThanOneStmt의 반복임을 표현하기 위해 repeat 사용
    Prog: $ => repeat($.MoreThanOneStmt),

    Stmt: $ => choice(
      $.ExprStatement,
      seq( /[Ww][Hh][Ii][Ll][Ee]/,  $.Expr, $.CRStmtCRs, /[Ee][Nn][Dd][Ww][Hh][Ii][Ll][Ee]/),
      seq($.ID, ":"),
      seq(/[Gg][Oo][Tt][Oo]/, $.ID),
      seq(/[Ff][Oo][Rr]/, $.ID, "=", $.Expr, /[Tt][Oo]/, $.Expr, $.OptStep, $.CRStmtCRs, /[Ee][Nn][Dd][Ff][Oo][Rr]/),
      seq(/[Ss][Uu][Bb]/, $.ID, $.CRStmtCRs, /[Ee][Nn][Dd][Ss][Uu][Bb]/),
      seq(/[Ii][Ff]/, $.Expr, /[Tt][Hh][Ee][Nn]/, $.CRStmtCRs, $.MoreThanZeroElseIf),
    ),

    MoreThanZeroElseIf: $ => choice(
      $.OptionalElse,
      seq(/[Ee][Ll][Ss][Ee][Ii][Ff]/, $.Expr, /[Tt][Hh][Ee][Nn]/, $.CRStmtCRs, $.MoreThanZeroElseIf),
    ),
    
    OptionalElse: $ => choice(
      /[Ee][Nn][Dd][Ii][Ff]/,
      seq(/[Ee][Ll][Ss][Ee]/, $.CRStmtCRs, /[Ee][Nn][Dd][Ii][Ff]/)
    ),

    ExprStatement: $ => choice(
      seq($.ID, "=", $.Expr),
      seq($.ID, ".", $.ID, "=", $.Expr),
      seq($.ID, ".", $.ID, "(", $.Exprs, ")"),
      seq($.ID, "(", ")"),
      seq($.ID, $.Idxs, "=", $.Expr),
    ),
    
    // CRStmtCRS -> CR TheRest
    // CR은 다음 2가지 "\r\n" or "\n"
    // "\r\n" or "\n" 정규표현식 : /\r\n|\n/ 캐리지리턴이 있거나 없거나 둘 중 하나
    CRStmtCRs: $ => seq(choice(/\r\n/, /\n/) ,$.TheRest),

    TheRest: $ => choice(
      // *공백이 오는 경우 표현(확인 후 작성 필요)
      seq($.Stmt, choice(/\r\n/, /\n/), $.TheRest),
    ),

    MoreThanOneStmt: $ => choice(
      $.Stmt,
      seq($.Stmt, choice(/\r\n/, /\n/), $.MoreThanOneStmt),
    ),

    OptStep: $ => choice(
      // *공백이 오는 경우 표현(확인 후 작성 필요),
      seq(/[Ss][Tt][Ee][Pp]/, $.Expr),
    ),

    Expr: $ => $.CondExpr,

    Exprs: $ => choice(
      // *공백이 오는 경우 표현(확인 후 작성 필요),
      $.MoreThanOneExpr,
    ),

    MoreThanOneExpr: $ => choice(
      $.Expr,
      seq($.Expr, $.MoreThanOneExpr),
    ),

    CondExpr: $ => $.OrExpr,

    OrExpr: $ => choice(
      seq($.OrExpr, /[Oo][Rr]/, $.AndExpr),
      $.AndExpr
    ),

    AndExpr: $ => choice(
      seq($.AndExpr, /[Aa][Nn][Dd]/, $.EqNeqExpr),
      $.EqNeqExpr
    ),
    
    // <>의 뜻은 NotEqual(!=와 같음)
    EqNeqExpr: $ => choice(
      seq($.EqNeqExpr, "=", $.CompExpr),
      seq($.EqNeqExpr, "<>", $.CompExpr),
      $.CompExpr,
    ),

    CompExpr: $ => choice(
      seq($.CompExpr, "<", $.AdditiveExpr),
      seq($.CompExpr, "<=", $.AdditiveExpr),
      seq($.CompExpr, ">", $.AdditiveExpr),
      seq($.CompExpr, ">=", $.AdditiveExpr),
      $.AdditiveExpr,
    ),

    AdditiveExpr: $ => choice(
      seq($.AdditiveExpr, "+", $.MultiplicativeExpr),
      seq($.AdditiveExpr, "-", $.MultiplicativeExpr),
      $.MultiplicativeExpr
    ),

    MultiplicativeExpr: $ => choice(
      seq($.MultiplicativeExpr, "*", $.UnaryExpr),
      seq($.MultiplicativeExpr, "/", $.UnaryExpr),
      $.UnaryExpr
    ),

    UnaryExpr: $ => choice(
      seq("-", $.Primary),
      $.Primary
    ),

    // 파싱 진행시 충돌이 발생하여 우선순위 추가(숫자가 높으면 우선순위 높음)
    Primary: $ => choice(
      prec(6, /([0-9]*[.])?[0-9]+/),
      prec(5, /\"[^\"]*\"/),
      prec(4, seq("(", $.Expr, ")")),
      prec(3, $.ID),
      prec(2, seq($.ID, ".", $.ID)),
      prec(1, seq($.ID, ".", $.ID, "(", $.Exprs, ")")),
      prec(0, seq($.ID, $.Idxs))
    ),

    Idxs: $ => choice(
      seq("[", $.Expr, "]"),
      seq("[", $.Expr, "]", $.Idxs)
    ),

    // Terminals
    ID: _ => /[_a-zA-Z][_a-zA-Z0-9]*/
  }
});