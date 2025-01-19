#### Truth Table Output Column

Given expression, return truth table outputs by ascending row
index, and where the all false row thus appears at the "top" of
the "table", and each subsequent row is "incremented" in binary
arithmetic up to the row at index 2^n-1, where n is the number
of variables.

```lean
import DMT1.Library.propLogic.semantics
import DMT1.Library.propLogic.interpretation

namespace DMT1.Library.propLogic.model_theory.truth_table
open propLogic.syntax
open semantics
open interpretation


def truthTableOutputs : syntax.Expr → List Bool
| e =>  evalBoolExpr_interps (listInterpsFromExpr e) e where
evalBoolExpr_interps : List (syntax.Var → Bool) → Expr → List Bool
| [], _ => []
| h::t, e => [eval e h] ++ evalBoolExpr_interps t e

end DMT1.Library.propLogic.model_theory.truth_table
```
