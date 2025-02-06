import DMT1.Lectures.L04_natArithmetic.syntax
import DMT1.Lectures.L04_natArithmetic.semantics

/- @@@
# Syntax

<!-- toc -->
@@@ -/

namespace DMT1.Lectures.theoryExtensions.syntax

/- @@@
## Abstract Syntax

- logical literal expressions
- logical variable expressions
- logical operator expressions
- arithmetic literal expressions
- arithmetic variable expressions
- arithmetic predicate expressions

Remember: we're not talking about Boolean meanings of
literals, variables, or bigger expressions here. The
syntax of a formal languages defines only the set of
syntactically correct expressions in our language and
says nothing about their intended meanings.

Now what's interesting is that we formalized the set of
all correct expressions as Expr. It's a data type. Now
any particular logical expression is just a value of this
Expr type. The available constructors describe all all
and only the ways to construct a term of this type. Lean
automatically checks the correctness of terms declared to
be of this type. The Lean type checker thus now provides
us with a syntax checker for propositional logic.

Let's dive down into literal, variable, and application
(operator application, if you want) expressions and how
we represent them in Lean.
@@@ -/



/- @@@
### Variables

We will now have both Boolean and arithmetic
(Nat-valued) variables, from which we will then
be able to build variable expressions.
@@@ -/

structure LogicVar : Type :=
  mk :: (index: Nat)
deriving Repr

structure ArithVar : Type :=
  mk :: (index: Nat)
deriving Repr


/- @@@
### Operators

#### Logical

@@@-/

inductive LogicUnOp : Type
| not
deriving Repr

-- binary logical operators
inductive LogicBinOp : Type
| and
| or
| imp
| iff
deriving Repr




/- @@@
#### Arithmetic
-/

inductive ArithUnOp : Type where
| inc
| dec
| fac
deriving Repr

inductive ArithBinOp : Type where
| add
| sub
| mul
deriving Repr



/- @@@
### Expressions
@@@ -/

inductive ArithPredExpr : Type where
| unOp (op : UnPredOp) (e : OpExpr)
| binOp (op : BinPredOp) (e1 e2 : OpExpr)
deriving Repr


inductive PropExpr : Type where
| logicExpr (e : ArithPredExpr)
| arithExpr (e : )


inductive LogicExpr : Type
| logLit (from_bool : Bool)
| logVar (from_var : LogicVar)
| LogicUnOp (op : UnOp) (e : Expr)
| logBinOp (op : BinOp) (e1 e2 : Expr)
| arithLit (fromNat : Nat)
| arithVar (from_var : ArithVar)
| arithUnOp (op : ArithUnOp) (e : ArithPredExpr)
| arithBinOp (op : ArithBinOp) (e1 e2 : ArithExpr)

deriving Repr

/- @@@
@@@ -/

open Expr

/- @@@
## Concrete Syntax
@@@ -/

/- @@@
@@@ -/

notation:max " ⊤ " => (Expr.lit_expr true)
notation:max " ⊥ " => (lit_expr false)
notation:max "{" v "}" => (var_expr v)
notation:max "¬" p:40 => un_op_expr UnOp.not p
infixr:35 " ∧ "  =>  Expr.bin_op_expr BinOp.and
infixr:30 " ∨  "  => Expr.bin_op_expr BinOp.or
infixr:20 " ↔ " => bin_op_expr BinOp.iff
infixr:25 " ⇒ " => bin_op_expr BinOp.imp

/- @@@
@@@ -/

end DMT1.Lectures.theoryExtensions.syntax
