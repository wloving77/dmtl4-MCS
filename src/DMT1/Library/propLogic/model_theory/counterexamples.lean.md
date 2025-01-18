```lean
import DMT1.Library.propLogic.model_theory.models

namespace DMT1.Library.propLogic.model_theory.models
open propLogic.syntax
```

# Counterexamples

We return all counterexamples, or one if there was one, for
any given expression. These operations find models of the negation
of the given expression, which amount to counterexamples for it.

```lean
def findCounterexamples (e : Expr) : List (Var → Bool) := findModels ¬e
def findCounterexample (e : Expr) : Option (Var → Bool) := findModel ¬e

end DMT1.Library.propLogic.model_theory.models
```
