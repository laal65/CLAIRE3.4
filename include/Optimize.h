// interface defination for module Optimize, Sun Sep 29 07:16:46 2013
#ifndef CLAIREH_Optimize
#define CLAIREH_Optimize


class Optimize_meta_OPT;
class Optimize_meta_compiler;
class Compile_to_protect;
class Compile_to_CL;
class Compile_to_C;
class Compile_C_cast;
class Optimize_ClairePattern;
class Optimize_optUnion;
class Optimize_Call_function2;

class Optimize_meta_OPT: public thing{ 
  public:
     list *instructions;
     list *objects;
     set *properties;
     list *functions;
     set *need_to_close;
     set *need_modules;
     set *legal_modules;
     ClaireBoolean *allocation;
     ClaireBoolean *protection;
     ClaireBoolean *alloc_stack;
     set *ignore;
     set *to_remove;
     ClairePort *cinterface;
     ClairePort *outfile;
     int max_vars;
     ClaireBoolean *loop_gc;
     int loop_index;
     int level;
     OID in_method;
     ClaireBoolean *profile_ask;
     OID cfile;
     ClaireBoolean *use_update;
     ClaireBoolean *use_nth_equal;
     ClaireBoolean *online_ask;
     ClaireBoolean *recompute;
     list *unsure;
     set *knowns;
     set *simple_operations;
     set *non_identifiable_set;
     ClaireBoolean *use_string_update;} 
;

class Optimize_meta_compiler: public thing{ 
  public:
     char *external;
     list *headers;
     char *source;
     list *debug_ask;
     OID version;
     ClaireBoolean *active_ask;
     int safety;
     char *env;
     int naming;
     list *libraries;
     ClaireBoolean *inline_ask;
     ClaireBoolean *loading_ask;
     ClaireBoolean *class2file_ask;
     ClaireBoolean *greedy_ask;
     list *libraries_dir;
     char *headers_dir;
     list *options;
     ClaireBoolean *overflow_ask;
     ClaireBoolean *diet_ask;
     ClaireBoolean *optimize_ask;} 
;

class Compile_to_protect: public Optimized_instruction{ 
  public:
     OID arg;} 
;

class Compile_to_CL: public Optimized_instruction{ 
  public:
     OID arg;
     ClaireClass *set_arg;} 
;

class Compile_to_C: public Optimized_instruction{ 
  public:
     OID arg;
     ClaireClass *set_arg;} 
;

class Compile_C_cast: public Compile_to_C{ 
  public:} 
;

class Optimize_ClairePattern: public Type{ 
  public:
     property *selector;
     list *arg;} 
;

class Optimize_optUnion: public Union{ 
  public:} 
;

class Optimize_Call_function2: public Optimized_instruction{ 
  public:
     ClaireFunction *arg;
     list *args;} 
