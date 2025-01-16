namespace hide

/-!
You are responsible for understanding the syntax of
existentially quantified propositions, their meanings,
how to prove them (the intro rule) and how to use proofs
of such propositions.

Suppose, for example, that you want to formalize the
proposition that *there is a nice person*. First, see
that there's an implicit set or type of things, each
of which is a person. Second, recognize that there is
a property of such things: that of being nice. As you
know, we represent properties as predicates. Finally,
with a type, let's call it Person, and a one-parameter
predicate, call it Nice, we can form the proposition,
there exists a person, call him or her p, who has the
property of being nice.
-/

axiom Person : Type         -- assume there are people
axiom Nice : Person → Prop  -- assume people can be nice

-- Formalize
def thereIsANicePerson : Prop :=
  ∃ (p : Person), Nice p    -- This is what we want to say

/-!
In Lean4, the ∃ symbol is concrete notation for *Exists*.
As with *And* (∧), *Or* (∨), and *Iff* (↔), *Exists* in
Lean4 is a polymorphic type (proposition) builder. Here's
the actual definition.
-/

inductive Exists {α : Sort u} (p : α → Prop) : Prop where
  | intro (w : α) (h : p w) : Exists p

/-!
Let's take it apart. First, inductive indicates that we are
defining a type. The *: Prop* at the end indicates that this
is a type of propositions. The *{α : Sort u}* indicates that
the first (but implicit) argument to Exists is the type of
object that one will claim exists. In our preceding example,
α = Person. The second argument to Exists, is a predicate on
arguments of type α. In our preceding example, p = Nice.

Finally, the definition provides but a single constructor for
proving propositions of this kind. The Exists.intro constructor
formalizes the single introduction axiom (inference rule) for
∃, namely that to prove (∃ w, p w) you apply the introduction
rule (Exists.intro) to two arguments. The first must be some
value, w, of type α. We will refer to this as a *witness* to
the claim. The second must be a proof that that w really does
have the given property (satisfies the predicate), in the form
of a proof of (p w). Together these values show *constructively*
(with a specific concrete example) that there does exist such
a person.
-/


def thereIsANicePerson' : Prop := Exists Nice

-- We can verify that the two propositions are equal

#reduce (types := true) thereIsANicePerson'
#reduce (types := true) thereIsANicePerson

example : thereIsANicePerson' = thereIsANicePerson := rfl

/-!

The syntax for an existentialy quantified proposition in
predicate logic (as defined in Lean4) is *∃ (a : α), p a.*
In Lean, this concrete notation is concrete syntax in Lean for
*Exists (a : α) (p : α → Prop)*.  After the first line of
definition are the means provided to construct proofs of
propositions of this kind. Exists.intro is then defined as
the one and only exist *introduction* axiom. It's the one
and only operation capable of constructing a proof of any
existentially quantified proposition.
 -/

inductive Exists {α : Sort u} (p : α → Prop) : Prop where
  | intro (w : α) (h : p w) : Exists p

-- note: "end hide" puts us back to using Lean's definitions
end hide

/-!
Example.
-/

/-!
Suppose there's a type of thing called Person. We will
interpret terms of this type to represent persons in some
world (domain of discourse).
-/
axiom Person : Type

/-
Next assume that being Nice and being Fun are properties
of Persons. In other words, Nice _ and Fun _ are predicates,
each applicable to a specific Person, who might or might not
have either property, which is to say that might or might not
satisfy the given predicate, or condition.
-/

axiom Fun   : Person → Prop
axiom Nice  : Person → Prop

/-!
Next, let us model a world with at least a few people in it.
-/

axiom Arie : Person
axiom Bern : Person
axiom Cind : Person
axiom Dort : Person

/-!
Suppose further that we know that each individual has none, one,
or both of the properties we've defined. Let's suppose we know
that Ari is Fun, Bern is Nice, Cind is Fun and Nice. About Dort,
we do know that Dort is not Nice. We don't know if Dort is fun or
not.
-/

axiom funArie : Fun Arie        -- we have proof that Arie is fun
axiom niceBern : Nice Bern      -- we have proof that Bern is nice
axiom funCind : Fun Cind        -- we have proof that Arie is fun
axiom niceCind : Nice Cind      -- we have proof that Bern is nice
axiom notNiceDort : ¬Nice Dort  -- we have proof Dort's not nice
                                -- and for now that's all we know

/-!
Now we can practice reading, writing, and reasoning with existential
propositions and their proofs.
-/

-- Prove that some person is fun
example : ∃ (p : Person), Fun p
:=
  Exists.intro    -- Proof by exists introduction applied to:
    Arie          -- a witness, w (a specific Person, here Arie)
    funArie       -- and a proof, here funArie, that w is fun

-- Prove that some person is fun and nice
def funNiceCind : ∃ (p : Person), Fun p ∧ Nice p
:=
  Exists.intro    -- Proof by exists introduction applied to:
    Cind          -- a witness, w (a specific Person, here Arie)
    ⟨ funCind, niceCind ⟩  -- and a proof

