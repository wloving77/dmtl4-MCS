import DMT1.Lectures.L05_theoryExtensions.syntax
import DMT1.Lectures.L05_theoryExtensions.semantics

/- @@@
# Examples

<!-- toc -->
@@@ -/


namespace DMT1.Lectures.theoryExtensions.axioms

open theoryExtensions.syntax
open theoryExtensions.semantics
--open natArithmetic.syntax


open Expr


/- @@@
## Variable Expressions
@@@ -/

def P : Expr := {⟨0⟩}     -- Lean abstract syntax
def Q : Expr := {⟨1⟩}
def R : Expr := {⟨2⟩}

/- @@@

## Operator Expressions

These become axioms
@@@ -/

def and_intro :=        R ⇒ Q ⇒ R ∧ Q
def and_elim_left :=    R ∧ Q ⇒ R
def and_elim_right :=   R ∧ Q ⇒ Q

def or_intro_left :=    R ⇒ R ∨ Q
def or_intro_right :=   Q ⇒ R ∨ Q
def or_elim :=          Q ∨ R ⇒ (Q ⇒ P) ⇒ (R ⇒ P) ⇒ P

def not_intro :=        (R ⇒ ⊥) ⇒ ¬R
def not_elim :=         ¬¬R ⇒ R

def imp_intro :=        R ⇒ P ⇒ (R ⇒ P)
def imp_elim :=         (R ⇒ P) ⇒ R ⇒ P

def equiv_intro :=      (R ⇒ P) ⇒ (P ⇒ R) ⇒ (R ↔ P)
def equiv_elim_left :=  (R ↔ P) ⇒ (R ⇒ P)
def equiv_elim_right := (R ↔ P) ⇒ (P ⇒ R)

def true_intro := ⊤
def false_elim := ⊥ ⇒ P

/- @@@
## Identitiesz
@@@ -/


def andIdempotent   := P ↔ (P ∧ P)
def orIdempotent    := P ↔ (P ∨ P)

def andCommutative  := (P ∧ Q) ↔ (Q ∧ P)
def orCommutative   := (P ∨ Q) ↔ (Q ∨ P)

def identityAnd     := (P ∧ ⊤) ↔ P
def identityOr      := (P ∨ ⊥) ↔ P

def annhilateAnd    := (P ∧ ⊥) ↔ ⊥
def annhilateOr     := (P ∨ ⊤) ↔ ⊤

def orAssociative   := ((P ∨ Q) ∨ R) ↔ (P ∨ (Q ∨ R))
def andAssociative  := ((P ∧ Q) ∧ R) ↔ (P ∧ (Q ∧ R))

def equivalence     := (P ↔ Q) ↔ ((P ⇒ Q) ∧ (Q ⇒ P))
def implication     := (P ⇒ Q) ↔ (¬P ∨ Q)
def exportation     := ((P ∧ Q) ⇒ R) ↔ (P ⇒ Q ⇒ R)
def absurdity       := (P ⇒ Q) ∧ (P ⇒ ¬Q) ⇒ ¬P

-- DeMorgan's laws
def distribAndOr    := (P ∧ (Q ∨ R)) ↔ ((P ∧ Q) ∨ (P ∧ R))
def distribOrAnd    := (P ∨ (Q ∧ R)) ↔ ((P ∨ Q) ∧ (P ∨ R))

def distribNotAnd   := ¬(P ∧ Q) ↔ (¬P ∨ ¬ Q)
def distribNotOr    := ¬(P ∨ Q) ↔ (¬P ∧ ¬ Q)

/- @@@

@@@-/

#check DMT1.Lectures.natArithmetic.syntax.PredExpr

def v₀ : natArithmetic.syntax.Var :=  ⟨0⟩
def v₁ : natArithmetic.syntax.Var := ⟨1⟩
def v₂ : natArithmetic.syntax.Var := ⟨2⟩

def K : natArithmetic.syntax.OpExpr :=
  natArithmetic.syntax.OpExpr.var v₀
def N : natArithmetic.syntax.OpExpr :=
  natArithmetic.syntax.OpExpr.var v₁
def M : natArithmetic.syntax.OpExpr :=
  natArithmetic.syntax.OpExpr.var v₂

set_option diagnostics true

#check (K + M)
#check (K == M)
def foo := (K == M)
def bar := Expr.arith_pred_expr foo

#check theoryExtensions.syntax.Expr.arith_pred_expr foo

def x := bar ∧ bar

#check eval

def i : Interp := ⟨ (λ v => true), (λ v => 0),  ⟩
#reduce eval x i

end DMT1.Lectures.theoryExtensions.axioms
