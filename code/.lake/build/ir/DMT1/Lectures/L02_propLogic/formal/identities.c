// Lean compiler output
// Module: DMT1.Lectures.L02_propLogic.formal.identities
// Imports: Init DMT1.Lectures.L02_propLogic.formal.syntax
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
static lean_object* l_DMT1_lecture_propLogic_R___closed__1;
static lean_object* l_DMT1_lecture_propLogic_identityAnd___closed__2;
static lean_object* l_DMT1_lecture_propLogic_equivalence___closed__2;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_Q;
static lean_object* l_DMT1_lecture_propLogic_distribOrAnd___closed__1;
static lean_object* l_DMT1_lecture_propLogic_annhilateOr___closed__1;
static lean_object* l_DMT1_lecture_propLogic_andCommutative___closed__1;
static lean_object* l_DMT1_lecture_propLogic_andAssociative___closed__1;
static lean_object* l_DMT1_lecture_propLogic_andCommutative___closed__3;
static lean_object* l_DMT1_lecture_propLogic_implication___closed__3;
static lean_object* l_DMT1_lecture_propLogic_orCommutative___closed__2;
static lean_object* l_DMT1_lecture_propLogic_exportation___closed__1;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_distribNotOr;
static lean_object* l_DMT1_lecture_propLogic_distribOrAnd___closed__2;
static lean_object* l_DMT1_lecture_propLogic_distribAndOr___closed__3;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_annhilateAnd;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_andIdempotent;
static lean_object* l_DMT1_lecture_propLogic_orAssociative___closed__1;
static lean_object* l_DMT1_lecture_propLogic_absurdity___closed__3;
static lean_object* l_DMT1_lecture_propLogic_distribNotAnd___closed__2;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_andAssociative;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_orAssociative;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_orIdempotent;
static lean_object* l_DMT1_lecture_propLogic_P___closed__1;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_R;
static lean_object* l_DMT1_lecture_propLogic_absurdity___closed__1;
static lean_object* l_DMT1_lecture_propLogic_distribNotAnd___closed__1;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_annhilateOr;
static lean_object* l_DMT1_lecture_propLogic_exportation___closed__2;
static lean_object* l_DMT1_lecture_propLogic_distribAndOr___closed__4;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_identityOr;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_orCommutative;
static lean_object* l_DMT1_lecture_propLogic_orAssociative___closed__3;
static lean_object* l_DMT1_lecture_propLogic_distribAndOr___closed__2;
static lean_object* l_DMT1_lecture_propLogic_orIdempotent___closed__2;
static lean_object* l_DMT1_lecture_propLogic_andAssociative___closed__3;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_identityAnd;
static lean_object* l_DMT1_lecture_propLogic_orCommutative___closed__3;
static lean_object* l_DMT1_lecture_propLogic_identityOr___closed__1;
static lean_object* l_DMT1_lecture_propLogic_implication___closed__2;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_andCommutative;
static lean_object* l_DMT1_lecture_propLogic_distribOrAnd___closed__4;
static lean_object* l_DMT1_lecture_propLogic_andCommutative___closed__2;
static lean_object* l_DMT1_lecture_propLogic_identityOr___closed__2;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_equivalence;
static lean_object* l_DMT1_lecture_propLogic_exportation___closed__4;
static lean_object* l_DMT1_lecture_propLogic_identityAnd___closed__3;
static lean_object* l_DMT1_lecture_propLogic_absurdity___closed__2;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_absurdity;
static lean_object* l_DMT1_lecture_propLogic_andIdempotent___closed__1;
static lean_object* l_DMT1_lecture_propLogic_equivalence___closed__5;
static lean_object* l_DMT1_lecture_propLogic_annhilateOr___closed__2;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_distribOrAnd;
static lean_object* l_DMT1_lecture_propLogic_equivalence___closed__3;
static lean_object* l_DMT1_lecture_propLogic_orIdempotent___closed__1;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_distribNotAnd;
static lean_object* l_DMT1_lecture_propLogic_Q___closed__1;
static lean_object* l_DMT1_lecture_propLogic_identityAnd___closed__1;
static lean_object* l_DMT1_lecture_propLogic_annhilateAnd___closed__1;
static lean_object* l_DMT1_lecture_propLogic_orAssociative___closed__2;
static lean_object* l_DMT1_lecture_propLogic_equivalence___closed__1;
static lean_object* l_DMT1_lecture_propLogic_distribNotAnd___closed__3;
static lean_object* l_DMT1_lecture_propLogic_andIdempotent___closed__2;
static lean_object* l_DMT1_lecture_propLogic_absurdity___closed__4;
static lean_object* l_DMT1_lecture_propLogic_identityOr___closed__3;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_exportation;
static lean_object* l_DMT1_lecture_propLogic_annhilateAnd___closed__2;
static lean_object* l_DMT1_lecture_propLogic_exportation___closed__3;
static lean_object* l_DMT1_lecture_propLogic_orCommutative___closed__1;
static lean_object* l_DMT1_lecture_propLogic_distribAndOr___closed__1;
static lean_object* l_DMT1_lecture_propLogic_orAssociative___closed__4;
static lean_object* l_DMT1_lecture_propLogic_distribNotOr___closed__1;
static lean_object* l_DMT1_lecture_propLogic_andAssociative___closed__2;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_P;
static lean_object* l_DMT1_lecture_propLogic_andAssociative___closed__4;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_implication;
static lean_object* l_DMT1_lecture_propLogic_implication___closed__1;
static lean_object* l_DMT1_lecture_propLogic_equivalence___closed__4;
static lean_object* l_DMT1_lecture_propLogic_distribOrAnd___closed__3;
static lean_object* l_DMT1_lecture_propLogic_distribNotOr___closed__3;
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_distribAndOr;
static lean_object* l_DMT1_lecture_propLogic_distribNotOr___closed__2;
static lean_object* _init_l_DMT1_lecture_propLogic_P___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_P() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_P___closed__1;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_Q___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_Q() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_Q___closed__1;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_R___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_R() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_R___closed__1;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_andIdempotent___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*2, x_1);
return x_3;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_andIdempotent___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_andIdempotent___closed__1;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_andIdempotent() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_andIdempotent___closed__2;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_orIdempotent___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*2, x_1);
return x_3;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_orIdempotent___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_orIdempotent___closed__1;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_orIdempotent() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_orIdempotent___closed__2;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_andCommutative___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_Q;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_andCommutative___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_Q;
x_3 = l_DMT1_lecture_propLogic_P;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_andCommutative___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_andCommutative___closed__1;
x_3 = l_DMT1_lecture_propLogic_andCommutative___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_andCommutative() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_andCommutative___closed__3;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_orCommutative___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_Q;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_orCommutative___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_Q;
x_3 = l_DMT1_lecture_propLogic_P;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_orCommutative___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_orCommutative___closed__1;
x_3 = l_DMT1_lecture_propLogic_orCommutative___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_orCommutative() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_orCommutative___closed__3;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_identityAnd___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_identityAnd___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_identityAnd___closed__1;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_identityAnd___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_identityAnd___closed__2;
x_3 = l_DMT1_lecture_propLogic_P;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_identityAnd() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_identityAnd___closed__3;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_identityOr___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_identityOr___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_identityOr___closed__1;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_identityOr___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_identityOr___closed__2;
x_3 = l_DMT1_lecture_propLogic_P;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_identityOr() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_identityOr___closed__3;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_annhilateAnd___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_identityOr___closed__1;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_annhilateAnd___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_annhilateAnd___closed__1;
x_3 = l_DMT1_lecture_propLogic_identityOr___closed__1;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_annhilateAnd() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_annhilateAnd___closed__2;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_annhilateOr___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_identityAnd___closed__1;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_annhilateOr___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_annhilateOr___closed__1;
x_3 = l_DMT1_lecture_propLogic_identityAnd___closed__1;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_annhilateOr() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_annhilateOr___closed__2;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_orAssociative___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_orCommutative___closed__1;
x_3 = l_DMT1_lecture_propLogic_R;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_orAssociative___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_Q;
x_3 = l_DMT1_lecture_propLogic_R;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_orAssociative___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_orAssociative___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_orAssociative___closed__4() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_orAssociative___closed__1;
x_3 = l_DMT1_lecture_propLogic_orAssociative___closed__3;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_orAssociative() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_orAssociative___closed__4;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_andAssociative___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_andCommutative___closed__1;
x_3 = l_DMT1_lecture_propLogic_R;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_andAssociative___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_Q;
x_3 = l_DMT1_lecture_propLogic_R;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_andAssociative___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_andAssociative___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_andAssociative___closed__4() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_andAssociative___closed__1;
x_3 = l_DMT1_lecture_propLogic_andAssociative___closed__3;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_andAssociative() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_andAssociative___closed__4;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_equivalence___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_Q;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_equivalence___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 2;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_Q;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_equivalence___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 2;
x_2 = l_DMT1_lecture_propLogic_Q;
x_3 = l_DMT1_lecture_propLogic_P;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_equivalence___closed__4() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_equivalence___closed__2;
x_3 = l_DMT1_lecture_propLogic_equivalence___closed__3;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_equivalence___closed__5() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_equivalence___closed__1;
x_3 = l_DMT1_lecture_propLogic_equivalence___closed__4;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_equivalence() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_equivalence___closed__5;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_implication___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_implication___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_implication___closed__1;
x_3 = l_DMT1_lecture_propLogic_Q;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_implication___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_equivalence___closed__2;
x_3 = l_DMT1_lecture_propLogic_implication___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_implication() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_implication___closed__3;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_exportation___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 2;
x_2 = l_DMT1_lecture_propLogic_andCommutative___closed__1;
x_3 = l_DMT1_lecture_propLogic_R;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_exportation___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 2;
x_2 = l_DMT1_lecture_propLogic_Q;
x_3 = l_DMT1_lecture_propLogic_R;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_exportation___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 2;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_exportation___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_exportation___closed__4() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_exportation___closed__1;
x_3 = l_DMT1_lecture_propLogic_exportation___closed__3;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_exportation() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_exportation___closed__4;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_absurdity___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_DMT1_lecture_propLogic_Q;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_absurdity___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 2;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_absurdity___closed__1;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_absurdity___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_equivalence___closed__2;
x_3 = l_DMT1_lecture_propLogic_absurdity___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_absurdity___closed__4() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 2;
x_2 = l_DMT1_lecture_propLogic_absurdity___closed__3;
x_3 = l_DMT1_lecture_propLogic_implication___closed__1;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_absurdity() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_absurdity___closed__4;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribAndOr___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_orAssociative___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribAndOr___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_R;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribAndOr___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_andCommutative___closed__1;
x_3 = l_DMT1_lecture_propLogic_distribAndOr___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribAndOr___closed__4() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_distribAndOr___closed__1;
x_3 = l_DMT1_lecture_propLogic_distribAndOr___closed__3;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribAndOr() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_distribAndOr___closed__4;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribOrAnd___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_andAssociative___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribOrAnd___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_P;
x_3 = l_DMT1_lecture_propLogic_R;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribOrAnd___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_orCommutative___closed__1;
x_3 = l_DMT1_lecture_propLogic_distribOrAnd___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribOrAnd___closed__4() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_distribOrAnd___closed__1;
x_3 = l_DMT1_lecture_propLogic_distribOrAnd___closed__3;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribOrAnd() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_distribOrAnd___closed__4;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribNotAnd___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_DMT1_lecture_propLogic_andCommutative___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribNotAnd___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_DMT1_lecture_propLogic_implication___closed__1;
x_3 = l_DMT1_lecture_propLogic_absurdity___closed__1;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribNotAnd___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_distribNotAnd___closed__1;
x_3 = l_DMT1_lecture_propLogic_distribNotAnd___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribNotAnd() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_distribNotAnd___closed__3;
return x_1;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribNotOr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_DMT1_lecture_propLogic_orCommutative___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribNotOr___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_DMT1_lecture_propLogic_implication___closed__1;
x_3 = l_DMT1_lecture_propLogic_absurdity___closed__1;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribNotOr___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 3;
x_2 = l_DMT1_lecture_propLogic_distribNotOr___closed__1;
x_3 = l_DMT1_lecture_propLogic_distribNotOr___closed__2;
x_4 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_lecture_propLogic_distribNotOr() {
_start:
{
lean_object* x_1; 
x_1 = l_DMT1_lecture_propLogic_distribNotOr___closed__3;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_DMT1_Lectures_L02__propLogic_formal_syntax(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DMT1_Lectures_L02__propLogic_formal_identities(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DMT1_Lectures_L02__propLogic_formal_syntax(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_DMT1_lecture_propLogic_P___closed__1 = _init_l_DMT1_lecture_propLogic_P___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_P___closed__1);
l_DMT1_lecture_propLogic_P = _init_l_DMT1_lecture_propLogic_P();
lean_mark_persistent(l_DMT1_lecture_propLogic_P);
l_DMT1_lecture_propLogic_Q___closed__1 = _init_l_DMT1_lecture_propLogic_Q___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_Q___closed__1);
l_DMT1_lecture_propLogic_Q = _init_l_DMT1_lecture_propLogic_Q();
lean_mark_persistent(l_DMT1_lecture_propLogic_Q);
l_DMT1_lecture_propLogic_R___closed__1 = _init_l_DMT1_lecture_propLogic_R___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_R___closed__1);
l_DMT1_lecture_propLogic_R = _init_l_DMT1_lecture_propLogic_R();
lean_mark_persistent(l_DMT1_lecture_propLogic_R);
l_DMT1_lecture_propLogic_andIdempotent___closed__1 = _init_l_DMT1_lecture_propLogic_andIdempotent___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_andIdempotent___closed__1);
l_DMT1_lecture_propLogic_andIdempotent___closed__2 = _init_l_DMT1_lecture_propLogic_andIdempotent___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_andIdempotent___closed__2);
l_DMT1_lecture_propLogic_andIdempotent = _init_l_DMT1_lecture_propLogic_andIdempotent();
lean_mark_persistent(l_DMT1_lecture_propLogic_andIdempotent);
l_DMT1_lecture_propLogic_orIdempotent___closed__1 = _init_l_DMT1_lecture_propLogic_orIdempotent___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_orIdempotent___closed__1);
l_DMT1_lecture_propLogic_orIdempotent___closed__2 = _init_l_DMT1_lecture_propLogic_orIdempotent___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_orIdempotent___closed__2);
l_DMT1_lecture_propLogic_orIdempotent = _init_l_DMT1_lecture_propLogic_orIdempotent();
lean_mark_persistent(l_DMT1_lecture_propLogic_orIdempotent);
l_DMT1_lecture_propLogic_andCommutative___closed__1 = _init_l_DMT1_lecture_propLogic_andCommutative___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_andCommutative___closed__1);
l_DMT1_lecture_propLogic_andCommutative___closed__2 = _init_l_DMT1_lecture_propLogic_andCommutative___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_andCommutative___closed__2);
l_DMT1_lecture_propLogic_andCommutative___closed__3 = _init_l_DMT1_lecture_propLogic_andCommutative___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_andCommutative___closed__3);
l_DMT1_lecture_propLogic_andCommutative = _init_l_DMT1_lecture_propLogic_andCommutative();
lean_mark_persistent(l_DMT1_lecture_propLogic_andCommutative);
l_DMT1_lecture_propLogic_orCommutative___closed__1 = _init_l_DMT1_lecture_propLogic_orCommutative___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_orCommutative___closed__1);
l_DMT1_lecture_propLogic_orCommutative___closed__2 = _init_l_DMT1_lecture_propLogic_orCommutative___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_orCommutative___closed__2);
l_DMT1_lecture_propLogic_orCommutative___closed__3 = _init_l_DMT1_lecture_propLogic_orCommutative___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_orCommutative___closed__3);
l_DMT1_lecture_propLogic_orCommutative = _init_l_DMT1_lecture_propLogic_orCommutative();
lean_mark_persistent(l_DMT1_lecture_propLogic_orCommutative);
l_DMT1_lecture_propLogic_identityAnd___closed__1 = _init_l_DMT1_lecture_propLogic_identityAnd___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_identityAnd___closed__1);
l_DMT1_lecture_propLogic_identityAnd___closed__2 = _init_l_DMT1_lecture_propLogic_identityAnd___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_identityAnd___closed__2);
l_DMT1_lecture_propLogic_identityAnd___closed__3 = _init_l_DMT1_lecture_propLogic_identityAnd___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_identityAnd___closed__3);
l_DMT1_lecture_propLogic_identityAnd = _init_l_DMT1_lecture_propLogic_identityAnd();
lean_mark_persistent(l_DMT1_lecture_propLogic_identityAnd);
l_DMT1_lecture_propLogic_identityOr___closed__1 = _init_l_DMT1_lecture_propLogic_identityOr___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_identityOr___closed__1);
l_DMT1_lecture_propLogic_identityOr___closed__2 = _init_l_DMT1_lecture_propLogic_identityOr___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_identityOr___closed__2);
l_DMT1_lecture_propLogic_identityOr___closed__3 = _init_l_DMT1_lecture_propLogic_identityOr___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_identityOr___closed__3);
l_DMT1_lecture_propLogic_identityOr = _init_l_DMT1_lecture_propLogic_identityOr();
lean_mark_persistent(l_DMT1_lecture_propLogic_identityOr);
l_DMT1_lecture_propLogic_annhilateAnd___closed__1 = _init_l_DMT1_lecture_propLogic_annhilateAnd___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_annhilateAnd___closed__1);
l_DMT1_lecture_propLogic_annhilateAnd___closed__2 = _init_l_DMT1_lecture_propLogic_annhilateAnd___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_annhilateAnd___closed__2);
l_DMT1_lecture_propLogic_annhilateAnd = _init_l_DMT1_lecture_propLogic_annhilateAnd();
lean_mark_persistent(l_DMT1_lecture_propLogic_annhilateAnd);
l_DMT1_lecture_propLogic_annhilateOr___closed__1 = _init_l_DMT1_lecture_propLogic_annhilateOr___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_annhilateOr___closed__1);
l_DMT1_lecture_propLogic_annhilateOr___closed__2 = _init_l_DMT1_lecture_propLogic_annhilateOr___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_annhilateOr___closed__2);
l_DMT1_lecture_propLogic_annhilateOr = _init_l_DMT1_lecture_propLogic_annhilateOr();
lean_mark_persistent(l_DMT1_lecture_propLogic_annhilateOr);
l_DMT1_lecture_propLogic_orAssociative___closed__1 = _init_l_DMT1_lecture_propLogic_orAssociative___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_orAssociative___closed__1);
l_DMT1_lecture_propLogic_orAssociative___closed__2 = _init_l_DMT1_lecture_propLogic_orAssociative___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_orAssociative___closed__2);
l_DMT1_lecture_propLogic_orAssociative___closed__3 = _init_l_DMT1_lecture_propLogic_orAssociative___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_orAssociative___closed__3);
l_DMT1_lecture_propLogic_orAssociative___closed__4 = _init_l_DMT1_lecture_propLogic_orAssociative___closed__4();
lean_mark_persistent(l_DMT1_lecture_propLogic_orAssociative___closed__4);
l_DMT1_lecture_propLogic_orAssociative = _init_l_DMT1_lecture_propLogic_orAssociative();
lean_mark_persistent(l_DMT1_lecture_propLogic_orAssociative);
l_DMT1_lecture_propLogic_andAssociative___closed__1 = _init_l_DMT1_lecture_propLogic_andAssociative___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_andAssociative___closed__1);
l_DMT1_lecture_propLogic_andAssociative___closed__2 = _init_l_DMT1_lecture_propLogic_andAssociative___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_andAssociative___closed__2);
l_DMT1_lecture_propLogic_andAssociative___closed__3 = _init_l_DMT1_lecture_propLogic_andAssociative___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_andAssociative___closed__3);
l_DMT1_lecture_propLogic_andAssociative___closed__4 = _init_l_DMT1_lecture_propLogic_andAssociative___closed__4();
lean_mark_persistent(l_DMT1_lecture_propLogic_andAssociative___closed__4);
l_DMT1_lecture_propLogic_andAssociative = _init_l_DMT1_lecture_propLogic_andAssociative();
lean_mark_persistent(l_DMT1_lecture_propLogic_andAssociative);
l_DMT1_lecture_propLogic_equivalence___closed__1 = _init_l_DMT1_lecture_propLogic_equivalence___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_equivalence___closed__1);
l_DMT1_lecture_propLogic_equivalence___closed__2 = _init_l_DMT1_lecture_propLogic_equivalence___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_equivalence___closed__2);
l_DMT1_lecture_propLogic_equivalence___closed__3 = _init_l_DMT1_lecture_propLogic_equivalence___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_equivalence___closed__3);
l_DMT1_lecture_propLogic_equivalence___closed__4 = _init_l_DMT1_lecture_propLogic_equivalence___closed__4();
lean_mark_persistent(l_DMT1_lecture_propLogic_equivalence___closed__4);
l_DMT1_lecture_propLogic_equivalence___closed__5 = _init_l_DMT1_lecture_propLogic_equivalence___closed__5();
lean_mark_persistent(l_DMT1_lecture_propLogic_equivalence___closed__5);
l_DMT1_lecture_propLogic_equivalence = _init_l_DMT1_lecture_propLogic_equivalence();
lean_mark_persistent(l_DMT1_lecture_propLogic_equivalence);
l_DMT1_lecture_propLogic_implication___closed__1 = _init_l_DMT1_lecture_propLogic_implication___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_implication___closed__1);
l_DMT1_lecture_propLogic_implication___closed__2 = _init_l_DMT1_lecture_propLogic_implication___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_implication___closed__2);
l_DMT1_lecture_propLogic_implication___closed__3 = _init_l_DMT1_lecture_propLogic_implication___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_implication___closed__3);
l_DMT1_lecture_propLogic_implication = _init_l_DMT1_lecture_propLogic_implication();
lean_mark_persistent(l_DMT1_lecture_propLogic_implication);
l_DMT1_lecture_propLogic_exportation___closed__1 = _init_l_DMT1_lecture_propLogic_exportation___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_exportation___closed__1);
l_DMT1_lecture_propLogic_exportation___closed__2 = _init_l_DMT1_lecture_propLogic_exportation___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_exportation___closed__2);
l_DMT1_lecture_propLogic_exportation___closed__3 = _init_l_DMT1_lecture_propLogic_exportation___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_exportation___closed__3);
l_DMT1_lecture_propLogic_exportation___closed__4 = _init_l_DMT1_lecture_propLogic_exportation___closed__4();
lean_mark_persistent(l_DMT1_lecture_propLogic_exportation___closed__4);
l_DMT1_lecture_propLogic_exportation = _init_l_DMT1_lecture_propLogic_exportation();
lean_mark_persistent(l_DMT1_lecture_propLogic_exportation);
l_DMT1_lecture_propLogic_absurdity___closed__1 = _init_l_DMT1_lecture_propLogic_absurdity___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_absurdity___closed__1);
l_DMT1_lecture_propLogic_absurdity___closed__2 = _init_l_DMT1_lecture_propLogic_absurdity___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_absurdity___closed__2);
l_DMT1_lecture_propLogic_absurdity___closed__3 = _init_l_DMT1_lecture_propLogic_absurdity___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_absurdity___closed__3);
l_DMT1_lecture_propLogic_absurdity___closed__4 = _init_l_DMT1_lecture_propLogic_absurdity___closed__4();
lean_mark_persistent(l_DMT1_lecture_propLogic_absurdity___closed__4);
l_DMT1_lecture_propLogic_absurdity = _init_l_DMT1_lecture_propLogic_absurdity();
lean_mark_persistent(l_DMT1_lecture_propLogic_absurdity);
l_DMT1_lecture_propLogic_distribAndOr___closed__1 = _init_l_DMT1_lecture_propLogic_distribAndOr___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribAndOr___closed__1);
l_DMT1_lecture_propLogic_distribAndOr___closed__2 = _init_l_DMT1_lecture_propLogic_distribAndOr___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribAndOr___closed__2);
l_DMT1_lecture_propLogic_distribAndOr___closed__3 = _init_l_DMT1_lecture_propLogic_distribAndOr___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribAndOr___closed__3);
l_DMT1_lecture_propLogic_distribAndOr___closed__4 = _init_l_DMT1_lecture_propLogic_distribAndOr___closed__4();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribAndOr___closed__4);
l_DMT1_lecture_propLogic_distribAndOr = _init_l_DMT1_lecture_propLogic_distribAndOr();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribAndOr);
l_DMT1_lecture_propLogic_distribOrAnd___closed__1 = _init_l_DMT1_lecture_propLogic_distribOrAnd___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribOrAnd___closed__1);
l_DMT1_lecture_propLogic_distribOrAnd___closed__2 = _init_l_DMT1_lecture_propLogic_distribOrAnd___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribOrAnd___closed__2);
l_DMT1_lecture_propLogic_distribOrAnd___closed__3 = _init_l_DMT1_lecture_propLogic_distribOrAnd___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribOrAnd___closed__3);
l_DMT1_lecture_propLogic_distribOrAnd___closed__4 = _init_l_DMT1_lecture_propLogic_distribOrAnd___closed__4();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribOrAnd___closed__4);
l_DMT1_lecture_propLogic_distribOrAnd = _init_l_DMT1_lecture_propLogic_distribOrAnd();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribOrAnd);
l_DMT1_lecture_propLogic_distribNotAnd___closed__1 = _init_l_DMT1_lecture_propLogic_distribNotAnd___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribNotAnd___closed__1);
l_DMT1_lecture_propLogic_distribNotAnd___closed__2 = _init_l_DMT1_lecture_propLogic_distribNotAnd___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribNotAnd___closed__2);
l_DMT1_lecture_propLogic_distribNotAnd___closed__3 = _init_l_DMT1_lecture_propLogic_distribNotAnd___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribNotAnd___closed__3);
l_DMT1_lecture_propLogic_distribNotAnd = _init_l_DMT1_lecture_propLogic_distribNotAnd();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribNotAnd);
l_DMT1_lecture_propLogic_distribNotOr___closed__1 = _init_l_DMT1_lecture_propLogic_distribNotOr___closed__1();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribNotOr___closed__1);
l_DMT1_lecture_propLogic_distribNotOr___closed__2 = _init_l_DMT1_lecture_propLogic_distribNotOr___closed__2();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribNotOr___closed__2);
l_DMT1_lecture_propLogic_distribNotOr___closed__3 = _init_l_DMT1_lecture_propLogic_distribNotOr___closed__3();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribNotOr___closed__3);
l_DMT1_lecture_propLogic_distribNotOr = _init_l_DMT1_lecture_propLogic_distribNotOr();
lean_mark_persistent(l_DMT1_lecture_propLogic_distribNotOr);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
