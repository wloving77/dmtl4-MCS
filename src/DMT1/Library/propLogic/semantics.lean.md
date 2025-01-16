```lean
import DMT1.Library.propLogic.syntax
import DMT1.Library.propLogic.domain

namespace DMT1.Library.propLogic.semantics
open DMT1.Library.propLogic.syntax
```

# Semantics

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

open PLExpr
```

Give a name to the type of function that can
be understood as assigning a Boolean value to
each variable.

```lean
def evalPLExpr : PLExpr → (Var → Bool) → Bool
| lit_expr b,             _ => b
| (var_expr v),           i => i v
| (un_op_expr op e),      i => (evalUnOp op) (evalPLExpr e i)
| (bin_op_expr op e1 e2), i => (evalBinOp op) (evalPLExpr e1 i) (evalPLExpr e2 i)


end DMT1.Library.propLogic.semantics
```
