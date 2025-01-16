# Unit One: Semantic (Mode-Theoretic) Validity

## Languages

For Exam #1: This document is incomplete and not
on the reading list. There's good stuff here so it
won't hurt, but skip this before the other stuff.


We began the semester with a discussion of languages, dividing them into formal and informal.

## Procedural vs. Declarative

We divided formal languages into procedural (imperative) and declarative languages. One communicates meanings in these languages as descriptions of step-by-step procedures that eventually return a desired result. Examples of procedural formal languages include Python, C, and Java. 

Declarative formal languages include different languages of mathematics (e.g., the language of natural number arithmetic),  general-purpose logics (e.g., propositional logic), and many other logics and other related declarative languages.

## Syntax, Semantics, Semantic Domain

When we write mathematical expressions, we generally intend for the symbols to have meanings. For example, we've all learned to associate the meaning, "the mathematical natural number, one" with the "syntactic" symbol, "1." The syntactic expression is in the set of well formed expressions of the language. The meaning is in the set of natural numbers. The semantics of a language defines the meaning of each and every syntactic expression as a corresponding semantic value (well, as we will see later, if there is one).

## Case Study #1: Propositional Logic

### Semantic Domain: Boolean Algebra

The semantic domain of (the language of) proposition logic is
Boolean algebra. That is, every syntactically correct expression
in propositional logic has a "truth value" as its meaning in the
semantic domain of Boolean algebra, and the fixed symbols in the
syntax (such as /\ and \/) also have beings, as Boolean operations
in this domain.

STUDY GUIDE:

1. Truth tables for and (&&), or (||), not (!), implies (=>), and iff (<=>) Boolean operators
2. Relative precedences of these prefix and infix operators, esp. the right associativity of =>
3. Counting Boolean things:
   1. How many interpretations are there for a set of 7 Boolean variables
   2. How many interpretations are there for a set of n Boolean variables
   3. How many distinct functions are there from 2 Boolean arguments to 1 Boolean result?
   4. How many distinct functions are there from n Boolean arguments to 1 Boolean result?
   5. How many 0/1 strings of length 3 are there (e.g., "101")?
   6. How many 0/1 strings of length n are there?
   7. How many functions are there from 0/1 strings of length n to 1 Boolean result?

Extra credit: What's the name of the arithmetic operation in which a number, n, is raised to itself m times? Implement it as an addition to our natural number library. Use your specification to compute how many functions there are from n Boolean arguments to a Boolean result for a few small values of n.

Help with implies.

Three true stories. I ordered an "And Box" on Azoman. It came with two nifty light bulbs. To be acceptable, the first had to be on (true) *and* the second one had to be on (true). Both lights were on, so it was acceptable. Story 2: I ordered an "Or Box" on Azoman. It came with two nifty light bulbs. To be acceptable, at least one *or* the other of the two lights had to be on. The second light was on, so it was acceptable. Given that, the first bulb could be on or off and the Box would still be acceptable. Final Story #3: I ordered an "Implies Box" on Azoman. It came with two nifty light bulbs. To be acceptable, if the first light was on, the second light had to be on, too. When the Box arrived, the first light was on but the second was off. The breaks the only rule of implication: if first (on/true) then second (on/true). I used free return shipping and sent it back with a grumpy note. They sent me a replacement "Implies Box." The first light was on and so was the second. Yay, it worked. Oh, darn, I dropped it. It broke! I ordered yet another. When it came, the first light was off. *So it was acceptable*. It's only when the first variable is true that the second must be, otherwise, anything goes.

Now write out the truth table for implies (=>) on paper, come up with and think through a bunch of examples of implications, and make sense of them under each possible interpretation of the two constitute propositions. It's "if this then something important else anything goes." In latin, it's "ex falso quodlibit:" from false anything follows. Implication constrains the value of the second variable (to be true) only when the first variable is true, otherwise (when the first is false) the second is free to have any value (true or false) as its value hasn't been constrained.

### Syntax

The syntax of a formal language is often defined in an abstract
form, where a concrete presentation of that abstract systax will 
be most suitable for human expression and comprehension. Here are
the definitions of the abstract and concrete syntax of propositional
logic.

#### Abstract

Here a formal specification of the syntax of propositional logic,
expressed in the constructive logic of the Lean proof assistant.
In English, the definitions can be read as follows.

(1) The BoolVar type defines an infinite set of BoolVar values.
When it comes to specifying the syntax, we'll use these "variable"
objects to construct variable expressions. In brief, each variable
expression will incorporate a BoolVar variable. We'll use these
objects when we define the semantics of *variable expressions*,
one of the forms of expressions in propositional logic.

```lean4
structure BoolVar : Type :=
  mk :: (index: Nat)
```

(2) We'll define a type, UnOp, the values of which (there's only one)
will serve as syntactic symbols for the unary operators in the syntax
of propositional logic.

```lean4
inductive UnOp : Type
| not
```

