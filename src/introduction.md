# Discrete Mathematics and Theory in Lean 4

*By Kevin Sullivan*

Copyright &copy; Kevin Sullivan, 2024-2025.

This course, developed and tested by Kevin Sullivan at the University of Virginia, is intended as the second course for undergraduate computer science majors in discrete mathematics and theory. The potentially transformational feature of this class that is that it delivers essentially all of the logical and mathematical concepts typically covered in such a course using the higher-order, mechanically checked logic and toolset of Lean 4. Among other things, this course will prepare students to jobs in the small but now rapidly growing, and vastly underserved market for Lean 4 programmers.

Key differences between this course and a traditional one in discrete mathematics include the follwing:

- whereas a traditional course uses paper-and-pencil methods, this class uses an automated constructive logic proof assistant, providing students with immediate feedback on the syntax of formal expressions and proof correctness
- whereas a traditional course uses first-order logic and set theory, this course teaches higher-order predicate logic, in which it's possible to formal define much of the content of a DMT course in more sophisticated and powerful ways than is possible in first-order logic (e.g., generalized properties of relations). 
  
We believe it's important for students learn to think in higher-level, generalized mathematical concepts. For example, the property of a binary relation on a set "being symmetric" generalizes across all binary relations on all sets. But this idea is not first-order, as it involves universal generalization (quantification) over binary relations. The higher order logic of the Lean prover, on the other hand, has been embraced by a small but important group of mathematicians, who presumably have found it expressive enough to express very complex ideas (see Massot on sphere eversion), check proofs about them, do it all in the many and diverse mathematical notations employed across subfields of the discipline.

Students will also learn that recursive functions and proofs are constructed by applying induction axioms, derived from inductive data definitions, to arguments corresponding to the constructors of any given inductive type. In a traditional course it's rare to see induction on other than natural number arguments. This course teaches the explicit construction of both recursive algorithms, early, and inductive proofs, later, by explicit application of induction axioms. For students to be able to read, understand, and apply formal definitions of induction axioms, confident that they actually make sense as reasoning principles, is itself a real learning achievement at this level.

A capstone insight for students is that reasoning about termination of non-structural recursions depends on the property of relations of being well-ordered. Induction axioms are used early in the course to construct recursive algorithms and later on to construct recursive proofs; but most of the class has gone ahead with structural recursions only, and not mentioning termination on non-structural ones.

A major challenge in the design of this course has been that the proof assistant, and the rigorous correctness it demands, can distract early students from what many might say are the core ideas that such a course should teach. That said, every bit of learning of Lean is itself learning of and how to use the powerful formal logic at the heart of a lot of important and exciting work today. Based on experience with multiple offerings, this course limits students to learning only the tern language of Lean, eschewing the tactic language until the end. The goal is to focus CS students on deductive reasoning as a form of programming (Curry-Howard). The should come to understand the inference rules as a programming library, where they have to write programs, in general, to construct proofs of important, interesting, and beautifully expressed propositions.  

 From here, advanced courses in several areas are possible: programming language design, compilers, program specification and verification, machine learning (e.g., of discrete structures) from examples, formalization of higher mathematics, and formalization of physics, AI, robotics, and other domains that require sophsticated mathematics.

 &copy; Kevin Sullivan 2024-2025 All rights reserved. If you'd like to use this material in your teaching, please just give me a call at sullivan@virginia.edu.