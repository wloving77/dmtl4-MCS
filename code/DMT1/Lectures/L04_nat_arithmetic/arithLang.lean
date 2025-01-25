/- @@@
NOTE: This file is now dated. Refer first to Library/natArith
for a better structured natural number arithmetic library.
That said, original class notes and material covered, as
covered, is here for reference. END NOTE.
@@@ -/

/- @@@
An expression language for natural number arithmetic all in one file,
with homework on completing the syntax and semantics of this language.
The evolved and refined version of this code in Library/natArithmetic.

There we explore the domain by deliving into the Nat type, its simple
induction principle, and an expression language for this domain. We're
on a path to incorporating arithmetical relational expressions into
our currently bare version of propositional logic. That will give us a
wonderful version of proposition logic with arithmetic relations as a
theory extension.

That will take us to the end of our adventurea in formal language design.
We will not develop our own model theory for the artithmetic component.
That would involve solving natural number algebra problems.

Rather, we'll then turn to a real-world "satisfiability modulo theories"
language and solver that *can* solve systems of arithmetic constraints.
Understanding what we can do with a language and systen for PL extended
with a theory of natural number arithmetic should give you a sense of the
rapidly increasing expressiveness of logics we can envision, specify, and
use.
@@@ -/

namespace DMT1.Lectures.L04_nat_arithmetic.syntax


/- @@@
Variables
*** -/
structure Var : Type :=
  mk :: (index: Nat)
deriving Repr

/- @@@
Unary Operators
@@@ -/
inductive UnOp : Type
| fac
deriving Repr

/- @@@
Binary Operators
@@@ -/
inductive BinOp : Type
| add
| sub
| mul
deriving Repr

/- @@@
Expressions: Abstract Syntax
@@@ -/
inductive Expr : Type
| lit (from_ : Nat) : Expr
| var (from_var : Var)
| unOp (op : UnOp) (e : Expr)
| binOp (op : BinOp) (e1 e2 : Expr)
deriving Repr

/- @@@
Concrete Syntax
@@@ -/
notation " { " v " } " => Expr.var v
notation " [ " n " ] " => Expr.lit n
notation e " ! " => Expr.unOp UnOp.fac e
notation e1 " + " e2 => Expr.binOp BinOp.add e1 e2
notation e1 " - " e2 => Expr.binOp BinOp.sub e1 e2
notation e1 " * " e2 => Expr.binOp BinOp.mul e1 e2

/- @@@
Semantics
@@@ -/
def eval : Expr → (Var → Nat) → Nat
| Expr.lit (fromNat : Nat),       i =>  fromNat
| Expr.var (fromVar : Var), i => i fromVar
| Expr.unOp op e,                i => 0
| Expr.binOp op e1 e2,           i => 0

/-!
HOMEWORK (ignore for now)

Below are some expressions that aren't evaluating to the
right answers. The problem is that our specification of
the semantics is not yet complete. Your job is to complete
the specification the semantics of arithmetic expressions.
You should do this homework on your own. You may talk with
friends about our propositional logic expression language,
and that will likely help you to see how to proceed here,
but please do finish this assignment entirely on your own
to be sure you're prepared to move on in our class.
-/

namespace DMT1.Lectures.L04_nat_arithmetic.syntax
