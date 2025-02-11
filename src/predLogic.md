# Predicate Logic

Whereas propositions (expressions) in propositionl
logic have only Boolean values as their semantic domain,
expressions in predicate logic can be interpreted over
an unlimited range of domains, each comprising entities,
functions, and relations. Predicate logic gives us a
language in which to express propositions about *many*
different kinds of worlds.

The syntax of predicate logic retains the logical
operators of propositional logic, but also has new
*quantifier*, *constant*, *variable*, *function* and
*predicate* expressions.

As an example in first-order predicate logic, we can
write the expression, *∀n ∃m (m > n + 1)*. In English
we'd pronounce this as "for every *n* there's an *m*
such that *m* is greater than *n*." 

To give semantic meaning to such an expression, we
need to specify a semantic domain (the world about
which the expression speaks), along interpretations
that map the syntactic symbols in this expression to
values in the domain. Only then could we evaluate the
expression as being true or not in that domain.

To illustrate, we'll informally describe two different
domains and interpretations for our example expression.

First, we will take the domain to be the universe of
natural number arithmetic. Natural numbers, functions,
and relations will be the entities in the domain. We
will then interpret the names, *n* and *m* as variables
with natural number values, *+* as the natural number
two-argument addition *function*, and *>* as the binary
greater than relation on natural numbers. 

Under this interpretation (to this semantic domain), the
expression means the proposition that for any natural
number, *n*, there is some natural number *m*, such that
*m* is greater than one more than *n*. It's easy to see
that the expression can be judged true when evaluated
over this domain structure.

On the other hand, the entities of the domain could be
people; *m > n* could be the relation that holds exactly
when *m* is *nicer than n*; *1* could mean a litte bit of
additional *niceness*; and *+* a function that adds up
niceness levels. Under this interpretation, the expression
would assert that in this domain, for every person, *n*,
there is someone person, *m*, who's more than a bit nicer
than they are. Here one can judge the expressions to be
false, as it'd require an infinite supply of ever nicer
people to be true, but the number of people is finite,
so there must be maximally nice people beyond which there
are none who are nicer.

In higher-order predicate logic as typically defined in
Lean, interpretations are more tightly bound to names in
such expressions. We would distingish the two propositions
as their very syntax:

- ∀ (n : Nat), ∃ (m : Nat), (m > n + 1)
- ∀ (n : Person), ∃ (m : Person), (m > n + 1)

In Lean, the meanings of the symbols, *+* and *>* would
then be inferred from context. In the first expression,
Lean would know to take the function, *Nat.add*, as the
meaning of *+*, and the *Nat.lt* relation as the meaning
of *<*.

With that introduction, we now highlight key differences
between propositional and predicate logic, focusing on
differences that hold whether one is speaking of simple
first-order predicate logic or the much mroe expressive
higher-order predicate logic provide by the Lean prover.

## Propositional Logic Connectives

Predicate logic maintains the logical connectives, such
as *and*, *or*, and *not* from propositional logic, with
their usual truth-functional meanings. Beyond that, there
are significant changes.

### Arbitrary Semantic Domains

Propositional logic has Boolean algebra as its fixed semantic
domain. One evaluates expressions in this language over simple
structures that bind propositional variables to Boolean values.

Predicate logic, by contrast, admits many semantic domains.
You can use it to talk about whatever domain you care to talk
about, provided you can represent it in terms of objects; sets
of objects (in first-order logic with set theory), or types of
objects (in the higher-order logic of Lean); relations among
objects; and functions that take objects as their arguments
and return other objects as results.

As an aside, first-order predicate logic with sets as a theory
extension (*first-order set theory*) speaks in terms of *sets*
of objects. The higher-order predicate logic of Lean speaks in
terms of *types* of objects. For now, you can think of a type
in Lean as defining a set of objects, namely all and only the
objects of that type.

### Universal and Existential Quantifers

In predicate logic, the set of logical operators is extended
to include existential and universal quantifier expressions.
The universal quantifer expression, *∀x Px* is used to assert
that every object x satisfies the one-argument relation, *P*.
The existential quantifier expressions, *∃x Px* is used to
express the proposition that there is *some* object, *x* that
satisfies the *predicate* P.

In Lean, with its strong typing, these expressions would be
written, *∀ (x : T), P x* and *∃ (x : T), P x*. There are a
few minor differences in syntax. When Lean can infer the type,
*T*, of domain entities, from context, one can omit the explicit
type judgments, *(x : T)* and *(y : T)* and write, *∀ x, P x*
and *∃ x, P x* making the syntax close to that of first-order
predicate logic. In this book we focus heavily on predicate
logic in Lean, viewing first-order logic as a special case.

