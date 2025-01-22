# Discrete Mathematics and Theory in Lean 4

*By Kevin Sullivan*

Copyright &copy; Kevin Sullivan, 2024-2025.

This course, developed and tested by Kevin Sullivan at the University of Virginia. It is
offered as a model for replacing the typical (with exceptions) second course for undergraduate
computer science (CS) students, discrete mathematics and theory (DMT). The typical course employs quasi-formal, paper-and-pencil presentations generally limited to first-order logic and set theory, and induction over natural numbers. No automated tools are needed or used to handle propositions or proofs as mathematical objects, e.g., to provide immediate feedback to students on flawed reasoning.

For many computer science students who go on to further studies, these paper-and-pencil courses in first order predicate logic and set theory no longer appear to be serving their goals  given the now undeniable importance of cutting-edge tools for advanced logical, abstract mathematical, and efficient computational expression and reasoning. Moreover, the traditional course doesn't appear memorable to
students, Anecdotally from where I sit, few of the incoming graduate students I encounter would be able to say with justifiable confidence whether (0=1 -> 2=3) is true or false.

Finally, this course is also intended as a first major part of an early graduate course in
the same material. As I noted, most graduate students at least from where I sit do not appear
to have strong backgrounds in this material. Whatever DMT courses they might have had, they 
seem long forgotten. Of course it's not their faults: our field has not yet caught up to the availability of a compelling new alternative.

## Hypothesis

The motivating hypothesis for this public book draft is that switching our students, in CS2, from
the traditional first-order, at most quasi-formal, paper-and-pencile course to one something like this this one would engage students in their main are of interest (computation and really cool languages and tools) and re-establish this material as an essential and practical foundation of our discipline, while also getting a small jump on what I believe will be rapidly growing industrial demand for people who developed the intellectual skills they will learn if they're diligent in studying this material.

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