(3) We similarly define a type BinOp, the values of which we'll use
to represent the binary operator symbols in syntax of propositional
logic. There are sixteen Boolean binary operations. We'll just define
symbols for four of them.

```lean4
inductive BinOp : Type
| and
| or
| imp
| iff
```

(4) Finally, here's the entire definition of the syntax of propositional
logic. We represent the set of all correct expressions as a data *type*,
PLExpr. The values, or terms, of this type are constructable only by using
the provided four constructors. The first is used to construct a literal 
expression (in PL) from a Boolean value (in Boolean algebra). The second 
is used to construct a variable expression (in PL) from a variable (as we
defined this type). The third is used to construct an operator expression  
with a unary operator (we've defined syntax for just one, namely "not). 
The final constructor is used to construct binary operator expressions,
each one from three arguments: a binary operator "symbol" and two smaller
PL expressions. That's it. 

The are four forms (constructors):

```lean4
inductive PLExpr : Type
| lit_expr (from_bool : Bool) : PLExpr
| var_expr (from_var : BoolVar)
| un_op_expr (op : UnOp) (e : PLExpr)
| bin_op_expr (op : BinOp) (e1 e2 : PLExpr)
```

MAJOR POINTS TO UNDERSTAND:

- inductive in Lean is used to define a new type
- after each vertical bar is a constructor definition
- a constructor, like any function, has a name and argument types
- applying such a constructor to such arguments yields a term of this type
- the syntax defines an infinite set of expressions *inductively*
  
There are atomic expressions (literal and variable), then there are
operator expressions that are constructed from an operator symbol
and two smaller expressions *of the same type* as being constructed.

#### Concrete

Reading and writing expressions using abstract syntax is unnecessarily 
burdensome and error prone. When thus generally employ widely understood
*concrete* syntax, designed for improved human understandability. Here
are the elements of our concrete syntax. 

```lean4
notation:max " ⊤ "      => (PLExpr.lit_expr true)
notation:max " ⊥ "      => (lit_expr false)
notation:max "{" v "}"  => (var_expr v)
notation:max "¬":40     => un_op_expr UnOp.not
infixr:35 " ∧ "         =>  PLExpr.bin_op_expr BinOp.and
infixr:30 " ∨  "        => PLExpr.bin_op_expr BinOp.or
infixr:20 " ↔ "         => bin_op_expr BinOp.iff
infixr:25 " ⇒ "         => bin_op_expr BinOp.imp
```

MAJOR STUDY AIMS:

- Write a bunch of expressions using both concrete and abstract syntax
- 

### Semantics

In this first major unit of the course, we define an *operational*
semantics for PL, in the form of a function taking an expression and
a variable interpretation as arguments and that returns the meaning
of the expression as a value in the semantic domain (Boolean algebra).

We cannot define such a function by cases, one for each possible
expression, as there are too many of them. It's an infinite set.
On the other hand, there are only four possible *forms* of such an
expression value. Such an expression, e, can have been constructed
in only one of four ways: 

- lit_expr b
- var_expr v
- un_op_expr op e1
- bin_op_expr op e1 e2

We thus define the semantic evaluation function to figure out which 
form of argument is to be evaluated, and then to "do the right thing"
in each of those cases. If the expression to be evaluated, call it e,
is (lit_expr b), the semantic domain value to return is b. If e is of 
the form, (var_expr v), then the return value is obtained by applying
the provided interpretation function to the variable, v (buried inside
the variable *expression* argument), to obtain the domain value that
the interpretation associates it with. And if e is an operator expression,
then decode the operator into a Boolean function (call it f), evaluate
the smaller *expression(s)* recursively, to obtain their meanings, and
finally apply the domain function to the domain values to get the domain
value for the overall operator expression. Here it is in code.

MAJOR POINTS FOR STUDY:


Understanding this point is crucial to seeing how we define a semantics
for PL. That'll come in the form of a *function* that takes an expression
and some additional data and that returns its Boolean meaning given that
additional data, namely values for the variables in the expression. What
we'll need is a function that can take a PLExpr argument *in any one of
these four forms* and do the right thing to compute its meaning.

Whereas constructors build up object of a type, pattern matching is the
key to figuring out what form of expression of a given type is passed as
an actual parameter to a function. We'll see an example in our semantic 
evaluator. When handling *operator* expressions, it "destructures" them
into their component elements: the constructor and the arguments to which
it was applied, making them available (with temporary names) for use in
computing a final result. It's here that *operator* expression evaluation
involves *recursion*. An expression is taken apart into an operator and
two smaller expressions, each of which is evaluated to a semantic value,
*in the semantic domain* are then combined using the appropriate function
or means *in/from the semantic domain*.

Be able to carry out evaluation PL expressions (given interpretations).

 The fixed symbols of the
language, such as T (top), B (bottom), /\, \/, and ~, also have 
meanings in the domain of Boolean algebra, but the meanings of
these symbols are not Boolean values but Boolean operations: and 
(&&), or (||), and negation (!).