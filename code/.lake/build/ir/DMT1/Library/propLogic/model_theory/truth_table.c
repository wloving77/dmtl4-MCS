// Lean compiler output
// Module: DMT1.Library.propLogic.model_theory.truthTable
// Imports: Init DMT1.Library.propLogic.semantics DMT1.Library.propLogic.interpretation
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
lean_object* l_DMT1_Library_propLogic_interpretation_listInterpsFromExpr(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_model__theory_truth__table_truthTableOutputs_evalBoolExpr__interps(lean_object*, lean_object*);
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_model__theory_truth__table_truthTableOutputs(lean_object*);
lean_object* l_DMT1_Library_propLogic_semantics_eval(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_model__theory_truth__table_truthTableOutputs_evalBoolExpr__interps(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_7 = l_DMT1_Library_propLogic_semantics_eval(x_2, x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = lean_box(0);
x_10 = lean_box(x_8);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_10);
x_11 = l_DMT1_Library_propLogic_model__theory_truth__table_truthTableOutputs_evalBoolExpr__interps(x_6, x_2);
x_12 = l_List_appendTR___rarg(x_1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
lean_inc(x_2);
x_15 = l_DMT1_Library_propLogic_semantics_eval(x_2, x_13);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_box(x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_DMT1_Library_propLogic_model__theory_truth__table_truthTableOutputs_evalBoolExpr__interps(x_14, x_2);
x_21 = l_List_appendTR___rarg(x_19, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_DMT1_Library_propLogic_model__theory_truth__table_truthTableOutputs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_DMT1_Library_propLogic_interpretation_listInterpsFromExpr(x_1);
x_3 = l_DMT1_Library_propLogic_model__theory_truth__table_truthTableOutputs_evalBoolExpr__interps(x_2, x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_DMT1_Library_propLogic_semantics(uint8_t builtin, lean_object*);
lean_object* initialize_DMT1_Library_propLogic_interpretation(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DMT1_Library_propLogic_model__theory_truth__table(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DMT1_Library_propLogic_semantics(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DMT1_Library_propLogic_interpretation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
