# Discrete Mathematics and Theory in Lean 4

*By Kevin Sullivan*

Copyright &copy; Kevin Sullivan, 2024-2025.

This course, developed and tested by Kevin Sullivan at the University of Virginia, is
offered as a possible model for replacing the traditional (with exceptions) second course for undergraduate computer science (CS) students, namely discrete mathematics and theory (DMT). The typical course employs mixed formal and informal, often mostly quasi-formal, paper-and-pencil presentations generally limited to first-order theory and induction over the natural numbers. These courses sometimes do provide experience with some automated tooling and demonstrations but they are rarely employed to establish a unifying framework for the formal, checked, abstract definitions and uses of all of the essential concepts in a DMT course for CS students.

My judgemts tends toward the view that even for many computer science students who go on to graduate studies, these paper-and-pencil courses in first order theory do not seem to be achieving their long term learning goals. From anecdotal data, it seems the traditional course doesn't appear memorable. Very few incoming graduate students I encounter could say with justifiable confidence whether (0=1 -> 2=3) is true or false in propositional logic (with natural number arithmetic). Of course it's not their faults: our field has not yet caught up to the availability of a compelling new alternative.

So, at bottom, this course is offered as a significant replacement of the traditional CS2
course in DMT. Beyond that, it is also intended, and is currently being used, as a "crash course" first part of a first graduate course to provide MS and PhD students with a broad set of Lean 4 concepts and mechanisms and their uses.

## Hypothesis

The hypothesis for this boook draft is thus roughly that switching CS students from courses around traditional first-order theory using quasi-formal presentations, to one something like this this one, would: engage students first in their main area of interest: computation and cool languages and tools;re-establish the ability to use expressive logic and abstract mathematics as an essential foundation for any computer scientist; provide students with conceptual foundations that are also seeing rapidly growing industrial demand.

## Ask

I you feel inclined to provide input, please don't hesitate. If you find mistakes or want to suggest improvements, you may use GitHub issues for that or send me private email.

## Course

Any first course in DMT must cover propositional and predicate logic, set theory, and induction.
This course delivers all of the logical and mathematical concepts covered in a traditional course
but now as a body of knowledge entirely formalized in a precise, abstract, automated  mathematical languages and notations. It employs the higher-order logic and toolset of Lean 4. It has also been refined through multiple offerings to reduce the coverage of Lean to a minimum to ensure that students are not overly distracted from the core mathematical and logical concepts at the heart of any DMT course.

The biggest challenges in designing this course was to teach enough of Lean without detracting from, and ideally thus enhancing, the essential concepts to be taught. The question is, what principled, aggressive subsetting of Lean 4 constructs would give students essential foundations and just what they need for the course while avoiding overload and amplifying the intended signal to students.
The solution exhibited adopted here involved eschewing the tactical language entirely while teaching
the core material from basic inference rules (incuding induction principles), seen as strongly typed computational elements (as well). 


## Paths Forward for Students

From here, advanced courses in several areas are possible at both undergraduate and graduate levels, including programming language design and implementation, rigorous software engineering, machine learning, formalization of higher mathematics, and of physics, robotics, and other domains that rely on sophsticated mathematics and that demand high assurance of safety, security, and other essential system properties.

 &copy; Kevin Sullivan 2024-2025. Feed free to use this material for yourself. If you'd like to use it in your teaching or for other professional purposes, please give me a call at sullivan@virginia.edu so I can keep track of that.