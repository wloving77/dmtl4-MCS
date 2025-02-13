import DMT1.Lectures.L04_natArithmetic.syntax
import DMT1.Lectures.L04_natArithmetic.semantics
import DMT1.Lectures.L04_natArithmetic.domain



namespace DMT1.Lectures.natArithmetic.arithLang.demo

/- @@@
# Our Natural Number Arithmetic Language!
@@@ -/

open DMT1.Lectures.natArithmetic.syntax

#check OpExpr

/- @@@
@@@ -/
-- some arithmetic literal expressions
def zero : OpExpr := OpExpr.lit 0       -- abstract syntax
def one  : OpExpr := {⟨1⟩}        -- our concrete syntax

/- @@@
@@@ -/
-- some arithmetic variable expressions
def X : OpExpr := OpExpr.var (Var.mk 0) -- abstract syntax
def Y : OpExpr := {⟨1⟩}                      -- concrete syntax
def Z : OpExpr := {⟨2⟩}
def K : OpExpr := {⟨3⟩}
def M : OpExpr := {⟨4⟩}
def N : OpExpr := {⟨5⟩}

/- @@@
@@@ -/
-- an example of the kinds of expressions we can now write
def e0 : OpExpr := [5]               -- literal expression
def e1 : OpExpr := X                  -- variable expression
def e2 : OpExpr := Y                  -- variable expression
def e3 : OpExpr := Z                  -- variable expression
def e4 : OpExpr := X + [2]         -- operator (+) expression
def e5 : OpExpr := X + ([5] * Y) - X  --
def e6 : OpExpr := X + [2] * Y  - X   --
def e7 : OpExpr := [2] * Y + X - X    --
def e8 : OpExpr := [10] - [2] * X     --
def e9 : OpExpr := [2] * Y - X        --

/- @@@
@@@ -/
-- an interpretation: X = 2, Y = 5, Z = 11, rest = 0
def i259 : Var → Nat
| Var.mk 0  => 2    -- X = 2
| ⟨ 1 ⟩     => 5    -- Y = 5
| ⟨ 2 ⟩     => 9   -- Z = 11
| _         => 0

#eval i259 ⟨ 0 ⟩
#eval i259 ⟨ 1 ⟩
#eval i259 ⟨ 2 ⟩
#eval i259 ⟨ 3 ⟩


/- @@@
@@@ -/
-- predict values of our six expressions under this interpretation
#eval ⟦e0⟧ i259    -- expect 5
#eval ⟦e1⟧ i259    -- expect 2
#eval ⟦e2⟧ i259    -- expect 5
#eval ⟦e3⟧ i259    -- expect 11
#eval ⟦e4⟧ i259    -- expect 2 + 2 = 4
#eval ⟦e5⟧ i259    -- expect 10
#eval ⟦e6⟧ i259    -- expect 10
#eval ⟦e7⟧ i259    -- expect 10
#eval ⟦e8⟧ i259    -- expect 6
#eval ⟦e9⟧ i259    -- expect 6

/- @@@
@@@ -/
-- an interpretation: all variables evaluate to zero
def i0 (_ : Var) := 0
#eval ⟦e0⟧ i0
#eval ⟦e1⟧ i0
#eval ⟦e2⟧ i0
#eval ⟦e3⟧ i0
#eval ⟦e4⟧ i0
#eval ⟦e5⟧ i0

/- @@@
@@@ -/
-- function: first six *variables* go to given values, rest to 0
def i230463 : Var → Nat
| ⟨ 0 ⟩ => 2          -- X := 2
| ⟨ 1 ⟩ => 3          -- Y := 3
| ⟨ 2 ⟩ => 0          -- Z := 0
| ⟨ 3 ⟩ => 4          -- N := 4
| ⟨ 4 ⟩  => 6          -- M := 6
| ⟨ 5 ⟩  => 3          -- P := 3
| _ => 0               -- any other variable := 0

#eval ⟦e0⟧ i230463
#eval ⟦e1⟧ i230463
#eval ⟦e2⟧ i230463
#eval ⟦e3⟧ i230463
#eval ⟦e4⟧ i230463
#eval ⟦e5⟧ i230463

end DMT1.Lectures.natArithmetic.arithLang.demo
