```lean
import DMT1.Lectures.L02_propLogic.formal.model_theory.truth_table

namespace DMT1.lecture.propLogic.semantics.models
open propLogic.syntax

/-!
### Satisfiability

We built a satisfiability checker. The procedure it implements
*decides* whether any propositional logic expression, e, has at
least one interpretation, i, such that (i e) is true. It works
by generating all 2^n intepretation for any set of n propositional
variables, evaluating the expression under each interpretation,
then returning true if and only if any of the results are true.

With the same underlying machinery we can easily implement what
we will *decision procedures* that similarly answer two similar
questions: does a given expression, e, have the *property* of
being *unsatisfiable?* And does "e" have the property of being
*valid*.
-/

/-!
## Decision Procedures for Properties of PL Expressions
-/

/-!
INTERFACE
-/

/-!
Satisfiability means there's *some* interpretation for which e is true
-/
def is_sat :    Expr → Bool :=
  λ e : Expr => reduce_or (truthTableOutputs e)

/-!
Validity means that a proposition is true under all interpretations
-/
def is_valid :  Expr → Bool :=
  λ e : Expr => reduce_and (truthTableOutputs e)

def is_unsat : Expr → Bool :=
  λ e : Expr => not (is_sat e)

def is_model : Interp → Expr → Bool :=
  fun i e => evalExpr e i

end DMT1.lecture.propLogic.semantics.models
```
