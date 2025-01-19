import DMT1.Lectures.L03_modelTheory.truth_table

namespace DMT1.lecture.propLogic.semantics.models
open propLogic.syntax

/-!
As a final chapter in our unit on propositional logic, we
now present the concepts of models and counter-examples.

Given a proposition (Expr), e, and an interpretation for
the variables in e, we can apply our semantic evalation
function, eval, to e and i, to compute the truth
value of the proposition, e, when understood to be about
the "situation" or "world" or "state of affairs" described
by i.
-/

/-!
MODELS

A model is an interpretation that makes a proposition true.
A "SAT solver" (like is_sat) returns true if  there's at least
one such interpretation. A function that actually returns such
an interpretation (not just a Boolean value) is called a model
finder. A related problem is to find *all* models of a given
proposition. How would you do that?
-/

def findModels (e : Expr) : List Interp :=
  List.filter
    (fun i => eval e i = true) -- given i, true iff i is model of e
    (listInterpsFromExpr e)

def findModel :  Expr → Option Interp
| e =>
  let ms := findModels e
  match ms with
  | [] => none
  | h::_ => h

end DMT1.lecture.propLogic.semantics.models
