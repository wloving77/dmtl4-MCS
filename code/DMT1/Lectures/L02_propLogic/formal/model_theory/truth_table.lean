import DMT1.Lectures.L02_propLogic.formal.interpretation

namespace DMT1.lecture.propLogic.semantics.models
open propLogic.syntax

/-!
#### Truth Table Output Column

Given expression, return truth table outputs by ascending row
index, and where the all false row thus appears at the "top" of
the "table", and each subsequent row is "incremented" in binary
arithmetic up to the row at index 2^n-1, where n is the number
of variables.
-/

def truthTableOutputs : Expr → List Bool
| e =>  evalBoolExpr_interps (interpsFromExpr e) e where
evalBoolExpr_interps : List Interp → Expr → List Bool
| [], _ => []
| h::t, e => [eval e h] ++ evalBoolExpr_interps t e

end DMT1.lecture.propLogic.semantics.models
