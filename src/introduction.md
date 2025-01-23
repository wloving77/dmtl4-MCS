# Discrete Mathematics and Theory in Lean 4

*By Kevin Sullivan*

Copyright &copy; Kevin Sullivan, 2024-2025.

This course, developed and tested by Kevin Sullivan at the University of Virginia, is
offered as a possible model for replacing the traditional (with exceptions) second course for undergraduate computer science (CS) students, namely discrete mathematics and theory (DMT). The typical course employs mixed formal and informal, often mostly quasi-formal, paper-and-pencil presentations generally limited to first-order theory and induction over the natural numbers. These courses sometimes do provide experience with some automated tooling and demonstrations but they are rarely employed to establish a unifying framework for the formal, checked, abstract definitions and uses of all of the essential concepts in a DMT course for CS students.

My judgement tends toward the view that even for many computer science students who go on to graduate studies, these paper-and-pencil courses in first order theory do not seem to be achieving their long term student learning objectives. From anecdotal data, it seems the traditional course doesn't appear to be particularly memorable. Few strong students who I encounter could answer with justifiable confidence as to whether (0=1 -> 2=3) is true or false in propositional logic with arithmetic.

It's not the students' faults. The traditional course was great when we didn't have the science and technology that do now have. This course uses the Lean 4 environment present the formal concepts taught in traditional courses but now presented in full generality. For example, students in this class formally define properties of binary relations on sets, such as the property of a relation of being symmetric. In English, it's just, "Given a binary relation r on a set s, then if for every e and f from s,
if (e, f) is in r then so is (f, e). The best one can manage to assert in first-order logic is that for some particular relation r it's the case that for every e, f, in s, (e,f) in r implies (f,e) in r. 

It isn't just the expressiveness. Here sets and relations are represented by logical memberships predicates.  Students thus learn to reduce definitions across definitional abstraction boundaries and to use this skill to make progress in proof constructions. One mark of success for a course like this would be that the extra cost paid up front is repaid, and more, well within course period. Getting CS2 undergraduate students to the point where they can construct precisely correctly argued proofs of properties of arbitrary relations, e.g., of well orderedness, would seem one possibly indicator of improved learning outcomes.

So, this course is meant to suggest a possible model to replace traditional CS2 courses in DMT. Beyond that, it's being used the first segment of an introductory graduate course. A 2-3X speed version of this course, as the first big unit in a grad course, seems to fit the need.  

## Hypothesis

The hypothesis for this book draft is thus roughly that switching CS students from courses around traditional first-order theory using quasi-formal presentations, to one something like this this one, would: engage students first in their main area of interest: computation and cool languages and tools;re-establish the ability to use expressive logic and abstract mathematics as an essential foundation for any computer scientist; provide students with deep knowledge and skills with languages and systems that are now seeing rapidly growing industrial demand.


## Course

Any first course in DMT must cover propositional and predicate logic, set theory, and induction.
This course delivers all of the logical and mathematical concepts covered in a traditional course
but now as a body of knowledge entirely formalized in a precise, abstract, automated  mathematical
languages and notations. It employs the higher-order logic and toolset of Lean 4. It has also been
refined through multiple offerings to pare the required knowledge of Lean to a minimum to keep the
focus on the DMT concepts being expressed.

The solution adopted here included teaching term-language-only proof constructions until near the
end of the course. This choice is tuned to the needs and interests of computer science students.  

## Paths Forward for Students

From here, advanced courses in several areas are possible at both undergraduate and graduate levels, including programming language design and implementation, rigorous software engineering, machine learning, formalization of higher mathematics, and of physics, robotics, and other domains that rely on sophsticated mathematics and that demand high assurance of safety, security, and other essential system properties.

## Humility

There are surely issues and opportunities for improvement. If you feel inclined to provide input, even of the critical variety, please don't hesitate to send it along.

 &copy; Kevin Sullivan 2024-2025.