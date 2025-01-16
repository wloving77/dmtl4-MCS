```lean
namespace DMTL4

-- # Semantic Domain: Boolean Algebra

/-!
Lean already provides most of what we need. Here we
define the few elements we need that are missing from
the standard Lean libraries
-/

-- Boolean Operation: Implication
def imp : Bool → Bool → Bool
| true, true => true
| true, false => false
| false, true => true
| false, false => true

-- Boolean Operation: Equivalence
def iff : Bool → Bool → Bool
| true, true => true
| false, false => true
| _, _ => false

end DMTL4
```