example : (∃ p, Nice p ∧ Fun p) → (∃ q, Nice q) :=
-- assume (∃ p, Nice p ∧ Fun p)
fun h : (∃ p, Nice p ∧ Fun p) =>
  -- show (∃ q, Nice q): proof buy Exists.elim
  -- You can assume a person, a, and a proof of Nice a ∧ Fun a
  Exists.elim
    h
    -- assume a is a person
    (fun (a : Person) =>
      -- assume proof h that a is Nice and a is Fun
      (fun funNice : Nice a ∧ Fun a =>
      -- Now having elimimated h we can prove goal, by exists intro
        (Exists.intro
          a               -- with a as a witness
          funNice.left    -- and a proof a is nice from funNice
        )
      )
    )










/-!
The natural next question is what about exists elimination?
If you have a proof, h, of ∃ (a : α), p a, what else can you
deduce from knowing that there's a proof of it? The informal
answer is that you can derive two conclusions: (1) there is
*some* value, you give it a name (such as w), and (2) there
is a proof, call it h, proving that x satisfies p (i.e., that
there is a proof of the proposition, (p a)).
-/


/-! #2 Induction

This will be our second encounter with inductive types. It
should be clear that the constructors of an inductive type
are used to construct new terms of a given type (including
values of a data type or proofs of a propositional type).

Up to now, however, we've defined eliminations rules as
functions in a seemingly ad hoc way. There are two (left,
right) eliminators for a proof of a proposition, P ∧ Q,
but only one, Or.elim, for O; etc.


definition of functions by
case analysis, recursive functions, and inductive proofs.
-/

/-!
Applies their constructors to arguments
of the right types produces new
*produce* values
of a given type, and the *elimination rules* by which one can
*use* values of a given type to construct and return results.
-/

#check Bool.rec

/-!
Bool.rec.{u}
  {motive : Bool → Sort u}
  (false : motive false)
  (true : motive true)
  (t : Bool) :
  motive
-/

/-!
Wait. The idea that types have constructors we already know.
The constructors are the introduction rules, as it were, for
values of any inductive type. But where are the "elimination
rules" really coming from?

To gain some clarity, let's review how we've "implemented" the
elimination rules for predicate logic in Lean.
-/

example
  -- for any propositions, P and Q
  (P Q : Prop) :
    -- if we have proof, h, of P ∧ Q,
    (h : P ∧ Q )
    -- Then
    →
    -- we can produce a proof of P
    P
    :=
    -- by *case analysis* on h applied to some (p : P) (and q : Q))
    --
    (_)



 -- (p : P) → (q : Q) →

/-!
In Lean 4, a recursor is a tool used to define functions and prove properties by case analysis on inductive types. It is a foundational concept in the language, as Lean's type system heavily relies on inductive definitions.
Key Features of a Recursor:
Case Analysis: A recursor allows you to "deconstruct" an inductive type into its constructors, enabling reasoning about each case separately.
Defining Functions: It can be used to define functions by specifying their behavior for each constructor of the inductive type.
Proving Theorems: Recursors play a crucial role in proofs, particularly when dealing with proofs by induction or case analysis.
Example of a Recursor
Consider the inductive type for natural numbers:

SNIP.

Nat.rec : {motive : Nat → Sort u} → motive Nat.zero → (∀ n, motive n → motive (Nat.succ n)) → (n : Nat) → motive n


Explanation of the Type:
motive : Nat → Sort u: A "motive" is a function specifying what you aim to define or prove about Nat.
motive Nat.zero: Specifies what to do for the zero case.
∀ n, motive n → motive (Nat.succ n): Specifies what to do for the succ case, given a recursive assumption for n.
(n : Nat) → motive n: The resulting function/proof for any Nat.
Using a Recursor
If we want to define a function to compute the factorial of a natural number using Nat.rec, we could do:
def factorial : Nat → Nat :=
  Nat.rec
	1                              					-- base case: factorial 0
	(fun n recFactorial => (n + 1) * recFactorial) 		-- recursive case: factorial (n+1)

Built-in Support
Lean makes recursors more user-friendly by allowing you to define functions using pattern matching directly, which internally translates into calls to recursors. For example:
def factorial : Nat → Nat
  | 0 => 1
  | n + 1 => (n + 1) * factorial n

This is equivalent to the earlier Nat.rec example but more concise.
Custom Inductive Types
For custom inductive types, Lean automatically generates recursors. For instance:
inductive List (α : Type) where
  | nil : List α
  | cons : α → List α → List α

The recursor for List is:

List.rec : {α : Type} → {motive : List α → Sort u} → motive List.nil → (∀ (hd : α) (tl : List α), motive tl → motive (List.cons hd tl)) → (l : List α) → motive l

This enables you to work with lists in a structured and recursive way.
Summary
A recursor in Lean 4 is a mechanism for defining functions or proving properties about inductive types via case analysis and recursion. While you often interact with them indirectly via pattern matching, understanding their structure is essential for more advanced use cases.


-/
