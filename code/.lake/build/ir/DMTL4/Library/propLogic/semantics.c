// Lean compiler output
// Module: DMTL4.Library.propLogic.semantics
// Imports: Init DMTL4.Library.propLogic.syntax DMTL4.Library.propLogic.domain
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
LEAN_EXPORT lean_object* l_DMTL4_propLogic_evalBinOp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMTL4_propLogic_evalUnOp___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DMTL4_propLogic_evalUnOp___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DMTL4_propLogic_evalPLExpr(lean_object*, lean_object*);
uint8_t l_DMTL4_propLogic_iff(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_DMTL4_propLogic_evalUnOp(lean_object*);
LEAN_EXPORT uint8_t l_DMTL4_propLogic_evalUnOp___rarg(uint8_t);
uint8_t l_DMTL4_propLogic_imp(uint8_t, uint8_t);
LEAN_EXPORT uint8_t l_DMTL4_propLogic_evalBinOp(uint8_t, uint8_t, uint8_t);
LEAN_EXPORT uint8_t l_DMTL4_propLogic_evalUnOp___rarg(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_DMTL4_propLogic_evalUnOp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_DMTL4_propLogic_evalUnOp___rarg___boxed), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_DMTL4_propLogic_evalUnOp___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_DMTL4_propLogic_evalUnOp___rarg(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DMTL4_propLogic_evalUnOp___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_DMTL4_propLogic_evalUnOp(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_DMTL4_propLogic_evalBinOp(uint8_t x_1, uint8_t x_2, uint8_t x_3) {
_start:
{
switch (x_1) {
case 0:
{
if (x_2 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
return x_3;
}
}
case 1:
{
if (x_2 == 0)
{
return x_3;
}
else
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
}
case 2:
{
uint8_t x_6; 
x_6 = l_DMTL4_propLogic_imp(x_2, x_3);
return x_6;
}
default: 
{
uint8_t x_7; 
x_7 = l_DMTL4_propLogic_iff(x_2, x_3);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_DMTL4_propLogic_evalBinOp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; uint8_t x_6; uint8_t x_7; lean_object* x_8; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_DMTL4_propLogic_evalBinOp(x_4, x_5, x_6);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_DMTL4_propLogic_evalPLExpr(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_3; lean_object* x_4; 
lean_dec(x_2);
x_3 = lean_ctor_get_uint8(x_1, 0);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
case 1:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 2:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_DMTL4_propLogic_evalPLExpr(x_7, x_2);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
x_10 = l_DMTL4_propLogic_evalUnOp___rarg(x_9);
x_11 = lean_box(x_10);
return x_11;
}
default: 
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_12 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
lean_inc(x_2);
x_15 = l_DMTL4_propLogic_evalPLExpr(x_13, x_2);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
x_17 = l_DMTL4_propLogic_evalPLExpr(x_14, x_2);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
x_19 = l_DMTL4_propLogic_evalBinOp(x_12, x_16, x_18);
x_20 = lean_box(x_19);
return x_20;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_DMTL4_Library_propLogic_syntax(uint8_t builtin, lean_object*);
lean_object* initialize_DMTL4_Library_propLogic_domain(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DMTL4_Library_propLogic_semantics(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DMTL4_Library_propLogic_syntax(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DMTL4_Library_propLogic_domain(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
