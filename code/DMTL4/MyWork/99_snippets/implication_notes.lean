In propositional logic, we checked that the proposition, ⊥ ⇒ P, is
valid. It is because it's true whether P is true or P is false, and
those are *all* of the interpretations of P. That is, both ⊥ ⇒ ⊤ and
⊥ ⇒ ⊥. These propositions are true in PL because the semantic meaning
of ⇒ is the Boolean implies function. See the truth table for ⇒.

In type theory, you can think about it differently. If P and Q are
propositions (represented as types in Prop), then a proof of the
*logical implication*, P → Q, is any *function* of type P → Q. How
is this set-up consistent with that in propositional logic?

Let's see. First, suppose we have some function (implementation),
f : P → Q where P and Q are propositions, with f then taking any
proof of P as an argument and returns a proof of Q. In type theory,
(and in mathematics generally) a proposition is judged to be true
if and only if one has a proof of it. Now suppose P is true. In
type theory this means that there is a proof of it, say (p : P).
The function, f, can now be applied to p, as in the expression,
(f p), and the result has to be a proof of Q, which shows that Q
is also true. So if P is true, then so is Q. If P is false, then
P → Q is still true as we just saw.
-/

/-
In type theory, truth requires proof, so we talk in terms of
proofs and leave it to the reader to make truth judgment about
propositions accordingly. The idea of propositions-as-type with
proofs as values is exceptionally powerful because, among other
things, it means that we can compute with proofs. One exmample:
to show that P → Q, define a function that converts any given
proofs (p : P) to a proof of Q.
-/