;
extern char * home_void();
extern OID  safe_any2(OID v7248);
extern ClaireType * safe_any2_type(ClaireType *v7248);
extern ClaireType * c_type_any_Optimize(OID v1140);
extern OID  c_strict_code_any(OID v7248,ClaireClass *v7243);
extern OID  c_strict_check_any_Optimize(OID v7248,ClaireClass *v7243);
extern OID  c_code_any1_Optimize(OID v7248,ClaireClass *v7243);
extern OID  c_code_any2_Optimize(OID v1140);
extern ClaireBoolean * c_gc_ask_any(OID v1140);
extern ClaireClass * c_sort_any_Optimize(OID v1140);
extern ClaireClass * selector_psort_Call(Call *v1140);
extern int  c_status_any(OID v1140,list *v7236);
extern int  c_or_integer(int v7248,int v7249);
extern int  c_or_list(list *v7236);
extern int  status_I_restriction(restriction *v1140);
extern int  c_return_integer(int v7248,int v7249);
extern int  c_status_call_property(property *v1140,ClaireType *v7244);
extern OID  showstatus_method2(method *v7237);
extern void  s_test_method2(method *v7237);
extern ClaireBoolean * legal_ask_module(module *v1140,OID v7248);
extern OID  legal_ask_environment(ClaireEnvironment *v1140,OID v7248);
extern OID  c_register_object(ClaireObject *v1140);
extern OID  c_register_property(property *v1140);
extern OID  selector_register_property(property *v1140);
extern OID  allocate_ask_property(property *v1140);
extern ClaireBoolean * stable_ask_relation(ClaireRelation *v1140);
extern OID  get_module_object(ClaireObject *v1140);
extern OID  known_I_listargs(listargs *v7236);
extern OID  oload_module(module *v7237);
extern OID  oload_string(char *v7230);
extern OID  turbo_module(module *v7237);
extern void  stats_meta_OPT(Optimize_meta_OPT *v7248);
extern void  self_print_to_protect(Compile_to_protect *v7248);
extern OID  self_eval_to_protect(Compile_to_protect *v7248);
extern void  self_print_to_CL(Compile_to_CL *v1140);
extern ClaireType * c_type_to_CL_Optimize(Compile_to_CL *v1140);
extern ClaireBoolean * c_gc_ask_to_CL(Compile_to_CL *v1140);
extern void  self_print_to_C(Compile_to_C *v1140);
extern ClaireBoolean * c_gc_ask_to_C(Compile_to_C *v1140);
extern ClaireType * c_type_to_C_Optimize(Compile_to_C *v1140);
extern void  self_print_C_cast(Compile_C_cast *v1140);
extern ClaireBoolean * c_gc_ask_C_cast(Compile_C_cast *v1140);
extern ClaireType * c_type_C_cast_Optimize(Compile_C_cast *v1140);
extern OID  c_code_C_cast_Optimize(Compile_C_cast *v1140,ClaireClass *v7243);
extern void  self_print_Pattern(Optimize_ClairePattern *v1140);
extern ClaireBoolean * _Z_any3(OID v7248,Optimize_ClairePattern *v7249);
extern ClaireType * glb_Pattern(Optimize_ClairePattern *v7248,ClaireType *v7249);
extern ClaireBoolean * less_ask_Pattern(Optimize_ClairePattern *v7248,OID v7249);
extern ClaireBoolean * less_ask_any(OID v7248,Optimize_ClairePattern *v7249);
extern Optimize_ClairePattern * nth_property(property *v7240,tuple *v7248);
extern void  warn_void();
extern void  Cerror_string(char *v7243,listargs *v7236);
extern void  notice_void();
extern OID  c_warn_Call(Call *v1140,OID v9399);
extern OID  c_warn_Super(Super *v1140,OID v9399);
extern OID  c_warn_property(property *v1140,list *v7236,list *v9399);
extern OID  c_warn_Variable(Variable *v1140,OID v7248,ClaireType *v7249);
extern OID  sort_equal_class(ClaireClass *v7227,ClaireClass *v11095);
extern ClaireClass * psort_any(OID v7248);
extern ClaireClass * osort_any(OID v7248);
extern ClaireClass * sort_Variable(Variable *v7248);
extern ClaireClass * stupid_t_any1(OID v1140);
extern ClaireBoolean * stupid_t_any2(OID v1140,OID v7248);
extern ClaireBoolean * extended_ask_type(ClaireType *v1140);
extern ClaireType * extends_type(ClaireType *v7248);
extern ClaireType * sort_abstract_I_type(ClaireType *v7248);
extern ClaireBoolean * sort_abstract_ask_type(ClaireType *v7248);
extern ClaireType * ptype_type(ClaireType *v7248);
extern ClaireType * pmember_type(ClaireType *v7248);
extern OID  enumerate_code_any(OID v1140,ClaireType *v9239);
extern OID  range_infers_for_Variable(Variable *v1140,ClaireType *v7249,ClaireType *v11687);
extern OID  range_infers_Variable(Variable *v1140,ClaireType *v7249);
extern void  range_infer_case_any(OID v1140,ClaireType *v7249);
extern OID  c_check_any(OID v7248,OID v7249);
extern void  range_sets_any(OID v1140,ClaireType *v7249);
extern ClaireClass * c_srange_method(method *v7237);
extern ClaireBoolean * nativeVar_ask_global_variable(global_variable *v7248);
extern ClaireType * return_type_any(OID v1140);
extern OID  c_code_Type_Optimize(Type *v1140,ClaireClass *v7243);
extern OID  self_code_subtype(subtype *v1140);
extern OID  self_code_Param(Param *v1140);
extern OID  self_code_Union(Union *v1140);
extern OID  self_code_Interval(Interval *v1140);
extern OID  self_code_Reference(Reference *v1140);
extern OID  self_code_Pattern(Optimize_ClairePattern *v1140);
extern OID  member_code_class2(ClaireClass *v1140,OID v7248);
extern OID  member_code_Type(Type *v1140,OID v7248);
extern OID  member_code_Union(Union *v1140,OID v7248);
extern OID  member_code_Interval(Interval *v1140,OID v7248);
extern OID  member_code_Param(Param *v1140,OID v7248);
extern OID  member_code_tuple(tuple *v1140,OID v7248);
extern OID  member_code_any(OID v1140,OID v7248);
extern ClaireBoolean * _Z_any4(OID v7248,OID v7249);
extern ClaireBoolean * _Z_any5(OID v7248,OID v7249);
extern ClaireBoolean * gcsafe_ask_class(ClaireClass *v1140);
extern ClaireBoolean * gcsafe_ask_type(ClaireType *v1140);
extern ClaireBoolean * gcsafe_ask_property(property *v1140);
extern OID  c_gc_I_any1(OID v1140);
extern OID  c_gc_I_any2(OID v1140,ClaireType *v7244);
extern ClaireBoolean * need_protect_any(OID v7248);
extern Variable * Variable_I_symbol(symbol *v7243,int v7239,ClaireType *v7244);
extern list * get_indexed_class_Optimize(ClaireClass *v7227);
extern ClaireBoolean * designated_ask_any(OID v1140);
extern OID  gc_register_Variable(Variable *v1140);
extern OID  gc_register_Variable2(Variable *v1140,OID v10542);
extern ClaireBoolean * inner2outer_ask_any(OID v7248);
extern ClaireBoolean * identifiable_ask_any(OID v1140);
extern OID  c_inline_method1(method *v1140,list *v7236,ClaireClass *v7243);
extern OID  c_inline_method2(method *v1140,list *v7236);
extern OID  c_inline_arg_ask_any(OID v1140);
extern OID  c_substitution_any(OID v1140,list *v11444,list *v3321,ClaireBoolean *v4859);
extern OID  eval_any2(OID v7248,ClaireClass *v7249);
extern list * bound_variables_any(OID v1140);
extern OID  c_boolean_any(OID v7248);
extern OID  restriction_I_property(property *v1140,list *v7236,ClaireBoolean *v11979);
extern OID  restriction_I_list(list *v11438,list *v7236,ClaireBoolean *v11979);
extern OID  restriction_I_class(ClaireClass *v7227,list *v11438,list *v7236);
extern ClaireType * use_range_method(method *v1140,list *v9231);
extern ClaireType * c_type_Call_Optimize(Call *v1140);
extern OID  c_code_Call_Optimize(Call *v1140);
extern OID  c_code_call_Call(Call *v1140,ClaireClass *v11661);
extern Call * open_message_property(property *v1140,list *v7236);
extern ClaireBoolean * c_gc_ask_Call(Call *v1140);
extern OID  daccess_any(OID v1140,ClaireBoolean *v7226);
extern ClaireBoolean * c_gc_ask_Call_slot(Call_slot *v1140);
extern ClaireType * c_type_Call_slot_Optimize(Call_slot *v1140);
extern ClaireType * c_type_Call_table_Optimize(Call_table *v1140);
extern ClaireType * c_type_Call_array_Optimize(Call_array *v1140);
extern OID  c_code_write_Call(Call *v1140);
extern OID  c_code_hold_property(property *v7240,OID v7248,OID v7249,ClaireBoolean *v7226);
extern OID  c_code_add_Call(Call *v1140);
extern OID  c_code_add_bag_Call(Call *v1140);
extern OID  c_code_delete_Call(Call *v1140);
extern OID  c_code_not_Select(Select *v7248);
extern OID  c_code_belong_Call(Call *v1140);
extern OID  c_code_nth_Call(Call *v1140);
extern OID  c_code_table_Call(Call *v1140);
extern OID  c_code_array_Call(Call *v1140);
extern ClaireBoolean * Update_ask_relation(ClaireRelation *v7240,OID v7248,OID v7249);
extern ClaireBoolean * Update_ask_relation2(ClaireRelation *v7240,ClaireRelation *v7243);
extern ClaireType * c_type_Update_Optimize(Update *v1140);
extern OID  c_code_method_method1(method *v1140,list *v7236,list *v9399);
extern OID  c_code_method_method2(method *v1140,list *v7236,list *v9399,ClaireClass *v11661);
extern OID  Call_method_I_method(method *v1140,list *v874);
extern ClaireType * c_type_Call_method_Optimize(Call_method *v1140);
extern OID  c_code_Call_method_Optimize(Call_method *v1140);
extern ClaireBoolean * c_gc_ask_Call_method(Call_method *v1140);
extern ClaireFunction * functional_I_method_Optimize(method *v1140);
extern OID  nth_type_check_type(ClaireType *v11680,ClaireType *v11678,ClaireType *v11692);
extern ClaireBoolean * c_inline_ask_method(method *v1140,list *v7236);
extern OID  inline_optimize_ask_Call(Call *v1140);
extern ClaireType * c_type_Assign_Optimize(Assign *v1140);
extern OID  c_code_Assign_Optimize(Assign *v1140);
extern ClaireBoolean * c_gc_ask_Assign(Assign *v1140);
extern ClaireType * c_type_Gassign_Optimize(Gassign *v1140);
extern OID  c_code_Gassign_Optimize(Gassign *v1140);
extern ClaireBoolean * c_gc_ask_Gassign(Gassign *v1140);
extern ClaireType * c_type_And_Optimize(And *v1140);
extern OID  c_code_And_Optimize(And *v1140);
extern ClaireType * c_type_Or_Optimize(Or *v1140);
extern OID  c_code_Or_Optimize(Or *v1140);
extern ClaireType * c_type_Quote_Optimize(Quote *v1140);
extern void  c_code_Quote_Optimize(Quote *v1140);
extern ClaireType * c_type_to_protect_Optimize(Compile_to_protect *v1140);
extern OID  c_code_to_protect_Optimize(Compile_to_protect *v1140);
extern ClaireBoolean * c_gc_ask_to_protect(Compile_to_protect *v1140);
extern ClaireType * c_type_Return_Optimize(Return *v1140);
extern OID  c_code_Return_Optimize(Return *v1140);
extern ClaireType * c_type_Handle_Optimize(ClaireHandle *v1140);
extern OID  c_code_Handle_Optimize(ClaireHandle *v1140,ClaireClass *v7243);
extern ClaireBoolean * c_gc_ask_Handle(ClaireHandle *v1140);
extern ClaireType * c_type_Cast_Optimize(Cast *v1140);
extern OID  c_code_Cast_Optimize(Cast *v1140);
extern ClaireType * c_type_Super_Optimize(Super *v1140);
extern OID  c_code_Super_Optimize(Super *v1140);
extern void  self_print_Call_function2(Optimize_Call_function2 *v1140);
extern ClaireType * c_type_Call_function2_Optimize(Optimize_Call_function2 *v1140);
extern OID  c_code_Call_function2_Optimize(Optimize_Call_function2 *v1140);
extern OID  c_code_Assert_Optimize(Assert *v1140);
extern OID  c_code_Trace_Optimize(Trace *v1140);
extern ClaireType * c_type_Assert_Optimize(Assert *v1140);
extern ClaireType * c_type_Trace_Optimize(Trace *v1140);
extern ClaireType * c_type_Branch_Optimize(Branch *v1140);
extern OID  c_code_Branch_Optimize(Branch *v1140);
extern OID  c_code_Macro_Optimize(Macro *v1140,ClaireClass *v7243);
extern ClaireType * c_type_Macro_Optimize(Macro *v1140);
extern ClaireType * c_type_Printf_Optimize(Printf *v1140);
extern OID  c_code_Printf_Optimize(Printf *v1140);
extern ClaireType * c_type_Error_Optimize(Error *v1140);
extern OID  c_code_Error_Optimize(Error *v1140);
extern ClaireType * extendedTest_ask_If(If *v1140);
extern ClaireType * c_type_If_Optimize(If *v1140);
extern OID  c_code_If_Optimize(If *v1140,ClaireClass *v7243);
extern ClaireBoolean * c_gc_ask_If(If *v1140);
extern ClaireType * c_type_Case_Optimize(Case *v1140);
extern OID  c_code_Case_Optimize(Case *v1140,ClaireClass *v7243);
extern ClaireType * c_type_Do_Optimize(Do *v1140);
extern OID  c_code_Do_Optimize(Do *v1140,ClaireClass *v7243);
extern ClaireBoolean * c_gc_ask_Do(Do *v1140);
extern ClaireType * c_type_Let_Optimize(Let *v1140);
extern OID  c_code_Let_Optimize(Let *v1140,ClaireClass *v7243);
extern ClaireType * c_type_When_Optimize(When *v1140);
extern OID  c_code_When_Optimize(When *v1140,ClaireClass *v7243);
extern ClaireBoolean * c_gc_ask_Let(Let *v1140);
extern ClaireType * c_type_For_Optimize(For *v1140);
extern ClaireType * infers_from_type2(ClaireType *v7244,OID v1140);
extern OID  c_code_For_Optimize(For *v1140,ClaireClass *v7243);
extern OID  c_code_multiple_For(For *v1140,ClaireType *v9239,ClaireClass *v7243);
extern ClaireBoolean * c_gc_ask_Iteration(Iteration *v1140);
extern ClaireType * c_type_Iteration_Optimize(Iteration *v1140);
extern OID  c_code_Iteration_Optimize(Iteration *v1140);
extern OID  c_code_Select_Optimize(Select *v1140);
extern OID  c_code_Lselect_Optimize(Lselect *v1140);
extern OID  c_code_select_Iteration(Iteration *v1140,ClaireClass *v7248);
extern OID  inner_select_Iteration(Iteration *v1140,OID v11684,OID v11661,OID v3321);
extern ClaireType * c_type_Exists_Optimize(Exists *v1140);
extern OID  c_code_Exists_Optimize(Exists *v1140,ClaireClass *v7243);
extern ClaireType * c_type_Image_Optimize(Image *v1140);
extern ClaireType * c_type_Select_Optimize(Select *v1140);
extern ClaireType * c_type_Lselect_Optimize(Lselect *v1140);
extern ClaireType * c_type_While_Optimize(While *v1140);
extern OID  c_code_While_Optimize(While *v1140,ClaireClass *v7243);
extern OID  Iterate_I_Iteration(Iteration *v1140);
extern OID  iterate_Interval(Interval *v7248,Variable *v7246,OID v7229);
extern OID  iterate_array(OID *v7248,Variable *v7246,OID v7229);
extern OID  Iterate_class(ClaireClass *v7248,Variable *v7246,OID v7229);
extern OID  Iterate_any1(OID v7248,Variable *v7246,OID v7229);
extern OID  Iterate_Lselect(Lselect *v7248,Variable *v7246,OID v7229);
extern OID  Iterate_Select(Select *v7248,Variable *v7246,OID v7229);
extern OID  Iterate_Collect(Collect *v7248,Variable *v7246,OID v7229);
extern OID  Iterate_any2(OID v7248,Variable *v7246,OID v7229);
extern OID  Iterate_any3(OID v7248,Variable *v7246,OID v7229);
extern ClaireType * c_type_List_Optimize(List *v1140);
extern OID  c_code_List_Optimize(List *v1140);
extern ClaireType * c_type_Set_Optimize(Set *v1140);
extern OID  c_code_Set_Optimize(Set *v1140);
extern ClaireType * c_type_Tuple_Optimize(Tuple *v1140);
extern OID  c_code_Tuple_Optimize(Tuple *v1140);
extern ClaireType * c_type_Definition_Optimize(Definition *v1140);
extern OID  c_code_Definition_Optimize(Definition *v1140,ClaireClass *v7243);
extern OID  total_ask_class(ClaireClass *v1140,list *v7236);
extern OID  analyze_I_class(ClaireClass *v7227,OID v1140,list *v9231,list *v11437);
extern OID  c_code_Defobj_Optimize(Defobj *v1140,ClaireClass *v7243);
extern OID  c_code_Defclass_Optimize(Defclass *v1140,ClaireClass *v7243);
extern ClaireType * c_type_Defmethod_Optimize(Defmethod *v1140);
extern OID  c_code_Defmethod_Optimize(Defmethod *v1140);
extern ClaireBoolean * sort_pattern_ask_list(list *v11442,OID v3871);
extern OID  sort_code_Defmethod(Defmethod *v1140,list *v11442);
extern method * add_method_property2(property *v7240,list *v11439,ClaireType *v11613,int v11657,ClaireFunction *v11187,ClaireFunction *v11188);
extern OID  add_method_I_method(method *v7237,list *v11439,OID v11613,OID v12924,ClaireFunction *v11255);
extern list * extract_status_new_any(OID v7248);
extern list * extract_signature_I_list(list *v7236);
extern ClaireBoolean * _equalsig_ask_list(list *v7248,list *v7249);
extern char * function_name_property_Optimize(property *v7240,list *v7236,OID v7248);
extern OID  compile_lambda_string(char *v1140,lambda *v7236,OID v7237);
extern OID  c_code_Defarray_Optimize(Defarray *v1140);
extern void  compute_if_write_inverse_relation2(ClaireRelation *v7210);
extern OID  compute_set_write_relation2(ClaireRelation *v7210);
extern OID  Produce_put_property2(property *v7242,Variable *v7248,OID v7249);
extern OID  Produce_erase_property2(property *v7242,Variable *v7248);
extern OID  Produce_put_table2(table *v7242,Variable *v7248,OID v7249);
extern OID  Produce_get_relation2(ClaireRelation *v7242,Variable *v7248);
extern OID  Produce_remove_property2(property *v7242,Variable *v7248,OID v7249);
extern OID  Produce_remove_table2(table *v7242,Variable *v7248,OID v7249);
extern void  Tighten_relation2(ClaireRelation *v7242);
extern void  lexical_num_any2(OID v1140,int v7239);
extern ClaireType * c_type_Defrule2_Optimize(Defrule *v1140);
extern OID  c_code_Defrule_Optimize(Defrule *v1140,ClaireClass *v7243);
extern void  compile_if_write_relation(ClaireRelation *v7210);
extern OID  compileEventMethod_property(property *v7240);

