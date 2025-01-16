# Discrete Mathematics and Theory in Lean

*By Kevin Sullivan*

Copyright &copy; Kevin Sullivan, 2024-2025.

This course, developed and classroom tested by Kevin Sullivan at the University of Virginia,  is intended to drive the second course for undergraduate computer science majors, in discrete mathematics and theory. The transformational feature of this class that is uses the higher-order logic and toolset of Lean 4 as a vehicle to present all of the mathematical concepts typically covered in such a course using a uniform, highly expressive, and mechanically checked formal language.

Key differences between this course and a traditional one in discrete mathematics include (1) whereas a traditional course uses paper-and-pencil methods, this class uses an automated constructive logic proof assistant, providing students with immediate feedback on the syntax of formal expressions and proof correctness, and (2) whereas a traditional course uses first-order logic and set theory, this course teaches higher-order predicate logic, in which it's possible to provide formal definitions of higher-order concepts, such as properties of relations. We believe it's important that students learn to handle higher-level, generalized matheamtical concepts with complete rigor and formality.

Students will also learn that recursive functions and proofs are constructed by applying induction axioms, derived from inductive data definitions, to arguments corresponding to the constructors of any given inductive type. In a traditional course it's rare to see induction on other than natural number arguments. This course teaches the explicit construction of both recursive algorithms and inductive proofs by explicit presentation and application of induction axioms.

A capstone insight for students is that reasoning about termination of non-structural recursions depends on the property of relations of being well-ordered. Induction axioms are used early in the course to construct recursive algorithms and later on to construct recursive proofs, in each case by applying these axioms to base values and step functions as dictated by data type definitions.

A challenge in the design of such a course is that the proof assistant can overwhelm early students and distract them from the core ideas that such a course should teach. Based on experience with multiple offerings, this course limits students to learning only the tern language of Lean, eschewing the tactic language until the end. The aim is that students come to understand deductive reasoning as a kind of programming, as per the Curry-Howard Correspondence. Our approach expressly targets computer science students.

 From here, advanced courses in several areas are possible: programming language design and implementation, software specification and verification, formalizaxtion of higher mathematics, and formalization of physics, AI, robotics, and other domains using sophsticated mathematics.

 &copy; Kevin Sullivan 2024-2025 All rights reserved. If you'd like to use this material in your teaching, please contact the author at sullivan@virginia.edu.