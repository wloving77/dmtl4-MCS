```lean
/-
## Binary Relations

In the abstract, a binary relation, r, on sets α and β (or from
α to β), is understood as a *set* of ordered pairs, (a, b), where
(a : α) and (b : β). In Lean, such a relation is an object of the
type, Rel α β, which is turn is defined as a two-place predicate,
r : α → β → Prop. To show that r relates some value, (a : α), to
some value, (b : β), i.e., to show that some pair (a, b) is "in"
r, give a proof of the proposition (r a b).
-/

/-!
To illustate, we'll assume for the rest of this file that α
and β are the domain of definition and codomain of some
relation, r, from α to β. In Lean4, the polynorphic type,
Rel α β, is the type of any binary relation from α to β.
-/

axiom α : Type
axiom β : Type
axiom r : Rel α β

/-!
Let's see how to set up to prove that some pair of values,
(a, b), is "in" (related by) r. We'll first assume we've
got values, (a : α) and (b : β), respectively in the domain
of definition (α) and codomain (β) of r.
-/

axiom a : α
axiom b : β

/-
This is now how you would claim that r relates a to b.
Clearly we don't have enough information here to prove
is, so we'll just put sorry (telling Lean to accept the
fact without proof, as a new axiom,, without a proof).
-/

example : r a b := _

/-!
You will sometimes see an infix operator symbol defined
to mean r, so that instead of writing (r a b) one can
write, e.g., a ≺ b. Don't make the mistake of reading
the symbol as "less than." Rather, read this string as
"a is related to b (by r)."
-/

/-!
Here's a typical concrete notation definition. There's
nothing special about our choice of notation here. You
can choose another infix symbol as you might choose.
-/

infix:50 " ≺ " => r

/-!
Now you can write (r a b) like this, and read the expression
as "a is related to b by (or under) r."
-/

example : a ≺ b := _

/-!
## Specifying and Representing Binary Relations as Predicates on α and β

Just as we've specified and represents sets of objects of some
type α as one-argument predicates, now here we will specify and
represent binary relations from one type, α, to another (possibly
the same) type, β, as a two place predicate. A set membership
predicate indicates whether a given value is in the set or not:
if the value satisfies the predicate, it's in, otherwise it's
not. Similarly, we'll use a two-argument predicate to specify
what ordered pairs, (a : α, b : β), are "in" a binary relation.

The polymorphic type, Rel α β, in Lean is thus defined to be
exactly the type α → β → Prop: a predicate that takes one value
of type α and one value of type β and that yields a proposition
that is true (and in Lean that means for which there is a proof)
if and only if that pair, (a, b), is in the relation. You could
also say if and only if that pair satisfies the predicate (or "is
a model for it", if you want to be really clever).
-/

#reduce Rel
-- fun α β => α → β → Prop
-- the right side is the type of a predicate on α and β



/-!
And since we're on a roll, we can generalize one step further
and give a general definition of what it means for an operation,
such as inverse, on a binary relation, to have the property of
being involutive. An operation, op, is involutive if for any input
(in this case for any binary relation) applying it to that input
and then applying it again to that result is always the original
input value. It's intuitive. If you take any set of ordered pairs,
flip them all, then flips them all again, you get right back to
the original input relation.
-/

def isInvolution {α β : Type*} (op : Rel α β → Rel β α) :=
  ∀ (r : Rel α β), op (op r) = r


/-!
Suppose that eventually we want a relation that relates every
possible string, s, to its natural number length, s.length, but
that for now we're happy with a relation, let's call it strlen3,
for just three strings: "Hello", "Lean", and "!".

[As an aside, notice that this set is a subset of the set of
all pairs of α and β values, which in Lean we can write as
the *product* of the α and β types, α × β. Being one of the
subsets of this set, we can also as that r is an element of
the set of all subsets of α × β. That is, r is an element in
the set of all binary relations from α to β. And yet another
way to say this is that r is in the powerset of α × β, which
we can write as either r ⊆ (α × β) or r ∈ 𝒫 (α × β).

The insight that gets us to a formal definition in Lean is
that we'll represent the strlen3 relation as a two-argument
predicate, true if the pair of values (a : α) and (b : β) is
related. We can then express the predicate as satisfied if
a given pair is one of those three. Note: Lean's libraries
define provide String.length as a function that when applied
to any string, s, returns its length. One can also use the
shorthand, s.length.
-/

def strlen3 : Rel String Nat :=
  fun (s : String) (n : Nat) =>
    (s = "Hello" ∧ n = 5) ∨
    (s = "Lean" ∧ n = 4) ∨
    (s = "!" ∧ n = 1)

/-!
It's also straightforward now to specify the full relation,
from any string to its length. We'll call it strlen.
-/

def strlen : Rel String Nat :=
  fun s n => s.length = n



Now recall that Lean defines the type of sets of values of
any type α, namely (Set (α : Type u)), to be the type α → Prop.
The abstract mathematical concept of a *set* in the language of
*set theory* is thus reduced to a *predicate* in predicate logic.
That makes it easy then to represent all kinds of set operations
and properties of sets in *predicate logic,* as you've seen in
class and on HW#7. For example, membership in an intersection of
sets is defined by the *conjunction* (∧) of the predicates that
represent the individual sets.

Similarly, now, Lean defines the type of binary relations on
two types of values, α and β, as a two-place predicate.

def Rel (α β : Type*) := α → β → Prop

(The Type* expression means that α and β can be types in any type
universe from Type, to Type 1, on up. You can just think of Type*
as Type in this class.) With that we can define our strlen relation
more abstractly.
-/

def strlen' : Rel String Nat := fun s n => s.length = n

/-!
To be clear, this is the infinite-sized relation that relates
very conceivable string to its corresponding length. What if we
want to represent the small finite relation of this type defined
informally above? We just need to write a predicate that "picks
out" (is satisfied by) all and only those pairs that we want to
consider as in the relation.
-/

def strlen3 : Rel String Nat := fun s n =>
  s = "Hello" ∧ n = 5 ∨
  s = "Lean" ∧ n = 4 ∨
  s = "!" ∧ n = 1

/-!
And now, as before, we can prove membership of pairs
in this relation, or not as the case may be, just as we
did before. Remember: Don't just read these proof terms
and expect to understand them. Rather read, then erase
them, then complete them again. It's not the text but
the process of proof construction you need to master.
-/

example : strlen3 "Lean" 4 :=
  -- proof is by Or.intro on the right
  -- that is, prove (Lean, 4) satisfies s = "Lean" ∧ n = 4 ∨ s = "!" ∧ n = 0
  Or.inr
    -- in this context, prove by Or intro left that the pair satisfies (s = "Lean" ∧ n = 4)
    (Or.inl
      -- and that finally requires proof of "Lean" = "Lean" and "4 = 4"
      (And.intro
        rfl
        rfl
      )
    )

/-!
Prove: ("!", 0) is not in strlen3. That is, prove ¬(strlen "!" 0)
-/
example : ¬(strlen3 "!" 0) := fun (h : strlen3 "!" 0) =>
-- h is an assumed proof of a disjunction, proof by case analysis (Or elimination)
-- you need to see what h is *defined* to be a proof of
match h with
-- "!" = "Hello" ∧ "!".length = 5 ∨
-- "!" = "Lean" ∧ "!".length = 4 ∨
-- "!" = "!" ∧ "!".length = 0
| Or.inl case1 => nomatch (case1.left)      -- no proof of "!" = "Hello"
| Or.inr cases23 =>
    match cases23 with
    | Or.inl case2 => nomatch (case2.left)  -- no proof of "!" = "Lean"
    | Or.inr case3 => nomatch (case3.right) -- no proof of 0 = "!".length
/-!
Employing the method of "proof by negation" (assume h, deduce a
contradiction, conclude ¬h), we've shown that there can be no proof
of strlen3 "!" 0, and so we can conclude ¬strlen3 "!" 0, which was
our goal. QED.

Remeber: Don't expect to just read and understand these proofs.
Read it, get the idea, then erase it and recreate it yourself,
cheating only if you get stuck. Use a top-down proof construction
technique where you apply the correct inference rules at each step,
albeit with their arguments left as "holes" (_). The fill in each
hole with a value/proof of the right type. Comment your proofs as
we've done here so as to have a basis for writing an English proof.

Proof: We show that ("!",0) is not in the strlen3 relation using
proof by negation. First we assume that it is in the relation. In
other words we assume that we have a proof of the proposition we
obtain by applying the relation-defining predicate, strlen3, to
the pair of values, "!", 0; then we try to prove the resulting
proposition, namely:
  "!" = "Hello" ∧ "!".length = 5 ∨
  "!" = "Lean" ∧ "!".length = 4 ∨
  "!" = "!" ∧ "!".length = 0
We show that the proposition is false by showing that such a
proof cannot really exist. This sub-proof is by case analysis,
The first disjunct is false on both sides, The second one is too.
The third is false on the right. As we've shown that assuming h
leads to a contradiction (there can be no proof, h) we conclude
¬h, i.e., that the given pair is *not* in the relation, strlen3.
-/


/-
As an aside, notice that this set is a subset of the set of
all pairs of α and β values, which in Lean we can write as
the *product* of the α and β types, α × β. Being one of the
subsets of this set, we can also as that r is an element of
the set of all subsets of α × β. That is, r is an element in
the set of all binary relations from α to β. And yet another
way to say this is that r is in the powerset of α × β, which
we can write as either r ⊆ (α × β) or r ∈ 𝒫 (α × β).
-/

/-
The complete relation is essentially the *product* of the sets
(in Lean types), String and Nat, which we've defined to be the
set of all ordered pairs. In Lean, this product type can be
written as String × Nat. This is the type of any String-Nat
ordered pair. The type α × β is the type of α-β pairs, for any
types α and β. An ordered pair moreover can be written in Lean
as it is in paper-pencil mathemantics, as a comma-separated
pair of values enclosed in parentheses. (Hover over #check!)
-/

#check ("Hello", 5)



/-
It has
literal set expressions, such as {1,2,3}; variable set expressions,
such as s and m; and numerous operator expressions, such as s ∩ m,
s \ m, sᶜ, and 𝒫 s.

We have also seen how in Lean4, sets are represented as one-argument
predicates. Such a predicate (of type α → Prop) is used to specify
a property of α objects that determines which values are defined to
be in the set, and which are defined not to be.

The beauty of this design is that set operations then reduce to
the language predicate logic, which you already know how to handle.

Indeed, unfolding definitions is often an essential move in theorem
proving, no matter how you do it. The added benefit of unfolding them
in this case is that set theory propositions get sort of compiled into
predicate logic propositions, for which you already have solutions.

As an example, consider the proposition, a ∈ s. That's in the language
of set theory. Here (a : α) is a value of some type, α. Now comes the
the key idea: we say, "(Expanding, or By) the definition of ∈" what
needs to be proved is that (a) satisfies the the set's membership
predicate, which means plugging (a) into the predicate's definition,
yielding a proposition about (a). Giving a proof of that would show
that a satisifes the *logical* membership *predicate*, that that is
just what it means to write a ∈ s. So now we prove (s a). You then go
on to do that, but now working in the language of predicate logic.

To summarize, it could look like this.

To Prove: a ∈ s
Proof: By the definition of ∈, what we need to prove is (s a),
the proposition obtained by applying s, now viewed as the set
membership predicate, to (a).

The problem of proving the original proposition, as expressed in
the language of set theory is thus reduced to the problem of proving
the corresponding proposition in predicate logic.

So by unfolding of definitions, propositions in set theory unfold
into propositions in predicate logic. And you already know how to
deal with them!
-/

/-
In set theory, you have an example of one mathematical abstraction with its own
objects (sets) and operations (intersection). Here we  have even more: how set
theory language is *reduced to* (or you could say *implemented in* the language
of predicate logic in Lean. You should know not only the logical meanings of the
abstract operations, such as intersection, but (1) how each is defined in terms
of predicate logic, and (2) how to construct proofs of propositions in set theory
(in Lean) by understanding and proving the underlying logical propositions. You
have to really learn to translate from set theory to predicate logic to be able
to see how to prove propositions in set theory.
-/

/-
What you'll find is *def Set (α : Type u) := α → Prop*. In other
words, the type, Set α, in Lean, really is just the type, α → Prop.
A set truly *is* represented directly by a predicate in this sense.


/-
The size of a "numeral" grows in
direct relation to the size of the natural number represented,
whereas with binary (base-2) or decimal (base-10), the sizes of
numerals are in general far shorter than the numbers that they
represent. On the other hand, the simplicity of unary notation
has many benefits for ease of reasoning, so we'll go with it to
build our own little "theory" of natural number arithmetic.

Suggestive names bound here to a few small terms of type Nat.
Note that we're actually using Lean to assign names to these
terms, and to unfold these names to the terms to which they're
bound, as the case may be. Unfolding names to the meanings to
which they;re bound is called δ-reduction ("delta reduction").
I guess that means that the act of binding a name to a term
should be called δ-abstraction. By automated δ reductions we
can use names and the terms they designate interchangeably in
expressions. And not only there, but in our minds, where we can
thereafter chunk up a complex representation of some possibly
complex thing under the banner of a single, simple name.
-/

/-!
Binding and using δ abstractions
-/

/-!
The constructors of a type *introduce* new instances/values of that type
into the discussion. These are akin to the introduction and elimination
inference rules discussion elsewhere in this class.
-/


-- --------------




/- -------------

-- arithmetic variables
structure natVar where
  (index : Nat)

-- unary arithmetic operators (here increment, decrement)
inductive arith_UnOp where
| fac

-- binary arithemtic operators (here +, -, and *)
inductive arith_BinOp where
| add
| sub
| mul

-- abstract syntax
inductive arithExpr
| lit (n : Nat)
| var (v : natVar)
| UnOp (op : arith_UnOp) (e : arithExpr)
| BinOp (op : arith_BinOp) (e1 e2 : arithExpr)

-- concrete syntax
notation " { " v " } " => arithExpr.var v
notation:max "++" n => arithExpr.UnOp arith_UnOp.inc n
notation:max "--" n => arithExpr.UnOp arith_UnOp.dec n
notation e1 "+" e2 => arithExpr.BinOp arith_BinOp.add e1 e2
notation e1 "-" e2 => arithExpr.BinOp arith_BinOp.sub e1 e2
notation e1 "*" e2 => arithExpr.BinOp arith_BinOp.mul e1 e2
-/


/-!
#### Elimination

Given that a proof of ¬R is in the form of a function from any
proof of R to a proof of False, we can derive a proof of False
(which is absurd) if we *assume* we're given a proof of R (also
absurd), because we then then apply our function from R to false
to that proof of R to get a proof of False.
-/

def noContra' : (nr : ¬R) → (r : R) → False
| nr, r => nr r

/-!
Another way to write the proposition that there can be no
contradiction is to state that P ∧ ¬P can never be true, so
it must be false, which is to say, ¬(P and ¬P). We leave the
proof as an exercise!
-/

example : ∀ (W : Prop), ¬(W ∧ ¬W) := _

/-!
It's very important that you understand this function. Given a
proof, nr, of ¬R, and a proof, r, of R, one can derive a proof
of False. That is of course absurd so it simply cannot be the
case that you can have both a proof of ¬R and a proof of R in
the same world. That'd be a contradiction within the logic and
that can't be allowed. The axioms of the logic are constructed
to assure that contractions cannot arise. If a contradiction
were possible, then there'd be a proof of False, False would
be proven to be true, and the entire logic would fall apart.
In technical terms, we'd say it'd be *inconsistent*.
-/
```
