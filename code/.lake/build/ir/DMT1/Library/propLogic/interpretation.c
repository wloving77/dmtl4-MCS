// Lean compiler output
// Module: DMT1.Library.propLogic.interpretation
// Imports: Init DMT1.Library.propLogic.utilities DMT1.Library.propLogic.semantics
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpFromRowCols(lean_object*, lean_object*, lean_object*);
static lean_object* l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__1;
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_listInterpsFromExpr___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper___elambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_listInterpsFromExpr(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_overrideVarValInInterp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpFromBools_bools__to__interp__helper(lean_object*, lean_object*, lean_object*);
static lean_object* l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__4;
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_overrideVarValInInterp(lean_object*, lean_object*, uint8_t, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__2;
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpStringsFromInterps(lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpFromBools(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_numVarsFromExpr___boxed(lean_object*);
lean_object* l_DMT1_Library_propLogic_utilities_binaryFromRowCols(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_numVarsFromExpr(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpFromRowCols___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_InterpFromRowCols___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpStringsFromInterps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpsFromNumVars(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__3;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_InterpFromRowCols(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_numVarsFromExpr_max__variable__index___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_numVarsFromExpr_max__variable__index(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_overrideVarValInInterp(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_eq(x_4, x_2);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_apply_1(x_1, x_4);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_1);
x_7 = lean_box(x_3);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_overrideVarValInInterp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_DMT1_Library_propLogic_interpretation_overrideVarValInInterp(x_1, x_2, x_5, x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpFromBools_bools__to__interp__helper(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_4; lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_4 = 0;
x_5 = lean_box(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_inc(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_List_lengthTRAux___rarg(x_2, x_9);
lean_dec(x_2);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_DMT1_Library_propLogic_interpretation_interpFromBools_bools__to__interp__helper), 3, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_8);
x_12 = lean_nat_sub(x_1, x_10);
lean_dec(x_10);
lean_dec(x_1);
x_13 = lean_unbox(x_7);
lean_dec(x_7);
x_14 = l_DMT1_Library_propLogic_interpretation_overrideVarValInInterp(x_11, x_12, x_13, x_3);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_2, 0);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_2);
lean_inc(x_16);
lean_inc(x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_List_lengthTRAux___rarg(x_17, x_18);
lean_dec(x_17);
lean_inc(x_1);
x_20 = lean_alloc_closure((void*)(l_DMT1_Library_propLogic_interpretation_interpFromBools_bools__to__interp__helper), 3, 2);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_16);
x_21 = lean_nat_sub(x_1, x_19);
lean_dec(x_19);
lean_dec(x_1);
x_22 = lean_unbox(x_15);
lean_dec(x_15);
x_23 = l_DMT1_Library_propLogic_interpretation_overrideVarValInInterp(x_20, x_21, x_22, x_3);
lean_dec(x_21);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpFromBools(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_lengthTRAux___rarg(x_1, x_3);
x_5 = l_DMT1_Library_propLogic_interpretation_interpFromBools_bools__to__interp__helper(x_4, x_1, x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_InterpFromRowCols(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_DMT1_Library_propLogic_utilities_binaryFromRowCols(x_1, x_2);
x_5 = l_DMT1_Library_propLogic_interpretation_interpFromBools(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_InterpFromRowCols___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_DMT1_Library_propLogic_interpretation_InterpFromRowCols(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpFromRowCols(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_DMT1_Library_propLogic_utilities_binaryFromRowCols(x_1, x_2);
x_5 = l_DMT1_Library_propLogic_interpretation_interpFromBools(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpFromRowCols___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_DMT1_Library_propLogic_interpretation_interpFromRowCols(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_DMT1_Library_propLogic_interpretation_InterpFromRowCols(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
lean_inc(x_6);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper___elambda__1___boxed), 3, 2);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_6);
x_8 = l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper(x_6, x_2);
lean_dec(x_6);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_box(0);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper___elambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpsFromNumVars(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = lean_nat_pow(x_2, x_1);
x_4 = l_DMT1_Library_propLogic_interpretation_interpsFromNumVars_mk__interps__helper(x_3, x_1);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_numVarsFromExpr_max__variable__index(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
case 2:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
x_1 = x_4;
goto _start;
}
default: 
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = l_DMT1_Library_propLogic_interpretation_numVarsFromExpr_max__variable__index(x_6);
x_9 = l_DMT1_Library_propLogic_interpretation_numVarsFromExpr_max__variable__index(x_7);
x_10 = lean_nat_dec_le(x_8, x_9);
if (x_10 == 0)
{
lean_dec(x_9);
return x_8;
}
else
{
lean_dec(x_8);
return x_9;
}
}
}
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_numVarsFromExpr_max__variable__index___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_DMT1_Library_propLogic_interpretation_numVarsFromExpr_max__variable__index(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_numVarsFromExpr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_DMT1_Library_propLogic_interpretation_numVarsFromExpr_max__variable__index(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_numVarsFromExpr___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_DMT1_Library_propLogic_interpretation_numVarsFromExpr(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_listInterpsFromExpr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_DMT1_Library_propLogic_interpretation_numVarsFromExpr(x_1);
x_3 = l_DMT1_Library_propLogic_interpretation_interpsFromNumVars(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_listInterpsFromExpr___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_DMT1_Library_propLogic_interpretation_listInterpsFromExpr(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("0", 1, 1);
return x_1;
}
}
static lean_object* _init_l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("1", 1, 1);
return x_1;
}
}
static lean_object* _init_l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_2, x_5);
lean_inc(x_1);
lean_inc(x_6);
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp(x_1, x_6);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__2;
x_11 = l_List_appendTR___rarg(x_9, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__4;
x_13 = l_List_appendTR___rarg(x_9, x_12);
return x_13;
}
}
else
{
lean_object* x_14; 
lean_dec(x_1);
x_14 = lean_box(0);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpStringsFromInterps(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp(x_5, x_2);
x_8 = l_DMT1_Library_propLogic_interpretation_interpStringsFromInterps(x_6, x_2);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp(x_9, x_2);
x_12 = l_DMT1_Library_propLogic_interpretation_interpStringsFromInterps(x_10, x_2);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_interpretation_interpStringsFromInterps___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DMT1_Library_propLogic_interpretation_interpStringsFromInterps(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_DMT1_Library_propLogic_utilities(uint8_t builtin, lean_object*);
lean_object* initialize_DMT1_Library_propLogic_semantics(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DMT1_Library_propLogic_interpretation(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DMT1_Library_propLogic_utilities(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DMT1_Library_propLogic_semantics(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__1 = _init_l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__1();
lean_mark_persistent(l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__1);
l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__2 = _init_l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__2();
lean_mark_persistent(l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__2);
l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__3 = _init_l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__3();
lean_mark_persistent(l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__3);
l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__4 = _init_l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__4();
lean_mark_persistent(l_DMT1_Library_propLogic_interpretation_bitStringsFromInterp___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
