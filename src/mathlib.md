# mathlib

Lean's mathlib is where the mathematical community's formalizations
of lots of different parts of mathematics live. There are riches here,
for almost any application.

The upshot for you at this point is that you can pick nearly any area
of mathematics here and reason in it using predicate logic, but now with the support of Lean, its infrastructure, and vibrabnt community.

The great thing is that, unlike first-order theory, Lean admits the practical, abstract, expressive, and verified embedding of an incredible diversity of logical and mathematical structures into its foundational logic; and of course in the higher order logic of Lean, all of this is properly abstract, e.g., wherein one can speak formally about abstract properties of relations, or about such things as *real* real numbers.

With the logical tools you have, you can now take any of these fields of mathematics as a semantic domain for expressions that you write in the plain old higher-order predicate logic provided by Lean's libraries. With that, you can now do formal, tool-supported, correctness-assured reasoning about mathematical things that in turn could represent all manner of real phenomena of interest in the world.

Make no mistake, first-order predicate logic with first-order theory of sets and relations is still an utterly indispensable language. It's syntax is used in many important reasoning systems, incluiding Z3, Dafney, Alloy, and others. But with knowledge of Lean, you *also* have immediate access to this *incredible* treasure trove of verified mathematical knowledge, *and* it's nearly trivial to understand first-order logic once you have seen the bigger picture.

If you're interested in a visual overview of areas of mathematics that Lean 4's mathlib provides, the overview of mathlib in [Lean 3](https://leanprover-community.github.io/mathlib-overview.html) is the best right now. The [Lean 4 version](https://leanprover-community.github.io/theories.html#lean-mathematical-theories) is evolving and contributions are welcome.