#### Truth Table Output Column

Given expression, e, return the list of truth values
for e by evaluating e under each of its interpretations
in the standard order for this package.

```lean
import DMT1.Lectures.L02_propLogic.formal.interpretation

namespace DMT1.lecture.propLogic.semantics.models
open propLogic.syntax
```

Compute and return the list of Bool values
obtained by evaluating an expression, *e*, over
each interpretation in a given list of them.

```lean
def mapEvalExprInterps : Expr → List Interp → List Bool
| _, [] => []
| e, h::t =>[⟦e⟧h] ++ mapEvalExprInterps e t
```

Return the list of Bool values obtaibed by evaluating
an expression, e, over each of its interpretations, in
their natural order.
```lean
def mapEvalExprAllInterps : Expr → List Bool
| e =>  mapEvalExprInterps e (interpsFromExpr e)

-- just another name for this function
def truthTableOutputs := mapEvalExprAllInterps

end DMT1.lecture.propLogic.semantics.models
```
