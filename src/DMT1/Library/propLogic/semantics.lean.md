# Semantics

```lean
import DMT1.Library.propLogic.syntax
import DMT1.Library.propLogic.domain

namespace DMT1.Library.propLogic.semantics
open DMT1.Library.propLogic.syntax
```

Give each syntactic unary operator a meaning
in the semantic domain of PL: Boolean algebra.
```lean
def evalUnOp : UnOp → (Bool → Bool)
| (UnOp.not) => Bool.not
```

Give each syntactic unary operator a meaning
in the semantic domain of PL: Boolean algebra.
```lean
def evalBinOp : BinOp → (Bool → Bool → Bool)
| BinOp.and => Bool.and
| BinOp.or => Bool.or
| BinOp.imp => domain.imp
| BinOp.iff => domain.iff

open Expr
```

Give a name to the type of function that can
be understood as assigning a Boolean value to
each variable.

```lean
def evalExpr : Expr → (Var → Bool) → Bool
| lit_expr b,             _ => b
| (var_expr v),           i => i v
| (un_op_expr op e),      i => (evalUnOp op) (evalExpr e i)
| (bin_op_expr op e1 e2), i => (evalBinOp op) (evalExpr e1 i) (evalExpr e2 i)


end DMT1.Library.propLogic.semantics
```
