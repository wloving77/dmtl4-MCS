```lean
import «DMT1».Library.propLogic.semantics.model_theory.properties

namespace DMT1.propLogic
```

# Examples of Expressions

It'll suffice for our purposes to have three variable
expressions. We'll call them P, Q, and R. The following
definitions provide them, built on the variables indexed
by 0, 1, and 2, resp. See our concrete syntax definitions.

```lean
def P : PLExpr := {⟨0⟩}
def Q : PLExpr := {⟨1⟩}
def R : PLExpr := {⟨2⟩}
```


The examples we present comprise the special
set of propositions that we can call the axioms
of propositional logic. But that discussion is
down the road. For now, at least we have some
examples of expressions.

```lean
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
```

As an aside, we can apply our validity checker
(our *is_valid* function) to each proposition
to confirm that each and every one of them is
valid.

```lean
#eval! is_valid  and_intro
#eval! is_valid  and_elim_left
#eval! is_valid  and_elim_right

#eval! is_valid  or_intro_left
#eval! is_valid  or_intro_right
#eval! is_valid  or_elim

#eval! is_valid  not_intro
#eval! is_valid  not_elim

#eval! is_valid  imp_intro
#eval! is_valid  imp_elim

#eval! is_valid  equiv_intro
#eval! is_valid  equiv_elim_left
#eval! is_valid  equiv_elim_right

#eval! is_valid  true_intro
#eval! is_valid false_elim

end DMT1.propLogic
```
