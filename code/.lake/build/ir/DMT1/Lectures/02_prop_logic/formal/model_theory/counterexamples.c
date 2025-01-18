// Lean compiler output
// Module: DMT1.Lectures.«02_propLogic».formal.model_theory.counterexamples
// Imports: Init DMT1.Lectures.«02_propLogic».formal.model_theory.models
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
lean_object* l_DMT1_lecture_prop__logic_semantics_models_findModel(lean_object*);
lean_object* l_DMT1_lecture_prop__logic_semantics_models_findModels(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_lecture_prop__logic_semantics_models_findCounterexamples(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_lecture_prop__logic_semantics_models_findCounterexample(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_lecture_prop__logic_semantics_models_findCounterexamples(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
x_4 = l_DMT1_lecture_prop__logic_semantics_models_findModels(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DMT1_lecture_prop__logic_semantics_models_findCounterexample(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
x_4 = l_DMT1_lecture_prop__logic_semantics_models_findModel(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_DMT1_Lectures_02__prop__logic_formal_model__theory_models(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DMT1_Lectures_02__prop__logic_formal_model__theory_counterexamples(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DMT1_Lectures_02__prop__logic_formal_model__theory_models(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
