```lean
import Mathlib.Tactic.Ring

/-!
# Induction on Lists

The Lean standard libraries define a polymorphic
type, List α, where α can be any type, and is, in
particular the type of the elements that can be in
a list of type List α.  Here are a few examples.

## Constructing Lists

Here's the definition.

inductive List (α : Type u) where
  | nil : List α
  | cons (head : α) (tail : List α) : List α

List.nil represents the empty list of α values,
while List.cons (h : α) (t : List α) represents
the list with some α value at its head and with
(t : List α) being the rest of the list.

The List α type is very similar to the Nat type.
But whereas a new Nat, n, is built from some given
Nat, n', as Nat.succ n' (or n'.succ).
-/

def emptyList : List Nat := List.nil    -- []
def singletonList : List Nat :=         -- [0]
  List.cons                             -- h::t
    0                                   -- h
    List.nil                            -- t
def ottList : List Nat :=
  2::1::List.nil  -- (cons 2 (cons 1 (cons 0 nil)))
example : List Nat := [2, 1, 0]         -- notation!

/-!
And here's a function that uses a list to
obtain a number, namely the length of the
list. Let's construct this function using
induction.

For that, we have to study the induction
axiom for List.
-/

#check List.rec

/-
List.rec.{u_1, u}
  {α : Type u}
  {motive : List α → Sort u_1}
  (nil : motive [])
  (cons : (head : α) → (tail : List α) → motive tail → motive (head :: tail))
  (t : List α) :
  motive t

Again you can ignore the type universe u arguments.
The induction axiom takes any type α implicitly, the
type of the elements in the list. Again, motive is the
computable total function or the proof of a universal
generaliation being assembled by induction.

The nil argument is the specified result for any
empty list. So far, but for the new α argument, it
looks like the induction axiom for Nats. The main
difference is in the form of the step function.

That of course because more is involved in stepping
up from a smaller list to a bigger list. With a Nat,
that's done by applying Nat.succ just to a smaller
Nat. But we step up from a given list (of Nats, say,
and let's call it l), to a bigger list of Nat, it's
by applying cons to *two* arguments: the element of
type α at the head of the new list and the list that
will be the tail of the new list.
-/

#reduce List.cons 1 [2,3,4]
-- [1, 2, 3, 4]
-- 1::2::3::4::List.nil
-- cons 1 (cons 2 (cons 3 (cons 4 nil)))
-- BTW, [] is notation for List.nil, empty list

/-!
Now you know how to construct lists. How does one
use a list? For example, suppose we need a funciton
that counts how many elements are in any given list.
The answer for the empty list is zero. What's the
answer for a non-empty list? Well, that will be a
list of the form, h::t (cons h t); and the length
of this list is 1 (for h) plus the length of the
tail list, t.
-/

def listLen { α : Type } : List α → Nat
| [] => 0                 -- answer for nil
| h::t => listLen t + 1   -- step function!

/-!
Let's apply induction directly to see what's really
going on.
-/

#check List.rec

def listLenNil := 0
def listLenConsHT {α : Type} : (h : α) → (t : List α) → (tlen : Nat) → Nat :=
  fun h t tlen => tlen + 1


#reduce (
  @List.rec       -- apply induction
    _               -- α = Nat
    _               -- function being defined
    listLenNil      -- answer for [], namely 0
    listLenConsHT   -- compute answer for h::t
) [1,2,3,4]       -- applied to [1,2,3,4] is 4

/-!
While Lean will evaluate this application of a
function-defining term to an argument and it will
reduce and produce a result. But Lean doesn't have
the capability to assign such a function term to
an identifier. The error will be code generator
does not support recursor 'List.rec' yet, consider
using 'match ... with' and/or structural recursion.
-/

def listLenNope { α : Type } : List α → Nat :=
  @List.rec       -- apply induction
    _               -- α = Nat
    _               -- function being defined
    listLenNil      -- answer for [], namely 0
    listLenConsHT   -- compute answer for h::t

/-
Lean says, "use the normal syntax instead please."
Ok, here it is, using the "parts" we've defined in
their respective cases. Be sure you see how the
application of listLenConsHT to h, t, and the
length of t (computed recursively) computes the
right result for h::t. It's the length of t plus
one more for the new value at the head of the list.

-/

def listLenYay { α : Type } : List α → Nat
| [] => listLenNil                          -- 0
| h::t => listLenConsHT h t (listLenYay t)  -- step up!

/-!
## EXERCISES

### #1: Define a Function to Append Two Lists Using Induction

Define base result and inductive step funciton separately, combine
them by applying the induction axiom for lists, and write and pass a
few test cases, with, at least, empty, single element, and multiple
element lists as both first and second arguments. Call your function,
myAppend. Use Lean's List type. Your implementation should replicate
the function of List.append. Here's it's implementation, which is of
course easy for you to find.

protected def append : (xs ys : List α) → List α
  | [],    bs => bs
  | a::as, bs => a :: List.append as bs
-/

#reduce List.append [0,1,2,3] [4,5,6]
#reduce [0,1,2,3] ++ [4,5,6]    -- FYI, notation for List.append

/-!
Your work here ↓. Hint : use induction on first argument, as in Lean.
Note that just as in the definition of Nat.add (which is very similar!)
there's no need to destructure the second list argument to List.append.
Also, be sure to make your answers polymorphic, so they're not useful
only for Lists of, say, Nat or any other specific type.
-/

-- Here:

-- define base answer

-- inductive case
-- study induction axiom for lists

#check @List.rec
/-
@List.rec :
  {α : Type u_2} →
  {motive : List α → Sort u_1} →
  motive [] →
  ((head : α) → (tail : List α) → motive tail → motive (head :: tail)) →
  (t : List α) →
  motive t
-/


/-!
Remeber, the base case for append is the second list.
When the first list is empty, return the second list.
So define the second list as the base case. Here you
specify the second argument. We di of course need to
pick a specific element type at this point. Here we'll
pick α = Nat.
-/
def nilCase : List Nat := [4, 5, 6]

/-
-/
def inductiveCase
  { α : Type }
  (head : α)
  (tail : List α)
  (motiveTail : List α) :
  List α :=
    head::motiveTail

example : (@List.rec Nat (λ _ : List Nat  => List Nat) nilCase inductiveCase) [1,2,3] = [1,2,3] ++ nilCase := rfl
example : (@List.rec Nat (λ _ : List Nat => List Nat) nilCase inductiveCase) [1,2] = [1,2] ++ nilCase := rfl
example : (@List.rec Nat (λ _ : List Nat => List Nat) nilCase inductiveCase) [1] = [1] ++ nilCase := rfl
example : (@List.rec Nat (λ _ : List Nat => List Nat) nilCase inductiveCase) [] = [] ++ nilCase := rfl


-- ((head : α) → (tail : List α) → motive tail → motive (head :: tail))
def lenBase {α : Type} ( snd : List α) := snd

/-
### #2: Prove by Induction: Length (l1 ++ l2) = length l1 + length l2
-/

def conjecture : Prop :=
  ∀ {α : Type}
    (l m : List α),
  listLen l + listLen m = listLen (l ++ m)

/-!
Proof: By induction on l.
Two cases: l = [], and l = h::t.
-/

example {α : Type}: conjecture :=
(
  by
    unfold conjecture
    intro α l m
    induction (l : List α) with
    | nil => _
    | cons h t => _
    )






def conjL1Nil := @Eq.refl String

def conjStep := 0
```