### Strongly Typed Higher-Order vs. Untyped First-Order Logic

The next major difference between the first-order theory of a
traditional discrete math course, and the predicate logic that
students first learn in this class, is that first-order logic is
*untyped*. It's akin to Python. Everything is just an object in
the first instance. It't only by explicitly testing an object at
runtime that you tell what kind of object you've been handed.

To express the idea that *all people are mortal*, in first-order
thus untyped logic, for example, you'd say, For any object, *p*,
if *p* "is a person" (if *p* satisfies the *isPerson* predicate),
then *p* satisfies the isMortal predicate.

- ∀ p, isPerson p → isMortal p

The "∀ p" in effect loops over every object in the universe,
tests each to see if it's a person, and in that case it asserts
that that particular object, *p*, also satisfies the *isMortal*
predicate.

In Lean, by contrast, you would have an inductive type defined,
called Person, and you would say, given any object, p, "of type"
Person, p is mortal. Here it is in Lean.

- ∀ (p : Person), isMortal p

This proposition asserts that if *p* is *any Person*, then *p*
is mortal. There is no possibility that *p* could refer to any
object other than a Person object here, nor than isMoral could
be applied to any object other than a Person. The Lean syntax
and type checkers will not allow it. By constrast there would be
nothing wrong, in first-order predicate logic, with applying the
*isMNortal* predicate to a cheese or some gas, as everything is
in the first instance just an *object*.

### Syntactic Elements of Predicate Logic

The syntax of predicate logic has fixed symbols to represent the
usual connectives and the two new quantifiers. It has constants,
such as *true* and *false* in propositional logic, interpreted as
referring to specific objects in the semantic domain. It also has
variables, referring to objects (or entities) in the semantic domain.
And it permits names to refer to functions and predicates in the
domain.

As an example, domain could have *people* as entities. It could have
a function, *motherOf*, that maps any give person, *p*, to the person
who is the mother of *p*. And there could also be a property of a 
person expressed as a predicate, *isBlue*, that takes a person and
indicates whether that person is blue. 

With this semantic domain, Ote could then assert the following using
the language of predicate logic: the mother of everyone who's blue
is blue, too. A literal reading would say if p and q are people and
then if p is blue and then if q is the mother of p then q is blue.

- ∀ (p q: Person), isBlue p → isMother q p → isBlue q

In first order logic, it'd be more tedious to express, and there
would be more room for uncaught implicit type errors.

- ∀ p, q, isPerson p → isPerson q → isBlue p → isMother q p → isBlue q

### From Model-Theoretic (Semantic), to Proof-Theoretic, Validity

The most notable change from propositional to predicate logic is that
in the former, one can assess the validity of any given proposition by
evaluating it over each of a finite number of interpretations. As soon
as one can interpret a variable in predicate logic as having a natural
number as its meaning, one is into the realm of domains of infinite size.

A new kind a reason will be necessary to replace semantic evaluation.
It will be instead by *deduction* from certain propositions accepted as
*axioms* of the logic, which is to say, accepted valid, without proof.
In fact, propositional logic is incorporated into deductive reasoning
in predicate logic adoption of the propositions in the earlier *axioms*
as the axioms of predicate logic.

## Example

Suppose for example that we have two propositions in predicate logic,
P and Q, and we want to show *deductively* that P /\ Q -> Q /\ P. To
do this, we notice the top-level connective is implies. Taking a very
computational perspective, we read the proposition as asserting that if
one assumes that one is given a proof of P /\ Q, then one can derive
from it a proof of Q /\ P. Thus, if P /\ Q is true then so is Q /\ P.

So let's assume we do have a proof of P /\ Q, and let's call it *pq*.
We can apply and_elim_left to *pq* to derive a proof of *p* from it,
and similarly a proof of *q*. We can then apply the proof constructor,
and.intro to these proofs in q-then-p order to have a proof of Q /\ P.

## Formalizing Predicate Logic in Lean 4

Prediate logic is a richer and more expressive language
that propositional logic. Moreover, the higher order logic of
Lean is richer and more expressive than the first-order logic
of the traditional course in discrete mathematics.

In this class we will meet predicate logic through what
we could call a *shallow embedding* of the logic into Lean
We will implement the syntax and rules of deductive reasoning
in predicate logic in Lean as a set of ordinary inductive type
and function definitionss, with no single type expressing the
over syntax or semantics of the logic.