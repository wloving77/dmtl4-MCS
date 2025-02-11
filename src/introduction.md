# Discrete Mathematics and Theory in Lean 4

- [Discrete Mathematics and Theory in Lean 4](#discrete-mathematics-and-theory-in-lean-4)
  - [The Two Pillars of Computing](#the-two-pillars-of-computing)
  - [The Pillar Ignored](#the-pillar-ignored)
  - [The Practical Problem](#the-practical-problem)
  - [The Radical Purpose of This Course](#the-radical-purpose-of-this-course)
  - [The Secret Sauce](#the-secret-sauce)
  - [Design Constraints](#design-constraints)
  - [The Solution](#the-solution)
  - [An Example](#an-example)
  - [Status](#status)
  - [Lean 4 for CS Pedagogy](#lean-4-for-cs-pedagogy)
  - [Paths Forward](#paths-forward)
  - [Humility](#humility)

## The Two Pillars of Computing

The formal languages of computer science fall into two broad, overlapping categories: *programming* languages and *reasoning* languages. Expressions in programming langauges describe computations that can be executed by computing machines. Expressions in reasoning languages express propositions that make precise claims about the states of *worlds* of interest in ways that admit formal verification. Languages for programming and languages for reasoning are the two pillars holding up of all computer science.

Yet, as a field, we've fallen into the trap of teaching what has been intellectual easier and also immediately industrial useful, namely the syntax, semantics, and uses of programming languages, at the expense of graduating generations of students with little or no fluency, by the time they enter the workforce, to express ideas, or to reason, using this category of languages: software *logics*.

## The Pillar Ignored

To the extent that this class of languages is taught, it typically appears in a second course in computer science, name *discrete mathematics and theory*, or something similar. Such a course covers propositional logic, first-order predicate logic, proof-theoretic validity, first-order set theory, and induction, often over only the natural numbers.

 These courses are generally paper-and-pencil affairs and, at least anecdotally, as far as students seem to be concerned, are among the least relevant, least memorable courses in the entire curriculum. There is little interesting automation, or connection to students' intrinsic interest in *computing*, or apparent practical utility in any of it. The result is that undergraduate students today generally graduate with something close to no fluency in the languages or modes of thought that constitute the second pillar of our discipline.

## The Practical Problem

This state of affairs is understandable as the outcome of a decades-long history during which formal logics were arcane (e.g., see the concrete syntax of Z), industrial demands came from only the most specialized of applications, and one needed graduate education to use reasoning languages and methods. Times have changed, to say the least. We are seeing the rise of powerful languages and technologies for sophisticated abstract reasoning, along with rapidly growing demand for graduates who are prepared to *hit the ground running* when it comes to expressing and verifying ideas using these capabilities. Sadly, our field has been caught flat-footed.

The reality is that the courses that most undergraduates take in reasoning languages and methods are leaving them woefully deficient in foundational knowledge on the *reasoning* side of our discipline. In the experience of this author, for example, few if any incoming graduate students have any degree of fluency in any of the reasoning languages of computer science, not even in simple propositional logic. 

Most students in a recent new graduate class, for example, could not confidently explain the rule for evaluating implications. They weren't able to distinguish between truth and validity, and were unsure whether expressions such as *1 = 0 → 2 = 3* are valid. Most had clearly not ever firmly grasped why it makes sense to judge them as valid. By contrast, nearly every incoming student has working fluency in at least one *programming* language.

## The Radical Purpose of This Course

With support provided in part by a research grant from the National Science Foundation (#1909414, SHF: Small: Explicating and Exploiting the Physical Semantics of Code), the author has developed this course as a model for full-out replacement for the traditional undergraduate course in discrete mathematics and theory, and as a first major unit of a graduate course for students with little prior experience with formal langauges and reasoning. Several big changes in in circumstances make right now a great time to consider this significant transition in CS pedagogy. They include the following:

- Rapidly increasing industrial demand for formal reasoning about systems that undergird our society
- The emergence of type-theory-based formalisms with exceptional expressiveness and broad applications
- The development of superb automated tooling for using reasoning languages effectively in practice
- The distinct possibility that routine program generation is increasinly handled by generative AIs

The author thus proposes that now it is finally time to remediate the deep imbalance in our pedagogy, until now focused overwhelmingly on languages and methods programming, and barely at all on reasoning. This course is thus offered as a wholesale replacement for the traditional second undergraduate course in computer science, discrete mathematics and theory (DMT). 

## The Secret Sauce

Perhaps key insight behind the design of this course is that the Curry-Howard correspondence provides the essential bridge to connect students' intrinsic interest in computing with what hitherto had been arcane and apparently not very useful or in-demand subject matter. The course by contrast emphasizes the essential computational nature of logical reasoning. After teaching semantic validity for simple propositional logic, with an emphasis on a subset of propositional forms that emerge as the axioms of deducative reasoning in predicate logic, the course moves directly into predicate logic as embedded in the type theory of the Lean 4 prover.

A second design principle is that all of the concepts to be taught must be teachable in the main formal logic taught in the course. First-order logic just won't do in this regard. In first-order predicate logic, for example, one can state what it means for a particular relation to be symmetric, but one cannot formalize what it means for any binary relation on a set to be symmetric because, of course, one cannot quantify over relations. And yet it is this more abstract kind of reasoning that students need to learn. The course assumes that higher-order predicate logic embedded in type theory with inductive definitions, e.g., using Lean 4, is far preferable to spending the better part of a semester on first-order theory, in which one cannot formalize even the content of the course in which it's being taught. We now know how to formalize mathematics. Use Lean, or Roqc, or something similar.

## Design Constraints

This course was developed under a few key constraints:

- Continue to focus on the basic content of the traditional course: logic, sets, induction
- Avoid assiduously overwhelming early students with the complexity of modern proof assistants
- Formalize every concept in the uniform logic of the proof assistant using conventional notations
- Ensure that first-order theory is a special case of the more expressive theory of the course
- Provide students with a deeply computational perspective, from great tooling to Curry-Howard 

## The Solution

The solution, now tested in practice, has a few key elements:

- Make the standard embedding of predicate logic in Lean the main logic students learn
- Begin with a deep embedding of propositional logic syntax, semantics, and validity in Lean 4
- Thoroughly cover all of the axioms for reasoning in predicate logic as its embedded in Lean 4
- Build all of the material on sets, relations, and properties thereof on top of this logic
- Present induction first as a way to build programs, and only later on as a way to build proofs
- Aggressively limit covereage of Lean; e.g., the tactic language is off the table until the end

## An Example

Here are two simple examples of what students will see in this course. The first illustrates how students would write propositional logic expressions. The second gives an example of how they would write, and then use, the definition of a certain property of a relation.

First, this is a snippet of some "code" for propositional logic, the syntax and semantics of which they have seen how to specify.

- def andAssociative  := ((P ∧ Q) ∧ R) ↔ (P ∧ (Q ∧ R))
- def equivalence     := (P ↔ Q) ↔ ((P ⇒ Q) ∧ (Q ⇒ P))

Second, here's an example of the specification of the property of a relation being well founded.

- def isWellOrdering  {α  β : Type} : Rel α α → Prop := fun r => ∀ (s : Set α), s ≠ ∅ → ∃ m, (m ∈ s ∧ ¬∃ n ∈ s, r n m)

By the end of the course students should be able to read and explain what this definition means, with an explanation roughly as follows. A relation, r, on a set, α, is said to be well ordered if any non-empty set of α values has a least element. That is, there is some m in the set such that there is no other value, n, in the set that is "less than" m under r.

## Status

The status of this online book is *emerging*. In this spring of 2025, the author is teaching an introductory graduate course called *software logic.* As nearly all graduate students in the class have no meaningful background in reasoning languages and practice, the undergraduate course is the first major part of the graduate course. As the semester goes along, more and more fo the undergraduate course material from previous semesters will appear here.  Check back once in a while for updates if you're interested.

## Lean 4 for CS Pedagogy

Lean 4 has thoroughly proven itself as an outstanding language for the clear, concise, and useful formalization of abstract mathematics, far beyond what is needed in a first course in discrete mathemtics and theory. That said, it's an exceptionally good vehicle for teaching this course because it's fabulously and naturally expressive of the ideas to be taught (unlike first-order theory); it engaged students through their interest in computation and computational tools; and it sets student on a path not only to firmer intellectual foundations but to a new era in computer science, with AIs taking over routine programming and humans now increasingly needed for complex reasoning about programs.

## Paths Forward

From here, advanced courses in several areas are possible at both undergraduate and graduate levels, including programming language design and implementation, software verification, provable security, machine learning (e.g., see AlphaProof), and ultimately the higher mathematics of robotics, quantum computing, cyber-physical systems, control systems, concurrent systems, and many other domains. 

## Humility

There are issues and opportunities for improvement at all levels of this document, from the lexical to the conceptual. If you feel inclined to provide input, even of the more critical variety, please don't hesitate to send it along.

&copy; Kevin Sullivan 2024-2025.
