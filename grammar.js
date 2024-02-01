module.exports = grammar({
    name: 'nodejs',
  
    rules: {
      // TODO: add the actual grammar rules
      // program: $ => repeat(choice(
      //   $._command_or_entry,
      //   $.junk,
      //   $.comment
      // )),
  
      // junk: $ => /[^%@\s\n\t][^%@]*/,
  
      // comment: $ => token(seq('%', /.*/)),
  
      // _command_or_entry: $ => seq("@", /[a-zA-Z]+/)

      Start: $ => $.Prog,

      Prog: $ => $.MoreThanOneStmt,

      Stmt: $ => choice(
        $.ExprStatement,
        seq( /[Ww][Hh][Ii][Ll][Ee]/,  $.Expr, $.CRStmtCRs, /[Ee][Nn][Dd][Ww][Hh][Ii][Ll][Ee]/  ),
        seq($.ID, ':'),
        seq(/[Gg][Oo][Tt][Oo]/, $.ID),
        seq(/[Ff][Oo][Rr]/, $.ID, '=', $.Expr, /[Tt][Oo]/, $.Expr, $.OptStep, $.CRStmtCRs, /[Ee][Nn][Dd][Ff][Oo][Rr]/),
        seq(/[Ss][Uu][Bb]/, $.ID, $.CRStmtCRs, /[Ee][Nn][Dd][Ss][Uu][Bb]/),
        seq(/[Ii][Ff]/, $.Expr, /[Tt][Hh][Ee][Nn]/, $.CRStmtCRs, $.MoreThanZeroElseIf),
        seq()
      ),

      // Terminals
      ID: _ => /[_a-zA-Z][_a-zA-Z0-9]*/

    }
  });