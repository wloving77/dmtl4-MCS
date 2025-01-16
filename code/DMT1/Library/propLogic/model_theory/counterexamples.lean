import DMT1.Library.propLogic.model_theory.models

namespace DMT1.propLogic

/- @@@
# Counterexamples

We return all counterexamples, or one if there was one, for
any given expression. These operations find models of the negation
of the given expression, which amount to counterexamples for it.
@@@ -/

def findCounterexamples (e : PLExpr) : List BoolInterp := findModels ¬e
def findCounterexample (e : PLExpr) : Option BoolInterp := findModel ¬e

end DMT1.propLogic
