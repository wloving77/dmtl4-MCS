# Model Theory

THIS SECTION IS UNDER CONSTRUCTION.

The semantics of propositional logic enable the
evaluation an expression under an interpretation
(for it). As we've seen, an interpretation in
propositional logic is in the form of a *function*
from the variable expressions in the expression
to the Boolean values that the interpretation is
said to *assign* to them.

## Interpretations as World Representations

There's another way to see the interpretations for
a given proposition, where each one specifies one
specific possible *world* (or *state of affairs*),
within which the truth of the proposition is to be
evalauted.

## Example: The Dog is Dandy or The Cat is Comfy

Suppose we use *D* to stand for the proposition,
*the dog is dandy*, and *C* for, *the cat is comfy*.
Now consider the proposition, *C or D*. There are
four worlds within which it can be evaluated. The
proposition, understood as asserting that at least
one of the conditions, *C* or *D*, holds in a given
world. This statement is true in only three of the
four worlds, exluding as a counterexammple the one
where neither is true.

## Propositions as Specifying Properties of Worlds

We can view our *or* expression as specifying the 
subset of all of those possible (here four) worlds
that *have the property* of having at least one of
*D* or *C* being true in that world. We thus have a
first indicition of a notion of model theory. It has
to be about models of propositions.

## Model Worlds and Counterexamples Worlds

We call a world in which a proposition is true a  
*model* for the proposition, and a world in which
it's not true a *counterexample*.

## Generalizing from Propositional Logic

At the heart of all of this is the idea that when
syntactic expressions have elements with late-bound
meanings, we need to provide additional structures,
descriptions of particular worlds, universes, or one
can say states of affairs, within which evluation can
be performed. We say that we evaluate expression under
such structures.

## Propositional Logic as a Special Case

In propositional logic, these structures are just
our interpretation functions. Other logics use
other structures. Nevertheless, across many logics,
the structure over which a proposition is evaluated
can be understood as specifying a particular world,
or state of affairs, *within which* the truth of a 
given proposition can be evaluated. 

## Further Study and Next Steps

We've now given as much of an introduction as we
can in this setting to the topic of model theory
in teneral. Interested students might look at the
Kripke structure over which propositions in some
temporal logics are evaluated. For now, we will
keep our focus on basic concepts in model theory
for proposition logic, in particular.

In this chapter we stick to evaluating expressions
in propositional logic over interpretation functions.
The reader should however be aware of the fact that
the ideas presented here are more broadly relevant.