// namespace class for Optimize 
class OptimizeClass: public NameSpace {
public:

global_variable * srange;
global_variable * typing;
global_variable * status;
global_variable * tmatch_ask;
global_variable * pname;
global_variable * if_write;
ClaireClass * _meta_OPT;
ClaireClass * _meta_compiler;
global_variable * claire_options;
global_variable * claire_lib;
global_variable * claire_modules;
Optimize_meta_compiler * compiler;
property * c_type;
property * c_code;
property * c_gc;
property * get_index;
property * get_indexed;
property * make_c_function;
property * make_float_function;
property * c_expression;
property * bool_exp;
property * c_statement;
property * c_interface;
property * c_sort;
property * designated_ask;
property * sort_equal;
property * psort;
property * osort;
property * compile_lambda;
property * c_check;
property * need_protect;
property * member_code;
property * c_strict_code;
property * c_strict_check;
property * stupid_t;
property * object_I;
property * anyObject_I;
property * Cerror;
property * self_code;
property * get_module;
property * main;
ClaireClass * _to_protect;
ClaireClass * _to_CL;
ClaireClass * _to_C;
ClaireClass * _C_cast;
ClaireClass * _Pattern;
Optimize_meta_OPT * OPT;
ClaireClass * _optUnion;
keyword * ambiguous;
property * functional_I;
ClaireClass * _Call_function2;
global_variable * PENIBLE;
global_variable * _starname_star;
global_variable * SHIT;
operation * _equalsig_ask;
property * function_name;
property * home;// claire/"home"
property * instructions;// Compile/"instructions"
property * objects;// Compile/"objects"
property * properties;// Compile/"properties"
property * functions;// Compile/"functions"
property * need_to_close;// Compile/"need_to_close"
property * need_modules;// Compile/"need_modules"
property * legal_modules;// Compile/"legal_modules"
property * allocation;// Compile/"allocation"
property * protection;// Compile/"protection"
property * alloc_stack;// Compile/"alloc_stack"
property * ignore;// Compile/"ignore"
property * to_remove;// Compile/"to_remove"
property * cinterface;// Compile/"cinterface"
property * outfile;// Compile/"outfile"
property * max_vars;// Compile/"max_vars"
property * loop_gc;// Compile/"loop_gc"
property * loop_index;// Compile/"loop_index"
property * level;// Compile/"level"
property * in_method;// Compile/"in_method"
property * profile_ask;// Compile/"profile?"
property * cfile;// Compile/"cfile"
property * use_update;// Optimize/"use_update"
property * use_nth_equal;// Optimize/"use_nth="
property * online_ask;// Optimize/"online?"
property * recompute;// Optimize/"recompute"
property * unsure;// Optimize/"unsure"
property * knowns;// Optimize/"knowns"
property * headers;// claire/"headers"
property * debug_ask;// claire/"debug?"
property * active_ask;// claire/"active?"
property * safety;// claire/"safety"
property * env;// claire/"env"
property * naming;// claire/"naming"
property * libraries;// claire/"libraries"
property * loading_ask;// claire/"loading?"
property * class2file_ask;// claire/"class2file?"
property * greedy_ask;// claire/"greedy?"
property * libraries_dir;// claire/"libraries_dir"
property * headers_dir;// claire/"headers_dir"
property * options;// claire/"options"
property * ptype;// Optimize/"ptype"
property * c_code_call;// Optimize/"c_code_call"
property * c_register;// Optimize/"c_register"
property * c_gc_ask;// Compile/"c_gc?"
property * gcsafe_ask;// Optimize/"gcsafe?"
property * selector_psort;// Optimize/"selector_psort"
property * c_status;// Optimize/"c_status"
property * c_or;// Optimize/"c_or"
property * c_return;// Optimize/"c_return"
property * status_I;// Compile/"status!"
property * stable_ask;// Optimize/"stable?"
property * legal_ask;// Optimize/"legal?"
property * selector_register;// Optimize/"selector_register"
property * allocate_ask;// Optimize/"allocate?"
property * oload;// Optimize/"oload"
property * turbo;// Optimize/"turbo"
property * stats;// Optimize/"stats"
property * sort_abstract_I;// Optimize/"sort_abstract!"
property * warn;// Compile/"warn"
property * c_warn;// Optimize/"c_warn"
property * open_message;// Optimize/"open_message"
property * sort_abstract_ask;// Optimize/"sort_abstract?"
property * extended_ask;// Optimize/"extended?"
property * extends;// Optimize/"extends"
property * enumerate_code;// Optimize/"enumerate_code"
property * c_code_method;// Optimize/"c_code_method"
property * range_infers_for;// Optimize/"range_infers_for"
property * range_infers;// Optimize/"range_infers"
property * gc_register;// Optimize/"gc_register"
property * range_infer_case;// Optimize/"range_infer_case"
property * c_gc_I;// Optimize/"c_gc!"
property * range_sets;// Optimize/"range_sets"
property * Variable_I;// Compile/"Variable!"
property * identifiable_ask;// Compile/"identifiable?"
property * c_inline;// Optimize/"c_inline"
property * bound_variables;// Optimize/"bound_variables"
property * c_substitution;// Optimize/"c_substitution"
property * c_inline_arg_ask;// Optimize/"c_inline_arg?"
property * restriction_I;// Optimize/"restriction!"
property * c_inline_ask;// Optimize/"c_inline?"
property * c_boolean;// Optimize/"c_boolean"
property * use_range;// Optimize/"use_range"
property * inline_optimize_ask;// Optimize/"inline_optimize?"
property * daccess;// Optimize/"daccess"
property * c_code_write;// Optimize/"c_code_write"
property * c_code_hold;// Optimize/"c_code_hold"
property * c_code_add;// Optimize/"c_code_add"
property * c_code_delete;// Optimize/"c_code_delete"
property * c_code_table;// Optimize/"c_code_table"
property * c_code_array;// Optimize/"c_code_array"
property * c_code_nth;// Optimize/"c_code_nth"
property * c_code_belong;// Optimize/"c_code_belong"
property * c_code_not;// Optimize/"c_code_not"
property * Update_ask;// Optimize/"Update?"
property * Call_method_I;// Optimize/"Call_method!"
property * nth_type_check;// Optimize/"nth_type_check"
property * extendedTest_ask;// Optimize/"extendedTest?"
property * Iterate_I;// Optimize/"Iterate!"
property * total_ask;// Optimize/"total?"
property * analyze_I;// Optimize/"analyze!"
property * extract_signature_I;// Optimize/"extract_signature!"
property * extract_status_new;// Optimize/"extract_status_new"
property * add_method_I;// Optimize/"add_method!"
property * showstatus;// claire/"showstatus"
property * safe;// claire/"safe"
property * overflow_ask;// claire/"overflow?"
property * c_code_multiple;// Optimize/"c_code_multiple"
property * Produce_put;// Compile/"Produce_put"
property * Produce_get;// Compile/"Produce_get"
property * Produce_remove;// Compile/"Produce_remove"
property * compute_if_write_inverse;// Compile/"compute_if_write_inverse"
property * compute_set_write;// Compile/"compute_set_write"
property * Tighten;// Compile/"Tighten"
property * c_code_add_bag;// Optimize/"c_code_add_bag"
property * diet_ask;// claire/"diet?"
property * Produce_erase;// Compile/"Produce_erase"
property * lexical_num;// Compile/"lexical_num"
property * inner2outer_ask;// Compile/"inner2outer?"
property * pmember;// Optimize/"pmember"
property * c_code_select;// Optimize/"c_code_select"
property * inner_select;// Optimize/"inner_select"
property * compile_if_write;// Optimize/"compile_if_write"
property * compileEventMethod;// Optimize/"compileEventMethod"
property * s_test;// claire/"s_test"
property * c_srange;// Compile/"c_srange"
property * optimize_ask;// claire/"optimize?"
property * nativeVar_ask;// Compile/"nativeVar?"
property * simple_operations;// Compile/"simple_operations"
property * non_identifiable_set;// Compile/"non_identifiable_set"
property * sort_pattern_ask;// Optimize/"sort_pattern?"
property * sort_code;// Optimize/"sort_code"
property * return_type;// Compile/"return_type"
property * notice;// Compile/"notice"
property * infers_from;// Optimize/"infers_from"
property * use_string_update;// Compile/"use_string_update"
property * c_status_call;// Optimize/"c_status_call"

// module definition 
 void metaLoad();};

extern OptimizeClass Optimize;
extern NameSpace Compile;
extern NameSpace iClaire;

#endif
