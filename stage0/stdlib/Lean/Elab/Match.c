// Lean compiler output
// Module: Lean.Elab.Match
// Imports: Init Lean.Meta.EqnCompiler.MatchPatternAttr Lean.Meta.EqnCompiler.Match Lean.Elab.SyntheticMVars
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
lean_object* l_List_reverse___rarg(lean_object*);
extern lean_object* l_Lean_mkHole___closed__3;
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__12;
lean_object* l_Array_umapMAux___main___at___private_Lean_Meta_EqnCompiler_Match_2__withAltsAux___main___spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__2;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_8__getMatchAlts(lean_object*);
lean_object* l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_namedPattern___elambda__1___closed__2;
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_Expr_isCharLit(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isNatLit(lean_object*);
lean_object* l___private_Lean_Elab_Match_15__processVar___closed__1;
lean_object* l_Lean_mkLambdaFVars___at_Lean_Meta_CheckAssignment_assignToConstFun___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambdaFVars___at_Lean_Elab_Term_elabImplicitLambdaAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_inferType___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_11__getMVarSyntaxMVarId___boxed(lean_object*);
extern lean_object* l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__2___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_toString___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__2(lean_object*);
lean_object* l_Lean_Elab_Term_reportElimResultErrors___closed__4;
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__4;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__4;
lean_object* l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_ExprDefEq_12__addAssignmentInfo___closed__4;
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__9;
lean_object* l___private_Init_LeanInit_14__mapSepElemsMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
lean_object* l_Lean_Elab_Term_elabMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unreachable_x21___rarg(lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l___private_Lean_Expr_3__getAppArgsAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_15__processVar___closed__8;
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_8__getMatchAlts___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__2;
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__1;
extern lean_object* l_Lean_MessageData_ofList___closed__3;
lean_object* l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__1;
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_repr___rarg___closed__1;
lean_object* l___private_Lean_Elab_Match_16__processIdAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_eq___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNoMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Format_pretty(lean_object*, lean_object*);
extern lean_object* l_Lean_List_format___rarg___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__1;
extern lean_object* l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__13;
lean_object* l___private_Lean_Elab_Match_34__elabMatchCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_8__getMatchAlts___spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClassQuick_x3f___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_15__processVar___closed__9;
extern lean_object* l_Lean_Parser_Term_forall___elambda__1___closed__2;
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__2;
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_identKind___closed__2;
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__2;
extern lean_object* l_Lean_Parser_Term_match___elambda__1___closed__1;
lean_object* l_Lean_Elab_Term_withDepElimPatterns(lean_object*);
lean_object* l_Array_extract___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_reportElimResultErrors___closed__1;
lean_object* l_Lean_Elab_Term_mkMotiveType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_4__liftMetaMFinalizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_mkFreshExprMVarAt___spec__1___rarg(lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_reportElimResultErrors___closed__2;
extern lean_object* l___private_Lean_Elab_Tactic_Basic_2__expandTacticMacroFns___main___closed__4;
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__5;
lean_object* l_Lean_Elab_Term_elabMVarWithIdKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_whnf___at_Lean_Meta_isClassExpensive_x3f___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_23__withPatternVars___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_erase(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__14;
lean_object* l___private_Lean_Elab_Match_28__getFieldsBinderInfoAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_inferTypeRef;
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
lean_object* l_Lean_mkMVar(lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_36__mkOptType(lean_object*);
lean_object* l___private_Lean_Elab_Match_10__mkMVarSyntax___rarg(lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_CollectPatternVars_processIdAuxAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__2;
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__3;
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__6;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__2;
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__1;
lean_object* l_Lean_annotation_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f___closed__1;
lean_object* l___private_Lean_Meta_Basic_5__forallTelescopeReducingAux___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__8;
lean_object* l___private_Lean_Elab_Match_20__collect___main___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabInaccessible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___main___closed__6;
lean_object* l_Lean_whnf___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_35__mkMatchType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l___private_Init_LeanInit_14__mapSepElemsMAux___main___at___private_Lean_Elab_Match_40__mkNewAlts___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
extern lean_object* l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__1;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__9;
lean_object* l___private_Lean_Elab_Match_40__mkNewAlts(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExprMVarAssignment_x3f___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_splitAux___main___closed__1;
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__1;
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkAuxName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_24__elabPatternsAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_repr___rarg___closed__3;
lean_object* l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__2;
extern lean_object* l_Lean_Parser_Term_typeAscription___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__10;
lean_object* l___private_Lean_Elab_Match_15__processVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__1;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_32__elabMatchAux___spec__3(lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__4;
lean_object* l___private_Lean_Elab_Term_5__addContext_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_letDecl___closed__2;
lean_object* l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__4;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapSepElemsM___at___private_Lean_Elab_Match_40__mkNewAlts___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_16__processIdAux___closed__3;
lean_object* l___private_Lean_Elab_Match_1__expandSimpleMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_15__processVar___closed__2;
lean_object* l_Lean_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__1;
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__7;
extern lean_object* l_Lean_mkAppStx___closed__8;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux___closed__9;
lean_object* l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__2;
lean_object* l_Lean_Elab_Term_reportElimResultErrors___closed__6;
lean_object* l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__1;
lean_object* l_List_mapM___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__9;
lean_object* l_Lean_Elab_Term_mkFreshTypeMVar(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_19__throwInvalidPattern(lean_object*);
lean_object* l_Lean_Elab_Term_finalizePatternDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux___closed__2;
lean_object* l_ReaderT_bind___at_Lean_getLCtx___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__4;
lean_object* l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__8;
lean_object* l_Lean_Elab_Term_finalizePatternDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux___main(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux___closed__4;
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_restoreSynthInstanceCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_21__collectPatternVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__12;
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_HasRepr___rarg___closed__1;
extern lean_object* l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__1;
lean_object* l___private_Lean_Elab_Match_10__mkMVarSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapSepElemsM___at___private_Lean_Elab_Match_40__mkNewAlts___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_21__collectPatternVars___closed__1;
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__14;
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_38__mkNewPatterns___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_42__regTraceClasses(lean_object*);
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___main___closed__1;
lean_object* l_Lean_inferType___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__6;
lean_object* l_Lean_Elab_Term_reportElimResultErrors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_38__mkNewPatterns___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getLCtx___at_Lean_mkFreshExprMVar___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___main___at___private_Lean_Elab_Match_16__processIdAux___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__2;
extern lean_object* l_Lean_numLitKind;
extern lean_object* l_Lean_Parser_Term_nomatch___elambda__1___closed__2;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_elabMatch(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_10__mkMVarSyntax___rarg___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_29__mkLocalDeclFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__2;
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_38__mkNewPatterns___main___closed__1;
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux___closed__1;
lean_object* l___private_Lean_Elab_Match_26__markAsVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_strLitKind;
lean_object* l___private_Init_LeanInit_14__mapSepElemsMAux___main___at___private_Lean_Elab_Match_40__mkNewAlts___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toStringAux___main___at___private_Lean_Elab_Match_6__elabDiscrsAux___main___spec__2(uint8_t, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_15__processVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_25__alreadyVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_shrink___main___rarg(lean_object*, lean_object*);
lean_object* l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__throwInvalidPattern(lean_object*);
extern lean_object* l_Lean_EqnCompiler_matchPatternAttr;
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__11;
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux___closed__6;
lean_object* l___private_Lean_Elab_Match_16__processIdAux___closed__1;
lean_object* l___private_Lean_Elab_Match_26__markAsVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_copyInfo(lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__7;
lean_object* l_Lean_mkAnnotation(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_16__processIdAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_33__waitExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__2;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_14__throwAmbiguous(lean_object*);
lean_object* l_Lean_Elab_Term_reportElimResultErrors___closed__5;
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_appendIndexAfter(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind(lean_object*);
lean_object* l_Lean_whnf___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_16__processIdAux___closed__2;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_mkMatchAltView(lean_object*);
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__12;
lean_object* l_Nat_repr(lean_object*);
lean_object* l___private_Lean_Elab_Match_20__collect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___closed__3;
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_2__expandSimpleMatchWithType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_5__elabMatchOptType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__2;
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Lean_Elab_Term_expandMacrosInPatterns(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_assignExprMVar___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__1;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkInaccessible___closed__2;
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Match_41__expandMatchDiscr_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_34__elabMatchCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_inaccessible_x3f___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__8;
lean_object* l___private_Lean_Elab_Match_30__getFieldsBinderInfo(lean_object*);
lean_object* l___private_Lean_Elab_Match_15__processVar___closed__4;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
extern lean_object* l_Lean_choiceKind;
extern lean_object* l_List_repr___rarg___closed__2;
lean_object* l___private_Lean_Elab_Match_39__mkNewAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_charLitKind;
lean_object* l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__3;
lean_object* l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__2;
extern lean_object* l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__8;
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__1;
lean_object* l_Lean_Elab_expandMacros___main(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_reprAux___main___rarg___closed__1;
lean_object* l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__6;
extern lean_object* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_resolveName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_assignExpr(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
lean_object* l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__1;
lean_object* l_Lean_Elab_Term_withLocalDecl___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNoMatch___closed__1;
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__1;
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___main___closed__2;
lean_object* l___private_Lean_Elab_Match_25__alreadyVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__6;
extern lean_object* l_Lean_Options_empty;
lean_object* l_List_toStringAux___main___at___private_Lean_Elab_Match_6__elabDiscrsAux___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3;
lean_object* l_Lean_Elab_Term_reportElimResultErrors___closed__7;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__5;
lean_object* l_Array_filterAux___main___at___private_Lean_Elab_Match_8__getMatchAlts___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabInaccessible(lean_object*);
lean_object* l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__3;
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
extern lean_object* l_Lean_Parser_Term_arrow___elambda__1___closed__2;
lean_object* l_Lean_Elab_addMacroStack(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_structInst___elambda__1___closed__2;
lean_object* l___private_Init_LeanInit_14__mapSepElemsMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_27__throwInvalidPattern___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__2;
extern lean_object* l_Lean_Parser_Term_let___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Match_28__getFieldsBinderInfoAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwUnknownFVar___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_redLength___main___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_inaccessible_x3f(lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
lean_object* l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__3;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_27__throwInvalidPattern___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l___private_Lean_Elab_Match_38__mkNewPatterns(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkInaccessible(lean_object*);
lean_object* l___private_Lean_Meta_Basic_4__forallTelescopeReducingAuxAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux___closed__3;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity___main(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__3;
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_34__elabMatchCore___spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__11;
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__7;
lean_object* l___private_Lean_Elab_Match_29__mkLocalDeclFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_PatternVar_hasToString___closed__1;
lean_object* l_Lean_getFVarLocalDecl___at_Lean_Meta_isClassExpensive_x3f___main___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_expandMacrosInPatterns___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind___closed__2;
lean_object* l_List_toString___at_Lean_Elab_Term_elabMatchAltView___spec__1(lean_object*);
extern lean_object* l_Lean_Meta_mkEqRefl___closed__2;
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_32__elabMatchAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_22__withPatternVarsAux___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_expandMacrosInPatterns___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkInaccessible___closed__1;
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Elab_Match_15__processVar___closed__7;
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__7;
extern lean_object* l_Lean_Parser_Command_openRenamingItem___elambda__1___closed__5;
lean_object* l_Lean_Elab_Term_reportElimResultErrors___closed__3;
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__3;
extern lean_object* l_Lean_Syntax_inhabited;
lean_object* l___private_Lean_Elab_Match_24__elabPatternsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern uint8_t l_Lean_BinderInfo_inhabited;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__1;
lean_object* l___private_Lean_Meta_Basic_4__forallTelescopeReducingAuxAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__6;
lean_object* l_Lean_Elab_Term_elabMVarWithIdKind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3;
lean_object* l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_MessageData_coeOfListExpr___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_Match_12__throwCtorExpected___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__5;
lean_object* l___private_Lean_Elab_Match_13__getNumExplicitCtorParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_expandMacrosInPatterns___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3(lean_object*);
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux___closed__7;
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkMotiveType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkHole(lean_object*);
lean_object* l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__3;
extern lean_object* l_Lean_Parser_Term_inaccessible___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__3;
lean_object* l_Lean_getLCtx___at_Lean_Elab_Term_getFVarLocalDecl_x21___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_main_module(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__3;
lean_object* l___private_Lean_Elab_Match_30__getFieldsBinderInfo___boxed(lean_object*);
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux___closed__5;
lean_object* l_Lean_Expr_getRevArg_x21___main(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_match___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Match_40__mkNewAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__5;
lean_object* l_Lean_Elab_Term_mkMotiveType___closed__1;
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
extern lean_object* l_Lean_SourceInfo_inhabited___closed__1;
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13;
lean_object* l_Lean_Elab_Term_elabInaccessible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_18__processId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_let___elambda__1___closed__1;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l___private_Lean_Elab_Match_23__withPatternVars(lean_object*);
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__2;
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__1;
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_24__elabPatternsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_setOptionFromString___closed__1;
lean_object* l___private_Lean_Elab_Match_20__collect___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux___closed__8;
lean_object* l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_32__elabMatchAux___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_mkForallFVars___at___private_Lean_Meta_InferType_5__inferLambdaType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__9;
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_14__throwAmbiguous___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Init_Util_1__mkPanicMessage___closed__2;
lean_object* l_Lean_LocalContext_addDecl(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__8;
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__2;
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___main___closed__4;
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__4;
lean_object* l_Lean_Parser_registerBuiltinNodeKind(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_27__throwInvalidPattern___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabMatch___closed__1;
lean_object* l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__1;
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_31__withElaboratedLHS___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_39__mkNewAlt(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Closure_mkNextUserName___rarg___closed__2;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__1;
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__6;
lean_object* l___private_Lean_Elab_Match_24__elabPatternsAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___main(lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__9;
lean_object* l_Lean_Elab_Term_withSynthesize___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_4__expandMatchOptType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
extern lean_object* l_Lean_TraceState_Inhabited___closed__1;
lean_object* l_Lean_Elab_Term_mkMotiveType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_arrayLit_x3f(lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__1;
extern lean_object* l_Lean_Parser_Term_matchAlt___closed__2;
lean_object* l___private_Lean_Elab_Match_12__throwCtorExpected(lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshExprMVarWithId(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toList___rarg(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isStringLit(lean_object*);
lean_object* l_Lean_Meta_isClassExpensive_x3f___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_List_toString___at___private_Lean_Elab_Match_6__elabDiscrsAux___main___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_Match_15__processVar___closed__3;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__4;
lean_object* l_Lean_Elab_Term_elabMatchAltView___closed__1;
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__11;
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkHole___closed__2;
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__10;
extern lean_object* l_Lean_whnfRef;
lean_object* l_Lean_getExprMVarAssignment_x3f___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_assignExprMVar___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___main___closed__5;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_expandMacrosInPatterns___spec__2___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Match_10__mkMVarSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getLocalDecl___at_Lean_Elab_Term_finalizePatternDecls___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_15__processVar___closed__6;
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__16;
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__2;
lean_object* l_Lean_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___main___closed__3;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_CollectPatternVars_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_typeSpec___elambda__1___closed__2;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__6;
lean_object* l_Lean_Syntax_formatStxAux___main(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toArrayAux___main___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__5;
extern lean_object* l_Nat_Inhabited;
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__3;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___main___closed__7;
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_PatternVar_hasToString(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep___main(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__15;
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__13;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_occurs(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_7__elabDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_CollectPatternVars_processIdAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getLocalDecl___at_Lean_getFVarLocalDecl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Lean_Elab_Match_16__processIdAux___spec__2(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind___closed__1;
lean_object* l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2(uint8_t, lean_object*);
lean_object* l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_31__withElaboratedLHS(lean_object*);
extern lean_object* l_Lean_Parser_Term_simpleBinder___elambda__1___closed__2;
extern lean_object* l_Lean_Parser_Term_forall___elambda__1___closed__1;
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_22__withPatternVarsAux___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_whnf___at___private_Lean_Elab_Term_8__isTypeApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_11__getMVarSyntaxMVarId(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___closed__2;
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Match_41__expandMatchDiscr_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_counterExamplesToMessageData(lean_object*);
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_insertAt___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_28__getFieldsBinderInfoAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__2;
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__2___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_namedPattern___elambda__1___closed__1;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__5;
lean_object* l___private_Lean_Elab_Match_7__elabDiscrs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__3;
lean_object* l___private_Lean_Elab_Match_15__processVar___closed__5;
lean_object* l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind(lean_object*);
lean_object* l___private_Lean_Elab_Match_17__processCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_expandMacrosInPatterns___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withDepElimPatterns___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_4__expandMatchOptType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__3;
lean_object* l___private_Lean_Elab_Match_28__getFieldsBinderInfoAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
extern lean_object* l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__1;
lean_object* l___private_Lean_Elab_Match_20__collect___main___closed__10;
lean_object* l___private_Lean_Elab_Match_5__elabMatchOptType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Elab_Term_reportElimResultErrors___spec__1(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_monadInhabited___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
lean_object* l___private_Lean_Elab_Match_38__mkNewPatterns___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNoMatch(lean_object*);
lean_object* l_Lean_mkThunk(lean_object*);
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__6;
lean_object* l_Lean_Elab_Term_mkMatchAltView(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getArgs(x_3);
lean_dec(x_3);
x_5 = lean_unsigned_to_nat(2u);
x_6 = l_Array_empty___closed__1;
x_7 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_5, x_4, x_2, x_6);
lean_dec(x_4);
x_8 = l_Lean_Syntax_getArg(x_1, x_5);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_8);
return x_9;
}
}
lean_object* _init_l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_let___elambda__1___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__1;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(":=");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__3;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(";");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__5;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_1__expandSimpleMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_13 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Array_empty___closed__1;
x_18 = lean_array_push(x_17, x_3);
x_19 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_20 = lean_array_push(x_18, x_19);
x_21 = lean_array_push(x_20, x_19);
x_22 = l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__4;
x_23 = lean_array_push(x_21, x_22);
x_24 = lean_array_push(x_23, x_2);
x_25 = l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_array_push(x_17, x_26);
x_28 = l_Lean_Parser_Term_letDecl___closed__2;
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__2;
x_31 = lean_array_push(x_30, x_29);
x_32 = l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__6;
x_33 = lean_array_push(x_31, x_32);
x_34 = lean_array_push(x_33, x_4);
x_35 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = !lean_is_exclusive(x_6);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_6, 6);
lean_inc(x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_1);
lean_ctor_set(x_39, 1, x_36);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set(x_6, 6, x_40);
x_41 = 1;
x_42 = l_Lean_Elab_Term_elabTerm(x_36, x_5, x_41, x_6, x_7, x_8, x_9, x_10, x_11, x_16);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_43 = lean_ctor_get(x_6, 0);
x_44 = lean_ctor_get(x_6, 1);
x_45 = lean_ctor_get(x_6, 2);
x_46 = lean_ctor_get(x_6, 3);
x_47 = lean_ctor_get(x_6, 4);
x_48 = lean_ctor_get(x_6, 5);
x_49 = lean_ctor_get(x_6, 6);
x_50 = lean_ctor_get(x_6, 7);
x_51 = lean_ctor_get_uint8(x_6, sizeof(void*)*8);
x_52 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 1);
x_53 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 2);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_6);
lean_inc(x_36);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_1);
lean_ctor_set(x_54, 1, x_36);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_49);
x_56 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_56, 0, x_43);
lean_ctor_set(x_56, 1, x_44);
lean_ctor_set(x_56, 2, x_45);
lean_ctor_set(x_56, 3, x_46);
lean_ctor_set(x_56, 4, x_47);
lean_ctor_set(x_56, 5, x_48);
lean_ctor_set(x_56, 6, x_55);
lean_ctor_set(x_56, 7, x_50);
lean_ctor_set_uint8(x_56, sizeof(void*)*8, x_51);
lean_ctor_set_uint8(x_56, sizeof(void*)*8 + 1, x_52);
lean_ctor_set_uint8(x_56, sizeof(void*)*8 + 2, x_53);
x_57 = 1;
x_58 = l_Lean_Elab_Term_elabTerm(x_36, x_5, x_57, x_56, x_7, x_8, x_9, x_10, x_11, x_16);
return x_58;
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l___private_Init_Util_1__mkPanicMessage___closed__2;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__1;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_2__expandSimpleMatchWithType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_14 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Array_empty___closed__1;
x_19 = lean_array_push(x_18, x_3);
x_20 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_21 = lean_array_push(x_19, x_20);
x_22 = l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__2;
x_23 = lean_array_push(x_22, x_4);
x_24 = l_Lean_Parser_Term_typeSpec___elambda__1___closed__2;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = lean_array_push(x_18, x_25);
x_27 = l_Lean_nullKind___closed__2;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_array_push(x_21, x_28);
x_30 = l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__4;
x_31 = lean_array_push(x_29, x_30);
x_32 = lean_array_push(x_31, x_2);
x_33 = l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2;
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_array_push(x_18, x_34);
x_36 = l_Lean_Parser_Term_letDecl___closed__2;
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__2;
x_39 = lean_array_push(x_38, x_37);
x_40 = l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__6;
x_41 = lean_array_push(x_39, x_40);
x_42 = lean_array_push(x_41, x_5);
x_43 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = !lean_is_exclusive(x_7);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_7, 6);
lean_inc(x_44);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_1);
lean_ctor_set(x_47, 1, x_44);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
lean_ctor_set(x_7, 6, x_48);
x_49 = 1;
x_50 = l_Lean_Elab_Term_elabTerm(x_44, x_6, x_49, x_7, x_8, x_9, x_10, x_11, x_12, x_17);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; uint8_t x_60; uint8_t x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; 
x_51 = lean_ctor_get(x_7, 0);
x_52 = lean_ctor_get(x_7, 1);
x_53 = lean_ctor_get(x_7, 2);
x_54 = lean_ctor_get(x_7, 3);
x_55 = lean_ctor_get(x_7, 4);
x_56 = lean_ctor_get(x_7, 5);
x_57 = lean_ctor_get(x_7, 6);
x_58 = lean_ctor_get(x_7, 7);
x_59 = lean_ctor_get_uint8(x_7, sizeof(void*)*8);
x_60 = lean_ctor_get_uint8(x_7, sizeof(void*)*8 + 1);
x_61 = lean_ctor_get_uint8(x_7, sizeof(void*)*8 + 2);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_7);
lean_inc(x_44);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_1);
lean_ctor_set(x_62, 1, x_44);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_57);
x_64 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_64, 0, x_51);
lean_ctor_set(x_64, 1, x_52);
lean_ctor_set(x_64, 2, x_53);
lean_ctor_set(x_64, 3, x_54);
lean_ctor_set(x_64, 4, x_55);
lean_ctor_set(x_64, 5, x_56);
lean_ctor_set(x_64, 6, x_63);
lean_ctor_set(x_64, 7, x_58);
lean_ctor_set_uint8(x_64, sizeof(void*)*8, x_59);
lean_ctor_set_uint8(x_64, sizeof(void*)*8 + 1, x_60);
lean_ctor_set_uint8(x_64, sizeof(void*)*8 + 2, x_61);
x_65 = 1;
x_66 = l_Lean_Elab_Term_elabTerm(x_44, x_6, x_65, x_64, x_8, x_9, x_10, x_11, x_12, x_17);
return x_66;
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_forall___elambda__1___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__1;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Lean_mkHole___closed__3;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkHole___closed__2;
x_2 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_nullKind___closed__2;
x_2 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__7;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_simpleBinder___elambda__1___closed__2;
x_2 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__9;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_nullKind___closed__2;
x_2 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__2;
x_2 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__11;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Lean_List_format___rarg___closed__2;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__12;
x_2 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__13;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_2, x_7);
x_9 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main(x_1, x_8, x_3, x_4);
lean_dec(x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__14;
x_13 = lean_array_push(x_12, x_11);
x_14 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Lean_Syntax_copyInfo(x_15, x_1);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_9, 0);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_9);
x_19 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__14;
x_20 = lean_array_push(x_19, x_17);
x_21 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l_Lean_Syntax_copyInfo(x_22, x_1);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_18);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_Lean_mkHole(x_1);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
}
}
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_4__expandMatchOptType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = l_Lean_Syntax_isNone(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Lean_Syntax_getArg(x_2, x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_8, x_9);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main(x_1, x_3, x_4, x_5);
return x_12;
}
}
}
lean_object* l___private_Lean_Elab_Match_4__expandMatchOptType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Match_4__expandMatchOptType(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Match_5__elabMatchOptType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_10 = lean_ctor_get(x_7, 3);
lean_inc(x_10);
x_11 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_8, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_st_ref_get(x_4, x_16);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 4);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_7, 2);
lean_inc(x_23);
x_24 = lean_environment_main_module(x_17);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_12);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_23);
x_26 = l___private_Lean_Elab_Match_4__expandMatchOptType(x_10, x_1, x_2, x_25, x_21);
lean_dec(x_25);
lean_dec(x_10);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_st_ref_take(x_4, x_20);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_30, 4);
lean_dec(x_33);
lean_ctor_set(x_30, 4, x_28);
x_34 = lean_st_ref_set(x_4, x_30, x_31);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_Elab_Term_elabType(x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_35);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_37 = lean_ctor_get(x_30, 0);
x_38 = lean_ctor_get(x_30, 1);
x_39 = lean_ctor_get(x_30, 2);
x_40 = lean_ctor_get(x_30, 3);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_30);
x_41 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_41, 0, x_37);
lean_ctor_set(x_41, 1, x_38);
lean_ctor_set(x_41, 2, x_39);
lean_ctor_set(x_41, 3, x_40);
lean_ctor_set(x_41, 4, x_28);
x_42 = lean_st_ref_set(x_4, x_41, x_31);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_Elab_Term_elabType(x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_43);
return x_44;
}
}
}
lean_object* l___private_Lean_Elab_Match_5__elabMatchOptType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_5__elabMatchOptType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_List_toStringAux___main___at___private_Lean_Elab_Match_6__elabDiscrsAux___main___spec__2(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = l_String_splitAux___main___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = 0;
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_formatStxAux___main(x_6, x_7, x_8, x_4);
x_10 = l_Lean_Options_empty;
x_11 = l_Lean_Format_pretty(x_9, x_10);
x_12 = l_List_reprAux___main___rarg___closed__1;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = l_List_toStringAux___main___at___private_Lean_Elab_Match_6__elabDiscrsAux___main___spec__2(x_1, x_5);
x_15 = lean_string_append(x_13, x_14);
lean_dec(x_14);
return x_15;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_16; 
x_16 = l_String_splitAux___main___closed__1;
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
x_19 = lean_box(0);
x_20 = 0;
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Lean_Syntax_formatStxAux___main(x_19, x_20, x_21, x_17);
x_23 = l_Lean_Options_empty;
x_24 = l_Lean_Format_pretty(x_22, x_23);
x_25 = l_List_toStringAux___main___at___private_Lean_Elab_Match_6__elabDiscrsAux___main___spec__2(x_20, x_18);
x_26 = lean_string_append(x_24, x_25);
lean_dec(x_25);
return x_26;
}
}
}
}
lean_object* l_List_toString___at___private_Lean_Elab_Match_6__elabDiscrsAux___main___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_List_repr___rarg___closed__1;
return x_2;
}
else
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = 1;
x_4 = l_List_toStringAux___main___at___private_Lean_Elab_Match_6__elabDiscrsAux___main___spec__2(x_3, x_1);
x_5 = l_List_repr___rarg___closed__2;
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = l_List_repr___rarg___closed__3;
x_8 = lean_string_append(x_6, x_7);
return x_8;
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid result type provided to match-expression");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected type");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid type provided to match-expression, function type with arity #");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" expected");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__10;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
x_2 = l_Lean_Parser_Term_match___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("discr #");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__14;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__15;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_1);
x_14 = lean_nat_dec_lt(x_3, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_4);
x_15 = l_Lean_Elab_Term_isDefEq(x_4, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_5);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_4);
x_20 = l_Lean_indentExpr(x_19);
x_21 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__3;
x_22 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l_Lean_MessageData_ofList___closed__3;
x_24 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__6;
x_26 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_27, 0, x_2);
x_28 = l_Lean_indentExpr(x_27);
x_29 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_29, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
return x_30;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_15);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_15, 0);
lean_dec(x_36);
lean_ctor_set(x_15, 0, x_5);
return x_15;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_15, 1);
lean_inc(x_37);
lean_dec(x_15);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_5);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_15);
if (x_39 == 0)
{
return x_15;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_15, 0);
x_41 = lean_ctor_get(x_15, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_15);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_array_fget(x_1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_44 = l_Lean_whnf___at___private_Lean_Elab_Term_8__isTypeApp_x3f___spec__1(x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
if (lean_obj_tag(x_45) == 7)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_60 = lean_ctor_get(x_45, 1);
lean_inc(x_60);
x_61 = lean_ctor_get(x_45, 2);
lean_inc(x_61);
lean_dec(x_45);
lean_inc(x_60);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_60);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_63 = l_Lean_Elab_Term_elabTermEnsuringType(x_43, x_62, x_6, x_7, x_8, x_9, x_10, x_11, x_46);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_ctor_get(x_10, 0);
lean_inc(x_66);
x_67 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13;
x_68 = l_Lean_checkTraceOption(x_66, x_67);
lean_dec(x_66);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_60);
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_add(x_3, x_69);
lean_dec(x_3);
x_71 = lean_expr_instantiate1(x_61, x_64);
lean_dec(x_61);
x_72 = lean_array_push(x_5, x_64);
x_3 = x_70;
x_4 = x_71;
x_5 = x_72;
x_12 = x_65;
goto _start;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_inc(x_3);
x_74 = l_Nat_repr(x_3);
x_75 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_76 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_76, 0, x_75);
x_77 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__16;
x_78 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
x_79 = l___private_Lean_Meta_ExprDefEq_12__addAssignmentInfo___closed__4;
x_80 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
lean_inc(x_64);
x_81 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_81, 0, x_64);
x_82 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_83 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
x_84 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_85, 0, x_60);
x_86 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_87 = l_Lean_Elab_Term_logTrace(x_67, x_86, x_6, x_7, x_8, x_9, x_10, x_11, x_65);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
lean_dec(x_87);
x_89 = lean_unsigned_to_nat(1u);
x_90 = lean_nat_add(x_3, x_89);
lean_dec(x_3);
x_91 = lean_expr_instantiate1(x_61, x_64);
lean_dec(x_61);
x_92 = lean_array_push(x_5, x_64);
x_3 = x_90;
x_4 = x_91;
x_5 = x_92;
x_12 = x_88;
goto _start;
}
else
{
uint8_t x_94; 
lean_dec(x_64);
lean_dec(x_61);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_94 = !lean_is_exclusive(x_87);
if (x_94 == 0)
{
return x_87;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_87, 0);
x_96 = lean_ctor_get(x_87, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_87);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
}
else
{
uint8_t x_98; 
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_98 = !lean_is_exclusive(x_63);
if (x_98 == 0)
{
return x_63;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_63, 0);
x_100 = lean_ctor_get(x_63, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_63);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
else
{
lean_object* x_102; 
lean_dec(x_45);
lean_dec(x_43);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_102 = lean_box(0);
x_47 = x_102;
goto block_59;
}
block_59:
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_47);
x_48 = l_Array_toList___rarg(x_1);
x_49 = l_List_toString___at___private_Lean_Elab_Match_6__elabDiscrsAux___main___spec__1(x_48);
x_50 = l_Array_HasRepr___rarg___closed__1;
x_51 = lean_string_append(x_50, x_49);
lean_dec(x_49);
x_52 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__9;
x_55 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__12;
x_57 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_57, x_6, x_7, x_8, x_9, x_10, x_11, x_46);
return x_58;
}
}
else
{
uint8_t x_103; 
lean_dec(x_43);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_103 = !lean_is_exclusive(x_44);
if (x_103 == 0)
{
return x_44;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_44, 0);
x_105 = lean_ctor_get(x_44, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_44);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
}
}
lean_object* l_List_toStringAux___main___at___private_Lean_Elab_Match_6__elabDiscrsAux___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_toStringAux___main___at___private_Lean_Elab_Match_6__elabDiscrsAux___main___spec__2(x_3, x_2);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_6__elabDiscrsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Match_6__elabDiscrsAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_7__elabDiscrs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_empty___closed__1;
x_13 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main(x_1, x_3, x_11, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_7__elabDiscrs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Match_7__elabDiscrs(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_expandMacrosInPatterns___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_2, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_array_fget(x_3, x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_fset(x_3, x_2, x_11);
x_13 = x_10;
lean_inc(x_4);
lean_inc(x_1);
x_14 = l_Lean_Elab_expandMacros___main(x_1, x_13, x_4, x_5);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_2, x_17);
x_19 = x_15;
x_20 = lean_array_fset(x_12, x_2, x_19);
lean_dec(x_2);
x_2 = x_18;
x_3 = x_20;
x_5 = x_16;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_expandMacrosInPatterns___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_expandMacrosInPatterns___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_expandMacrosInPatterns___spec__2___rarg), 1, 0);
return x_7;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_expandMacrosInPatterns___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_3);
x_12 = lean_nat_dec_lt(x_2, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_13 = x_3;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_26; uint8_t x_27; 
x_15 = lean_array_fget(x_3, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_fset(x_3, x_2, x_16);
x_26 = x_15;
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = lean_ctor_get(x_26, 1);
x_30 = lean_ctor_get(x_26, 2);
x_31 = x_29;
lean_inc(x_1);
x_32 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_expandMacrosInPatterns___spec__1), 5, 3);
lean_closure_set(x_32, 0, x_1);
lean_closure_set(x_32, 1, x_16);
lean_closure_set(x_32, 2, x_31);
x_33 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_st_ref_get(x_9, x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_st_ref_get(x_5, x_38);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_41, 4);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_8, 2);
lean_inc(x_45);
x_46 = lean_environment_main_module(x_39);
x_47 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_34);
lean_ctor_set(x_47, 2, x_44);
lean_ctor_set(x_47, 3, x_45);
x_48 = x_32;
x_49 = lean_apply_2(x_48, x_47, x_43);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_st_ref_take(x_5, x_42);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = !lean_is_exclusive(x_53);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_53, 4);
lean_dec(x_56);
lean_ctor_set(x_53, 4, x_51);
x_57 = lean_st_ref_set(x_5, x_53, x_54);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
lean_ctor_set(x_26, 1, x_50);
x_18 = x_26;
x_19 = x_58;
goto block_25;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_59 = lean_ctor_get(x_53, 0);
x_60 = lean_ctor_get(x_53, 1);
x_61 = lean_ctor_get(x_53, 2);
x_62 = lean_ctor_get(x_53, 3);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_53);
x_63 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_63, 0, x_59);
lean_ctor_set(x_63, 1, x_60);
lean_ctor_set(x_63, 2, x_61);
lean_ctor_set(x_63, 3, x_62);
lean_ctor_set(x_63, 4, x_51);
x_64 = lean_st_ref_set(x_5, x_63, x_54);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
lean_ctor_set(x_26, 1, x_50);
x_18 = x_26;
x_19 = x_65;
goto block_25;
}
}
else
{
lean_object* x_66; 
lean_free_object(x_26);
lean_dec(x_30);
lean_dec(x_28);
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
x_66 = lean_ctor_get(x_49, 0);
lean_inc(x_66);
lean_dec(x_49);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_69, 0, x_68);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
x_71 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_67, x_70, x_4, x_5, x_6, x_7, x_8, x_9, x_42);
lean_dec(x_67);
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
return x_71;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_71, 0);
x_74 = lean_ctor_get(x_71, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_71);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
else
{
lean_object* x_76; uint8_t x_77; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_76 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_expandMacrosInPatterns___spec__2___rarg(x_42);
x_77 = !lean_is_exclusive(x_76);
if (x_77 == 0)
{
return x_76;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_76, 0);
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_76);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_81 = lean_ctor_get(x_26, 0);
x_82 = lean_ctor_get(x_26, 1);
x_83 = lean_ctor_get(x_26, 2);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_26);
x_84 = x_82;
lean_inc(x_1);
x_85 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_expandMacrosInPatterns___spec__1), 5, 3);
lean_closure_set(x_85, 0, x_1);
lean_closure_set(x_85, 1, x_16);
lean_closure_set(x_85, 2, x_84);
x_86 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = lean_st_ref_get(x_9, x_88);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_ctor_get(x_90, 0);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_st_ref_get(x_5, x_91);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
lean_dec(x_93);
x_96 = lean_ctor_get(x_94, 4);
lean_inc(x_96);
lean_dec(x_94);
x_97 = lean_ctor_get(x_8, 1);
lean_inc(x_97);
x_98 = lean_ctor_get(x_8, 2);
lean_inc(x_98);
x_99 = lean_environment_main_module(x_92);
x_100 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_87);
lean_ctor_set(x_100, 2, x_97);
lean_ctor_set(x_100, 3, x_98);
x_101 = x_85;
x_102 = lean_apply_2(x_101, x_100, x_96);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = lean_st_ref_take(x_5, x_95);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_108 = lean_ctor_get(x_106, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_106, 1);
lean_inc(x_109);
x_110 = lean_ctor_get(x_106, 2);
lean_inc(x_110);
x_111 = lean_ctor_get(x_106, 3);
lean_inc(x_111);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 lean_ctor_release(x_106, 2);
 lean_ctor_release(x_106, 3);
 lean_ctor_release(x_106, 4);
 x_112 = x_106;
} else {
 lean_dec_ref(x_106);
 x_112 = lean_box(0);
}
if (lean_is_scalar(x_112)) {
 x_113 = lean_alloc_ctor(0, 5, 0);
} else {
 x_113 = x_112;
}
lean_ctor_set(x_113, 0, x_108);
lean_ctor_set(x_113, 1, x_109);
lean_ctor_set(x_113, 2, x_110);
lean_ctor_set(x_113, 3, x_111);
lean_ctor_set(x_113, 4, x_104);
x_114 = lean_st_ref_set(x_5, x_113, x_107);
x_115 = lean_ctor_get(x_114, 1);
lean_inc(x_115);
lean_dec(x_114);
x_116 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_116, 0, x_81);
lean_ctor_set(x_116, 1, x_103);
lean_ctor_set(x_116, 2, x_83);
x_18 = x_116;
x_19 = x_115;
goto block_25;
}
else
{
lean_object* x_117; 
lean_dec(x_83);
lean_dec(x_81);
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
x_117 = lean_ctor_get(x_102, 0);
lean_inc(x_117);
lean_dec(x_102);
if (lean_obj_tag(x_117) == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec(x_117);
x_120 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_120, 0, x_119);
x_121 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_121, 0, x_120);
x_122 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_118, x_121, x_4, x_5, x_6, x_7, x_8, x_9, x_95);
lean_dec(x_118);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_125 = x_122;
} else {
 lean_dec_ref(x_122);
 x_125 = lean_box(0);
}
if (lean_is_scalar(x_125)) {
 x_126 = lean_alloc_ctor(1, 2, 0);
} else {
 x_126 = x_125;
}
lean_ctor_set(x_126, 0, x_123);
lean_ctor_set(x_126, 1, x_124);
return x_126;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_127 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_expandMacrosInPatterns___spec__2___rarg(x_95);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_130 = x_127;
} else {
 lean_dec_ref(x_127);
 x_130 = lean_box(0);
}
if (lean_is_scalar(x_130)) {
 x_131 = lean_alloc_ctor(1, 2, 0);
} else {
 x_131 = x_130;
}
lean_ctor_set(x_131, 0, x_128);
lean_ctor_set(x_131, 1, x_129);
return x_131;
}
}
}
block_25:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_2, x_20);
x_22 = x_18;
x_23 = lean_array_fset(x_17, x_2, x_22);
lean_dec(x_2);
x_2 = x_21;
x_3 = x_23;
x_10 = x_19;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_Term_expandMacrosInPatterns(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = x_1;
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_expandMacrosInPatterns___spec__3), 10, 3);
lean_closure_set(x_15, 0, x_12);
lean_closure_set(x_15, 1, x_14);
lean_closure_set(x_15, 2, x_13);
x_16 = x_15;
x_17 = lean_apply_7(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_17;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_expandMacrosInPatterns___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_expandMacrosInPatterns___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_filterAux___main___at___private_Lean_Elab_Match_8__getMatchAlts___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = l_Array_shrink___main___rarg(x_1, x_3);
lean_dec(x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_1, x_2);
x_8 = l_Lean_Syntax_getKind(x_7);
x_9 = l_Lean_Parser_Term_matchAlt___closed__2;
x_10 = lean_name_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_2, x_11);
lean_dec(x_2);
x_2 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_lt(x_3, x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_dec(x_2);
x_17 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_2 = x_16;
x_3 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_array_fswap(x_1, x_2, x_3);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_2, x_20);
lean_dec(x_2);
x_22 = lean_nat_add(x_3, x_20);
lean_dec(x_3);
x_1 = x_19;
x_2 = x_21;
x_3 = x_22;
goto _start;
}
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_8__getMatchAlts___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = x_2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = x_6;
x_10 = l_Lean_Elab_Term_mkMatchAltView(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
x_13 = x_10;
x_14 = lean_array_fset(x_8, x_1, x_13);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_14;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_Match_8__getMatchAlts(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_unsigned_to_nat(5u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getArgs(x_3);
lean_dec(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_filterAux___main___at___private_Lean_Elab_Match_8__getMatchAlts___spec__1(x_4, x_5, x_5);
x_7 = x_6;
x_8 = l_Array_umapMAux___main___at___private_Lean_Elab_Match_8__getMatchAlts___spec__2(x_5, x_7);
x_9 = x_8;
return x_9;
}
}
lean_object* l___private_Lean_Elab_Match_8__getMatchAlts___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_Match_8__getMatchAlts(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkInaccessible___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_inaccessible");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkInaccessible___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_mkInaccessible___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_mkInaccessible(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_mkInaccessible___closed__2;
x_3 = l_Lean_mkAnnotation(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_inaccessible_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_mkInaccessible___closed__2;
x_3 = l_Lean_annotation_x3f(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_inaccessible_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_inaccessible_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_PatternVar_hasToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("?m");
return x_1;
}
}
lean_object* l_Lean_Elab_Term_PatternVar_hasToString(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_System_FilePath_dirName___closed__1;
x_4 = l_Lean_Name_toStringWithSep___main(x_3, x_2);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_System_FilePath_dirName___closed__1;
x_7 = l_Lean_Name_toStringWithSep___main(x_6, x_5);
x_8 = l_Lean_Elab_Term_PatternVar_hasToString___closed__1;
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
return x_9;
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("MVarWithIdKind");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__2;
x_3 = l_Lean_Parser_registerBuiltinNodeKind(x_2, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_10__mkMVarSyntax___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1___rarg(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Array_empty___closed__1;
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_Lean_mkOptionalNode___closed__2;
x_9 = lean_array_push(x_8, x_7);
x_10 = l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__2;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_3, 0, x_11);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
x_14 = l_Array_empty___closed__1;
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_mkOptionalNode___closed__2;
x_17 = lean_array_push(x_16, x_15);
x_18 = l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__2;
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_13);
return x_20;
}
}
}
lean_object* l___private_Lean_Elab_Match_10__mkMVarSyntax(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_10__mkMVarSyntax___rarg___boxed), 2, 0);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Match_10__mkMVarSyntax___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_Match_10__mkMVarSyntax___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_10__mkMVarSyntax___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Match_10__mkMVarSyntax(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Match_11__getMVarSyntaxMVarId(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getKind(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Match_11__getMVarSyntaxMVarId___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_Match_11__getMVarSyntaxMVarId(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabMVarWithIdKind(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l___private_Lean_Elab_Match_11__getMVarSyntaxMVarId(x_1);
x_11 = l_Lean_mkMVar(x_10);
x_12 = l_Lean_Elab_Term_mkInaccessible(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_elabMVarWithIdKind___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabMVarWithIdKind(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMVarWithIdKind___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabInaccessible(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = 1;
x_13 = l_Lean_Elab_Term_elabTerm(x_11, x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = l_Lean_Elab_Term_mkInaccessible(x_15);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = l_Lean_Elab_Term_mkInaccessible(x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabInaccessible___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabInaccessible(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabInaccessible___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabInaccessible(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_inaccessible___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_7, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 6);
lean_inc(x_11);
lean_inc(x_11);
x_12 = l_Lean_Elab_getBetterRef(x_10, x_11);
lean_dec(x_10);
x_13 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
x_14 = l___private_Lean_Elab_Term_5__addContext_x27(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_14, 0);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_14);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_12);
lean_ctor_set(x_20, 1, x_18);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_12);
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = l_Lean_Elab_addMacroStack(x_1, x_11);
x_27 = l___private_Lean_Elab_Term_5__addContext_x27(x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_12);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set_tag(x_27, 1);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_27, 0);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_27);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_12);
x_35 = !lean_is_exclusive(x_27);
if (x_35 == 0)
{
return x_27;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_27, 0);
x_37 = lean_ctor_get(x_27, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_27);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid pattern, constructor or constant marked with '[matchPattern]' expected");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_12__throwCtorExpected___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__3;
x_10 = l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_12__throwCtorExpected(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Match_12__throwCtorExpected___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_2);
x_11 = lean_nat_dec_lt(x_3, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_3);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_array_fget(x_2, x_3);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_3, x_14);
lean_dec(x_3);
x_16 = l_Lean_Expr_fvarId_x21(x_13);
lean_dec(x_13);
x_17 = l_Lean_getLocalDecl___at_Lean_getFVarLocalDecl___spec__1(x_16, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_LocalDecl_binderInfo(x_18);
lean_dec(x_18);
x_21 = l_Lean_BinderInfo_isExplicit(x_20);
if (x_21 == 0)
{
x_3 = x_15;
x_9 = x_19;
goto _start;
}
else
{
lean_object* x_23; 
x_23 = lean_nat_add(x_4, x_14);
lean_dec(x_4);
x_3 = x_15;
x_4 = x_23;
x_9 = x_19;
goto _start;
}
}
else
{
uint8_t x_25; 
lean_dec(x_15);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_2);
x_10 = lean_nat_dec_lt(x_3, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_iterateMAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__1(x_1, x_1, x_11, x_11, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_fget(x_2, x_3);
x_14 = l_Lean_getFVarLocalDecl___at_Lean_Meta_isClassExpensive_x3f___main___spec__5(x_13, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_LocalDecl_type(x_15);
lean_dec(x_15);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_17);
x_18 = l_Lean_Meta_isClassQuick_x3f___main(x_17, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
switch (lean_obj_tag(x_19)) {
case 0:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_17);
lean_dec(x_13);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_3, x_21);
lean_dec(x_3);
x_3 = x_22;
x_8 = x_20;
goto _start;
}
case 1:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_17);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_dec(x_18);
x_25 = lean_ctor_get(x_19, 0);
lean_inc(x_25);
lean_dec(x_19);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_3, x_26);
lean_dec(x_3);
x_28 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_5, x_6, x_7, x_24);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_4, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_4, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_4, 2);
lean_inc(x_33);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_25);
lean_ctor_set(x_34, 1, x_13);
x_35 = lean_array_push(x_33, x_34);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_32);
lean_ctor_set(x_36, 2, x_35);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_37 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__4(x_1, x_2, x_27, x_36, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Meta_restoreSynthInstanceCache(x_29, x_4, x_5, x_6, x_7, x_39);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
lean_ctor_set(x_40, 0, x_38);
return x_40;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_38);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_37, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_37, 1);
lean_inc(x_46);
lean_dec(x_37);
x_47 = l_Lean_Meta_restoreSynthInstanceCache(x_29, x_4, x_5, x_6, x_7, x_46);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_47, 0);
lean_dec(x_49);
lean_ctor_set_tag(x_47, 1);
lean_ctor_set(x_47, 0, x_45);
return x_47;
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
default: 
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_18, 1);
lean_inc(x_52);
lean_dec(x_18);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_53 = l_Lean_Meta_isClassExpensive_x3f___main(x_17, x_4, x_5, x_6, x_7, x_52);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_13);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_unsigned_to_nat(1u);
x_57 = lean_nat_add(x_3, x_56);
lean_dec(x_3);
x_3 = x_57;
x_8 = x_55;
goto _start;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_dec(x_53);
x_60 = lean_ctor_get(x_54, 0);
lean_inc(x_60);
lean_dec(x_54);
x_61 = lean_unsigned_to_nat(1u);
x_62 = lean_nat_add(x_3, x_61);
lean_dec(x_3);
x_63 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_5, x_6, x_7, x_59);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_ctor_get(x_4, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_4, 1);
lean_inc(x_67);
x_68 = lean_ctor_get(x_4, 2);
lean_inc(x_68);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_60);
lean_ctor_set(x_69, 1, x_13);
x_70 = lean_array_push(x_68, x_69);
x_71 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_71, 0, x_66);
lean_ctor_set(x_71, 1, x_67);
lean_ctor_set(x_71, 2, x_70);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_72 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__4(x_1, x_2, x_62, x_71, x_5, x_6, x_7, x_65);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = l_Lean_Meta_restoreSynthInstanceCache(x_64, x_4, x_5, x_6, x_7, x_74);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
lean_object* x_77; 
x_77 = lean_ctor_get(x_75, 0);
lean_dec(x_77);
lean_ctor_set(x_75, 0, x_73);
return x_75;
}
else
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
lean_dec(x_75);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_73);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_80 = lean_ctor_get(x_72, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_72, 1);
lean_inc(x_81);
lean_dec(x_72);
x_82 = l_Lean_Meta_restoreSynthInstanceCache(x_64, x_4, x_5, x_6, x_7, x_81);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; 
x_84 = lean_ctor_get(x_82, 0);
lean_dec(x_84);
lean_ctor_set_tag(x_82, 1);
lean_ctor_set(x_82, 0, x_80);
return x_82;
}
else
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_80);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_87 = !lean_is_exclusive(x_53);
if (x_87 == 0)
{
return x_53;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_53, 0);
x_89 = lean_ctor_get(x_53, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_53);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_91 = !lean_is_exclusive(x_18);
if (x_91 == 0)
{
return x_18;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_18, 0);
x_93 = lean_ctor_get(x_18, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_18);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_95 = !lean_is_exclusive(x_14);
if (x_95 == 0)
{
return x_14;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_14, 0);
x_97 = lean_ctor_get(x_14, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_14);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = l_Lean_Expr_isForall(x_6);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_iterateMAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__1(x_1, x_1, x_13, x_13, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = l___private_Lean_Meta_Basic_4__forallTelescopeReducingAuxAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__3(x_2, x_3, x_4, x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_15;
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_expr_instantiate_rev_range(x_6, x_5, x_7, x_4);
x_16 = lean_alloc_closure((void*)(l_Lean_whnf___at_Lean_Meta_isClassExpensive_x3f___main___spec__2), 6, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_box(x_1);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_4);
x_18 = lean_alloc_closure((void*)(l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5___lambda__1___boxed), 11, 5);
lean_closure_set(x_18, 0, x_4);
lean_closure_set(x_18, 1, x_17);
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_3);
lean_closure_set(x_18, 4, x_7);
x_19 = lean_array_get_size(x_8);
x_20 = lean_nat_dec_lt(x_9, x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = l_ReaderT_bind___at_Lean_getLCtx___spec__2___rarg(x_16, x_18, x_10, x_11, x_12, x_13, x_14);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_18);
lean_dec(x_16);
x_22 = lean_array_fget(x_8, x_9);
x_23 = l_Lean_getFVarLocalDecl___at_Lean_Meta_isClassExpensive_x3f___main___spec__5(x_22, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_LocalDecl_type(x_24);
lean_dec(x_24);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_26);
x_27 = l_Lean_Meta_isClassQuick_x3f___main(x_26, x_10, x_11, x_12, x_13, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
switch (lean_obj_tag(x_28)) {
case 0:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_26);
lean_dec(x_22);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_9, x_30);
lean_dec(x_9);
x_9 = x_31;
x_14 = x_29;
goto _start;
}
case 1:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_26);
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_ctor_get(x_28, 0);
lean_inc(x_34);
lean_dec(x_28);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_nat_add(x_9, x_35);
lean_dec(x_9);
x_37 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_11, x_12, x_13, x_33);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_10, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_10, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_10, 2);
lean_inc(x_42);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_22);
x_44 = lean_array_push(x_42, x_43);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_41);
lean_ctor_set(x_45, 2, x_44);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_46 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_36, x_45, x_11, x_12, x_13, x_39);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_Lean_Meta_restoreSynthInstanceCache(x_38, x_10, x_11, x_12, x_13, x_48);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_49, 0);
lean_dec(x_51);
lean_ctor_set(x_49, 0, x_47);
return x_49;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_dec(x_49);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_54 = lean_ctor_get(x_46, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_46, 1);
lean_inc(x_55);
lean_dec(x_46);
x_56 = l_Lean_Meta_restoreSynthInstanceCache(x_38, x_10, x_11, x_12, x_13, x_55);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_56, 0);
lean_dec(x_58);
lean_ctor_set_tag(x_56, 1);
lean_ctor_set(x_56, 0, x_54);
return x_56;
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_dec(x_56);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_54);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
default: 
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_27, 1);
lean_inc(x_61);
lean_dec(x_27);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_62 = l_Lean_Meta_isClassExpensive_x3f___main(x_26, x_10, x_11, x_12, x_13, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_22);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_unsigned_to_nat(1u);
x_66 = lean_nat_add(x_9, x_65);
lean_dec(x_9);
x_9 = x_66;
x_14 = x_64;
goto _start;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_68 = lean_ctor_get(x_62, 1);
lean_inc(x_68);
lean_dec(x_62);
x_69 = lean_ctor_get(x_63, 0);
lean_inc(x_69);
lean_dec(x_63);
x_70 = lean_unsigned_to_nat(1u);
x_71 = lean_nat_add(x_9, x_70);
lean_dec(x_9);
x_72 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_11, x_12, x_13, x_68);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_ctor_get(x_10, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_10, 1);
lean_inc(x_76);
x_77 = lean_ctor_get(x_10, 2);
lean_inc(x_77);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_69);
lean_ctor_set(x_78, 1, x_22);
x_79 = lean_array_push(x_77, x_78);
x_80 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_80, 0, x_75);
lean_ctor_set(x_80, 1, x_76);
lean_ctor_set(x_80, 2, x_79);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_81 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_71, x_80, x_11, x_12, x_13, x_74);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = l_Lean_Meta_restoreSynthInstanceCache(x_73, x_10, x_11, x_12, x_13, x_83);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_85 = !lean_is_exclusive(x_84);
if (x_85 == 0)
{
lean_object* x_86; 
x_86 = lean_ctor_get(x_84, 0);
lean_dec(x_86);
lean_ctor_set(x_84, 0, x_82);
return x_84;
}
else
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_84, 1);
lean_inc(x_87);
lean_dec(x_84);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_82);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_89 = lean_ctor_get(x_81, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_81, 1);
lean_inc(x_90);
lean_dec(x_81);
x_91 = l_Lean_Meta_restoreSynthInstanceCache(x_73, x_10, x_11, x_12, x_13, x_90);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_92 = !lean_is_exclusive(x_91);
if (x_92 == 0)
{
lean_object* x_93; 
x_93 = lean_ctor_get(x_91, 0);
lean_dec(x_93);
lean_ctor_set_tag(x_91, 1);
lean_ctor_set(x_91, 0, x_89);
return x_91;
}
else
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_91, 1);
lean_inc(x_94);
lean_dec(x_91);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_89);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_96 = !lean_is_exclusive(x_62);
if (x_96 == 0)
{
return x_62;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_62, 0);
x_98 = lean_ctor_get(x_62, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_62);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_26);
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_100 = !lean_is_exclusive(x_27);
if (x_100 == 0)
{
return x_27;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_27, 0);
x_102 = lean_ctor_get(x_27, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_27);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_22);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_104 = !lean_is_exclusive(x_23);
if (x_104 == 0)
{
return x_23;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_23, 0);
x_106 = lean_ctor_get(x_23, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_23);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_2);
x_10 = lean_nat_dec_lt(x_3, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_iterateMAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__1(x_1, x_1, x_11, x_11, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_fget(x_2, x_3);
x_14 = l_Lean_getFVarLocalDecl___at_Lean_Meta_isClassExpensive_x3f___main___spec__5(x_13, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_LocalDecl_type(x_15);
lean_dec(x_15);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_17);
x_18 = l_Lean_Meta_isClassQuick_x3f___main(x_17, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
switch (lean_obj_tag(x_19)) {
case 0:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_17);
lean_dec(x_13);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_3, x_21);
lean_dec(x_3);
x_3 = x_22;
x_8 = x_20;
goto _start;
}
case 1:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_17);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_dec(x_18);
x_25 = lean_ctor_get(x_19, 0);
lean_inc(x_25);
lean_dec(x_19);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_3, x_26);
lean_dec(x_3);
x_28 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_5, x_6, x_7, x_24);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_4, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_4, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_4, 2);
lean_inc(x_33);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_25);
lean_ctor_set(x_34, 1, x_13);
x_35 = lean_array_push(x_33, x_34);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_32);
lean_ctor_set(x_36, 2, x_35);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_37 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__6(x_1, x_2, x_27, x_36, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Meta_restoreSynthInstanceCache(x_29, x_4, x_5, x_6, x_7, x_39);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
lean_ctor_set(x_40, 0, x_38);
return x_40;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_38);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_37, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_37, 1);
lean_inc(x_46);
lean_dec(x_37);
x_47 = l_Lean_Meta_restoreSynthInstanceCache(x_29, x_4, x_5, x_6, x_7, x_46);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_47, 0);
lean_dec(x_49);
lean_ctor_set_tag(x_47, 1);
lean_ctor_set(x_47, 0, x_45);
return x_47;
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
default: 
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_18, 1);
lean_inc(x_52);
lean_dec(x_18);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_53 = l_Lean_Meta_isClassExpensive_x3f___main(x_17, x_4, x_5, x_6, x_7, x_52);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_13);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_unsigned_to_nat(1u);
x_57 = lean_nat_add(x_3, x_56);
lean_dec(x_3);
x_3 = x_57;
x_8 = x_55;
goto _start;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_dec(x_53);
x_60 = lean_ctor_get(x_54, 0);
lean_inc(x_60);
lean_dec(x_54);
x_61 = lean_unsigned_to_nat(1u);
x_62 = lean_nat_add(x_3, x_61);
lean_dec(x_3);
x_63 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_5, x_6, x_7, x_59);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_ctor_get(x_4, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_4, 1);
lean_inc(x_67);
x_68 = lean_ctor_get(x_4, 2);
lean_inc(x_68);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_60);
lean_ctor_set(x_69, 1, x_13);
x_70 = lean_array_push(x_68, x_69);
x_71 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_71, 0, x_66);
lean_ctor_set(x_71, 1, x_67);
lean_ctor_set(x_71, 2, x_70);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_72 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__6(x_1, x_2, x_62, x_71, x_5, x_6, x_7, x_65);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = l_Lean_Meta_restoreSynthInstanceCache(x_64, x_4, x_5, x_6, x_7, x_74);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
lean_object* x_77; 
x_77 = lean_ctor_get(x_75, 0);
lean_dec(x_77);
lean_ctor_set(x_75, 0, x_73);
return x_75;
}
else
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
lean_dec(x_75);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_73);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_80 = lean_ctor_get(x_72, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_72, 1);
lean_inc(x_81);
lean_dec(x_72);
x_82 = l_Lean_Meta_restoreSynthInstanceCache(x_64, x_4, x_5, x_6, x_7, x_81);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; 
x_84 = lean_ctor_get(x_82, 0);
lean_dec(x_84);
lean_ctor_set_tag(x_82, 1);
lean_ctor_set(x_82, 0, x_80);
return x_82;
}
else
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_80);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_87 = !lean_is_exclusive(x_53);
if (x_87 == 0)
{
return x_53;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_53, 0);
x_89 = lean_ctor_get(x_53, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_53);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_91 = !lean_is_exclusive(x_18);
if (x_91 == 0)
{
return x_18;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_18, 0);
x_93 = lean_ctor_get(x_18, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_18);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_95 = !lean_is_exclusive(x_14);
if (x_95 == 0)
{
return x_14;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_14, 0);
x_97 = lean_ctor_get(x_14, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_14);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_4__forallTelescopeReducingAuxAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
if (lean_obj_tag(x_6) == 7)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint64_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_24 = lean_ctor_get(x_6, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_6, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_6, 2);
lean_inc(x_26);
x_27 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_28 = lean_array_get_size(x_4);
x_29 = lean_expr_instantiate_rev_range(x_25, x_5, x_28, x_4);
lean_dec(x_28);
lean_dec(x_25);
x_30 = l_Lean_mkFreshId___at_Lean_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = (uint8_t)((x_27 << 24) >> 61);
lean_inc(x_31);
x_34 = lean_local_ctx_mk_local_decl(x_3, x_31, x_24, x_29, x_33);
x_35 = l_Lean_mkFVar(x_31);
x_36 = lean_array_push(x_4, x_35);
x_3 = x_34;
x_4 = x_36;
x_6 = x_26;
x_11 = x_32;
goto _start;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint64_t x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_38 = lean_ctor_get(x_6, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_6, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_6, 2);
lean_inc(x_40);
x_41 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_42 = lean_ctor_get(x_2, 0);
lean_inc(x_42);
x_43 = lean_array_get_size(x_4);
x_44 = lean_nat_dec_lt(x_43, x_42);
lean_dec(x_42);
if (x_44 == 0)
{
uint8_t x_45; 
lean_dec(x_43);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_7);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_7, 1);
lean_dec(x_46);
lean_ctor_set(x_7, 1, x_3);
x_47 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__6(x_4, x_4, x_5, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_7, 0);
x_49 = lean_ctor_get(x_7, 2);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_7);
x_50 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_3);
lean_ctor_set(x_50, 2, x_49);
x_51 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__6(x_4, x_4, x_5, x_50, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_52 = lean_expr_instantiate_rev_range(x_39, x_5, x_43, x_4);
lean_dec(x_43);
lean_dec(x_39);
x_53 = l_Lean_mkFreshId___at_Lean_mkFreshExprMVarAt___spec__1___rarg(x_10, x_11);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = (uint8_t)((x_41 << 24) >> 61);
lean_inc(x_54);
x_57 = lean_local_ctx_mk_local_decl(x_3, x_54, x_38, x_52, x_56);
x_58 = l_Lean_mkFVar(x_54);
x_59 = lean_array_push(x_4, x_58);
x_3 = x_57;
x_4 = x_59;
x_6 = x_40;
x_11 = x_55;
goto _start;
}
}
}
else
{
lean_object* x_61; 
x_61 = lean_box(0);
x_12 = x_61;
goto block_23;
}
block_23:
{
lean_object* x_13; uint8_t x_14; 
lean_dec(x_12);
x_13 = lean_array_get_size(x_4);
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_7, 1);
lean_dec(x_15);
lean_inc(x_3);
lean_ctor_set(x_7, 1, x_3);
if (x_1 == 0)
{
lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_16 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__4(x_4, x_4, x_5, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_16;
}
else
{
lean_object* x_17; 
lean_inc(x_5);
lean_inc(x_4);
x_17 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_13, x_4, x_5, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_7, 0);
x_19 = lean_ctor_get(x_7, 2);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_7);
lean_inc(x_3);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_3);
lean_ctor_set(x_20, 2, x_19);
if (x_1 == 0)
{
lean_object* x_21; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_21 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__4(x_4, x_4, x_5, x_20, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_21;
}
else
{
lean_object* x_22; 
lean_inc(x_5);
lean_inc(x_4);
x_22 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_13, x_4, x_5, x_20, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_22;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Basic_5__forallTelescopeReducingAux___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l_Lean_whnf___at_Lean_Meta_isClassExpensive_x3f___main___spec__2(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Expr_isForall(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_2);
x_12 = l_Array_empty___closed__1;
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_iterateMAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__1(x_12, x_12, x_13, x_13, x_3, x_4, x_5, x_6, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = l_Lean_getLCtx___at_Lean_mkFreshExprMVar___spec__1(x_3, x_4, x_5, x_6, x_10);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = l_Array_empty___closed__1;
x_20 = lean_unsigned_to_nat(0u);
x_21 = l___private_Lean_Meta_Basic_4__forallTelescopeReducingAuxAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__3(x_18, x_2, x_16, x_19, x_20, x_9, x_3, x_4, x_5, x_6, x_17);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_8);
if (x_22 == 0)
{
return x_8;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_8, 0);
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_8);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_13__getNumExplicitCtorParams(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_14 = lean_ctor_get(x_13, 2);
lean_inc(x_14);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_15 = lean_apply_7(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_19 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_21 = l___private_Lean_Meta_Basic_5__forallTelescopeReducingAux___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__2(x_10, x_12, x_4, x_5, x_6, x_7, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_22);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_22);
x_29 = !lean_is_exclusive(x_24);
if (x_29 == 0)
{
return x_24;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_24, 0);
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_24);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_21, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_21, 1);
lean_inc(x_34);
lean_dec(x_21);
x_35 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_34);
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_35, 0);
lean_dec(x_37);
lean_ctor_set_tag(x_35, 1);
lean_ctor_set(x_35, 0, x_33);
return x_35;
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_dec(x_35);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_33);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_dec(x_33);
x_40 = !lean_is_exclusive(x_35);
if (x_40 == 0)
{
return x_35;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_35, 0);
x_42 = lean_ctor_get(x_35, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_35);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = !lean_is_exclusive(x_19);
if (x_44 == 0)
{
return x_19;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_19, 0);
x_46 = lean_ctor_get(x_19, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_19);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_15);
if (x_48 == 0)
{
return x_15;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_15, 0);
x_50 = lean_ctor_get(x_15, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_15);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_iterateMAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5___lambda__1(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
x_15 = lean_unbox(x_1);
lean_dec(x_1);
x_16 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__5(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
}
lean_object* l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_withNewLocalInstances___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Basic_4__forallTelescopeReducingAuxAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l___private_Lean_Meta_Basic_4__forallTelescopeReducingAuxAux___main___at___private_Lean_Elab_Match_13__getNumExplicitCtorParams___spec__3(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* _init_l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ambiguous pattern, use fully qualified name, possible interpretations ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_14__throwAmbiguous___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_List_map___main___at_Lean_MessageData_coeOfListExpr___spec__1(x_1);
x_11 = l_Lean_MessageData_ofList(x_10);
lean_dec(x_10);
x_12 = l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__3;
x_13 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Match_14__throwAmbiguous(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_14__throwAmbiguous___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* _init_l___private_Lean_Elab_Match_15__processVar___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid pattern, variable '");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_15__processVar___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_15__processVar___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_15__processVar___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_15__processVar___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_15__processVar___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' occurred more than once");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_15__processVar___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_15__processVar___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_15__processVar___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_15__processVar___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_15__processVar___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid pattern variable, must be atomic");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_15__processVar___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_15__processVar___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_15__processVar___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_15__processVar___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_15__processVar(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
if (x_2 == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = l_Lean_Name_eraseMacroScopes(x_1);
x_42 = l_Lean_Name_isAtomic(x_41);
lean_dec(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
lean_dec(x_1);
x_43 = l___private_Lean_Elab_Match_15__processVar___closed__9;
x_44 = l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(x_43, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
return x_44;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_st_ref_get(x_3, x_10);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_11 = x_50;
x_12 = x_51;
goto block_40;
}
}
else
{
lean_object* x_52; uint8_t x_53; 
lean_dec(x_1);
x_52 = l___private_Lean_Elab_Match_12__throwCtorExpected___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
return x_52;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_52, 0);
x_55 = lean_ctor_get(x_52, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_52);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
block_40:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_NameSet_contains(x_13, x_1);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_15 = lean_st_ref_take(x_3, x_12);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_box(0);
lean_inc(x_1);
x_20 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_18, x_1, x_19);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_dec(x_16);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_1);
x_23 = lean_array_push(x_21, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_st_ref_set(x_3, x_24, x_17);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_19);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_19);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_30 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_30, 0, x_1);
x_31 = l___private_Lean_Elab_Match_15__processVar___closed__3;
x_32 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = l___private_Lean_Elab_Match_15__processVar___closed__6;
x_34 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(x_34, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_12);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
return x_35;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_35);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Match_15__processVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l___private_Lean_Elab_Match_15__processVar(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_processIdAuxAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
if (lean_obj_tag(x_4) == 4)
{
lean_object* x_27; lean_object* x_28; lean_object* x_35; 
x_27 = lean_ctor_get(x_4, 0);
lean_inc(x_27);
lean_dec(x_4);
lean_inc(x_27);
lean_inc(x_3);
x_35 = lean_environment_find(x_3, x_27);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
lean_dec(x_27);
lean_dec(x_3);
x_36 = l___private_Lean_Elab_Match_12__throwCtorExpected___rarg(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_36;
}
else
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
if (lean_obj_tag(x_37) == 6)
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_27);
lean_dec(x_3);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l___private_Lean_Elab_Match_13__getNumExplicitCtorParams(x_38, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_39;
}
else
{
lean_object* x_40; 
lean_dec(x_37);
x_40 = lean_box(0);
x_28 = x_40;
goto block_34;
}
}
block_34:
{
lean_object* x_29; uint8_t x_30; 
lean_dec(x_28);
x_29 = l_Lean_EqnCompiler_matchPatternAttr;
x_30 = l_Lean_TagAttribute_hasTag(x_29, x_3, x_27);
lean_dec(x_27);
lean_dec(x_3);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_box(0);
x_13 = x_31;
goto block_26;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_12);
return x_33;
}
}
}
else
{
lean_object* x_41; 
lean_dec(x_4);
lean_dec(x_3);
x_41 = lean_box(0);
x_13 = x_41;
goto block_26;
}
block_26:
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_13);
x_14 = l_Lean_Syntax_getId(x_1);
x_15 = l___private_Lean_Elab_Match_15__processVar(x_14, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
x_18 = lean_unsigned_to_nat(0u);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_processIdAuxAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = l_Lean_Elab_Term_CollectPatternVars_processIdAuxAux(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_List_filterAux___main___at___private_Lean_Elab_Match_16__processIdAux___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
x_8 = l_List_isEmpty___rarg(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_free_object(x_1);
lean_dec(x_5);
x_1 = x_6;
goto _start;
}
else
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
x_14 = l_List_isEmpty___rarg(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_11);
x_1 = x_12;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_2);
x_1 = x_12;
x_2 = x_16;
goto _start;
}
}
}
}
}
lean_object* l_List_map___main___at___private_Lean_Elab_Match_16__processIdAux___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_List_map___main___at___private_Lean_Elab_Match_16__processIdAux___spec__2(x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_List_map___main___at___private_Lean_Elab_Match_16__processIdAux___spec__2(x_9);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_16__processIdAux___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Tactic_Basic_2__expandTacticMacroFns___main___closed__4;
x_2 = l_Nat_Inhabited;
x_3 = l_monadInhabited___rarg(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_16__processIdAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_List_filterAux___main___at___private_Lean_Elab_Match_16__processIdAux___spec__1(x_1, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_16__processIdAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_16__processIdAux___closed__2;
x_2 = l_List_map___main___at___private_Lean_Elab_Match_16__processIdAux___spec__2(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_16__processIdAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_8, 3);
x_13 = l_Lean_replaceRef(x_1, x_12);
x_14 = l_Lean_replaceRef(x_13, x_12);
lean_dec(x_13);
x_15 = l_Lean_replaceRef(x_14, x_12);
lean_dec(x_12);
lean_dec(x_14);
lean_ctor_set(x_8, 3, x_15);
x_16 = lean_st_ref_get(x_9, x_10);
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 3);
lean_inc(x_20);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_23 = l_Lean_Elab_Term_resolveName(x_19, x_20, x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_List_filterAux___main___at___private_Lean_Elab_Match_16__processIdAux___spec__1(x_24, x_22);
x_27 = l_List_map___main___at___private_Lean_Elab_Match_16__processIdAux___spec__2(x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_21);
x_28 = l_Lean_Syntax_getId(x_1);
lean_dec(x_1);
x_29 = l___private_Lean_Elab_Match_15__processVar(x_28, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_25);
lean_dec(x_3);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
x_32 = lean_unsigned_to_nat(0u);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
x_34 = lean_unsigned_to_nat(0u);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_29);
if (x_36 == 0)
{
return x_29;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_29, 0);
x_38 = lean_ctor_get(x_29, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_29);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_27, 1);
lean_inc(x_40);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_27, 0);
lean_inc(x_41);
lean_dec(x_27);
x_42 = l_Lean_Elab_Term_CollectPatternVars_processIdAuxAux(x_1, x_2, x_21, x_41, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_25);
lean_dec(x_3);
lean_dec(x_1);
return x_42;
}
else
{
lean_object* x_43; 
lean_dec(x_40);
lean_dec(x_21);
lean_dec(x_1);
x_43 = l___private_Lean_Elab_Match_14__throwAmbiguous___rarg(x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_25);
lean_dec(x_3);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_23, 1);
lean_inc(x_44);
lean_dec(x_23);
x_45 = l___private_Lean_Elab_Match_16__processIdAux___closed__3;
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_21);
x_46 = l_Lean_Syntax_getId(x_1);
lean_dec(x_1);
x_47 = l___private_Lean_Elab_Match_15__processVar(x_46, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_44);
lean_dec(x_3);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_47, 0);
lean_dec(x_49);
x_50 = lean_unsigned_to_nat(0u);
lean_ctor_set(x_47, 0, x_50);
return x_47;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_47, 1);
lean_inc(x_51);
lean_dec(x_47);
x_52 = lean_unsigned_to_nat(0u);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
else
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_47);
if (x_54 == 0)
{
return x_47;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_47, 0);
x_56 = lean_ctor_get(x_47, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_47);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_45, 1);
lean_inc(x_58);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_45, 0);
lean_inc(x_59);
x_60 = l_Lean_Elab_Term_CollectPatternVars_processIdAuxAux(x_1, x_2, x_21, x_59, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_44);
lean_dec(x_3);
lean_dec(x_1);
return x_60;
}
else
{
lean_object* x_61; 
lean_dec(x_58);
lean_dec(x_21);
lean_dec(x_1);
x_61 = l___private_Lean_Elab_Match_14__throwAmbiguous___rarg(x_45, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_44);
lean_dec(x_3);
return x_61;
}
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_1);
x_62 = lean_ctor_get(x_16, 1);
lean_inc(x_62);
lean_dec(x_16);
x_63 = l___private_Lean_Elab_Match_16__processIdAux___closed__1;
x_64 = l_unreachable_x21___rarg(x_63);
x_65 = lean_apply_8(x_64, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_62);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_66 = lean_ctor_get(x_8, 0);
x_67 = lean_ctor_get(x_8, 1);
x_68 = lean_ctor_get(x_8, 2);
x_69 = lean_ctor_get(x_8, 3);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_8);
x_70 = l_Lean_replaceRef(x_1, x_69);
x_71 = l_Lean_replaceRef(x_70, x_69);
lean_dec(x_70);
x_72 = l_Lean_replaceRef(x_71, x_69);
lean_dec(x_69);
lean_dec(x_71);
x_73 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_73, 0, x_66);
lean_ctor_set(x_73, 1, x_67);
lean_ctor_set(x_73, 2, x_68);
lean_ctor_set(x_73, 3, x_72);
x_74 = lean_st_ref_get(x_9, x_10);
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_ctor_get(x_1, 2);
lean_inc(x_77);
x_78 = lean_ctor_get(x_1, 3);
lean_inc(x_78);
x_79 = lean_ctor_get(x_75, 0);
lean_inc(x_79);
lean_dec(x_75);
x_80 = lean_box(0);
lean_inc(x_9);
lean_inc(x_73);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_81 = l_Lean_Elab_Term_resolveName(x_77, x_78, x_80, x_4, x_5, x_6, x_7, x_73, x_9, x_76);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = l_List_filterAux___main___at___private_Lean_Elab_Match_16__processIdAux___spec__1(x_82, x_80);
x_85 = l_List_map___main___at___private_Lean_Elab_Match_16__processIdAux___spec__2(x_84);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; 
lean_dec(x_79);
x_86 = l_Lean_Syntax_getId(x_1);
lean_dec(x_1);
x_87 = l___private_Lean_Elab_Match_15__processVar(x_86, x_2, x_3, x_4, x_5, x_6, x_7, x_73, x_9, x_83);
lean_dec(x_3);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_89 = x_87;
} else {
 lean_dec_ref(x_87);
 x_89 = lean_box(0);
}
x_90 = lean_unsigned_to_nat(0u);
if (lean_is_scalar(x_89)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_89;
}
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_88);
return x_91;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_92 = lean_ctor_get(x_87, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_87, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_94 = x_87;
} else {
 lean_dec_ref(x_87);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_94)) {
 x_95 = lean_alloc_ctor(1, 2, 0);
} else {
 x_95 = x_94;
}
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
}
else
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_85, 1);
lean_inc(x_96);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_85, 0);
lean_inc(x_97);
lean_dec(x_85);
x_98 = l_Lean_Elab_Term_CollectPatternVars_processIdAuxAux(x_1, x_2, x_79, x_97, x_3, x_4, x_5, x_6, x_7, x_73, x_9, x_83);
lean_dec(x_3);
lean_dec(x_1);
return x_98;
}
else
{
lean_object* x_99; 
lean_dec(x_96);
lean_dec(x_79);
lean_dec(x_1);
x_99 = l___private_Lean_Elab_Match_14__throwAmbiguous___rarg(x_85, x_3, x_4, x_5, x_6, x_7, x_73, x_9, x_83);
lean_dec(x_3);
return x_99;
}
}
}
else
{
lean_object* x_100; lean_object* x_101; 
x_100 = lean_ctor_get(x_81, 1);
lean_inc(x_100);
lean_dec(x_81);
x_101 = l___private_Lean_Elab_Match_16__processIdAux___closed__3;
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; 
lean_dec(x_79);
x_102 = l_Lean_Syntax_getId(x_1);
lean_dec(x_1);
x_103 = l___private_Lean_Elab_Match_15__processVar(x_102, x_2, x_3, x_4, x_5, x_6, x_7, x_73, x_9, x_100);
lean_dec(x_3);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_105 = x_103;
} else {
 lean_dec_ref(x_103);
 x_105 = lean_box(0);
}
x_106 = lean_unsigned_to_nat(0u);
if (lean_is_scalar(x_105)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_105;
}
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_104);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_108 = lean_ctor_get(x_103, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_103, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_110 = x_103;
} else {
 lean_dec_ref(x_103);
 x_110 = lean_box(0);
}
if (lean_is_scalar(x_110)) {
 x_111 = lean_alloc_ctor(1, 2, 0);
} else {
 x_111 = x_110;
}
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
else
{
lean_object* x_112; 
x_112 = lean_ctor_get(x_101, 1);
lean_inc(x_112);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; 
x_113 = lean_ctor_get(x_101, 0);
lean_inc(x_113);
x_114 = l_Lean_Elab_Term_CollectPatternVars_processIdAuxAux(x_1, x_2, x_79, x_113, x_3, x_4, x_5, x_6, x_7, x_73, x_9, x_100);
lean_dec(x_3);
lean_dec(x_1);
return x_114;
}
else
{
lean_object* x_115; 
lean_dec(x_112);
lean_dec(x_79);
lean_dec(x_1);
x_115 = l___private_Lean_Elab_Match_14__throwAmbiguous___rarg(x_101, x_3, x_4, x_5, x_6, x_7, x_73, x_9, x_100);
lean_dec(x_3);
return x_115;
}
}
}
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_1);
x_116 = lean_ctor_get(x_74, 1);
lean_inc(x_116);
lean_dec(x_74);
x_117 = l___private_Lean_Elab_Match_16__processIdAux___closed__1;
x_118 = l_unreachable_x21___rarg(x_117);
x_119 = lean_apply_8(x_118, x_3, x_4, x_5, x_6, x_7, x_73, x_9, x_116);
return x_119;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_16__processIdAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l___private_Lean_Elab_Match_16__processIdAux(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_17__processCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
x_11 = l___private_Lean_Elab_Match_16__processIdAux(x_1, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Match_18__processId(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = 0;
x_11 = l___private_Lean_Elab_Match_16__processIdAux(x_1, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid pattern");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__3;
x_10 = l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_19__throwInvalidPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Init_LeanInit_14__mapSepElemsMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_1);
x_14 = lean_nat_dec_lt(x_3, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_array_fget(x_1, x_3);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_nat_mod(x_3, x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_18, x_19);
lean_dec(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_3, x_21);
lean_dec(x_3);
x_23 = lean_array_push(x_4, x_16);
x_3 = x_22;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_25; 
lean_inc(x_2);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_25 = lean_apply_9(x_2, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_3, x_28);
lean_dec(x_3);
x_30 = lean_array_push(x_4, x_26);
x_3 = x_29;
x_4 = x_30;
x_12 = x_27;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_25);
if (x_32 == 0)
{
return x_25;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_25, 0);
x_34 = lean_ctor_get(x_25, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_25);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
}
lean_object* l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_empty___closed__1;
x_13 = l___private_Init_LeanInit_14__mapSepElemsMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__2(x_1, x_2, x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_ctor_get(x_8, 3);
lean_inc(x_11);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
x_13 = lean_ctor_get(x_4, 6);
lean_inc(x_13);
lean_inc(x_13);
x_14 = l_Lean_Elab_getBetterRef(x_12, x_13);
lean_dec(x_12);
x_15 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 2);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_13);
x_16 = l___private_Lean_Elab_Term_5__addContext_x27(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set_tag(x_16, 1);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_16);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_14);
lean_ctor_set(x_22, 1, x_20);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_14);
x_24 = !lean_is_exclusive(x_16);
if (x_24 == 0)
{
return x_16;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = l_Lean_Elab_addMacroStack(x_2, x_13);
x_29 = l___private_Lean_Elab_Term_5__addContext_x27(x_28, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_14);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set_tag(x_29, 1);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_29, 0);
x_34 = lean_ctor_get(x_29, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_29);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_14);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_14);
x_37 = !lean_is_exclusive(x_29);
if (x_37 == 0)
{
return x_29;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_29, 0);
x_39 = lean_ctor_get(x_29, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_29);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* _init_l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("named parameters are not allowed in patterns");
return x_1;
}
}
lean_object* _init_l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_2);
x_13 = lean_nat_dec_lt(x_3, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_array_fget(x_2, x_3);
x_17 = l_Lean_Parser_Term_namedPattern___elambda__1___closed__1;
lean_inc(x_1);
x_18 = lean_name_mk_string(x_1, x_17);
lean_inc(x_16);
x_19 = l_Lean_Syntax_isOfKind(x_16, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_16);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_3, x_20);
lean_dec(x_3);
x_3 = x_21;
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_3);
lean_dec(x_1);
x_23 = l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__3;
x_24 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg(x_16, x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_16);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
return x_24;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_2, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_14 = x_3;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_array_fget(x_3, x_2);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_fset(x_3, x_2, x_17);
x_19 = x_16;
x_20 = lean_nat_dec_lt(x_2, x_1);
if (x_20 == 0)
{
lean_object* x_21; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_21 = l___private_Lean_Elab_Match_20__collect___main(x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_2, x_24);
x_26 = x_22;
x_27 = lean_array_fset(x_18, x_2, x_26);
lean_dec(x_2);
x_2 = x_25;
x_3 = x_27;
x_11 = x_23;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_21);
if (x_29 == 0)
{
return x_21;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_21, 0);
x_31 = lean_ctor_get(x_21, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_21);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_2, x_33);
x_35 = x_19;
x_36 = lean_array_fset(x_18, x_2, x_35);
lean_dec(x_2);
x_2 = x_34;
x_3 = x_36;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_20__collect___main___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l___private_Lean_Elab_Match_20__collect___main(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_Syntax_setArg(x_1, x_10, x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = l_Lean_Syntax_setArg(x_1, x_10, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid pattern, notation is ambiguous");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_20__collect___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_20__collect___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Term_namedPattern___elambda__1___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Term_namedPattern___elambda__1___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Match_20__collect___main___closed__4;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Term_namedPattern___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Match_20__collect___main___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Match_20__collect___main___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_20__collect___main), 9, 0);
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid struct instance pattern, 'with' is not allowed in patterns");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_20__collect___main___closed__10;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_20__collect___main___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_20__collect___main___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_20__collect___main___lambda__1), 9, 0);
return x_1;
}
}
lean_object* l___private_Lean_Elab_Match_20__collect___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = l_Lean_mkAppStx___closed__8;
x_13 = lean_name_eq(x_10, x_12);
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_7, 3);
x_16 = l_Lean_replaceRef(x_1, x_15);
x_17 = l_Lean_replaceRef(x_16, x_15);
lean_dec(x_16);
x_18 = l_Lean_replaceRef(x_17, x_15);
lean_dec(x_15);
lean_dec(x_17);
lean_ctor_set(x_7, 3, x_18);
x_19 = lean_st_ref_take(x_4, x_9);
if (x_13 == 0)
{
lean_object* x_1265; lean_object* x_1266; uint8_t x_1267; 
x_1265 = lean_ctor_get(x_19, 0);
lean_inc(x_1265);
x_1266 = lean_ctor_get(x_19, 1);
lean_inc(x_1266);
lean_dec(x_19);
x_1267 = 0;
x_20 = x_1267;
x_21 = x_1265;
x_22 = x_1266;
goto block_1264;
}
else
{
lean_object* x_1268; lean_object* x_1269; uint8_t x_1270; 
x_1268 = lean_ctor_get(x_19, 0);
lean_inc(x_1268);
x_1269 = lean_ctor_get(x_19, 1);
lean_inc(x_1269);
lean_dec(x_19);
x_1270 = 1;
x_20 = x_1270;
x_21 = x_1268;
x_22 = x_1269;
goto block_1264;
}
block_1264:
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_24 = lean_ctor_get(x_21, 4);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_24, x_25);
lean_ctor_set(x_21, 4, x_26);
x_27 = lean_st_ref_set(x_4, x_21, x_22);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_27, 1);
x_30 = lean_ctor_get(x_27, 0);
lean_dec(x_30);
x_31 = !lean_is_exclusive(x_3);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_3, 7);
lean_dec(x_32);
lean_ctor_set(x_3, 7, x_24);
if (x_20 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_34 = lean_name_eq(x_10, x_33);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_36 = lean_name_eq(x_10, x_35);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = l_Lean_mkHole___closed__2;
x_38 = lean_name_eq(x_10, x_37);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__2;
x_40 = lean_name_eq(x_10, x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
lean_dec(x_11);
x_41 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_42 = lean_name_eq(x_10, x_41);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = l_Lean_Parser_Term_namedPattern___elambda__1___closed__2;
x_44 = lean_name_eq(x_10, x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = l_Lean_Parser_Term_inaccessible___elambda__1___closed__2;
x_46 = lean_name_eq(x_10, x_45);
if (x_46 == 0)
{
lean_object* x_47; uint8_t x_48; 
x_47 = l_Lean_strLitKind;
x_48 = lean_name_eq(x_10, x_47);
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = l_Lean_numLitKind;
x_50 = lean_name_eq(x_10, x_49);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = l_Lean_charLitKind;
x_52 = lean_name_eq(x_10, x_51);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; 
lean_free_object(x_27);
lean_dec(x_1);
x_53 = l_Lean_choiceKind;
x_54 = lean_name_eq(x_10, x_53);
lean_dec(x_10);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_2);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = l___private_Lean_Elab_Match_20__collect___main___closed__3;
x_57 = l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(x_56, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_2);
return x_57;
}
}
else
{
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; 
lean_free_object(x_27);
lean_dec(x_10);
x_58 = lean_unsigned_to_nat(0u);
x_59 = l_Lean_Syntax_getArg(x_1, x_58);
x_60 = l_Lean_Syntax_getId(x_59);
x_61 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_62 = l___private_Lean_Elab_Match_15__processVar(x_60, x_61, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = lean_unsigned_to_nat(2u);
x_65 = l_Lean_Syntax_getArg(x_1, x_64);
x_66 = !lean_is_exclusive(x_1);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_1, 1);
lean_dec(x_67);
x_68 = lean_ctor_get(x_1, 0);
lean_dec(x_68);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_69 = l___private_Lean_Elab_Match_20__collect___main(x_65, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_63);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_71);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_74);
lean_dec(x_8);
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_77 = lean_ctor_get(x_75, 0);
x_78 = l___private_Lean_Elab_Match_20__collect___main___closed__6;
x_79 = l_Lean_addMacroScope(x_77, x_78, x_73);
x_80 = l_Lean_SourceInfo_inhabited___closed__1;
x_81 = l___private_Lean_Elab_Match_20__collect___main___closed__5;
x_82 = l___private_Lean_Elab_Match_20__collect___main___closed__8;
x_83 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
lean_ctor_set(x_83, 2, x_79);
lean_ctor_set(x_83, 3, x_82);
x_84 = l_Array_empty___closed__1;
x_85 = lean_array_push(x_84, x_83);
x_86 = lean_array_push(x_84, x_59);
x_87 = lean_array_push(x_86, x_70);
x_88 = l_Lean_nullKind___closed__2;
lean_ctor_set(x_1, 1, x_87);
lean_ctor_set(x_1, 0, x_88);
x_89 = lean_array_push(x_85, x_1);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_12);
lean_ctor_set(x_90, 1, x_89);
lean_ctor_set(x_75, 0, x_90);
return x_75;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_91 = lean_ctor_get(x_75, 0);
x_92 = lean_ctor_get(x_75, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_75);
x_93 = l___private_Lean_Elab_Match_20__collect___main___closed__6;
x_94 = l_Lean_addMacroScope(x_91, x_93, x_73);
x_95 = l_Lean_SourceInfo_inhabited___closed__1;
x_96 = l___private_Lean_Elab_Match_20__collect___main___closed__5;
x_97 = l___private_Lean_Elab_Match_20__collect___main___closed__8;
x_98 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_96);
lean_ctor_set(x_98, 2, x_94);
lean_ctor_set(x_98, 3, x_97);
x_99 = l_Array_empty___closed__1;
x_100 = lean_array_push(x_99, x_98);
x_101 = lean_array_push(x_99, x_59);
x_102 = lean_array_push(x_101, x_70);
x_103 = l_Lean_nullKind___closed__2;
lean_ctor_set(x_1, 1, x_102);
lean_ctor_set(x_1, 0, x_103);
x_104 = lean_array_push(x_100, x_1);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_12);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_92);
return x_106;
}
}
else
{
uint8_t x_107; 
lean_free_object(x_1);
lean_dec(x_59);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_107 = !lean_is_exclusive(x_69);
if (x_107 == 0)
{
return x_69;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_69, 0);
x_109 = lean_ctor_get(x_69, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_69);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
else
{
lean_object* x_111; 
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_111 = l___private_Lean_Elab_Match_20__collect___main(x_65, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_63);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec(x_111);
x_114 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_113);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_117 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_116);
lean_dec(x_8);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_120 = x_117;
} else {
 lean_dec_ref(x_117);
 x_120 = lean_box(0);
}
x_121 = l___private_Lean_Elab_Match_20__collect___main___closed__6;
x_122 = l_Lean_addMacroScope(x_118, x_121, x_115);
x_123 = l_Lean_SourceInfo_inhabited___closed__1;
x_124 = l___private_Lean_Elab_Match_20__collect___main___closed__5;
x_125 = l___private_Lean_Elab_Match_20__collect___main___closed__8;
x_126 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_126, 0, x_123);
lean_ctor_set(x_126, 1, x_124);
lean_ctor_set(x_126, 2, x_122);
lean_ctor_set(x_126, 3, x_125);
x_127 = l_Array_empty___closed__1;
x_128 = lean_array_push(x_127, x_126);
x_129 = lean_array_push(x_127, x_59);
x_130 = lean_array_push(x_129, x_112);
x_131 = l_Lean_nullKind___closed__2;
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_130);
x_133 = lean_array_push(x_128, x_132);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_12);
lean_ctor_set(x_134, 1, x_133);
if (lean_is_scalar(x_120)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_120;
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_119);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_59);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_136 = lean_ctor_get(x_111, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_111, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_138 = x_111;
} else {
 lean_dec_ref(x_111);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
}
else
{
uint8_t x_140; 
lean_dec(x_59);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_140 = !lean_is_exclusive(x_62);
if (x_140 == 0)
{
return x_62;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_62, 0);
x_142 = lean_ctor_get(x_62, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_62);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
}
}
}
else
{
lean_object* x_144; lean_object* x_145; uint8_t x_146; lean_object* x_147; 
lean_free_object(x_27);
lean_dec(x_10);
x_144 = lean_unsigned_to_nat(0u);
x_145 = l_Lean_Syntax_getArg(x_1, x_144);
x_146 = 1;
x_147 = l___private_Lean_Elab_Match_16__processIdAux(x_145, x_146, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_147) == 0)
{
uint8_t x_148; 
x_148 = !lean_is_exclusive(x_147);
if (x_148 == 0)
{
lean_object* x_149; 
x_149 = lean_ctor_get(x_147, 0);
lean_dec(x_149);
lean_ctor_set(x_147, 0, x_1);
return x_147;
}
else
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_ctor_get(x_147, 1);
lean_inc(x_150);
lean_dec(x_147);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_1);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
else
{
uint8_t x_152; 
lean_dec(x_1);
x_152 = !lean_is_exclusive(x_147);
if (x_152 == 0)
{
return x_147;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_147, 0);
x_154 = lean_ctor_get(x_147, 1);
lean_inc(x_154);
lean_inc(x_153);
lean_dec(x_147);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
return x_155;
}
}
}
}
else
{
lean_object* x_156; lean_object* x_157; uint8_t x_158; 
x_156 = l_Lean_Syntax_inhabited;
x_157 = lean_array_get(x_156, x_11, x_25);
x_158 = l_Lean_Syntax_isNone(x_157);
if (x_158 == 0)
{
uint8_t x_159; 
lean_free_object(x_27);
x_159 = !lean_is_exclusive(x_1);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; 
x_160 = lean_ctor_get(x_1, 1);
lean_dec(x_160);
x_161 = lean_ctor_get(x_1, 0);
lean_dec(x_161);
x_162 = lean_unsigned_to_nat(0u);
x_163 = l_Lean_Syntax_getArg(x_157, x_162);
x_164 = l_Lean_Syntax_getArg(x_157, x_25);
x_165 = l_Lean_Syntax_isNone(x_164);
if (x_165 == 0)
{
lean_object* x_166; lean_object* x_167; uint8_t x_168; 
x_166 = l_Lean_Syntax_getArg(x_164, x_162);
x_167 = l_Lean_Parser_Term_typeAscription___elambda__1___closed__2;
lean_inc(x_166);
x_168 = l_Lean_Syntax_isOfKind(x_166, x_167);
if (x_168 == 0)
{
lean_object* x_169; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_169 = l___private_Lean_Elab_Match_20__collect___main(x_163, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
lean_dec(x_169);
x_172 = l_Lean_Syntax_setArg(x_157, x_162, x_170);
x_173 = l_Lean_Syntax_getArg(x_166, x_25);
x_174 = l_Lean_Syntax_getArgs(x_173);
lean_dec(x_173);
x_175 = l___private_Lean_Elab_Match_20__collect___main___closed__9;
x_176 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_174, x_175, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_171);
lean_dec(x_174);
if (lean_obj_tag(x_176) == 0)
{
uint8_t x_177; 
x_177 = !lean_is_exclusive(x_176);
if (x_177 == 0)
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_178 = lean_ctor_get(x_176, 0);
x_179 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_178);
lean_ctor_set(x_1, 0, x_179);
x_180 = l_Lean_Syntax_setArg(x_166, x_25, x_1);
x_181 = l_Lean_Syntax_setArg(x_164, x_162, x_180);
x_182 = l_Lean_Syntax_setArg(x_172, x_25, x_181);
x_183 = lean_array_set(x_11, x_25, x_182);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_10);
lean_ctor_set(x_184, 1, x_183);
lean_ctor_set(x_176, 0, x_184);
return x_176;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_185 = lean_ctor_get(x_176, 0);
x_186 = lean_ctor_get(x_176, 1);
lean_inc(x_186);
lean_inc(x_185);
lean_dec(x_176);
x_187 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_185);
lean_ctor_set(x_1, 0, x_187);
x_188 = l_Lean_Syntax_setArg(x_166, x_25, x_1);
x_189 = l_Lean_Syntax_setArg(x_164, x_162, x_188);
x_190 = l_Lean_Syntax_setArg(x_172, x_25, x_189);
x_191 = lean_array_set(x_11, x_25, x_190);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_10);
lean_ctor_set(x_192, 1, x_191);
x_193 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_186);
return x_193;
}
}
else
{
uint8_t x_194; 
lean_dec(x_172);
lean_dec(x_166);
lean_dec(x_164);
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_10);
x_194 = !lean_is_exclusive(x_176);
if (x_194 == 0)
{
return x_176;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_176, 0);
x_196 = lean_ctor_get(x_176, 1);
lean_inc(x_196);
lean_inc(x_195);
lean_dec(x_176);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
return x_197;
}
}
}
else
{
uint8_t x_198; 
lean_dec(x_166);
lean_dec(x_164);
lean_free_object(x_1);
lean_dec(x_157);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_198 = !lean_is_exclusive(x_169);
if (x_198 == 0)
{
return x_169;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_169, 0);
x_200 = lean_ctor_get(x_169, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_169);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
return x_201;
}
}
}
else
{
lean_object* x_202; 
lean_dec(x_166);
lean_dec(x_164);
x_202 = l___private_Lean_Elab_Match_20__collect___main(x_163, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_202) == 0)
{
uint8_t x_203; 
x_203 = !lean_is_exclusive(x_202);
if (x_203 == 0)
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_204 = lean_ctor_get(x_202, 0);
x_205 = l_Lean_Syntax_setArg(x_157, x_162, x_204);
x_206 = lean_array_set(x_11, x_25, x_205);
lean_ctor_set(x_1, 1, x_206);
lean_ctor_set(x_202, 0, x_1);
return x_202;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_207 = lean_ctor_get(x_202, 0);
x_208 = lean_ctor_get(x_202, 1);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_202);
x_209 = l_Lean_Syntax_setArg(x_157, x_162, x_207);
x_210 = lean_array_set(x_11, x_25, x_209);
lean_ctor_set(x_1, 1, x_210);
x_211 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_211, 0, x_1);
lean_ctor_set(x_211, 1, x_208);
return x_211;
}
}
else
{
uint8_t x_212; 
lean_free_object(x_1);
lean_dec(x_157);
lean_dec(x_11);
lean_dec(x_10);
x_212 = !lean_is_exclusive(x_202);
if (x_212 == 0)
{
return x_202;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_213 = lean_ctor_get(x_202, 0);
x_214 = lean_ctor_get(x_202, 1);
lean_inc(x_214);
lean_inc(x_213);
lean_dec(x_202);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_214);
return x_215;
}
}
}
}
else
{
lean_object* x_216; 
lean_dec(x_164);
x_216 = l___private_Lean_Elab_Match_20__collect___main(x_163, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_216) == 0)
{
uint8_t x_217; 
x_217 = !lean_is_exclusive(x_216);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_218 = lean_ctor_get(x_216, 0);
x_219 = l_Lean_Syntax_setArg(x_157, x_162, x_218);
x_220 = lean_array_set(x_11, x_25, x_219);
lean_ctor_set(x_1, 1, x_220);
lean_ctor_set(x_216, 0, x_1);
return x_216;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_221 = lean_ctor_get(x_216, 0);
x_222 = lean_ctor_get(x_216, 1);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_216);
x_223 = l_Lean_Syntax_setArg(x_157, x_162, x_221);
x_224 = lean_array_set(x_11, x_25, x_223);
lean_ctor_set(x_1, 1, x_224);
x_225 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_225, 0, x_1);
lean_ctor_set(x_225, 1, x_222);
return x_225;
}
}
else
{
uint8_t x_226; 
lean_free_object(x_1);
lean_dec(x_157);
lean_dec(x_11);
lean_dec(x_10);
x_226 = !lean_is_exclusive(x_216);
if (x_226 == 0)
{
return x_216;
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_227 = lean_ctor_get(x_216, 0);
x_228 = lean_ctor_get(x_216, 1);
lean_inc(x_228);
lean_inc(x_227);
lean_dec(x_216);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_227);
lean_ctor_set(x_229, 1, x_228);
return x_229;
}
}
}
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; uint8_t x_233; 
lean_dec(x_1);
x_230 = lean_unsigned_to_nat(0u);
x_231 = l_Lean_Syntax_getArg(x_157, x_230);
x_232 = l_Lean_Syntax_getArg(x_157, x_25);
x_233 = l_Lean_Syntax_isNone(x_232);
if (x_233 == 0)
{
lean_object* x_234; lean_object* x_235; uint8_t x_236; 
x_234 = l_Lean_Syntax_getArg(x_232, x_230);
x_235 = l_Lean_Parser_Term_typeAscription___elambda__1___closed__2;
lean_inc(x_234);
x_236 = l_Lean_Syntax_isOfKind(x_234, x_235);
if (x_236 == 0)
{
lean_object* x_237; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_237 = l___private_Lean_Elab_Match_20__collect___main(x_231, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_237) == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_238 = lean_ctor_get(x_237, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_237, 1);
lean_inc(x_239);
lean_dec(x_237);
x_240 = l_Lean_Syntax_setArg(x_157, x_230, x_238);
x_241 = l_Lean_Syntax_getArg(x_234, x_25);
x_242 = l_Lean_Syntax_getArgs(x_241);
lean_dec(x_241);
x_243 = l___private_Lean_Elab_Match_20__collect___main___closed__9;
x_244 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_242, x_243, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_239);
lean_dec(x_242);
if (lean_obj_tag(x_244) == 0)
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_245 = lean_ctor_get(x_244, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_244, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_244)) {
 lean_ctor_release(x_244, 0);
 lean_ctor_release(x_244, 1);
 x_247 = x_244;
} else {
 lean_dec_ref(x_244);
 x_247 = lean_box(0);
}
x_248 = l_Lean_nullKind;
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_245);
x_250 = l_Lean_Syntax_setArg(x_234, x_25, x_249);
x_251 = l_Lean_Syntax_setArg(x_232, x_230, x_250);
x_252 = l_Lean_Syntax_setArg(x_240, x_25, x_251);
x_253 = lean_array_set(x_11, x_25, x_252);
x_254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_254, 0, x_10);
lean_ctor_set(x_254, 1, x_253);
if (lean_is_scalar(x_247)) {
 x_255 = lean_alloc_ctor(0, 2, 0);
} else {
 x_255 = x_247;
}
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_246);
return x_255;
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
lean_dec(x_240);
lean_dec(x_234);
lean_dec(x_232);
lean_dec(x_11);
lean_dec(x_10);
x_256 = lean_ctor_get(x_244, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_244, 1);
lean_inc(x_257);
if (lean_is_exclusive(x_244)) {
 lean_ctor_release(x_244, 0);
 lean_ctor_release(x_244, 1);
 x_258 = x_244;
} else {
 lean_dec_ref(x_244);
 x_258 = lean_box(0);
}
if (lean_is_scalar(x_258)) {
 x_259 = lean_alloc_ctor(1, 2, 0);
} else {
 x_259 = x_258;
}
lean_ctor_set(x_259, 0, x_256);
lean_ctor_set(x_259, 1, x_257);
return x_259;
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
lean_dec(x_234);
lean_dec(x_232);
lean_dec(x_157);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_260 = lean_ctor_get(x_237, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_237, 1);
lean_inc(x_261);
if (lean_is_exclusive(x_237)) {
 lean_ctor_release(x_237, 0);
 lean_ctor_release(x_237, 1);
 x_262 = x_237;
} else {
 lean_dec_ref(x_237);
 x_262 = lean_box(0);
}
if (lean_is_scalar(x_262)) {
 x_263 = lean_alloc_ctor(1, 2, 0);
} else {
 x_263 = x_262;
}
lean_ctor_set(x_263, 0, x_260);
lean_ctor_set(x_263, 1, x_261);
return x_263;
}
}
else
{
lean_object* x_264; 
lean_dec(x_234);
lean_dec(x_232);
x_264 = l___private_Lean_Elab_Match_20__collect___main(x_231, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_264) == 0)
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
if (lean_is_exclusive(x_264)) {
 lean_ctor_release(x_264, 0);
 lean_ctor_release(x_264, 1);
 x_267 = x_264;
} else {
 lean_dec_ref(x_264);
 x_267 = lean_box(0);
}
x_268 = l_Lean_Syntax_setArg(x_157, x_230, x_265);
x_269 = lean_array_set(x_11, x_25, x_268);
x_270 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_270, 0, x_10);
lean_ctor_set(x_270, 1, x_269);
if (lean_is_scalar(x_267)) {
 x_271 = lean_alloc_ctor(0, 2, 0);
} else {
 x_271 = x_267;
}
lean_ctor_set(x_271, 0, x_270);
lean_ctor_set(x_271, 1, x_266);
return x_271;
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_157);
lean_dec(x_11);
lean_dec(x_10);
x_272 = lean_ctor_get(x_264, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_264, 1);
lean_inc(x_273);
if (lean_is_exclusive(x_264)) {
 lean_ctor_release(x_264, 0);
 lean_ctor_release(x_264, 1);
 x_274 = x_264;
} else {
 lean_dec_ref(x_264);
 x_274 = lean_box(0);
}
if (lean_is_scalar(x_274)) {
 x_275 = lean_alloc_ctor(1, 2, 0);
} else {
 x_275 = x_274;
}
lean_ctor_set(x_275, 0, x_272);
lean_ctor_set(x_275, 1, x_273);
return x_275;
}
}
}
else
{
lean_object* x_276; 
lean_dec(x_232);
x_276 = l___private_Lean_Elab_Match_20__collect___main(x_231, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_276) == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_277 = lean_ctor_get(x_276, 0);
lean_inc(x_277);
x_278 = lean_ctor_get(x_276, 1);
lean_inc(x_278);
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 lean_ctor_release(x_276, 1);
 x_279 = x_276;
} else {
 lean_dec_ref(x_276);
 x_279 = lean_box(0);
}
x_280 = l_Lean_Syntax_setArg(x_157, x_230, x_277);
x_281 = lean_array_set(x_11, x_25, x_280);
x_282 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_282, 0, x_10);
lean_ctor_set(x_282, 1, x_281);
if (lean_is_scalar(x_279)) {
 x_283 = lean_alloc_ctor(0, 2, 0);
} else {
 x_283 = x_279;
}
lean_ctor_set(x_283, 0, x_282);
lean_ctor_set(x_283, 1, x_278);
return x_283;
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
lean_dec(x_157);
lean_dec(x_11);
lean_dec(x_10);
x_284 = lean_ctor_get(x_276, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_276, 1);
lean_inc(x_285);
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 lean_ctor_release(x_276, 1);
 x_286 = x_276;
} else {
 lean_dec_ref(x_276);
 x_286 = lean_box(0);
}
if (lean_is_scalar(x_286)) {
 x_287 = lean_alloc_ctor(1, 2, 0);
} else {
 x_287 = x_286;
}
lean_ctor_set(x_287, 0, x_284);
lean_ctor_set(x_287, 1, x_285);
return x_287;
}
}
}
}
else
{
lean_dec(x_157);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; uint8_t x_294; 
lean_dec(x_3);
lean_free_object(x_27);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_288 = l___private_Lean_Elab_Match_10__mkMVarSyntax___rarg(x_8, x_29);
lean_dec(x_8);
x_289 = lean_ctor_get(x_288, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_288, 1);
lean_inc(x_290);
lean_dec(x_288);
x_291 = lean_st_ref_take(x_2, x_290);
x_292 = lean_ctor_get(x_291, 0);
lean_inc(x_292);
x_293 = lean_ctor_get(x_291, 1);
lean_inc(x_293);
lean_dec(x_291);
x_294 = !lean_is_exclusive(x_292);
if (x_294 == 0)
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; uint8_t x_300; 
x_295 = lean_ctor_get(x_292, 1);
x_296 = l___private_Lean_Elab_Match_11__getMVarSyntaxMVarId(x_289);
x_297 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_297, 0, x_296);
x_298 = lean_array_push(x_295, x_297);
lean_ctor_set(x_292, 1, x_298);
x_299 = lean_st_ref_set(x_2, x_292, x_293);
lean_dec(x_2);
x_300 = !lean_is_exclusive(x_299);
if (x_300 == 0)
{
lean_object* x_301; 
x_301 = lean_ctor_get(x_299, 0);
lean_dec(x_301);
lean_ctor_set(x_299, 0, x_289);
return x_299;
}
else
{
lean_object* x_302; lean_object* x_303; 
x_302 = lean_ctor_get(x_299, 1);
lean_inc(x_302);
lean_dec(x_299);
x_303 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_303, 0, x_289);
lean_ctor_set(x_303, 1, x_302);
return x_303;
}
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_304 = lean_ctor_get(x_292, 0);
x_305 = lean_ctor_get(x_292, 1);
lean_inc(x_305);
lean_inc(x_304);
lean_dec(x_292);
x_306 = l___private_Lean_Elab_Match_11__getMVarSyntaxMVarId(x_289);
x_307 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_307, 0, x_306);
x_308 = lean_array_push(x_305, x_307);
x_309 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_309, 0, x_304);
lean_ctor_set(x_309, 1, x_308);
x_310 = lean_st_ref_set(x_2, x_309, x_293);
lean_dec(x_2);
x_311 = lean_ctor_get(x_310, 1);
lean_inc(x_311);
if (lean_is_exclusive(x_310)) {
 lean_ctor_release(x_310, 0);
 lean_ctor_release(x_310, 1);
 x_312 = x_310;
} else {
 lean_dec_ref(x_310);
 x_312 = lean_box(0);
}
if (lean_is_scalar(x_312)) {
 x_313 = lean_alloc_ctor(0, 2, 0);
} else {
 x_313 = x_312;
}
lean_ctor_set(x_313, 0, x_289);
lean_ctor_set(x_313, 1, x_311);
return x_313;
}
}
}
else
{
uint8_t x_314; 
lean_free_object(x_27);
x_314 = !lean_is_exclusive(x_1);
if (x_314 == 0)
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; uint8_t x_319; 
x_315 = lean_ctor_get(x_1, 1);
lean_dec(x_315);
x_316 = lean_ctor_get(x_1, 0);
lean_dec(x_316);
x_317 = l_Lean_Syntax_inhabited;
x_318 = lean_array_get(x_317, x_11, x_25);
x_319 = l_Lean_Syntax_isNone(x_318);
if (x_319 == 0)
{
lean_object* x_320; lean_object* x_321; uint8_t x_322; 
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_10);
x_320 = l___private_Lean_Elab_Match_20__collect___main___closed__12;
x_321 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg(x_318, x_320, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_2);
lean_dec(x_318);
x_322 = !lean_is_exclusive(x_321);
if (x_322 == 0)
{
return x_321;
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; 
x_323 = lean_ctor_get(x_321, 0);
x_324 = lean_ctor_get(x_321, 1);
lean_inc(x_324);
lean_inc(x_323);
lean_dec(x_321);
x_325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_325, 0, x_323);
lean_ctor_set(x_325, 1, x_324);
return x_325;
}
}
else
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; 
lean_dec(x_318);
x_326 = lean_unsigned_to_nat(2u);
x_327 = lean_array_get(x_317, x_11, x_326);
x_328 = l_Lean_Syntax_getArgs(x_327);
lean_dec(x_327);
x_329 = l___private_Lean_Elab_Match_20__collect___main___closed__13;
x_330 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_328, x_329, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_328);
if (lean_obj_tag(x_330) == 0)
{
uint8_t x_331; 
x_331 = !lean_is_exclusive(x_330);
if (x_331 == 0)
{
lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; 
x_332 = lean_ctor_get(x_330, 0);
x_333 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_332);
lean_ctor_set(x_1, 0, x_333);
x_334 = lean_array_set(x_11, x_326, x_1);
x_335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_335, 0, x_10);
lean_ctor_set(x_335, 1, x_334);
lean_ctor_set(x_330, 0, x_335);
return x_330;
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; 
x_336 = lean_ctor_get(x_330, 0);
x_337 = lean_ctor_get(x_330, 1);
lean_inc(x_337);
lean_inc(x_336);
lean_dec(x_330);
x_338 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_336);
lean_ctor_set(x_1, 0, x_338);
x_339 = lean_array_set(x_11, x_326, x_1);
x_340 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_340, 0, x_10);
lean_ctor_set(x_340, 1, x_339);
x_341 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_341, 0, x_340);
lean_ctor_set(x_341, 1, x_337);
return x_341;
}
}
else
{
uint8_t x_342; 
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_10);
x_342 = !lean_is_exclusive(x_330);
if (x_342 == 0)
{
return x_330;
}
else
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; 
x_343 = lean_ctor_get(x_330, 0);
x_344 = lean_ctor_get(x_330, 1);
lean_inc(x_344);
lean_inc(x_343);
lean_dec(x_330);
x_345 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_345, 0, x_343);
lean_ctor_set(x_345, 1, x_344);
return x_345;
}
}
}
}
else
{
lean_object* x_346; lean_object* x_347; uint8_t x_348; 
lean_dec(x_1);
x_346 = l_Lean_Syntax_inhabited;
x_347 = lean_array_get(x_346, x_11, x_25);
x_348 = l_Lean_Syntax_isNone(x_347);
if (x_348 == 0)
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; 
lean_dec(x_11);
lean_dec(x_10);
x_349 = l___private_Lean_Elab_Match_20__collect___main___closed__12;
x_350 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg(x_347, x_349, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_2);
lean_dec(x_347);
x_351 = lean_ctor_get(x_350, 0);
lean_inc(x_351);
x_352 = lean_ctor_get(x_350, 1);
lean_inc(x_352);
if (lean_is_exclusive(x_350)) {
 lean_ctor_release(x_350, 0);
 lean_ctor_release(x_350, 1);
 x_353 = x_350;
} else {
 lean_dec_ref(x_350);
 x_353 = lean_box(0);
}
if (lean_is_scalar(x_353)) {
 x_354 = lean_alloc_ctor(1, 2, 0);
} else {
 x_354 = x_353;
}
lean_ctor_set(x_354, 0, x_351);
lean_ctor_set(x_354, 1, x_352);
return x_354;
}
else
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; 
lean_dec(x_347);
x_355 = lean_unsigned_to_nat(2u);
x_356 = lean_array_get(x_346, x_11, x_355);
x_357 = l_Lean_Syntax_getArgs(x_356);
lean_dec(x_356);
x_358 = l___private_Lean_Elab_Match_20__collect___main___closed__13;
x_359 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_357, x_358, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_357);
if (lean_obj_tag(x_359) == 0)
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_360 = lean_ctor_get(x_359, 0);
lean_inc(x_360);
x_361 = lean_ctor_get(x_359, 1);
lean_inc(x_361);
if (lean_is_exclusive(x_359)) {
 lean_ctor_release(x_359, 0);
 lean_ctor_release(x_359, 1);
 x_362 = x_359;
} else {
 lean_dec_ref(x_359);
 x_362 = lean_box(0);
}
x_363 = l_Lean_nullKind;
x_364 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_364, 0, x_363);
lean_ctor_set(x_364, 1, x_360);
x_365 = lean_array_set(x_11, x_355, x_364);
x_366 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_366, 0, x_10);
lean_ctor_set(x_366, 1, x_365);
if (lean_is_scalar(x_362)) {
 x_367 = lean_alloc_ctor(0, 2, 0);
} else {
 x_367 = x_362;
}
lean_ctor_set(x_367, 0, x_366);
lean_ctor_set(x_367, 1, x_361);
return x_367;
}
else
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; 
lean_dec(x_11);
lean_dec(x_10);
x_368 = lean_ctor_get(x_359, 0);
lean_inc(x_368);
x_369 = lean_ctor_get(x_359, 1);
lean_inc(x_369);
if (lean_is_exclusive(x_359)) {
 lean_ctor_release(x_359, 0);
 lean_ctor_release(x_359, 1);
 x_370 = x_359;
} else {
 lean_dec_ref(x_359);
 x_370 = lean_box(0);
}
if (lean_is_scalar(x_370)) {
 x_371 = lean_alloc_ctor(1, 2, 0);
} else {
 x_371 = x_370;
}
lean_ctor_set(x_371, 0, x_368);
lean_ctor_set(x_371, 1, x_369);
return x_371;
}
}
}
}
}
else
{
uint8_t x_372; 
lean_free_object(x_27);
x_372 = !lean_is_exclusive(x_1);
if (x_372 == 0)
{
lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; 
x_373 = lean_ctor_get(x_1, 1);
lean_dec(x_373);
x_374 = lean_ctor_get(x_1, 0);
lean_dec(x_374);
x_375 = l_Lean_Syntax_inhabited;
x_376 = lean_array_get(x_375, x_11, x_25);
x_377 = l_Lean_Syntax_getArgs(x_376);
lean_dec(x_376);
x_378 = l___private_Lean_Elab_Match_20__collect___main___closed__9;
x_379 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_377, x_378, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_377);
if (lean_obj_tag(x_379) == 0)
{
uint8_t x_380; 
x_380 = !lean_is_exclusive(x_379);
if (x_380 == 0)
{
lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_381 = lean_ctor_get(x_379, 0);
x_382 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_381);
lean_ctor_set(x_1, 0, x_382);
x_383 = lean_array_set(x_11, x_25, x_1);
x_384 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_384, 0, x_10);
lean_ctor_set(x_384, 1, x_383);
lean_ctor_set(x_379, 0, x_384);
return x_379;
}
else
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; 
x_385 = lean_ctor_get(x_379, 0);
x_386 = lean_ctor_get(x_379, 1);
lean_inc(x_386);
lean_inc(x_385);
lean_dec(x_379);
x_387 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_385);
lean_ctor_set(x_1, 0, x_387);
x_388 = lean_array_set(x_11, x_25, x_1);
x_389 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_389, 0, x_10);
lean_ctor_set(x_389, 1, x_388);
x_390 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_390, 0, x_389);
lean_ctor_set(x_390, 1, x_386);
return x_390;
}
}
else
{
uint8_t x_391; 
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_10);
x_391 = !lean_is_exclusive(x_379);
if (x_391 == 0)
{
return x_379;
}
else
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; 
x_392 = lean_ctor_get(x_379, 0);
x_393 = lean_ctor_get(x_379, 1);
lean_inc(x_393);
lean_inc(x_392);
lean_dec(x_379);
x_394 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_394, 0, x_392);
lean_ctor_set(x_394, 1, x_393);
return x_394;
}
}
}
else
{
lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; 
lean_dec(x_1);
x_395 = l_Lean_Syntax_inhabited;
x_396 = lean_array_get(x_395, x_11, x_25);
x_397 = l_Lean_Syntax_getArgs(x_396);
lean_dec(x_396);
x_398 = l___private_Lean_Elab_Match_20__collect___main___closed__9;
x_399 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_397, x_398, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_397);
if (lean_obj_tag(x_399) == 0)
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; 
x_400 = lean_ctor_get(x_399, 0);
lean_inc(x_400);
x_401 = lean_ctor_get(x_399, 1);
lean_inc(x_401);
if (lean_is_exclusive(x_399)) {
 lean_ctor_release(x_399, 0);
 lean_ctor_release(x_399, 1);
 x_402 = x_399;
} else {
 lean_dec_ref(x_399);
 x_402 = lean_box(0);
}
x_403 = l_Lean_nullKind;
x_404 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_404, 0, x_403);
lean_ctor_set(x_404, 1, x_400);
x_405 = lean_array_set(x_11, x_25, x_404);
x_406 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_406, 0, x_10);
lean_ctor_set(x_406, 1, x_405);
if (lean_is_scalar(x_402)) {
 x_407 = lean_alloc_ctor(0, 2, 0);
} else {
 x_407 = x_402;
}
lean_ctor_set(x_407, 0, x_406);
lean_ctor_set(x_407, 1, x_401);
return x_407;
}
else
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; 
lean_dec(x_11);
lean_dec(x_10);
x_408 = lean_ctor_get(x_399, 0);
lean_inc(x_408);
x_409 = lean_ctor_get(x_399, 1);
lean_inc(x_409);
if (lean_is_exclusive(x_399)) {
 lean_ctor_release(x_399, 0);
 lean_ctor_release(x_399, 1);
 x_410 = x_399;
} else {
 lean_dec_ref(x_399);
 x_410 = lean_box(0);
}
if (lean_is_scalar(x_410)) {
 x_411 = lean_alloc_ctor(1, 2, 0);
} else {
 x_411 = x_410;
}
lean_ctor_set(x_411, 0, x_408);
lean_ctor_set(x_411, 1, x_409);
return x_411;
}
}
}
}
else
{
uint8_t x_412; 
lean_free_object(x_27);
x_412 = !lean_is_exclusive(x_1);
if (x_412 == 0)
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; 
x_413 = lean_ctor_get(x_1, 1);
lean_dec(x_413);
x_414 = lean_ctor_get(x_1, 0);
lean_dec(x_414);
x_415 = l_Lean_Syntax_inhabited;
x_416 = lean_unsigned_to_nat(0u);
x_417 = lean_array_get(x_415, x_11, x_416);
x_418 = lean_array_get(x_415, x_11, x_25);
x_419 = l_Lean_Syntax_getArgs(x_418);
lean_dec(x_418);
x_420 = l_Lean_mkAppStx___closed__6;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_421 = l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4(x_420, x_419, x_416, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_421) == 0)
{
lean_object* x_422; uint8_t x_423; lean_object* x_424; 
x_422 = lean_ctor_get(x_421, 1);
lean_inc(x_422);
lean_dec(x_421);
x_423 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_424 = l___private_Lean_Elab_Match_16__processIdAux(x_417, x_423, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_422);
if (lean_obj_tag(x_424) == 0)
{
lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; 
x_425 = lean_ctor_get(x_424, 0);
lean_inc(x_425);
x_426 = lean_ctor_get(x_424, 1);
lean_inc(x_426);
lean_dec(x_424);
x_427 = x_419;
x_428 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__5___boxed), 11, 3);
lean_closure_set(x_428, 0, x_425);
lean_closure_set(x_428, 1, x_416);
lean_closure_set(x_428, 2, x_427);
x_429 = x_428;
x_430 = lean_apply_8(x_429, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_426);
if (lean_obj_tag(x_430) == 0)
{
uint8_t x_431; 
x_431 = !lean_is_exclusive(x_430);
if (x_431 == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; 
x_432 = lean_ctor_get(x_430, 0);
x_433 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_432);
lean_ctor_set(x_1, 0, x_433);
x_434 = lean_array_set(x_11, x_25, x_1);
x_435 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_435, 0, x_10);
lean_ctor_set(x_435, 1, x_434);
lean_ctor_set(x_430, 0, x_435);
return x_430;
}
else
{
lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; 
x_436 = lean_ctor_get(x_430, 0);
x_437 = lean_ctor_get(x_430, 1);
lean_inc(x_437);
lean_inc(x_436);
lean_dec(x_430);
x_438 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_436);
lean_ctor_set(x_1, 0, x_438);
x_439 = lean_array_set(x_11, x_25, x_1);
x_440 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_440, 0, x_10);
lean_ctor_set(x_440, 1, x_439);
x_441 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_441, 0, x_440);
lean_ctor_set(x_441, 1, x_437);
return x_441;
}
}
else
{
uint8_t x_442; 
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_10);
x_442 = !lean_is_exclusive(x_430);
if (x_442 == 0)
{
return x_430;
}
else
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; 
x_443 = lean_ctor_get(x_430, 0);
x_444 = lean_ctor_get(x_430, 1);
lean_inc(x_444);
lean_inc(x_443);
lean_dec(x_430);
x_445 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_445, 0, x_443);
lean_ctor_set(x_445, 1, x_444);
return x_445;
}
}
}
else
{
uint8_t x_446; 
lean_dec(x_419);
lean_free_object(x_1);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_446 = !lean_is_exclusive(x_424);
if (x_446 == 0)
{
return x_424;
}
else
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; 
x_447 = lean_ctor_get(x_424, 0);
x_448 = lean_ctor_get(x_424, 1);
lean_inc(x_448);
lean_inc(x_447);
lean_dec(x_424);
x_449 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_449, 0, x_447);
lean_ctor_set(x_449, 1, x_448);
return x_449;
}
}
}
else
{
uint8_t x_450; 
lean_dec(x_419);
lean_dec(x_417);
lean_free_object(x_1);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_450 = !lean_is_exclusive(x_421);
if (x_450 == 0)
{
return x_421;
}
else
{
lean_object* x_451; lean_object* x_452; lean_object* x_453; 
x_451 = lean_ctor_get(x_421, 0);
x_452 = lean_ctor_get(x_421, 1);
lean_inc(x_452);
lean_inc(x_451);
lean_dec(x_421);
x_453 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_453, 0, x_451);
lean_ctor_set(x_453, 1, x_452);
return x_453;
}
}
}
else
{
lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; 
lean_dec(x_1);
x_454 = l_Lean_Syntax_inhabited;
x_455 = lean_unsigned_to_nat(0u);
x_456 = lean_array_get(x_454, x_11, x_455);
x_457 = lean_array_get(x_454, x_11, x_25);
x_458 = l_Lean_Syntax_getArgs(x_457);
lean_dec(x_457);
x_459 = l_Lean_mkAppStx___closed__6;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_460 = l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4(x_459, x_458, x_455, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_460) == 0)
{
lean_object* x_461; uint8_t x_462; lean_object* x_463; 
x_461 = lean_ctor_get(x_460, 1);
lean_inc(x_461);
lean_dec(x_460);
x_462 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_463 = l___private_Lean_Elab_Match_16__processIdAux(x_456, x_462, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_461);
if (lean_obj_tag(x_463) == 0)
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; 
x_464 = lean_ctor_get(x_463, 0);
lean_inc(x_464);
x_465 = lean_ctor_get(x_463, 1);
lean_inc(x_465);
lean_dec(x_463);
x_466 = x_458;
x_467 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__5___boxed), 11, 3);
lean_closure_set(x_467, 0, x_464);
lean_closure_set(x_467, 1, x_455);
lean_closure_set(x_467, 2, x_466);
x_468 = x_467;
x_469 = lean_apply_8(x_468, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_465);
if (lean_obj_tag(x_469) == 0)
{
lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; 
x_470 = lean_ctor_get(x_469, 0);
lean_inc(x_470);
x_471 = lean_ctor_get(x_469, 1);
lean_inc(x_471);
if (lean_is_exclusive(x_469)) {
 lean_ctor_release(x_469, 0);
 lean_ctor_release(x_469, 1);
 x_472 = x_469;
} else {
 lean_dec_ref(x_469);
 x_472 = lean_box(0);
}
x_473 = l_Lean_nullKind;
x_474 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_474, 0, x_473);
lean_ctor_set(x_474, 1, x_470);
x_475 = lean_array_set(x_11, x_25, x_474);
x_476 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_476, 0, x_10);
lean_ctor_set(x_476, 1, x_475);
if (lean_is_scalar(x_472)) {
 x_477 = lean_alloc_ctor(0, 2, 0);
} else {
 x_477 = x_472;
}
lean_ctor_set(x_477, 0, x_476);
lean_ctor_set(x_477, 1, x_471);
return x_477;
}
else
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; 
lean_dec(x_11);
lean_dec(x_10);
x_478 = lean_ctor_get(x_469, 0);
lean_inc(x_478);
x_479 = lean_ctor_get(x_469, 1);
lean_inc(x_479);
if (lean_is_exclusive(x_469)) {
 lean_ctor_release(x_469, 0);
 lean_ctor_release(x_469, 1);
 x_480 = x_469;
} else {
 lean_dec_ref(x_469);
 x_480 = lean_box(0);
}
if (lean_is_scalar(x_480)) {
 x_481 = lean_alloc_ctor(1, 2, 0);
} else {
 x_481 = x_480;
}
lean_ctor_set(x_481, 0, x_478);
lean_ctor_set(x_481, 1, x_479);
return x_481;
}
}
else
{
lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; 
lean_dec(x_458);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_482 = lean_ctor_get(x_463, 0);
lean_inc(x_482);
x_483 = lean_ctor_get(x_463, 1);
lean_inc(x_483);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 x_484 = x_463;
} else {
 lean_dec_ref(x_463);
 x_484 = lean_box(0);
}
if (lean_is_scalar(x_484)) {
 x_485 = lean_alloc_ctor(1, 2, 0);
} else {
 x_485 = x_484;
}
lean_ctor_set(x_485, 0, x_482);
lean_ctor_set(x_485, 1, x_483);
return x_485;
}
}
else
{
lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; 
lean_dec(x_458);
lean_dec(x_456);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_486 = lean_ctor_get(x_460, 0);
lean_inc(x_486);
x_487 = lean_ctor_get(x_460, 1);
lean_inc(x_487);
if (lean_is_exclusive(x_460)) {
 lean_ctor_release(x_460, 0);
 lean_ctor_release(x_460, 1);
 x_488 = x_460;
} else {
 lean_dec_ref(x_460);
 x_488 = lean_box(0);
}
if (lean_is_scalar(x_488)) {
 x_489 = lean_alloc_ctor(1, 2, 0);
} else {
 x_489 = x_488;
}
lean_ctor_set(x_489, 0, x_486);
lean_ctor_set(x_489, 1, x_487);
return x_489;
}
}
}
}
else
{
lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; uint8_t x_497; uint8_t x_498; uint8_t x_499; lean_object* x_500; 
x_490 = lean_ctor_get(x_3, 0);
x_491 = lean_ctor_get(x_3, 1);
x_492 = lean_ctor_get(x_3, 2);
x_493 = lean_ctor_get(x_3, 3);
x_494 = lean_ctor_get(x_3, 4);
x_495 = lean_ctor_get(x_3, 5);
x_496 = lean_ctor_get(x_3, 6);
x_497 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_498 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_499 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
lean_inc(x_496);
lean_inc(x_495);
lean_inc(x_494);
lean_inc(x_493);
lean_inc(x_492);
lean_inc(x_491);
lean_inc(x_490);
lean_dec(x_3);
x_500 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_500, 0, x_490);
lean_ctor_set(x_500, 1, x_491);
lean_ctor_set(x_500, 2, x_492);
lean_ctor_set(x_500, 3, x_493);
lean_ctor_set(x_500, 4, x_494);
lean_ctor_set(x_500, 5, x_495);
lean_ctor_set(x_500, 6, x_496);
lean_ctor_set(x_500, 7, x_24);
lean_ctor_set_uint8(x_500, sizeof(void*)*8, x_497);
lean_ctor_set_uint8(x_500, sizeof(void*)*8 + 1, x_498);
lean_ctor_set_uint8(x_500, sizeof(void*)*8 + 2, x_499);
if (x_20 == 0)
{
lean_object* x_501; uint8_t x_502; 
x_501 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_502 = lean_name_eq(x_10, x_501);
if (x_502 == 0)
{
lean_object* x_503; uint8_t x_504; 
x_503 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_504 = lean_name_eq(x_10, x_503);
if (x_504 == 0)
{
lean_object* x_505; uint8_t x_506; 
x_505 = l_Lean_mkHole___closed__2;
x_506 = lean_name_eq(x_10, x_505);
if (x_506 == 0)
{
lean_object* x_507; uint8_t x_508; 
x_507 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__2;
x_508 = lean_name_eq(x_10, x_507);
if (x_508 == 0)
{
lean_object* x_509; uint8_t x_510; 
lean_dec(x_11);
x_509 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_510 = lean_name_eq(x_10, x_509);
if (x_510 == 0)
{
lean_object* x_511; uint8_t x_512; 
x_511 = l_Lean_Parser_Term_namedPattern___elambda__1___closed__2;
x_512 = lean_name_eq(x_10, x_511);
if (x_512 == 0)
{
lean_object* x_513; uint8_t x_514; 
x_513 = l_Lean_Parser_Term_inaccessible___elambda__1___closed__2;
x_514 = lean_name_eq(x_10, x_513);
if (x_514 == 0)
{
lean_object* x_515; uint8_t x_516; 
x_515 = l_Lean_strLitKind;
x_516 = lean_name_eq(x_10, x_515);
if (x_516 == 0)
{
lean_object* x_517; uint8_t x_518; 
x_517 = l_Lean_numLitKind;
x_518 = lean_name_eq(x_10, x_517);
if (x_518 == 0)
{
lean_object* x_519; uint8_t x_520; 
x_519 = l_Lean_charLitKind;
x_520 = lean_name_eq(x_10, x_519);
if (x_520 == 0)
{
lean_object* x_521; uint8_t x_522; 
lean_free_object(x_27);
lean_dec(x_1);
x_521 = l_Lean_choiceKind;
x_522 = lean_name_eq(x_10, x_521);
lean_dec(x_10);
if (x_522 == 0)
{
lean_object* x_523; 
x_523 = l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg(x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_2);
return x_523;
}
else
{
lean_object* x_524; lean_object* x_525; 
x_524 = l___private_Lean_Elab_Match_20__collect___main___closed__3;
x_525 = l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(x_524, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_2);
return x_525;
}
}
else
{
lean_dec(x_500);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_dec(x_500);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_dec(x_500);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_dec(x_500);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_object* x_526; lean_object* x_527; lean_object* x_528; uint8_t x_529; lean_object* x_530; 
lean_free_object(x_27);
lean_dec(x_10);
x_526 = lean_unsigned_to_nat(0u);
x_527 = l_Lean_Syntax_getArg(x_1, x_526);
x_528 = l_Lean_Syntax_getId(x_527);
x_529 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_500);
x_530 = l___private_Lean_Elab_Match_15__processVar(x_528, x_529, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_530) == 0)
{
lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; 
x_531 = lean_ctor_get(x_530, 1);
lean_inc(x_531);
lean_dec(x_530);
x_532 = lean_unsigned_to_nat(2u);
x_533 = l_Lean_Syntax_getArg(x_1, x_532);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_534 = x_1;
} else {
 lean_dec_ref(x_1);
 x_534 = lean_box(0);
}
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_500);
x_535 = l___private_Lean_Elab_Match_20__collect___main(x_533, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_531);
if (lean_obj_tag(x_535) == 0)
{
lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; 
x_536 = lean_ctor_get(x_535, 0);
lean_inc(x_536);
x_537 = lean_ctor_get(x_535, 1);
lean_inc(x_537);
lean_dec(x_535);
x_538 = l_Lean_Elab_Term_getCurrMacroScope(x_500, x_4, x_5, x_6, x_7, x_8, x_537);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_500);
x_539 = lean_ctor_get(x_538, 0);
lean_inc(x_539);
x_540 = lean_ctor_get(x_538, 1);
lean_inc(x_540);
lean_dec(x_538);
x_541 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_540);
lean_dec(x_8);
x_542 = lean_ctor_get(x_541, 0);
lean_inc(x_542);
x_543 = lean_ctor_get(x_541, 1);
lean_inc(x_543);
if (lean_is_exclusive(x_541)) {
 lean_ctor_release(x_541, 0);
 lean_ctor_release(x_541, 1);
 x_544 = x_541;
} else {
 lean_dec_ref(x_541);
 x_544 = lean_box(0);
}
x_545 = l___private_Lean_Elab_Match_20__collect___main___closed__6;
x_546 = l_Lean_addMacroScope(x_542, x_545, x_539);
x_547 = l_Lean_SourceInfo_inhabited___closed__1;
x_548 = l___private_Lean_Elab_Match_20__collect___main___closed__5;
x_549 = l___private_Lean_Elab_Match_20__collect___main___closed__8;
x_550 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_550, 0, x_547);
lean_ctor_set(x_550, 1, x_548);
lean_ctor_set(x_550, 2, x_546);
lean_ctor_set(x_550, 3, x_549);
x_551 = l_Array_empty___closed__1;
x_552 = lean_array_push(x_551, x_550);
x_553 = lean_array_push(x_551, x_527);
x_554 = lean_array_push(x_553, x_536);
x_555 = l_Lean_nullKind___closed__2;
if (lean_is_scalar(x_534)) {
 x_556 = lean_alloc_ctor(1, 2, 0);
} else {
 x_556 = x_534;
}
lean_ctor_set(x_556, 0, x_555);
lean_ctor_set(x_556, 1, x_554);
x_557 = lean_array_push(x_552, x_556);
x_558 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_558, 0, x_12);
lean_ctor_set(x_558, 1, x_557);
if (lean_is_scalar(x_544)) {
 x_559 = lean_alloc_ctor(0, 2, 0);
} else {
 x_559 = x_544;
}
lean_ctor_set(x_559, 0, x_558);
lean_ctor_set(x_559, 1, x_543);
return x_559;
}
else
{
lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; 
lean_dec(x_534);
lean_dec(x_527);
lean_dec(x_500);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_560 = lean_ctor_get(x_535, 0);
lean_inc(x_560);
x_561 = lean_ctor_get(x_535, 1);
lean_inc(x_561);
if (lean_is_exclusive(x_535)) {
 lean_ctor_release(x_535, 0);
 lean_ctor_release(x_535, 1);
 x_562 = x_535;
} else {
 lean_dec_ref(x_535);
 x_562 = lean_box(0);
}
if (lean_is_scalar(x_562)) {
 x_563 = lean_alloc_ctor(1, 2, 0);
} else {
 x_563 = x_562;
}
lean_ctor_set(x_563, 0, x_560);
lean_ctor_set(x_563, 1, x_561);
return x_563;
}
}
else
{
lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; 
lean_dec(x_527);
lean_dec(x_500);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_564 = lean_ctor_get(x_530, 0);
lean_inc(x_564);
x_565 = lean_ctor_get(x_530, 1);
lean_inc(x_565);
if (lean_is_exclusive(x_530)) {
 lean_ctor_release(x_530, 0);
 lean_ctor_release(x_530, 1);
 x_566 = x_530;
} else {
 lean_dec_ref(x_530);
 x_566 = lean_box(0);
}
if (lean_is_scalar(x_566)) {
 x_567 = lean_alloc_ctor(1, 2, 0);
} else {
 x_567 = x_566;
}
lean_ctor_set(x_567, 0, x_564);
lean_ctor_set(x_567, 1, x_565);
return x_567;
}
}
}
else
{
lean_object* x_568; lean_object* x_569; uint8_t x_570; lean_object* x_571; 
lean_free_object(x_27);
lean_dec(x_10);
x_568 = lean_unsigned_to_nat(0u);
x_569 = l_Lean_Syntax_getArg(x_1, x_568);
x_570 = 1;
x_571 = l___private_Lean_Elab_Match_16__processIdAux(x_569, x_570, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_571) == 0)
{
lean_object* x_572; lean_object* x_573; lean_object* x_574; 
x_572 = lean_ctor_get(x_571, 1);
lean_inc(x_572);
if (lean_is_exclusive(x_571)) {
 lean_ctor_release(x_571, 0);
 lean_ctor_release(x_571, 1);
 x_573 = x_571;
} else {
 lean_dec_ref(x_571);
 x_573 = lean_box(0);
}
if (lean_is_scalar(x_573)) {
 x_574 = lean_alloc_ctor(0, 2, 0);
} else {
 x_574 = x_573;
}
lean_ctor_set(x_574, 0, x_1);
lean_ctor_set(x_574, 1, x_572);
return x_574;
}
else
{
lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; 
lean_dec(x_1);
x_575 = lean_ctor_get(x_571, 0);
lean_inc(x_575);
x_576 = lean_ctor_get(x_571, 1);
lean_inc(x_576);
if (lean_is_exclusive(x_571)) {
 lean_ctor_release(x_571, 0);
 lean_ctor_release(x_571, 1);
 x_577 = x_571;
} else {
 lean_dec_ref(x_571);
 x_577 = lean_box(0);
}
if (lean_is_scalar(x_577)) {
 x_578 = lean_alloc_ctor(1, 2, 0);
} else {
 x_578 = x_577;
}
lean_ctor_set(x_578, 0, x_575);
lean_ctor_set(x_578, 1, x_576);
return x_578;
}
}
}
else
{
lean_object* x_579; lean_object* x_580; uint8_t x_581; 
x_579 = l_Lean_Syntax_inhabited;
x_580 = lean_array_get(x_579, x_11, x_25);
x_581 = l_Lean_Syntax_isNone(x_580);
if (x_581 == 0)
{
lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; uint8_t x_586; 
lean_free_object(x_27);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_582 = x_1;
} else {
 lean_dec_ref(x_1);
 x_582 = lean_box(0);
}
x_583 = lean_unsigned_to_nat(0u);
x_584 = l_Lean_Syntax_getArg(x_580, x_583);
x_585 = l_Lean_Syntax_getArg(x_580, x_25);
x_586 = l_Lean_Syntax_isNone(x_585);
if (x_586 == 0)
{
lean_object* x_587; lean_object* x_588; uint8_t x_589; 
x_587 = l_Lean_Syntax_getArg(x_585, x_583);
x_588 = l_Lean_Parser_Term_typeAscription___elambda__1___closed__2;
lean_inc(x_587);
x_589 = l_Lean_Syntax_isOfKind(x_587, x_588);
if (x_589 == 0)
{
lean_object* x_590; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_500);
lean_inc(x_2);
x_590 = l___private_Lean_Elab_Match_20__collect___main(x_584, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_590) == 0)
{
lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; 
x_591 = lean_ctor_get(x_590, 0);
lean_inc(x_591);
x_592 = lean_ctor_get(x_590, 1);
lean_inc(x_592);
lean_dec(x_590);
x_593 = l_Lean_Syntax_setArg(x_580, x_583, x_591);
x_594 = l_Lean_Syntax_getArg(x_587, x_25);
x_595 = l_Lean_Syntax_getArgs(x_594);
lean_dec(x_594);
x_596 = l___private_Lean_Elab_Match_20__collect___main___closed__9;
x_597 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_595, x_596, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_592);
lean_dec(x_595);
if (lean_obj_tag(x_597) == 0)
{
lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; 
x_598 = lean_ctor_get(x_597, 0);
lean_inc(x_598);
x_599 = lean_ctor_get(x_597, 1);
lean_inc(x_599);
if (lean_is_exclusive(x_597)) {
 lean_ctor_release(x_597, 0);
 lean_ctor_release(x_597, 1);
 x_600 = x_597;
} else {
 lean_dec_ref(x_597);
 x_600 = lean_box(0);
}
x_601 = l_Lean_nullKind;
if (lean_is_scalar(x_582)) {
 x_602 = lean_alloc_ctor(1, 2, 0);
} else {
 x_602 = x_582;
}
lean_ctor_set(x_602, 0, x_601);
lean_ctor_set(x_602, 1, x_598);
x_603 = l_Lean_Syntax_setArg(x_587, x_25, x_602);
x_604 = l_Lean_Syntax_setArg(x_585, x_583, x_603);
x_605 = l_Lean_Syntax_setArg(x_593, x_25, x_604);
x_606 = lean_array_set(x_11, x_25, x_605);
x_607 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_607, 0, x_10);
lean_ctor_set(x_607, 1, x_606);
if (lean_is_scalar(x_600)) {
 x_608 = lean_alloc_ctor(0, 2, 0);
} else {
 x_608 = x_600;
}
lean_ctor_set(x_608, 0, x_607);
lean_ctor_set(x_608, 1, x_599);
return x_608;
}
else
{
lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; 
lean_dec(x_593);
lean_dec(x_587);
lean_dec(x_585);
lean_dec(x_582);
lean_dec(x_11);
lean_dec(x_10);
x_609 = lean_ctor_get(x_597, 0);
lean_inc(x_609);
x_610 = lean_ctor_get(x_597, 1);
lean_inc(x_610);
if (lean_is_exclusive(x_597)) {
 lean_ctor_release(x_597, 0);
 lean_ctor_release(x_597, 1);
 x_611 = x_597;
} else {
 lean_dec_ref(x_597);
 x_611 = lean_box(0);
}
if (lean_is_scalar(x_611)) {
 x_612 = lean_alloc_ctor(1, 2, 0);
} else {
 x_612 = x_611;
}
lean_ctor_set(x_612, 0, x_609);
lean_ctor_set(x_612, 1, x_610);
return x_612;
}
}
else
{
lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; 
lean_dec(x_587);
lean_dec(x_585);
lean_dec(x_582);
lean_dec(x_580);
lean_dec(x_500);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_613 = lean_ctor_get(x_590, 0);
lean_inc(x_613);
x_614 = lean_ctor_get(x_590, 1);
lean_inc(x_614);
if (lean_is_exclusive(x_590)) {
 lean_ctor_release(x_590, 0);
 lean_ctor_release(x_590, 1);
 x_615 = x_590;
} else {
 lean_dec_ref(x_590);
 x_615 = lean_box(0);
}
if (lean_is_scalar(x_615)) {
 x_616 = lean_alloc_ctor(1, 2, 0);
} else {
 x_616 = x_615;
}
lean_ctor_set(x_616, 0, x_613);
lean_ctor_set(x_616, 1, x_614);
return x_616;
}
}
else
{
lean_object* x_617; 
lean_dec(x_587);
lean_dec(x_585);
x_617 = l___private_Lean_Elab_Match_20__collect___main(x_584, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_617) == 0)
{
lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; 
x_618 = lean_ctor_get(x_617, 0);
lean_inc(x_618);
x_619 = lean_ctor_get(x_617, 1);
lean_inc(x_619);
if (lean_is_exclusive(x_617)) {
 lean_ctor_release(x_617, 0);
 lean_ctor_release(x_617, 1);
 x_620 = x_617;
} else {
 lean_dec_ref(x_617);
 x_620 = lean_box(0);
}
x_621 = l_Lean_Syntax_setArg(x_580, x_583, x_618);
x_622 = lean_array_set(x_11, x_25, x_621);
if (lean_is_scalar(x_582)) {
 x_623 = lean_alloc_ctor(1, 2, 0);
} else {
 x_623 = x_582;
}
lean_ctor_set(x_623, 0, x_10);
lean_ctor_set(x_623, 1, x_622);
if (lean_is_scalar(x_620)) {
 x_624 = lean_alloc_ctor(0, 2, 0);
} else {
 x_624 = x_620;
}
lean_ctor_set(x_624, 0, x_623);
lean_ctor_set(x_624, 1, x_619);
return x_624;
}
else
{
lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; 
lean_dec(x_582);
lean_dec(x_580);
lean_dec(x_11);
lean_dec(x_10);
x_625 = lean_ctor_get(x_617, 0);
lean_inc(x_625);
x_626 = lean_ctor_get(x_617, 1);
lean_inc(x_626);
if (lean_is_exclusive(x_617)) {
 lean_ctor_release(x_617, 0);
 lean_ctor_release(x_617, 1);
 x_627 = x_617;
} else {
 lean_dec_ref(x_617);
 x_627 = lean_box(0);
}
if (lean_is_scalar(x_627)) {
 x_628 = lean_alloc_ctor(1, 2, 0);
} else {
 x_628 = x_627;
}
lean_ctor_set(x_628, 0, x_625);
lean_ctor_set(x_628, 1, x_626);
return x_628;
}
}
}
else
{
lean_object* x_629; 
lean_dec(x_585);
x_629 = l___private_Lean_Elab_Match_20__collect___main(x_584, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_629) == 0)
{
lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; 
x_630 = lean_ctor_get(x_629, 0);
lean_inc(x_630);
x_631 = lean_ctor_get(x_629, 1);
lean_inc(x_631);
if (lean_is_exclusive(x_629)) {
 lean_ctor_release(x_629, 0);
 lean_ctor_release(x_629, 1);
 x_632 = x_629;
} else {
 lean_dec_ref(x_629);
 x_632 = lean_box(0);
}
x_633 = l_Lean_Syntax_setArg(x_580, x_583, x_630);
x_634 = lean_array_set(x_11, x_25, x_633);
if (lean_is_scalar(x_582)) {
 x_635 = lean_alloc_ctor(1, 2, 0);
} else {
 x_635 = x_582;
}
lean_ctor_set(x_635, 0, x_10);
lean_ctor_set(x_635, 1, x_634);
if (lean_is_scalar(x_632)) {
 x_636 = lean_alloc_ctor(0, 2, 0);
} else {
 x_636 = x_632;
}
lean_ctor_set(x_636, 0, x_635);
lean_ctor_set(x_636, 1, x_631);
return x_636;
}
else
{
lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; 
lean_dec(x_582);
lean_dec(x_580);
lean_dec(x_11);
lean_dec(x_10);
x_637 = lean_ctor_get(x_629, 0);
lean_inc(x_637);
x_638 = lean_ctor_get(x_629, 1);
lean_inc(x_638);
if (lean_is_exclusive(x_629)) {
 lean_ctor_release(x_629, 0);
 lean_ctor_release(x_629, 1);
 x_639 = x_629;
} else {
 lean_dec_ref(x_629);
 x_639 = lean_box(0);
}
if (lean_is_scalar(x_639)) {
 x_640 = lean_alloc_ctor(1, 2, 0);
} else {
 x_640 = x_639;
}
lean_ctor_set(x_640, 0, x_637);
lean_ctor_set(x_640, 1, x_638);
return x_640;
}
}
}
else
{
lean_dec(x_580);
lean_dec(x_500);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
}
else
{
lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; 
lean_dec(x_500);
lean_free_object(x_27);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_641 = l___private_Lean_Elab_Match_10__mkMVarSyntax___rarg(x_8, x_29);
lean_dec(x_8);
x_642 = lean_ctor_get(x_641, 0);
lean_inc(x_642);
x_643 = lean_ctor_get(x_641, 1);
lean_inc(x_643);
lean_dec(x_641);
x_644 = lean_st_ref_take(x_2, x_643);
x_645 = lean_ctor_get(x_644, 0);
lean_inc(x_645);
x_646 = lean_ctor_get(x_644, 1);
lean_inc(x_646);
lean_dec(x_644);
x_647 = lean_ctor_get(x_645, 0);
lean_inc(x_647);
x_648 = lean_ctor_get(x_645, 1);
lean_inc(x_648);
if (lean_is_exclusive(x_645)) {
 lean_ctor_release(x_645, 0);
 lean_ctor_release(x_645, 1);
 x_649 = x_645;
} else {
 lean_dec_ref(x_645);
 x_649 = lean_box(0);
}
x_650 = l___private_Lean_Elab_Match_11__getMVarSyntaxMVarId(x_642);
x_651 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_651, 0, x_650);
x_652 = lean_array_push(x_648, x_651);
if (lean_is_scalar(x_649)) {
 x_653 = lean_alloc_ctor(0, 2, 0);
} else {
 x_653 = x_649;
}
lean_ctor_set(x_653, 0, x_647);
lean_ctor_set(x_653, 1, x_652);
x_654 = lean_st_ref_set(x_2, x_653, x_646);
lean_dec(x_2);
x_655 = lean_ctor_get(x_654, 1);
lean_inc(x_655);
if (lean_is_exclusive(x_654)) {
 lean_ctor_release(x_654, 0);
 lean_ctor_release(x_654, 1);
 x_656 = x_654;
} else {
 lean_dec_ref(x_654);
 x_656 = lean_box(0);
}
if (lean_is_scalar(x_656)) {
 x_657 = lean_alloc_ctor(0, 2, 0);
} else {
 x_657 = x_656;
}
lean_ctor_set(x_657, 0, x_642);
lean_ctor_set(x_657, 1, x_655);
return x_657;
}
}
else
{
lean_object* x_658; lean_object* x_659; lean_object* x_660; uint8_t x_661; 
lean_free_object(x_27);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_658 = x_1;
} else {
 lean_dec_ref(x_1);
 x_658 = lean_box(0);
}
x_659 = l_Lean_Syntax_inhabited;
x_660 = lean_array_get(x_659, x_11, x_25);
x_661 = l_Lean_Syntax_isNone(x_660);
if (x_661 == 0)
{
lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; 
lean_dec(x_658);
lean_dec(x_11);
lean_dec(x_10);
x_662 = l___private_Lean_Elab_Match_20__collect___main___closed__12;
x_663 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg(x_660, x_662, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_2);
lean_dec(x_660);
x_664 = lean_ctor_get(x_663, 0);
lean_inc(x_664);
x_665 = lean_ctor_get(x_663, 1);
lean_inc(x_665);
if (lean_is_exclusive(x_663)) {
 lean_ctor_release(x_663, 0);
 lean_ctor_release(x_663, 1);
 x_666 = x_663;
} else {
 lean_dec_ref(x_663);
 x_666 = lean_box(0);
}
if (lean_is_scalar(x_666)) {
 x_667 = lean_alloc_ctor(1, 2, 0);
} else {
 x_667 = x_666;
}
lean_ctor_set(x_667, 0, x_664);
lean_ctor_set(x_667, 1, x_665);
return x_667;
}
else
{
lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; 
lean_dec(x_660);
x_668 = lean_unsigned_to_nat(2u);
x_669 = lean_array_get(x_659, x_11, x_668);
x_670 = l_Lean_Syntax_getArgs(x_669);
lean_dec(x_669);
x_671 = l___private_Lean_Elab_Match_20__collect___main___closed__13;
x_672 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_670, x_671, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_670);
if (lean_obj_tag(x_672) == 0)
{
lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; 
x_673 = lean_ctor_get(x_672, 0);
lean_inc(x_673);
x_674 = lean_ctor_get(x_672, 1);
lean_inc(x_674);
if (lean_is_exclusive(x_672)) {
 lean_ctor_release(x_672, 0);
 lean_ctor_release(x_672, 1);
 x_675 = x_672;
} else {
 lean_dec_ref(x_672);
 x_675 = lean_box(0);
}
x_676 = l_Lean_nullKind;
if (lean_is_scalar(x_658)) {
 x_677 = lean_alloc_ctor(1, 2, 0);
} else {
 x_677 = x_658;
}
lean_ctor_set(x_677, 0, x_676);
lean_ctor_set(x_677, 1, x_673);
x_678 = lean_array_set(x_11, x_668, x_677);
x_679 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_679, 0, x_10);
lean_ctor_set(x_679, 1, x_678);
if (lean_is_scalar(x_675)) {
 x_680 = lean_alloc_ctor(0, 2, 0);
} else {
 x_680 = x_675;
}
lean_ctor_set(x_680, 0, x_679);
lean_ctor_set(x_680, 1, x_674);
return x_680;
}
else
{
lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; 
lean_dec(x_658);
lean_dec(x_11);
lean_dec(x_10);
x_681 = lean_ctor_get(x_672, 0);
lean_inc(x_681);
x_682 = lean_ctor_get(x_672, 1);
lean_inc(x_682);
if (lean_is_exclusive(x_672)) {
 lean_ctor_release(x_672, 0);
 lean_ctor_release(x_672, 1);
 x_683 = x_672;
} else {
 lean_dec_ref(x_672);
 x_683 = lean_box(0);
}
if (lean_is_scalar(x_683)) {
 x_684 = lean_alloc_ctor(1, 2, 0);
} else {
 x_684 = x_683;
}
lean_ctor_set(x_684, 0, x_681);
lean_ctor_set(x_684, 1, x_682);
return x_684;
}
}
}
}
else
{
lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; 
lean_free_object(x_27);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_685 = x_1;
} else {
 lean_dec_ref(x_1);
 x_685 = lean_box(0);
}
x_686 = l_Lean_Syntax_inhabited;
x_687 = lean_array_get(x_686, x_11, x_25);
x_688 = l_Lean_Syntax_getArgs(x_687);
lean_dec(x_687);
x_689 = l___private_Lean_Elab_Match_20__collect___main___closed__9;
x_690 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_688, x_689, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_688);
if (lean_obj_tag(x_690) == 0)
{
lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; 
x_691 = lean_ctor_get(x_690, 0);
lean_inc(x_691);
x_692 = lean_ctor_get(x_690, 1);
lean_inc(x_692);
if (lean_is_exclusive(x_690)) {
 lean_ctor_release(x_690, 0);
 lean_ctor_release(x_690, 1);
 x_693 = x_690;
} else {
 lean_dec_ref(x_690);
 x_693 = lean_box(0);
}
x_694 = l_Lean_nullKind;
if (lean_is_scalar(x_685)) {
 x_695 = lean_alloc_ctor(1, 2, 0);
} else {
 x_695 = x_685;
}
lean_ctor_set(x_695, 0, x_694);
lean_ctor_set(x_695, 1, x_691);
x_696 = lean_array_set(x_11, x_25, x_695);
x_697 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_697, 0, x_10);
lean_ctor_set(x_697, 1, x_696);
if (lean_is_scalar(x_693)) {
 x_698 = lean_alloc_ctor(0, 2, 0);
} else {
 x_698 = x_693;
}
lean_ctor_set(x_698, 0, x_697);
lean_ctor_set(x_698, 1, x_692);
return x_698;
}
else
{
lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; 
lean_dec(x_685);
lean_dec(x_11);
lean_dec(x_10);
x_699 = lean_ctor_get(x_690, 0);
lean_inc(x_699);
x_700 = lean_ctor_get(x_690, 1);
lean_inc(x_700);
if (lean_is_exclusive(x_690)) {
 lean_ctor_release(x_690, 0);
 lean_ctor_release(x_690, 1);
 x_701 = x_690;
} else {
 lean_dec_ref(x_690);
 x_701 = lean_box(0);
}
if (lean_is_scalar(x_701)) {
 x_702 = lean_alloc_ctor(1, 2, 0);
} else {
 x_702 = x_701;
}
lean_ctor_set(x_702, 0, x_699);
lean_ctor_set(x_702, 1, x_700);
return x_702;
}
}
}
else
{
lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; 
lean_free_object(x_27);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_703 = x_1;
} else {
 lean_dec_ref(x_1);
 x_703 = lean_box(0);
}
x_704 = l_Lean_Syntax_inhabited;
x_705 = lean_unsigned_to_nat(0u);
x_706 = lean_array_get(x_704, x_11, x_705);
x_707 = lean_array_get(x_704, x_11, x_25);
x_708 = l_Lean_Syntax_getArgs(x_707);
lean_dec(x_707);
x_709 = l_Lean_mkAppStx___closed__6;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_500);
x_710 = l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4(x_709, x_708, x_705, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_710) == 0)
{
lean_object* x_711; uint8_t x_712; lean_object* x_713; 
x_711 = lean_ctor_get(x_710, 1);
lean_inc(x_711);
lean_dec(x_710);
x_712 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_500);
lean_inc(x_2);
x_713 = l___private_Lean_Elab_Match_16__processIdAux(x_706, x_712, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_711);
if (lean_obj_tag(x_713) == 0)
{
lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; 
x_714 = lean_ctor_get(x_713, 0);
lean_inc(x_714);
x_715 = lean_ctor_get(x_713, 1);
lean_inc(x_715);
lean_dec(x_713);
x_716 = x_708;
x_717 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__5___boxed), 11, 3);
lean_closure_set(x_717, 0, x_714);
lean_closure_set(x_717, 1, x_705);
lean_closure_set(x_717, 2, x_716);
x_718 = x_717;
x_719 = lean_apply_8(x_718, x_2, x_500, x_4, x_5, x_6, x_7, x_8, x_715);
if (lean_obj_tag(x_719) == 0)
{
lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; 
x_720 = lean_ctor_get(x_719, 0);
lean_inc(x_720);
x_721 = lean_ctor_get(x_719, 1);
lean_inc(x_721);
if (lean_is_exclusive(x_719)) {
 lean_ctor_release(x_719, 0);
 lean_ctor_release(x_719, 1);
 x_722 = x_719;
} else {
 lean_dec_ref(x_719);
 x_722 = lean_box(0);
}
x_723 = l_Lean_nullKind;
if (lean_is_scalar(x_703)) {
 x_724 = lean_alloc_ctor(1, 2, 0);
} else {
 x_724 = x_703;
}
lean_ctor_set(x_724, 0, x_723);
lean_ctor_set(x_724, 1, x_720);
x_725 = lean_array_set(x_11, x_25, x_724);
x_726 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_726, 0, x_10);
lean_ctor_set(x_726, 1, x_725);
if (lean_is_scalar(x_722)) {
 x_727 = lean_alloc_ctor(0, 2, 0);
} else {
 x_727 = x_722;
}
lean_ctor_set(x_727, 0, x_726);
lean_ctor_set(x_727, 1, x_721);
return x_727;
}
else
{
lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; 
lean_dec(x_703);
lean_dec(x_11);
lean_dec(x_10);
x_728 = lean_ctor_get(x_719, 0);
lean_inc(x_728);
x_729 = lean_ctor_get(x_719, 1);
lean_inc(x_729);
if (lean_is_exclusive(x_719)) {
 lean_ctor_release(x_719, 0);
 lean_ctor_release(x_719, 1);
 x_730 = x_719;
} else {
 lean_dec_ref(x_719);
 x_730 = lean_box(0);
}
if (lean_is_scalar(x_730)) {
 x_731 = lean_alloc_ctor(1, 2, 0);
} else {
 x_731 = x_730;
}
lean_ctor_set(x_731, 0, x_728);
lean_ctor_set(x_731, 1, x_729);
return x_731;
}
}
else
{
lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; 
lean_dec(x_708);
lean_dec(x_703);
lean_dec(x_500);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_732 = lean_ctor_get(x_713, 0);
lean_inc(x_732);
x_733 = lean_ctor_get(x_713, 1);
lean_inc(x_733);
if (lean_is_exclusive(x_713)) {
 lean_ctor_release(x_713, 0);
 lean_ctor_release(x_713, 1);
 x_734 = x_713;
} else {
 lean_dec_ref(x_713);
 x_734 = lean_box(0);
}
if (lean_is_scalar(x_734)) {
 x_735 = lean_alloc_ctor(1, 2, 0);
} else {
 x_735 = x_734;
}
lean_ctor_set(x_735, 0, x_732);
lean_ctor_set(x_735, 1, x_733);
return x_735;
}
}
else
{
lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; 
lean_dec(x_708);
lean_dec(x_706);
lean_dec(x_703);
lean_dec(x_500);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_736 = lean_ctor_get(x_710, 0);
lean_inc(x_736);
x_737 = lean_ctor_get(x_710, 1);
lean_inc(x_737);
if (lean_is_exclusive(x_710)) {
 lean_ctor_release(x_710, 0);
 lean_ctor_release(x_710, 1);
 x_738 = x_710;
} else {
 lean_dec_ref(x_710);
 x_738 = lean_box(0);
}
if (lean_is_scalar(x_738)) {
 x_739 = lean_alloc_ctor(1, 2, 0);
} else {
 x_739 = x_738;
}
lean_ctor_set(x_739, 0, x_736);
lean_ctor_set(x_739, 1, x_737);
return x_739;
}
}
}
}
else
{
lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; uint8_t x_748; uint8_t x_749; uint8_t x_750; lean_object* x_751; lean_object* x_752; 
x_740 = lean_ctor_get(x_27, 1);
lean_inc(x_740);
lean_dec(x_27);
x_741 = lean_ctor_get(x_3, 0);
lean_inc(x_741);
x_742 = lean_ctor_get(x_3, 1);
lean_inc(x_742);
x_743 = lean_ctor_get(x_3, 2);
lean_inc(x_743);
x_744 = lean_ctor_get(x_3, 3);
lean_inc(x_744);
x_745 = lean_ctor_get(x_3, 4);
lean_inc(x_745);
x_746 = lean_ctor_get(x_3, 5);
lean_inc(x_746);
x_747 = lean_ctor_get(x_3, 6);
lean_inc(x_747);
x_748 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_749 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_750 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 lean_ctor_release(x_3, 6);
 lean_ctor_release(x_3, 7);
 x_751 = x_3;
} else {
 lean_dec_ref(x_3);
 x_751 = lean_box(0);
}
if (lean_is_scalar(x_751)) {
 x_752 = lean_alloc_ctor(0, 8, 3);
} else {
 x_752 = x_751;
}
lean_ctor_set(x_752, 0, x_741);
lean_ctor_set(x_752, 1, x_742);
lean_ctor_set(x_752, 2, x_743);
lean_ctor_set(x_752, 3, x_744);
lean_ctor_set(x_752, 4, x_745);
lean_ctor_set(x_752, 5, x_746);
lean_ctor_set(x_752, 6, x_747);
lean_ctor_set(x_752, 7, x_24);
lean_ctor_set_uint8(x_752, sizeof(void*)*8, x_748);
lean_ctor_set_uint8(x_752, sizeof(void*)*8 + 1, x_749);
lean_ctor_set_uint8(x_752, sizeof(void*)*8 + 2, x_750);
if (x_20 == 0)
{
lean_object* x_753; uint8_t x_754; 
x_753 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_754 = lean_name_eq(x_10, x_753);
if (x_754 == 0)
{
lean_object* x_755; uint8_t x_756; 
x_755 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_756 = lean_name_eq(x_10, x_755);
if (x_756 == 0)
{
lean_object* x_757; uint8_t x_758; 
x_757 = l_Lean_mkHole___closed__2;
x_758 = lean_name_eq(x_10, x_757);
if (x_758 == 0)
{
lean_object* x_759; uint8_t x_760; 
x_759 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__2;
x_760 = lean_name_eq(x_10, x_759);
if (x_760 == 0)
{
lean_object* x_761; uint8_t x_762; 
lean_dec(x_11);
x_761 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_762 = lean_name_eq(x_10, x_761);
if (x_762 == 0)
{
lean_object* x_763; uint8_t x_764; 
x_763 = l_Lean_Parser_Term_namedPattern___elambda__1___closed__2;
x_764 = lean_name_eq(x_10, x_763);
if (x_764 == 0)
{
lean_object* x_765; uint8_t x_766; 
x_765 = l_Lean_Parser_Term_inaccessible___elambda__1___closed__2;
x_766 = lean_name_eq(x_10, x_765);
if (x_766 == 0)
{
lean_object* x_767; uint8_t x_768; 
x_767 = l_Lean_strLitKind;
x_768 = lean_name_eq(x_10, x_767);
if (x_768 == 0)
{
lean_object* x_769; uint8_t x_770; 
x_769 = l_Lean_numLitKind;
x_770 = lean_name_eq(x_10, x_769);
if (x_770 == 0)
{
lean_object* x_771; uint8_t x_772; 
x_771 = l_Lean_charLitKind;
x_772 = lean_name_eq(x_10, x_771);
if (x_772 == 0)
{
lean_object* x_773; uint8_t x_774; 
lean_dec(x_1);
x_773 = l_Lean_choiceKind;
x_774 = lean_name_eq(x_10, x_773);
lean_dec(x_10);
if (x_774 == 0)
{
lean_object* x_775; 
x_775 = l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg(x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_740);
lean_dec(x_2);
return x_775;
}
else
{
lean_object* x_776; lean_object* x_777; 
x_776 = l___private_Lean_Elab_Match_20__collect___main___closed__3;
x_777 = l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(x_776, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_740);
lean_dec(x_2);
return x_777;
}
}
else
{
lean_object* x_778; 
lean_dec(x_752);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_778 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_778, 0, x_1);
lean_ctor_set(x_778, 1, x_740);
return x_778;
}
}
else
{
lean_object* x_779; 
lean_dec(x_752);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_779 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_779, 0, x_1);
lean_ctor_set(x_779, 1, x_740);
return x_779;
}
}
else
{
lean_object* x_780; 
lean_dec(x_752);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_780 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_780, 0, x_1);
lean_ctor_set(x_780, 1, x_740);
return x_780;
}
}
else
{
lean_object* x_781; 
lean_dec(x_752);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_781 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_781, 0, x_1);
lean_ctor_set(x_781, 1, x_740);
return x_781;
}
}
else
{
lean_object* x_782; lean_object* x_783; lean_object* x_784; uint8_t x_785; lean_object* x_786; 
lean_dec(x_10);
x_782 = lean_unsigned_to_nat(0u);
x_783 = l_Lean_Syntax_getArg(x_1, x_782);
x_784 = l_Lean_Syntax_getId(x_783);
x_785 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_752);
x_786 = l___private_Lean_Elab_Match_15__processVar(x_784, x_785, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_740);
if (lean_obj_tag(x_786) == 0)
{
lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; lean_object* x_791; 
x_787 = lean_ctor_get(x_786, 1);
lean_inc(x_787);
lean_dec(x_786);
x_788 = lean_unsigned_to_nat(2u);
x_789 = l_Lean_Syntax_getArg(x_1, x_788);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_790 = x_1;
} else {
 lean_dec_ref(x_1);
 x_790 = lean_box(0);
}
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_752);
x_791 = l___private_Lean_Elab_Match_20__collect___main(x_789, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_787);
if (lean_obj_tag(x_791) == 0)
{
lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; lean_object* x_806; lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; 
x_792 = lean_ctor_get(x_791, 0);
lean_inc(x_792);
x_793 = lean_ctor_get(x_791, 1);
lean_inc(x_793);
lean_dec(x_791);
x_794 = l_Lean_Elab_Term_getCurrMacroScope(x_752, x_4, x_5, x_6, x_7, x_8, x_793);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_752);
x_795 = lean_ctor_get(x_794, 0);
lean_inc(x_795);
x_796 = lean_ctor_get(x_794, 1);
lean_inc(x_796);
lean_dec(x_794);
x_797 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_796);
lean_dec(x_8);
x_798 = lean_ctor_get(x_797, 0);
lean_inc(x_798);
x_799 = lean_ctor_get(x_797, 1);
lean_inc(x_799);
if (lean_is_exclusive(x_797)) {
 lean_ctor_release(x_797, 0);
 lean_ctor_release(x_797, 1);
 x_800 = x_797;
} else {
 lean_dec_ref(x_797);
 x_800 = lean_box(0);
}
x_801 = l___private_Lean_Elab_Match_20__collect___main___closed__6;
x_802 = l_Lean_addMacroScope(x_798, x_801, x_795);
x_803 = l_Lean_SourceInfo_inhabited___closed__1;
x_804 = l___private_Lean_Elab_Match_20__collect___main___closed__5;
x_805 = l___private_Lean_Elab_Match_20__collect___main___closed__8;
x_806 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_806, 0, x_803);
lean_ctor_set(x_806, 1, x_804);
lean_ctor_set(x_806, 2, x_802);
lean_ctor_set(x_806, 3, x_805);
x_807 = l_Array_empty___closed__1;
x_808 = lean_array_push(x_807, x_806);
x_809 = lean_array_push(x_807, x_783);
x_810 = lean_array_push(x_809, x_792);
x_811 = l_Lean_nullKind___closed__2;
if (lean_is_scalar(x_790)) {
 x_812 = lean_alloc_ctor(1, 2, 0);
} else {
 x_812 = x_790;
}
lean_ctor_set(x_812, 0, x_811);
lean_ctor_set(x_812, 1, x_810);
x_813 = lean_array_push(x_808, x_812);
x_814 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_814, 0, x_12);
lean_ctor_set(x_814, 1, x_813);
if (lean_is_scalar(x_800)) {
 x_815 = lean_alloc_ctor(0, 2, 0);
} else {
 x_815 = x_800;
}
lean_ctor_set(x_815, 0, x_814);
lean_ctor_set(x_815, 1, x_799);
return x_815;
}
else
{
lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; 
lean_dec(x_790);
lean_dec(x_783);
lean_dec(x_752);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_816 = lean_ctor_get(x_791, 0);
lean_inc(x_816);
x_817 = lean_ctor_get(x_791, 1);
lean_inc(x_817);
if (lean_is_exclusive(x_791)) {
 lean_ctor_release(x_791, 0);
 lean_ctor_release(x_791, 1);
 x_818 = x_791;
} else {
 lean_dec_ref(x_791);
 x_818 = lean_box(0);
}
if (lean_is_scalar(x_818)) {
 x_819 = lean_alloc_ctor(1, 2, 0);
} else {
 x_819 = x_818;
}
lean_ctor_set(x_819, 0, x_816);
lean_ctor_set(x_819, 1, x_817);
return x_819;
}
}
else
{
lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; 
lean_dec(x_783);
lean_dec(x_752);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_820 = lean_ctor_get(x_786, 0);
lean_inc(x_820);
x_821 = lean_ctor_get(x_786, 1);
lean_inc(x_821);
if (lean_is_exclusive(x_786)) {
 lean_ctor_release(x_786, 0);
 lean_ctor_release(x_786, 1);
 x_822 = x_786;
} else {
 lean_dec_ref(x_786);
 x_822 = lean_box(0);
}
if (lean_is_scalar(x_822)) {
 x_823 = lean_alloc_ctor(1, 2, 0);
} else {
 x_823 = x_822;
}
lean_ctor_set(x_823, 0, x_820);
lean_ctor_set(x_823, 1, x_821);
return x_823;
}
}
}
else
{
lean_object* x_824; lean_object* x_825; uint8_t x_826; lean_object* x_827; 
lean_dec(x_10);
x_824 = lean_unsigned_to_nat(0u);
x_825 = l_Lean_Syntax_getArg(x_1, x_824);
x_826 = 1;
x_827 = l___private_Lean_Elab_Match_16__processIdAux(x_825, x_826, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_740);
if (lean_obj_tag(x_827) == 0)
{
lean_object* x_828; lean_object* x_829; lean_object* x_830; 
x_828 = lean_ctor_get(x_827, 1);
lean_inc(x_828);
if (lean_is_exclusive(x_827)) {
 lean_ctor_release(x_827, 0);
 lean_ctor_release(x_827, 1);
 x_829 = x_827;
} else {
 lean_dec_ref(x_827);
 x_829 = lean_box(0);
}
if (lean_is_scalar(x_829)) {
 x_830 = lean_alloc_ctor(0, 2, 0);
} else {
 x_830 = x_829;
}
lean_ctor_set(x_830, 0, x_1);
lean_ctor_set(x_830, 1, x_828);
return x_830;
}
else
{
lean_object* x_831; lean_object* x_832; lean_object* x_833; lean_object* x_834; 
lean_dec(x_1);
x_831 = lean_ctor_get(x_827, 0);
lean_inc(x_831);
x_832 = lean_ctor_get(x_827, 1);
lean_inc(x_832);
if (lean_is_exclusive(x_827)) {
 lean_ctor_release(x_827, 0);
 lean_ctor_release(x_827, 1);
 x_833 = x_827;
} else {
 lean_dec_ref(x_827);
 x_833 = lean_box(0);
}
if (lean_is_scalar(x_833)) {
 x_834 = lean_alloc_ctor(1, 2, 0);
} else {
 x_834 = x_833;
}
lean_ctor_set(x_834, 0, x_831);
lean_ctor_set(x_834, 1, x_832);
return x_834;
}
}
}
else
{
lean_object* x_835; lean_object* x_836; uint8_t x_837; 
x_835 = l_Lean_Syntax_inhabited;
x_836 = lean_array_get(x_835, x_11, x_25);
x_837 = l_Lean_Syntax_isNone(x_836);
if (x_837 == 0)
{
lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; uint8_t x_842; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_838 = x_1;
} else {
 lean_dec_ref(x_1);
 x_838 = lean_box(0);
}
x_839 = lean_unsigned_to_nat(0u);
x_840 = l_Lean_Syntax_getArg(x_836, x_839);
x_841 = l_Lean_Syntax_getArg(x_836, x_25);
x_842 = l_Lean_Syntax_isNone(x_841);
if (x_842 == 0)
{
lean_object* x_843; lean_object* x_844; uint8_t x_845; 
x_843 = l_Lean_Syntax_getArg(x_841, x_839);
x_844 = l_Lean_Parser_Term_typeAscription___elambda__1___closed__2;
lean_inc(x_843);
x_845 = l_Lean_Syntax_isOfKind(x_843, x_844);
if (x_845 == 0)
{
lean_object* x_846; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_752);
lean_inc(x_2);
x_846 = l___private_Lean_Elab_Match_20__collect___main(x_840, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_740);
if (lean_obj_tag(x_846) == 0)
{
lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; 
x_847 = lean_ctor_get(x_846, 0);
lean_inc(x_847);
x_848 = lean_ctor_get(x_846, 1);
lean_inc(x_848);
lean_dec(x_846);
x_849 = l_Lean_Syntax_setArg(x_836, x_839, x_847);
x_850 = l_Lean_Syntax_getArg(x_843, x_25);
x_851 = l_Lean_Syntax_getArgs(x_850);
lean_dec(x_850);
x_852 = l___private_Lean_Elab_Match_20__collect___main___closed__9;
x_853 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_851, x_852, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_848);
lean_dec(x_851);
if (lean_obj_tag(x_853) == 0)
{
lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; 
x_854 = lean_ctor_get(x_853, 0);
lean_inc(x_854);
x_855 = lean_ctor_get(x_853, 1);
lean_inc(x_855);
if (lean_is_exclusive(x_853)) {
 lean_ctor_release(x_853, 0);
 lean_ctor_release(x_853, 1);
 x_856 = x_853;
} else {
 lean_dec_ref(x_853);
 x_856 = lean_box(0);
}
x_857 = l_Lean_nullKind;
if (lean_is_scalar(x_838)) {
 x_858 = lean_alloc_ctor(1, 2, 0);
} else {
 x_858 = x_838;
}
lean_ctor_set(x_858, 0, x_857);
lean_ctor_set(x_858, 1, x_854);
x_859 = l_Lean_Syntax_setArg(x_843, x_25, x_858);
x_860 = l_Lean_Syntax_setArg(x_841, x_839, x_859);
x_861 = l_Lean_Syntax_setArg(x_849, x_25, x_860);
x_862 = lean_array_set(x_11, x_25, x_861);
x_863 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_863, 0, x_10);
lean_ctor_set(x_863, 1, x_862);
if (lean_is_scalar(x_856)) {
 x_864 = lean_alloc_ctor(0, 2, 0);
} else {
 x_864 = x_856;
}
lean_ctor_set(x_864, 0, x_863);
lean_ctor_set(x_864, 1, x_855);
return x_864;
}
else
{
lean_object* x_865; lean_object* x_866; lean_object* x_867; lean_object* x_868; 
lean_dec(x_849);
lean_dec(x_843);
lean_dec(x_841);
lean_dec(x_838);
lean_dec(x_11);
lean_dec(x_10);
x_865 = lean_ctor_get(x_853, 0);
lean_inc(x_865);
x_866 = lean_ctor_get(x_853, 1);
lean_inc(x_866);
if (lean_is_exclusive(x_853)) {
 lean_ctor_release(x_853, 0);
 lean_ctor_release(x_853, 1);
 x_867 = x_853;
} else {
 lean_dec_ref(x_853);
 x_867 = lean_box(0);
}
if (lean_is_scalar(x_867)) {
 x_868 = lean_alloc_ctor(1, 2, 0);
} else {
 x_868 = x_867;
}
lean_ctor_set(x_868, 0, x_865);
lean_ctor_set(x_868, 1, x_866);
return x_868;
}
}
else
{
lean_object* x_869; lean_object* x_870; lean_object* x_871; lean_object* x_872; 
lean_dec(x_843);
lean_dec(x_841);
lean_dec(x_838);
lean_dec(x_836);
lean_dec(x_752);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_869 = lean_ctor_get(x_846, 0);
lean_inc(x_869);
x_870 = lean_ctor_get(x_846, 1);
lean_inc(x_870);
if (lean_is_exclusive(x_846)) {
 lean_ctor_release(x_846, 0);
 lean_ctor_release(x_846, 1);
 x_871 = x_846;
} else {
 lean_dec_ref(x_846);
 x_871 = lean_box(0);
}
if (lean_is_scalar(x_871)) {
 x_872 = lean_alloc_ctor(1, 2, 0);
} else {
 x_872 = x_871;
}
lean_ctor_set(x_872, 0, x_869);
lean_ctor_set(x_872, 1, x_870);
return x_872;
}
}
else
{
lean_object* x_873; 
lean_dec(x_843);
lean_dec(x_841);
x_873 = l___private_Lean_Elab_Match_20__collect___main(x_840, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_740);
if (lean_obj_tag(x_873) == 0)
{
lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; 
x_874 = lean_ctor_get(x_873, 0);
lean_inc(x_874);
x_875 = lean_ctor_get(x_873, 1);
lean_inc(x_875);
if (lean_is_exclusive(x_873)) {
 lean_ctor_release(x_873, 0);
 lean_ctor_release(x_873, 1);
 x_876 = x_873;
} else {
 lean_dec_ref(x_873);
 x_876 = lean_box(0);
}
x_877 = l_Lean_Syntax_setArg(x_836, x_839, x_874);
x_878 = lean_array_set(x_11, x_25, x_877);
if (lean_is_scalar(x_838)) {
 x_879 = lean_alloc_ctor(1, 2, 0);
} else {
 x_879 = x_838;
}
lean_ctor_set(x_879, 0, x_10);
lean_ctor_set(x_879, 1, x_878);
if (lean_is_scalar(x_876)) {
 x_880 = lean_alloc_ctor(0, 2, 0);
} else {
 x_880 = x_876;
}
lean_ctor_set(x_880, 0, x_879);
lean_ctor_set(x_880, 1, x_875);
return x_880;
}
else
{
lean_object* x_881; lean_object* x_882; lean_object* x_883; lean_object* x_884; 
lean_dec(x_838);
lean_dec(x_836);
lean_dec(x_11);
lean_dec(x_10);
x_881 = lean_ctor_get(x_873, 0);
lean_inc(x_881);
x_882 = lean_ctor_get(x_873, 1);
lean_inc(x_882);
if (lean_is_exclusive(x_873)) {
 lean_ctor_release(x_873, 0);
 lean_ctor_release(x_873, 1);
 x_883 = x_873;
} else {
 lean_dec_ref(x_873);
 x_883 = lean_box(0);
}
if (lean_is_scalar(x_883)) {
 x_884 = lean_alloc_ctor(1, 2, 0);
} else {
 x_884 = x_883;
}
lean_ctor_set(x_884, 0, x_881);
lean_ctor_set(x_884, 1, x_882);
return x_884;
}
}
}
else
{
lean_object* x_885; 
lean_dec(x_841);
x_885 = l___private_Lean_Elab_Match_20__collect___main(x_840, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_740);
if (lean_obj_tag(x_885) == 0)
{
lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; 
x_886 = lean_ctor_get(x_885, 0);
lean_inc(x_886);
x_887 = lean_ctor_get(x_885, 1);
lean_inc(x_887);
if (lean_is_exclusive(x_885)) {
 lean_ctor_release(x_885, 0);
 lean_ctor_release(x_885, 1);
 x_888 = x_885;
} else {
 lean_dec_ref(x_885);
 x_888 = lean_box(0);
}
x_889 = l_Lean_Syntax_setArg(x_836, x_839, x_886);
x_890 = lean_array_set(x_11, x_25, x_889);
if (lean_is_scalar(x_838)) {
 x_891 = lean_alloc_ctor(1, 2, 0);
} else {
 x_891 = x_838;
}
lean_ctor_set(x_891, 0, x_10);
lean_ctor_set(x_891, 1, x_890);
if (lean_is_scalar(x_888)) {
 x_892 = lean_alloc_ctor(0, 2, 0);
} else {
 x_892 = x_888;
}
lean_ctor_set(x_892, 0, x_891);
lean_ctor_set(x_892, 1, x_887);
return x_892;
}
else
{
lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; 
lean_dec(x_838);
lean_dec(x_836);
lean_dec(x_11);
lean_dec(x_10);
x_893 = lean_ctor_get(x_885, 0);
lean_inc(x_893);
x_894 = lean_ctor_get(x_885, 1);
lean_inc(x_894);
if (lean_is_exclusive(x_885)) {
 lean_ctor_release(x_885, 0);
 lean_ctor_release(x_885, 1);
 x_895 = x_885;
} else {
 lean_dec_ref(x_885);
 x_895 = lean_box(0);
}
if (lean_is_scalar(x_895)) {
 x_896 = lean_alloc_ctor(1, 2, 0);
} else {
 x_896 = x_895;
}
lean_ctor_set(x_896, 0, x_893);
lean_ctor_set(x_896, 1, x_894);
return x_896;
}
}
}
else
{
lean_object* x_897; 
lean_dec(x_836);
lean_dec(x_752);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_897 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_897, 0, x_1);
lean_ctor_set(x_897, 1, x_740);
return x_897;
}
}
}
else
{
lean_object* x_898; lean_object* x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; 
lean_dec(x_752);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_898 = l___private_Lean_Elab_Match_10__mkMVarSyntax___rarg(x_8, x_740);
lean_dec(x_8);
x_899 = lean_ctor_get(x_898, 0);
lean_inc(x_899);
x_900 = lean_ctor_get(x_898, 1);
lean_inc(x_900);
lean_dec(x_898);
x_901 = lean_st_ref_take(x_2, x_900);
x_902 = lean_ctor_get(x_901, 0);
lean_inc(x_902);
x_903 = lean_ctor_get(x_901, 1);
lean_inc(x_903);
lean_dec(x_901);
x_904 = lean_ctor_get(x_902, 0);
lean_inc(x_904);
x_905 = lean_ctor_get(x_902, 1);
lean_inc(x_905);
if (lean_is_exclusive(x_902)) {
 lean_ctor_release(x_902, 0);
 lean_ctor_release(x_902, 1);
 x_906 = x_902;
} else {
 lean_dec_ref(x_902);
 x_906 = lean_box(0);
}
x_907 = l___private_Lean_Elab_Match_11__getMVarSyntaxMVarId(x_899);
x_908 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_908, 0, x_907);
x_909 = lean_array_push(x_905, x_908);
if (lean_is_scalar(x_906)) {
 x_910 = lean_alloc_ctor(0, 2, 0);
} else {
 x_910 = x_906;
}
lean_ctor_set(x_910, 0, x_904);
lean_ctor_set(x_910, 1, x_909);
x_911 = lean_st_ref_set(x_2, x_910, x_903);
lean_dec(x_2);
x_912 = lean_ctor_get(x_911, 1);
lean_inc(x_912);
if (lean_is_exclusive(x_911)) {
 lean_ctor_release(x_911, 0);
 lean_ctor_release(x_911, 1);
 x_913 = x_911;
} else {
 lean_dec_ref(x_911);
 x_913 = lean_box(0);
}
if (lean_is_scalar(x_913)) {
 x_914 = lean_alloc_ctor(0, 2, 0);
} else {
 x_914 = x_913;
}
lean_ctor_set(x_914, 0, x_899);
lean_ctor_set(x_914, 1, x_912);
return x_914;
}
}
else
{
lean_object* x_915; lean_object* x_916; lean_object* x_917; uint8_t x_918; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_915 = x_1;
} else {
 lean_dec_ref(x_1);
 x_915 = lean_box(0);
}
x_916 = l_Lean_Syntax_inhabited;
x_917 = lean_array_get(x_916, x_11, x_25);
x_918 = l_Lean_Syntax_isNone(x_917);
if (x_918 == 0)
{
lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; 
lean_dec(x_915);
lean_dec(x_11);
lean_dec(x_10);
x_919 = l___private_Lean_Elab_Match_20__collect___main___closed__12;
x_920 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg(x_917, x_919, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_740);
lean_dec(x_2);
lean_dec(x_917);
x_921 = lean_ctor_get(x_920, 0);
lean_inc(x_921);
x_922 = lean_ctor_get(x_920, 1);
lean_inc(x_922);
if (lean_is_exclusive(x_920)) {
 lean_ctor_release(x_920, 0);
 lean_ctor_release(x_920, 1);
 x_923 = x_920;
} else {
 lean_dec_ref(x_920);
 x_923 = lean_box(0);
}
if (lean_is_scalar(x_923)) {
 x_924 = lean_alloc_ctor(1, 2, 0);
} else {
 x_924 = x_923;
}
lean_ctor_set(x_924, 0, x_921);
lean_ctor_set(x_924, 1, x_922);
return x_924;
}
else
{
lean_object* x_925; lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; 
lean_dec(x_917);
x_925 = lean_unsigned_to_nat(2u);
x_926 = lean_array_get(x_916, x_11, x_925);
x_927 = l_Lean_Syntax_getArgs(x_926);
lean_dec(x_926);
x_928 = l___private_Lean_Elab_Match_20__collect___main___closed__13;
x_929 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_927, x_928, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_740);
lean_dec(x_927);
if (lean_obj_tag(x_929) == 0)
{
lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; 
x_930 = lean_ctor_get(x_929, 0);
lean_inc(x_930);
x_931 = lean_ctor_get(x_929, 1);
lean_inc(x_931);
if (lean_is_exclusive(x_929)) {
 lean_ctor_release(x_929, 0);
 lean_ctor_release(x_929, 1);
 x_932 = x_929;
} else {
 lean_dec_ref(x_929);
 x_932 = lean_box(0);
}
x_933 = l_Lean_nullKind;
if (lean_is_scalar(x_915)) {
 x_934 = lean_alloc_ctor(1, 2, 0);
} else {
 x_934 = x_915;
}
lean_ctor_set(x_934, 0, x_933);
lean_ctor_set(x_934, 1, x_930);
x_935 = lean_array_set(x_11, x_925, x_934);
x_936 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_936, 0, x_10);
lean_ctor_set(x_936, 1, x_935);
if (lean_is_scalar(x_932)) {
 x_937 = lean_alloc_ctor(0, 2, 0);
} else {
 x_937 = x_932;
}
lean_ctor_set(x_937, 0, x_936);
lean_ctor_set(x_937, 1, x_931);
return x_937;
}
else
{
lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; 
lean_dec(x_915);
lean_dec(x_11);
lean_dec(x_10);
x_938 = lean_ctor_get(x_929, 0);
lean_inc(x_938);
x_939 = lean_ctor_get(x_929, 1);
lean_inc(x_939);
if (lean_is_exclusive(x_929)) {
 lean_ctor_release(x_929, 0);
 lean_ctor_release(x_929, 1);
 x_940 = x_929;
} else {
 lean_dec_ref(x_929);
 x_940 = lean_box(0);
}
if (lean_is_scalar(x_940)) {
 x_941 = lean_alloc_ctor(1, 2, 0);
} else {
 x_941 = x_940;
}
lean_ctor_set(x_941, 0, x_938);
lean_ctor_set(x_941, 1, x_939);
return x_941;
}
}
}
}
else
{
lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; lean_object* x_946; lean_object* x_947; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_942 = x_1;
} else {
 lean_dec_ref(x_1);
 x_942 = lean_box(0);
}
x_943 = l_Lean_Syntax_inhabited;
x_944 = lean_array_get(x_943, x_11, x_25);
x_945 = l_Lean_Syntax_getArgs(x_944);
lean_dec(x_944);
x_946 = l___private_Lean_Elab_Match_20__collect___main___closed__9;
x_947 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_945, x_946, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_740);
lean_dec(x_945);
if (lean_obj_tag(x_947) == 0)
{
lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; 
x_948 = lean_ctor_get(x_947, 0);
lean_inc(x_948);
x_949 = lean_ctor_get(x_947, 1);
lean_inc(x_949);
if (lean_is_exclusive(x_947)) {
 lean_ctor_release(x_947, 0);
 lean_ctor_release(x_947, 1);
 x_950 = x_947;
} else {
 lean_dec_ref(x_947);
 x_950 = lean_box(0);
}
x_951 = l_Lean_nullKind;
if (lean_is_scalar(x_942)) {
 x_952 = lean_alloc_ctor(1, 2, 0);
} else {
 x_952 = x_942;
}
lean_ctor_set(x_952, 0, x_951);
lean_ctor_set(x_952, 1, x_948);
x_953 = lean_array_set(x_11, x_25, x_952);
x_954 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_954, 0, x_10);
lean_ctor_set(x_954, 1, x_953);
if (lean_is_scalar(x_950)) {
 x_955 = lean_alloc_ctor(0, 2, 0);
} else {
 x_955 = x_950;
}
lean_ctor_set(x_955, 0, x_954);
lean_ctor_set(x_955, 1, x_949);
return x_955;
}
else
{
lean_object* x_956; lean_object* x_957; lean_object* x_958; lean_object* x_959; 
lean_dec(x_942);
lean_dec(x_11);
lean_dec(x_10);
x_956 = lean_ctor_get(x_947, 0);
lean_inc(x_956);
x_957 = lean_ctor_get(x_947, 1);
lean_inc(x_957);
if (lean_is_exclusive(x_947)) {
 lean_ctor_release(x_947, 0);
 lean_ctor_release(x_947, 1);
 x_958 = x_947;
} else {
 lean_dec_ref(x_947);
 x_958 = lean_box(0);
}
if (lean_is_scalar(x_958)) {
 x_959 = lean_alloc_ctor(1, 2, 0);
} else {
 x_959 = x_958;
}
lean_ctor_set(x_959, 0, x_956);
lean_ctor_set(x_959, 1, x_957);
return x_959;
}
}
}
else
{
lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; lean_object* x_966; lean_object* x_967; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_960 = x_1;
} else {
 lean_dec_ref(x_1);
 x_960 = lean_box(0);
}
x_961 = l_Lean_Syntax_inhabited;
x_962 = lean_unsigned_to_nat(0u);
x_963 = lean_array_get(x_961, x_11, x_962);
x_964 = lean_array_get(x_961, x_11, x_25);
x_965 = l_Lean_Syntax_getArgs(x_964);
lean_dec(x_964);
x_966 = l_Lean_mkAppStx___closed__6;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_752);
x_967 = l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4(x_966, x_965, x_962, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_740);
if (lean_obj_tag(x_967) == 0)
{
lean_object* x_968; uint8_t x_969; lean_object* x_970; 
x_968 = lean_ctor_get(x_967, 1);
lean_inc(x_968);
lean_dec(x_967);
x_969 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_752);
lean_inc(x_2);
x_970 = l___private_Lean_Elab_Match_16__processIdAux(x_963, x_969, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_968);
if (lean_obj_tag(x_970) == 0)
{
lean_object* x_971; lean_object* x_972; lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; 
x_971 = lean_ctor_get(x_970, 0);
lean_inc(x_971);
x_972 = lean_ctor_get(x_970, 1);
lean_inc(x_972);
lean_dec(x_970);
x_973 = x_965;
x_974 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__5___boxed), 11, 3);
lean_closure_set(x_974, 0, x_971);
lean_closure_set(x_974, 1, x_962);
lean_closure_set(x_974, 2, x_973);
x_975 = x_974;
x_976 = lean_apply_8(x_975, x_2, x_752, x_4, x_5, x_6, x_7, x_8, x_972);
if (lean_obj_tag(x_976) == 0)
{
lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; lean_object* x_982; lean_object* x_983; lean_object* x_984; 
x_977 = lean_ctor_get(x_976, 0);
lean_inc(x_977);
x_978 = lean_ctor_get(x_976, 1);
lean_inc(x_978);
if (lean_is_exclusive(x_976)) {
 lean_ctor_release(x_976, 0);
 lean_ctor_release(x_976, 1);
 x_979 = x_976;
} else {
 lean_dec_ref(x_976);
 x_979 = lean_box(0);
}
x_980 = l_Lean_nullKind;
if (lean_is_scalar(x_960)) {
 x_981 = lean_alloc_ctor(1, 2, 0);
} else {
 x_981 = x_960;
}
lean_ctor_set(x_981, 0, x_980);
lean_ctor_set(x_981, 1, x_977);
x_982 = lean_array_set(x_11, x_25, x_981);
x_983 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_983, 0, x_10);
lean_ctor_set(x_983, 1, x_982);
if (lean_is_scalar(x_979)) {
 x_984 = lean_alloc_ctor(0, 2, 0);
} else {
 x_984 = x_979;
}
lean_ctor_set(x_984, 0, x_983);
lean_ctor_set(x_984, 1, x_978);
return x_984;
}
else
{
lean_object* x_985; lean_object* x_986; lean_object* x_987; lean_object* x_988; 
lean_dec(x_960);
lean_dec(x_11);
lean_dec(x_10);
x_985 = lean_ctor_get(x_976, 0);
lean_inc(x_985);
x_986 = lean_ctor_get(x_976, 1);
lean_inc(x_986);
if (lean_is_exclusive(x_976)) {
 lean_ctor_release(x_976, 0);
 lean_ctor_release(x_976, 1);
 x_987 = x_976;
} else {
 lean_dec_ref(x_976);
 x_987 = lean_box(0);
}
if (lean_is_scalar(x_987)) {
 x_988 = lean_alloc_ctor(1, 2, 0);
} else {
 x_988 = x_987;
}
lean_ctor_set(x_988, 0, x_985);
lean_ctor_set(x_988, 1, x_986);
return x_988;
}
}
else
{
lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; 
lean_dec(x_965);
lean_dec(x_960);
lean_dec(x_752);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_989 = lean_ctor_get(x_970, 0);
lean_inc(x_989);
x_990 = lean_ctor_get(x_970, 1);
lean_inc(x_990);
if (lean_is_exclusive(x_970)) {
 lean_ctor_release(x_970, 0);
 lean_ctor_release(x_970, 1);
 x_991 = x_970;
} else {
 lean_dec_ref(x_970);
 x_991 = lean_box(0);
}
if (lean_is_scalar(x_991)) {
 x_992 = lean_alloc_ctor(1, 2, 0);
} else {
 x_992 = x_991;
}
lean_ctor_set(x_992, 0, x_989);
lean_ctor_set(x_992, 1, x_990);
return x_992;
}
}
else
{
lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; 
lean_dec(x_965);
lean_dec(x_963);
lean_dec(x_960);
lean_dec(x_752);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_993 = lean_ctor_get(x_967, 0);
lean_inc(x_993);
x_994 = lean_ctor_get(x_967, 1);
lean_inc(x_994);
if (lean_is_exclusive(x_967)) {
 lean_ctor_release(x_967, 0);
 lean_ctor_release(x_967, 1);
 x_995 = x_967;
} else {
 lean_dec_ref(x_967);
 x_995 = lean_box(0);
}
if (lean_is_scalar(x_995)) {
 x_996 = lean_alloc_ctor(1, 2, 0);
} else {
 x_996 = x_995;
}
lean_ctor_set(x_996, 0, x_993);
lean_ctor_set(x_996, 1, x_994);
return x_996;
}
}
}
}
else
{
lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; uint8_t x_1015; uint8_t x_1016; uint8_t x_1017; lean_object* x_1018; lean_object* x_1019; 
x_997 = lean_ctor_get(x_21, 0);
x_998 = lean_ctor_get(x_21, 1);
x_999 = lean_ctor_get(x_21, 2);
x_1000 = lean_ctor_get(x_21, 3);
x_1001 = lean_ctor_get(x_21, 4);
lean_inc(x_1001);
lean_inc(x_1000);
lean_inc(x_999);
lean_inc(x_998);
lean_inc(x_997);
lean_dec(x_21);
x_1002 = lean_unsigned_to_nat(1u);
x_1003 = lean_nat_add(x_1001, x_1002);
x_1004 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1004, 0, x_997);
lean_ctor_set(x_1004, 1, x_998);
lean_ctor_set(x_1004, 2, x_999);
lean_ctor_set(x_1004, 3, x_1000);
lean_ctor_set(x_1004, 4, x_1003);
x_1005 = lean_st_ref_set(x_4, x_1004, x_22);
x_1006 = lean_ctor_get(x_1005, 1);
lean_inc(x_1006);
if (lean_is_exclusive(x_1005)) {
 lean_ctor_release(x_1005, 0);
 lean_ctor_release(x_1005, 1);
 x_1007 = x_1005;
} else {
 lean_dec_ref(x_1005);
 x_1007 = lean_box(0);
}
x_1008 = lean_ctor_get(x_3, 0);
lean_inc(x_1008);
x_1009 = lean_ctor_get(x_3, 1);
lean_inc(x_1009);
x_1010 = lean_ctor_get(x_3, 2);
lean_inc(x_1010);
x_1011 = lean_ctor_get(x_3, 3);
lean_inc(x_1011);
x_1012 = lean_ctor_get(x_3, 4);
lean_inc(x_1012);
x_1013 = lean_ctor_get(x_3, 5);
lean_inc(x_1013);
x_1014 = lean_ctor_get(x_3, 6);
lean_inc(x_1014);
x_1015 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_1016 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_1017 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 lean_ctor_release(x_3, 6);
 lean_ctor_release(x_3, 7);
 x_1018 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1018 = lean_box(0);
}
if (lean_is_scalar(x_1018)) {
 x_1019 = lean_alloc_ctor(0, 8, 3);
} else {
 x_1019 = x_1018;
}
lean_ctor_set(x_1019, 0, x_1008);
lean_ctor_set(x_1019, 1, x_1009);
lean_ctor_set(x_1019, 2, x_1010);
lean_ctor_set(x_1019, 3, x_1011);
lean_ctor_set(x_1019, 4, x_1012);
lean_ctor_set(x_1019, 5, x_1013);
lean_ctor_set(x_1019, 6, x_1014);
lean_ctor_set(x_1019, 7, x_1001);
lean_ctor_set_uint8(x_1019, sizeof(void*)*8, x_1015);
lean_ctor_set_uint8(x_1019, sizeof(void*)*8 + 1, x_1016);
lean_ctor_set_uint8(x_1019, sizeof(void*)*8 + 2, x_1017);
if (x_20 == 0)
{
lean_object* x_1020; uint8_t x_1021; 
x_1020 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_1021 = lean_name_eq(x_10, x_1020);
if (x_1021 == 0)
{
lean_object* x_1022; uint8_t x_1023; 
x_1022 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_1023 = lean_name_eq(x_10, x_1022);
if (x_1023 == 0)
{
lean_object* x_1024; uint8_t x_1025; 
x_1024 = l_Lean_mkHole___closed__2;
x_1025 = lean_name_eq(x_10, x_1024);
if (x_1025 == 0)
{
lean_object* x_1026; uint8_t x_1027; 
x_1026 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__2;
x_1027 = lean_name_eq(x_10, x_1026);
if (x_1027 == 0)
{
lean_object* x_1028; uint8_t x_1029; 
lean_dec(x_11);
x_1028 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_1029 = lean_name_eq(x_10, x_1028);
if (x_1029 == 0)
{
lean_object* x_1030; uint8_t x_1031; 
x_1030 = l_Lean_Parser_Term_namedPattern___elambda__1___closed__2;
x_1031 = lean_name_eq(x_10, x_1030);
if (x_1031 == 0)
{
lean_object* x_1032; uint8_t x_1033; 
x_1032 = l_Lean_Parser_Term_inaccessible___elambda__1___closed__2;
x_1033 = lean_name_eq(x_10, x_1032);
if (x_1033 == 0)
{
lean_object* x_1034; uint8_t x_1035; 
x_1034 = l_Lean_strLitKind;
x_1035 = lean_name_eq(x_10, x_1034);
if (x_1035 == 0)
{
lean_object* x_1036; uint8_t x_1037; 
x_1036 = l_Lean_numLitKind;
x_1037 = lean_name_eq(x_10, x_1036);
if (x_1037 == 0)
{
lean_object* x_1038; uint8_t x_1039; 
x_1038 = l_Lean_charLitKind;
x_1039 = lean_name_eq(x_10, x_1038);
if (x_1039 == 0)
{
lean_object* x_1040; uint8_t x_1041; 
lean_dec(x_1007);
lean_dec(x_1);
x_1040 = l_Lean_choiceKind;
x_1041 = lean_name_eq(x_10, x_1040);
lean_dec(x_10);
if (x_1041 == 0)
{
lean_object* x_1042; 
x_1042 = l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg(x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1006);
lean_dec(x_2);
return x_1042;
}
else
{
lean_object* x_1043; lean_object* x_1044; 
x_1043 = l___private_Lean_Elab_Match_20__collect___main___closed__3;
x_1044 = l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(x_1043, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1006);
lean_dec(x_2);
return x_1044;
}
}
else
{
lean_object* x_1045; 
lean_dec(x_1019);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1007)) {
 x_1045 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1045 = x_1007;
}
lean_ctor_set(x_1045, 0, x_1);
lean_ctor_set(x_1045, 1, x_1006);
return x_1045;
}
}
else
{
lean_object* x_1046; 
lean_dec(x_1019);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1007)) {
 x_1046 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1046 = x_1007;
}
lean_ctor_set(x_1046, 0, x_1);
lean_ctor_set(x_1046, 1, x_1006);
return x_1046;
}
}
else
{
lean_object* x_1047; 
lean_dec(x_1019);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1007)) {
 x_1047 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1047 = x_1007;
}
lean_ctor_set(x_1047, 0, x_1);
lean_ctor_set(x_1047, 1, x_1006);
return x_1047;
}
}
else
{
lean_object* x_1048; 
lean_dec(x_1019);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1007)) {
 x_1048 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1048 = x_1007;
}
lean_ctor_set(x_1048, 0, x_1);
lean_ctor_set(x_1048, 1, x_1006);
return x_1048;
}
}
else
{
lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; uint8_t x_1052; lean_object* x_1053; 
lean_dec(x_1007);
lean_dec(x_10);
x_1049 = lean_unsigned_to_nat(0u);
x_1050 = l_Lean_Syntax_getArg(x_1, x_1049);
x_1051 = l_Lean_Syntax_getId(x_1050);
x_1052 = 0;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1019);
x_1053 = l___private_Lean_Elab_Match_15__processVar(x_1051, x_1052, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1006);
if (lean_obj_tag(x_1053) == 0)
{
lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; 
x_1054 = lean_ctor_get(x_1053, 1);
lean_inc(x_1054);
lean_dec(x_1053);
x_1055 = lean_unsigned_to_nat(2u);
x_1056 = l_Lean_Syntax_getArg(x_1, x_1055);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1057 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1057 = lean_box(0);
}
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1019);
x_1058 = l___private_Lean_Elab_Match_20__collect___main(x_1056, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1054);
if (lean_obj_tag(x_1058) == 0)
{
lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; 
x_1059 = lean_ctor_get(x_1058, 0);
lean_inc(x_1059);
x_1060 = lean_ctor_get(x_1058, 1);
lean_inc(x_1060);
lean_dec(x_1058);
x_1061 = l_Lean_Elab_Term_getCurrMacroScope(x_1019, x_4, x_5, x_6, x_7, x_8, x_1060);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1019);
x_1062 = lean_ctor_get(x_1061, 0);
lean_inc(x_1062);
x_1063 = lean_ctor_get(x_1061, 1);
lean_inc(x_1063);
lean_dec(x_1061);
x_1064 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_1063);
lean_dec(x_8);
x_1065 = lean_ctor_get(x_1064, 0);
lean_inc(x_1065);
x_1066 = lean_ctor_get(x_1064, 1);
lean_inc(x_1066);
if (lean_is_exclusive(x_1064)) {
 lean_ctor_release(x_1064, 0);
 lean_ctor_release(x_1064, 1);
 x_1067 = x_1064;
} else {
 lean_dec_ref(x_1064);
 x_1067 = lean_box(0);
}
x_1068 = l___private_Lean_Elab_Match_20__collect___main___closed__6;
x_1069 = l_Lean_addMacroScope(x_1065, x_1068, x_1062);
x_1070 = l_Lean_SourceInfo_inhabited___closed__1;
x_1071 = l___private_Lean_Elab_Match_20__collect___main___closed__5;
x_1072 = l___private_Lean_Elab_Match_20__collect___main___closed__8;
x_1073 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1073, 0, x_1070);
lean_ctor_set(x_1073, 1, x_1071);
lean_ctor_set(x_1073, 2, x_1069);
lean_ctor_set(x_1073, 3, x_1072);
x_1074 = l_Array_empty___closed__1;
x_1075 = lean_array_push(x_1074, x_1073);
x_1076 = lean_array_push(x_1074, x_1050);
x_1077 = lean_array_push(x_1076, x_1059);
x_1078 = l_Lean_nullKind___closed__2;
if (lean_is_scalar(x_1057)) {
 x_1079 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1079 = x_1057;
}
lean_ctor_set(x_1079, 0, x_1078);
lean_ctor_set(x_1079, 1, x_1077);
x_1080 = lean_array_push(x_1075, x_1079);
x_1081 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1081, 0, x_12);
lean_ctor_set(x_1081, 1, x_1080);
if (lean_is_scalar(x_1067)) {
 x_1082 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1082 = x_1067;
}
lean_ctor_set(x_1082, 0, x_1081);
lean_ctor_set(x_1082, 1, x_1066);
return x_1082;
}
else
{
lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; 
lean_dec(x_1057);
lean_dec(x_1050);
lean_dec(x_1019);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_1083 = lean_ctor_get(x_1058, 0);
lean_inc(x_1083);
x_1084 = lean_ctor_get(x_1058, 1);
lean_inc(x_1084);
if (lean_is_exclusive(x_1058)) {
 lean_ctor_release(x_1058, 0);
 lean_ctor_release(x_1058, 1);
 x_1085 = x_1058;
} else {
 lean_dec_ref(x_1058);
 x_1085 = lean_box(0);
}
if (lean_is_scalar(x_1085)) {
 x_1086 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1086 = x_1085;
}
lean_ctor_set(x_1086, 0, x_1083);
lean_ctor_set(x_1086, 1, x_1084);
return x_1086;
}
}
else
{
lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; lean_object* x_1090; 
lean_dec(x_1050);
lean_dec(x_1019);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1087 = lean_ctor_get(x_1053, 0);
lean_inc(x_1087);
x_1088 = lean_ctor_get(x_1053, 1);
lean_inc(x_1088);
if (lean_is_exclusive(x_1053)) {
 lean_ctor_release(x_1053, 0);
 lean_ctor_release(x_1053, 1);
 x_1089 = x_1053;
} else {
 lean_dec_ref(x_1053);
 x_1089 = lean_box(0);
}
if (lean_is_scalar(x_1089)) {
 x_1090 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1090 = x_1089;
}
lean_ctor_set(x_1090, 0, x_1087);
lean_ctor_set(x_1090, 1, x_1088);
return x_1090;
}
}
}
else
{
lean_object* x_1091; lean_object* x_1092; uint8_t x_1093; lean_object* x_1094; 
lean_dec(x_1007);
lean_dec(x_10);
x_1091 = lean_unsigned_to_nat(0u);
x_1092 = l_Lean_Syntax_getArg(x_1, x_1091);
x_1093 = 1;
x_1094 = l___private_Lean_Elab_Match_16__processIdAux(x_1092, x_1093, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1006);
if (lean_obj_tag(x_1094) == 0)
{
lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; 
x_1095 = lean_ctor_get(x_1094, 1);
lean_inc(x_1095);
if (lean_is_exclusive(x_1094)) {
 lean_ctor_release(x_1094, 0);
 lean_ctor_release(x_1094, 1);
 x_1096 = x_1094;
} else {
 lean_dec_ref(x_1094);
 x_1096 = lean_box(0);
}
if (lean_is_scalar(x_1096)) {
 x_1097 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1097 = x_1096;
}
lean_ctor_set(x_1097, 0, x_1);
lean_ctor_set(x_1097, 1, x_1095);
return x_1097;
}
else
{
lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; 
lean_dec(x_1);
x_1098 = lean_ctor_get(x_1094, 0);
lean_inc(x_1098);
x_1099 = lean_ctor_get(x_1094, 1);
lean_inc(x_1099);
if (lean_is_exclusive(x_1094)) {
 lean_ctor_release(x_1094, 0);
 lean_ctor_release(x_1094, 1);
 x_1100 = x_1094;
} else {
 lean_dec_ref(x_1094);
 x_1100 = lean_box(0);
}
if (lean_is_scalar(x_1100)) {
 x_1101 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1101 = x_1100;
}
lean_ctor_set(x_1101, 0, x_1098);
lean_ctor_set(x_1101, 1, x_1099);
return x_1101;
}
}
}
else
{
lean_object* x_1102; lean_object* x_1103; uint8_t x_1104; 
x_1102 = l_Lean_Syntax_inhabited;
x_1103 = lean_array_get(x_1102, x_11, x_1002);
x_1104 = l_Lean_Syntax_isNone(x_1103);
if (x_1104 == 0)
{
lean_object* x_1105; lean_object* x_1106; lean_object* x_1107; lean_object* x_1108; uint8_t x_1109; 
lean_dec(x_1007);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1105 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1105 = lean_box(0);
}
x_1106 = lean_unsigned_to_nat(0u);
x_1107 = l_Lean_Syntax_getArg(x_1103, x_1106);
x_1108 = l_Lean_Syntax_getArg(x_1103, x_1002);
x_1109 = l_Lean_Syntax_isNone(x_1108);
if (x_1109 == 0)
{
lean_object* x_1110; lean_object* x_1111; uint8_t x_1112; 
x_1110 = l_Lean_Syntax_getArg(x_1108, x_1106);
x_1111 = l_Lean_Parser_Term_typeAscription___elambda__1___closed__2;
lean_inc(x_1110);
x_1112 = l_Lean_Syntax_isOfKind(x_1110, x_1111);
if (x_1112 == 0)
{
lean_object* x_1113; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1019);
lean_inc(x_2);
x_1113 = l___private_Lean_Elab_Match_20__collect___main(x_1107, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1006);
if (lean_obj_tag(x_1113) == 0)
{
lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; lean_object* x_1119; lean_object* x_1120; 
x_1114 = lean_ctor_get(x_1113, 0);
lean_inc(x_1114);
x_1115 = lean_ctor_get(x_1113, 1);
lean_inc(x_1115);
lean_dec(x_1113);
x_1116 = l_Lean_Syntax_setArg(x_1103, x_1106, x_1114);
x_1117 = l_Lean_Syntax_getArg(x_1110, x_1002);
x_1118 = l_Lean_Syntax_getArgs(x_1117);
lean_dec(x_1117);
x_1119 = l___private_Lean_Elab_Match_20__collect___main___closed__9;
x_1120 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_1118, x_1119, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1115);
lean_dec(x_1118);
if (lean_obj_tag(x_1120) == 0)
{
lean_object* x_1121; lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; lean_object* x_1130; lean_object* x_1131; 
x_1121 = lean_ctor_get(x_1120, 0);
lean_inc(x_1121);
x_1122 = lean_ctor_get(x_1120, 1);
lean_inc(x_1122);
if (lean_is_exclusive(x_1120)) {
 lean_ctor_release(x_1120, 0);
 lean_ctor_release(x_1120, 1);
 x_1123 = x_1120;
} else {
 lean_dec_ref(x_1120);
 x_1123 = lean_box(0);
}
x_1124 = l_Lean_nullKind;
if (lean_is_scalar(x_1105)) {
 x_1125 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1125 = x_1105;
}
lean_ctor_set(x_1125, 0, x_1124);
lean_ctor_set(x_1125, 1, x_1121);
x_1126 = l_Lean_Syntax_setArg(x_1110, x_1002, x_1125);
x_1127 = l_Lean_Syntax_setArg(x_1108, x_1106, x_1126);
x_1128 = l_Lean_Syntax_setArg(x_1116, x_1002, x_1127);
x_1129 = lean_array_set(x_11, x_1002, x_1128);
x_1130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1130, 0, x_10);
lean_ctor_set(x_1130, 1, x_1129);
if (lean_is_scalar(x_1123)) {
 x_1131 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1131 = x_1123;
}
lean_ctor_set(x_1131, 0, x_1130);
lean_ctor_set(x_1131, 1, x_1122);
return x_1131;
}
else
{
lean_object* x_1132; lean_object* x_1133; lean_object* x_1134; lean_object* x_1135; 
lean_dec(x_1116);
lean_dec(x_1110);
lean_dec(x_1108);
lean_dec(x_1105);
lean_dec(x_11);
lean_dec(x_10);
x_1132 = lean_ctor_get(x_1120, 0);
lean_inc(x_1132);
x_1133 = lean_ctor_get(x_1120, 1);
lean_inc(x_1133);
if (lean_is_exclusive(x_1120)) {
 lean_ctor_release(x_1120, 0);
 lean_ctor_release(x_1120, 1);
 x_1134 = x_1120;
} else {
 lean_dec_ref(x_1120);
 x_1134 = lean_box(0);
}
if (lean_is_scalar(x_1134)) {
 x_1135 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1135 = x_1134;
}
lean_ctor_set(x_1135, 0, x_1132);
lean_ctor_set(x_1135, 1, x_1133);
return x_1135;
}
}
else
{
lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; 
lean_dec(x_1110);
lean_dec(x_1108);
lean_dec(x_1105);
lean_dec(x_1103);
lean_dec(x_1019);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_1136 = lean_ctor_get(x_1113, 0);
lean_inc(x_1136);
x_1137 = lean_ctor_get(x_1113, 1);
lean_inc(x_1137);
if (lean_is_exclusive(x_1113)) {
 lean_ctor_release(x_1113, 0);
 lean_ctor_release(x_1113, 1);
 x_1138 = x_1113;
} else {
 lean_dec_ref(x_1113);
 x_1138 = lean_box(0);
}
if (lean_is_scalar(x_1138)) {
 x_1139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1139 = x_1138;
}
lean_ctor_set(x_1139, 0, x_1136);
lean_ctor_set(x_1139, 1, x_1137);
return x_1139;
}
}
else
{
lean_object* x_1140; 
lean_dec(x_1110);
lean_dec(x_1108);
x_1140 = l___private_Lean_Elab_Match_20__collect___main(x_1107, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1006);
if (lean_obj_tag(x_1140) == 0)
{
lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; 
x_1141 = lean_ctor_get(x_1140, 0);
lean_inc(x_1141);
x_1142 = lean_ctor_get(x_1140, 1);
lean_inc(x_1142);
if (lean_is_exclusive(x_1140)) {
 lean_ctor_release(x_1140, 0);
 lean_ctor_release(x_1140, 1);
 x_1143 = x_1140;
} else {
 lean_dec_ref(x_1140);
 x_1143 = lean_box(0);
}
x_1144 = l_Lean_Syntax_setArg(x_1103, x_1106, x_1141);
x_1145 = lean_array_set(x_11, x_1002, x_1144);
if (lean_is_scalar(x_1105)) {
 x_1146 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1146 = x_1105;
}
lean_ctor_set(x_1146, 0, x_10);
lean_ctor_set(x_1146, 1, x_1145);
if (lean_is_scalar(x_1143)) {
 x_1147 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1147 = x_1143;
}
lean_ctor_set(x_1147, 0, x_1146);
lean_ctor_set(x_1147, 1, x_1142);
return x_1147;
}
else
{
lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; lean_object* x_1151; 
lean_dec(x_1105);
lean_dec(x_1103);
lean_dec(x_11);
lean_dec(x_10);
x_1148 = lean_ctor_get(x_1140, 0);
lean_inc(x_1148);
x_1149 = lean_ctor_get(x_1140, 1);
lean_inc(x_1149);
if (lean_is_exclusive(x_1140)) {
 lean_ctor_release(x_1140, 0);
 lean_ctor_release(x_1140, 1);
 x_1150 = x_1140;
} else {
 lean_dec_ref(x_1140);
 x_1150 = lean_box(0);
}
if (lean_is_scalar(x_1150)) {
 x_1151 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1151 = x_1150;
}
lean_ctor_set(x_1151, 0, x_1148);
lean_ctor_set(x_1151, 1, x_1149);
return x_1151;
}
}
}
else
{
lean_object* x_1152; 
lean_dec(x_1108);
x_1152 = l___private_Lean_Elab_Match_20__collect___main(x_1107, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1006);
if (lean_obj_tag(x_1152) == 0)
{
lean_object* x_1153; lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; 
x_1153 = lean_ctor_get(x_1152, 0);
lean_inc(x_1153);
x_1154 = lean_ctor_get(x_1152, 1);
lean_inc(x_1154);
if (lean_is_exclusive(x_1152)) {
 lean_ctor_release(x_1152, 0);
 lean_ctor_release(x_1152, 1);
 x_1155 = x_1152;
} else {
 lean_dec_ref(x_1152);
 x_1155 = lean_box(0);
}
x_1156 = l_Lean_Syntax_setArg(x_1103, x_1106, x_1153);
x_1157 = lean_array_set(x_11, x_1002, x_1156);
if (lean_is_scalar(x_1105)) {
 x_1158 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1158 = x_1105;
}
lean_ctor_set(x_1158, 0, x_10);
lean_ctor_set(x_1158, 1, x_1157);
if (lean_is_scalar(x_1155)) {
 x_1159 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1159 = x_1155;
}
lean_ctor_set(x_1159, 0, x_1158);
lean_ctor_set(x_1159, 1, x_1154);
return x_1159;
}
else
{
lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; 
lean_dec(x_1105);
lean_dec(x_1103);
lean_dec(x_11);
lean_dec(x_10);
x_1160 = lean_ctor_get(x_1152, 0);
lean_inc(x_1160);
x_1161 = lean_ctor_get(x_1152, 1);
lean_inc(x_1161);
if (lean_is_exclusive(x_1152)) {
 lean_ctor_release(x_1152, 0);
 lean_ctor_release(x_1152, 1);
 x_1162 = x_1152;
} else {
 lean_dec_ref(x_1152);
 x_1162 = lean_box(0);
}
if (lean_is_scalar(x_1162)) {
 x_1163 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1163 = x_1162;
}
lean_ctor_set(x_1163, 0, x_1160);
lean_ctor_set(x_1163, 1, x_1161);
return x_1163;
}
}
}
else
{
lean_object* x_1164; 
lean_dec(x_1103);
lean_dec(x_1019);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1007)) {
 x_1164 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1164 = x_1007;
}
lean_ctor_set(x_1164, 0, x_1);
lean_ctor_set(x_1164, 1, x_1006);
return x_1164;
}
}
}
else
{
lean_object* x_1165; lean_object* x_1166; lean_object* x_1167; lean_object* x_1168; lean_object* x_1169; lean_object* x_1170; lean_object* x_1171; lean_object* x_1172; lean_object* x_1173; lean_object* x_1174; lean_object* x_1175; lean_object* x_1176; lean_object* x_1177; lean_object* x_1178; lean_object* x_1179; lean_object* x_1180; lean_object* x_1181; 
lean_dec(x_1019);
lean_dec(x_1007);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1165 = l___private_Lean_Elab_Match_10__mkMVarSyntax___rarg(x_8, x_1006);
lean_dec(x_8);
x_1166 = lean_ctor_get(x_1165, 0);
lean_inc(x_1166);
x_1167 = lean_ctor_get(x_1165, 1);
lean_inc(x_1167);
lean_dec(x_1165);
x_1168 = lean_st_ref_take(x_2, x_1167);
x_1169 = lean_ctor_get(x_1168, 0);
lean_inc(x_1169);
x_1170 = lean_ctor_get(x_1168, 1);
lean_inc(x_1170);
lean_dec(x_1168);
x_1171 = lean_ctor_get(x_1169, 0);
lean_inc(x_1171);
x_1172 = lean_ctor_get(x_1169, 1);
lean_inc(x_1172);
if (lean_is_exclusive(x_1169)) {
 lean_ctor_release(x_1169, 0);
 lean_ctor_release(x_1169, 1);
 x_1173 = x_1169;
} else {
 lean_dec_ref(x_1169);
 x_1173 = lean_box(0);
}
x_1174 = l___private_Lean_Elab_Match_11__getMVarSyntaxMVarId(x_1166);
x_1175 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1175, 0, x_1174);
x_1176 = lean_array_push(x_1172, x_1175);
if (lean_is_scalar(x_1173)) {
 x_1177 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1177 = x_1173;
}
lean_ctor_set(x_1177, 0, x_1171);
lean_ctor_set(x_1177, 1, x_1176);
x_1178 = lean_st_ref_set(x_2, x_1177, x_1170);
lean_dec(x_2);
x_1179 = lean_ctor_get(x_1178, 1);
lean_inc(x_1179);
if (lean_is_exclusive(x_1178)) {
 lean_ctor_release(x_1178, 0);
 lean_ctor_release(x_1178, 1);
 x_1180 = x_1178;
} else {
 lean_dec_ref(x_1178);
 x_1180 = lean_box(0);
}
if (lean_is_scalar(x_1180)) {
 x_1181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1181 = x_1180;
}
lean_ctor_set(x_1181, 0, x_1166);
lean_ctor_set(x_1181, 1, x_1179);
return x_1181;
}
}
else
{
lean_object* x_1182; lean_object* x_1183; lean_object* x_1184; uint8_t x_1185; 
lean_dec(x_1007);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1182 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1182 = lean_box(0);
}
x_1183 = l_Lean_Syntax_inhabited;
x_1184 = lean_array_get(x_1183, x_11, x_1002);
x_1185 = l_Lean_Syntax_isNone(x_1184);
if (x_1185 == 0)
{
lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; 
lean_dec(x_1182);
lean_dec(x_11);
lean_dec(x_10);
x_1186 = l___private_Lean_Elab_Match_20__collect___main___closed__12;
x_1187 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg(x_1184, x_1186, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1006);
lean_dec(x_2);
lean_dec(x_1184);
x_1188 = lean_ctor_get(x_1187, 0);
lean_inc(x_1188);
x_1189 = lean_ctor_get(x_1187, 1);
lean_inc(x_1189);
if (lean_is_exclusive(x_1187)) {
 lean_ctor_release(x_1187, 0);
 lean_ctor_release(x_1187, 1);
 x_1190 = x_1187;
} else {
 lean_dec_ref(x_1187);
 x_1190 = lean_box(0);
}
if (lean_is_scalar(x_1190)) {
 x_1191 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1191 = x_1190;
}
lean_ctor_set(x_1191, 0, x_1188);
lean_ctor_set(x_1191, 1, x_1189);
return x_1191;
}
else
{
lean_object* x_1192; lean_object* x_1193; lean_object* x_1194; lean_object* x_1195; lean_object* x_1196; 
lean_dec(x_1184);
x_1192 = lean_unsigned_to_nat(2u);
x_1193 = lean_array_get(x_1183, x_11, x_1192);
x_1194 = l_Lean_Syntax_getArgs(x_1193);
lean_dec(x_1193);
x_1195 = l___private_Lean_Elab_Match_20__collect___main___closed__13;
x_1196 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_1194, x_1195, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1006);
lean_dec(x_1194);
if (lean_obj_tag(x_1196) == 0)
{
lean_object* x_1197; lean_object* x_1198; lean_object* x_1199; lean_object* x_1200; lean_object* x_1201; lean_object* x_1202; lean_object* x_1203; lean_object* x_1204; 
x_1197 = lean_ctor_get(x_1196, 0);
lean_inc(x_1197);
x_1198 = lean_ctor_get(x_1196, 1);
lean_inc(x_1198);
if (lean_is_exclusive(x_1196)) {
 lean_ctor_release(x_1196, 0);
 lean_ctor_release(x_1196, 1);
 x_1199 = x_1196;
} else {
 lean_dec_ref(x_1196);
 x_1199 = lean_box(0);
}
x_1200 = l_Lean_nullKind;
if (lean_is_scalar(x_1182)) {
 x_1201 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1201 = x_1182;
}
lean_ctor_set(x_1201, 0, x_1200);
lean_ctor_set(x_1201, 1, x_1197);
x_1202 = lean_array_set(x_11, x_1192, x_1201);
x_1203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1203, 0, x_10);
lean_ctor_set(x_1203, 1, x_1202);
if (lean_is_scalar(x_1199)) {
 x_1204 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1204 = x_1199;
}
lean_ctor_set(x_1204, 0, x_1203);
lean_ctor_set(x_1204, 1, x_1198);
return x_1204;
}
else
{
lean_object* x_1205; lean_object* x_1206; lean_object* x_1207; lean_object* x_1208; 
lean_dec(x_1182);
lean_dec(x_11);
lean_dec(x_10);
x_1205 = lean_ctor_get(x_1196, 0);
lean_inc(x_1205);
x_1206 = lean_ctor_get(x_1196, 1);
lean_inc(x_1206);
if (lean_is_exclusive(x_1196)) {
 lean_ctor_release(x_1196, 0);
 lean_ctor_release(x_1196, 1);
 x_1207 = x_1196;
} else {
 lean_dec_ref(x_1196);
 x_1207 = lean_box(0);
}
if (lean_is_scalar(x_1207)) {
 x_1208 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1208 = x_1207;
}
lean_ctor_set(x_1208, 0, x_1205);
lean_ctor_set(x_1208, 1, x_1206);
return x_1208;
}
}
}
}
else
{
lean_object* x_1209; lean_object* x_1210; lean_object* x_1211; lean_object* x_1212; lean_object* x_1213; lean_object* x_1214; 
lean_dec(x_1007);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1209 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1209 = lean_box(0);
}
x_1210 = l_Lean_Syntax_inhabited;
x_1211 = lean_array_get(x_1210, x_11, x_1002);
x_1212 = l_Lean_Syntax_getArgs(x_1211);
lean_dec(x_1211);
x_1213 = l___private_Lean_Elab_Match_20__collect___main___closed__9;
x_1214 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_1212, x_1213, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1006);
lean_dec(x_1212);
if (lean_obj_tag(x_1214) == 0)
{
lean_object* x_1215; lean_object* x_1216; lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; lean_object* x_1221; lean_object* x_1222; 
x_1215 = lean_ctor_get(x_1214, 0);
lean_inc(x_1215);
x_1216 = lean_ctor_get(x_1214, 1);
lean_inc(x_1216);
if (lean_is_exclusive(x_1214)) {
 lean_ctor_release(x_1214, 0);
 lean_ctor_release(x_1214, 1);
 x_1217 = x_1214;
} else {
 lean_dec_ref(x_1214);
 x_1217 = lean_box(0);
}
x_1218 = l_Lean_nullKind;
if (lean_is_scalar(x_1209)) {
 x_1219 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1219 = x_1209;
}
lean_ctor_set(x_1219, 0, x_1218);
lean_ctor_set(x_1219, 1, x_1215);
x_1220 = lean_array_set(x_11, x_1002, x_1219);
x_1221 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1221, 0, x_10);
lean_ctor_set(x_1221, 1, x_1220);
if (lean_is_scalar(x_1217)) {
 x_1222 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1222 = x_1217;
}
lean_ctor_set(x_1222, 0, x_1221);
lean_ctor_set(x_1222, 1, x_1216);
return x_1222;
}
else
{
lean_object* x_1223; lean_object* x_1224; lean_object* x_1225; lean_object* x_1226; 
lean_dec(x_1209);
lean_dec(x_11);
lean_dec(x_10);
x_1223 = lean_ctor_get(x_1214, 0);
lean_inc(x_1223);
x_1224 = lean_ctor_get(x_1214, 1);
lean_inc(x_1224);
if (lean_is_exclusive(x_1214)) {
 lean_ctor_release(x_1214, 0);
 lean_ctor_release(x_1214, 1);
 x_1225 = x_1214;
} else {
 lean_dec_ref(x_1214);
 x_1225 = lean_box(0);
}
if (lean_is_scalar(x_1225)) {
 x_1226 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1226 = x_1225;
}
lean_ctor_set(x_1226, 0, x_1223);
lean_ctor_set(x_1226, 1, x_1224);
return x_1226;
}
}
}
else
{
lean_object* x_1227; lean_object* x_1228; lean_object* x_1229; lean_object* x_1230; lean_object* x_1231; lean_object* x_1232; lean_object* x_1233; lean_object* x_1234; 
lean_dec(x_1007);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1227 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1227 = lean_box(0);
}
x_1228 = l_Lean_Syntax_inhabited;
x_1229 = lean_unsigned_to_nat(0u);
x_1230 = lean_array_get(x_1228, x_11, x_1229);
x_1231 = lean_array_get(x_1228, x_11, x_1002);
x_1232 = l_Lean_Syntax_getArgs(x_1231);
lean_dec(x_1231);
x_1233 = l_Lean_mkAppStx___closed__6;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1019);
x_1234 = l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4(x_1233, x_1232, x_1229, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1006);
if (lean_obj_tag(x_1234) == 0)
{
lean_object* x_1235; uint8_t x_1236; lean_object* x_1237; 
x_1235 = lean_ctor_get(x_1234, 1);
lean_inc(x_1235);
lean_dec(x_1234);
x_1236 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1019);
lean_inc(x_2);
x_1237 = l___private_Lean_Elab_Match_16__processIdAux(x_1230, x_1236, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1235);
if (lean_obj_tag(x_1237) == 0)
{
lean_object* x_1238; lean_object* x_1239; lean_object* x_1240; lean_object* x_1241; lean_object* x_1242; lean_object* x_1243; 
x_1238 = lean_ctor_get(x_1237, 0);
lean_inc(x_1238);
x_1239 = lean_ctor_get(x_1237, 1);
lean_inc(x_1239);
lean_dec(x_1237);
x_1240 = x_1232;
x_1241 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__5___boxed), 11, 3);
lean_closure_set(x_1241, 0, x_1238);
lean_closure_set(x_1241, 1, x_1229);
lean_closure_set(x_1241, 2, x_1240);
x_1242 = x_1241;
x_1243 = lean_apply_8(x_1242, x_2, x_1019, x_4, x_5, x_6, x_7, x_8, x_1239);
if (lean_obj_tag(x_1243) == 0)
{
lean_object* x_1244; lean_object* x_1245; lean_object* x_1246; lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; lean_object* x_1251; 
x_1244 = lean_ctor_get(x_1243, 0);
lean_inc(x_1244);
x_1245 = lean_ctor_get(x_1243, 1);
lean_inc(x_1245);
if (lean_is_exclusive(x_1243)) {
 lean_ctor_release(x_1243, 0);
 lean_ctor_release(x_1243, 1);
 x_1246 = x_1243;
} else {
 lean_dec_ref(x_1243);
 x_1246 = lean_box(0);
}
x_1247 = l_Lean_nullKind;
if (lean_is_scalar(x_1227)) {
 x_1248 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1248 = x_1227;
}
lean_ctor_set(x_1248, 0, x_1247);
lean_ctor_set(x_1248, 1, x_1244);
x_1249 = lean_array_set(x_11, x_1002, x_1248);
x_1250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1250, 0, x_10);
lean_ctor_set(x_1250, 1, x_1249);
if (lean_is_scalar(x_1246)) {
 x_1251 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1251 = x_1246;
}
lean_ctor_set(x_1251, 0, x_1250);
lean_ctor_set(x_1251, 1, x_1245);
return x_1251;
}
else
{
lean_object* x_1252; lean_object* x_1253; lean_object* x_1254; lean_object* x_1255; 
lean_dec(x_1227);
lean_dec(x_11);
lean_dec(x_10);
x_1252 = lean_ctor_get(x_1243, 0);
lean_inc(x_1252);
x_1253 = lean_ctor_get(x_1243, 1);
lean_inc(x_1253);
if (lean_is_exclusive(x_1243)) {
 lean_ctor_release(x_1243, 0);
 lean_ctor_release(x_1243, 1);
 x_1254 = x_1243;
} else {
 lean_dec_ref(x_1243);
 x_1254 = lean_box(0);
}
if (lean_is_scalar(x_1254)) {
 x_1255 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1255 = x_1254;
}
lean_ctor_set(x_1255, 0, x_1252);
lean_ctor_set(x_1255, 1, x_1253);
return x_1255;
}
}
else
{
lean_object* x_1256; lean_object* x_1257; lean_object* x_1258; lean_object* x_1259; 
lean_dec(x_1232);
lean_dec(x_1227);
lean_dec(x_1019);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_1256 = lean_ctor_get(x_1237, 0);
lean_inc(x_1256);
x_1257 = lean_ctor_get(x_1237, 1);
lean_inc(x_1257);
if (lean_is_exclusive(x_1237)) {
 lean_ctor_release(x_1237, 0);
 lean_ctor_release(x_1237, 1);
 x_1258 = x_1237;
} else {
 lean_dec_ref(x_1237);
 x_1258 = lean_box(0);
}
if (lean_is_scalar(x_1258)) {
 x_1259 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1259 = x_1258;
}
lean_ctor_set(x_1259, 0, x_1256);
lean_ctor_set(x_1259, 1, x_1257);
return x_1259;
}
}
else
{
lean_object* x_1260; lean_object* x_1261; lean_object* x_1262; lean_object* x_1263; 
lean_dec(x_1232);
lean_dec(x_1230);
lean_dec(x_1227);
lean_dec(x_1019);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_1260 = lean_ctor_get(x_1234, 0);
lean_inc(x_1260);
x_1261 = lean_ctor_get(x_1234, 1);
lean_inc(x_1261);
if (lean_is_exclusive(x_1234)) {
 lean_ctor_release(x_1234, 0);
 lean_ctor_release(x_1234, 1);
 x_1262 = x_1234;
} else {
 lean_dec_ref(x_1234);
 x_1262 = lean_box(0);
}
if (lean_is_scalar(x_1262)) {
 x_1263 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1263 = x_1262;
}
lean_ctor_set(x_1263, 0, x_1260);
lean_ctor_set(x_1263, 1, x_1261);
return x_1263;
}
}
}
}
}
else
{
lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; lean_object* x_1277; lean_object* x_1278; lean_object* x_1279; uint8_t x_1280; lean_object* x_1281; lean_object* x_1282; 
x_1271 = lean_ctor_get(x_7, 0);
x_1272 = lean_ctor_get(x_7, 1);
x_1273 = lean_ctor_get(x_7, 2);
x_1274 = lean_ctor_get(x_7, 3);
lean_inc(x_1274);
lean_inc(x_1273);
lean_inc(x_1272);
lean_inc(x_1271);
lean_dec(x_7);
x_1275 = l_Lean_replaceRef(x_1, x_1274);
x_1276 = l_Lean_replaceRef(x_1275, x_1274);
lean_dec(x_1275);
x_1277 = l_Lean_replaceRef(x_1276, x_1274);
lean_dec(x_1274);
lean_dec(x_1276);
x_1278 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_1278, 0, x_1271);
lean_ctor_set(x_1278, 1, x_1272);
lean_ctor_set(x_1278, 2, x_1273);
lean_ctor_set(x_1278, 3, x_1277);
x_1279 = lean_st_ref_take(x_4, x_9);
if (x_13 == 0)
{
lean_object* x_1552; lean_object* x_1553; uint8_t x_1554; 
x_1552 = lean_ctor_get(x_1279, 0);
lean_inc(x_1552);
x_1553 = lean_ctor_get(x_1279, 1);
lean_inc(x_1553);
lean_dec(x_1279);
x_1554 = 0;
x_1280 = x_1554;
x_1281 = x_1552;
x_1282 = x_1553;
goto block_1551;
}
else
{
lean_object* x_1555; lean_object* x_1556; uint8_t x_1557; 
x_1555 = lean_ctor_get(x_1279, 0);
lean_inc(x_1555);
x_1556 = lean_ctor_get(x_1279, 1);
lean_inc(x_1556);
lean_dec(x_1279);
x_1557 = 1;
x_1280 = x_1557;
x_1281 = x_1555;
x_1282 = x_1556;
goto block_1551;
}
block_1551:
{
lean_object* x_1283; lean_object* x_1284; lean_object* x_1285; lean_object* x_1286; lean_object* x_1287; lean_object* x_1288; lean_object* x_1289; lean_object* x_1290; lean_object* x_1291; lean_object* x_1292; lean_object* x_1293; lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; lean_object* x_1297; lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; uint8_t x_1302; uint8_t x_1303; uint8_t x_1304; lean_object* x_1305; lean_object* x_1306; 
x_1283 = lean_ctor_get(x_1281, 0);
lean_inc(x_1283);
x_1284 = lean_ctor_get(x_1281, 1);
lean_inc(x_1284);
x_1285 = lean_ctor_get(x_1281, 2);
lean_inc(x_1285);
x_1286 = lean_ctor_get(x_1281, 3);
lean_inc(x_1286);
x_1287 = lean_ctor_get(x_1281, 4);
lean_inc(x_1287);
if (lean_is_exclusive(x_1281)) {
 lean_ctor_release(x_1281, 0);
 lean_ctor_release(x_1281, 1);
 lean_ctor_release(x_1281, 2);
 lean_ctor_release(x_1281, 3);
 lean_ctor_release(x_1281, 4);
 x_1288 = x_1281;
} else {
 lean_dec_ref(x_1281);
 x_1288 = lean_box(0);
}
x_1289 = lean_unsigned_to_nat(1u);
x_1290 = lean_nat_add(x_1287, x_1289);
if (lean_is_scalar(x_1288)) {
 x_1291 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1291 = x_1288;
}
lean_ctor_set(x_1291, 0, x_1283);
lean_ctor_set(x_1291, 1, x_1284);
lean_ctor_set(x_1291, 2, x_1285);
lean_ctor_set(x_1291, 3, x_1286);
lean_ctor_set(x_1291, 4, x_1290);
x_1292 = lean_st_ref_set(x_4, x_1291, x_1282);
x_1293 = lean_ctor_get(x_1292, 1);
lean_inc(x_1293);
if (lean_is_exclusive(x_1292)) {
 lean_ctor_release(x_1292, 0);
 lean_ctor_release(x_1292, 1);
 x_1294 = x_1292;
} else {
 lean_dec_ref(x_1292);
 x_1294 = lean_box(0);
}
x_1295 = lean_ctor_get(x_3, 0);
lean_inc(x_1295);
x_1296 = lean_ctor_get(x_3, 1);
lean_inc(x_1296);
x_1297 = lean_ctor_get(x_3, 2);
lean_inc(x_1297);
x_1298 = lean_ctor_get(x_3, 3);
lean_inc(x_1298);
x_1299 = lean_ctor_get(x_3, 4);
lean_inc(x_1299);
x_1300 = lean_ctor_get(x_3, 5);
lean_inc(x_1300);
x_1301 = lean_ctor_get(x_3, 6);
lean_inc(x_1301);
x_1302 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_1303 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_1304 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 lean_ctor_release(x_3, 6);
 lean_ctor_release(x_3, 7);
 x_1305 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1305 = lean_box(0);
}
if (lean_is_scalar(x_1305)) {
 x_1306 = lean_alloc_ctor(0, 8, 3);
} else {
 x_1306 = x_1305;
}
lean_ctor_set(x_1306, 0, x_1295);
lean_ctor_set(x_1306, 1, x_1296);
lean_ctor_set(x_1306, 2, x_1297);
lean_ctor_set(x_1306, 3, x_1298);
lean_ctor_set(x_1306, 4, x_1299);
lean_ctor_set(x_1306, 5, x_1300);
lean_ctor_set(x_1306, 6, x_1301);
lean_ctor_set(x_1306, 7, x_1287);
lean_ctor_set_uint8(x_1306, sizeof(void*)*8, x_1302);
lean_ctor_set_uint8(x_1306, sizeof(void*)*8 + 1, x_1303);
lean_ctor_set_uint8(x_1306, sizeof(void*)*8 + 2, x_1304);
if (x_1280 == 0)
{
lean_object* x_1307; uint8_t x_1308; 
x_1307 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_1308 = lean_name_eq(x_10, x_1307);
if (x_1308 == 0)
{
lean_object* x_1309; uint8_t x_1310; 
x_1309 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_1310 = lean_name_eq(x_10, x_1309);
if (x_1310 == 0)
{
lean_object* x_1311; uint8_t x_1312; 
x_1311 = l_Lean_mkHole___closed__2;
x_1312 = lean_name_eq(x_10, x_1311);
if (x_1312 == 0)
{
lean_object* x_1313; uint8_t x_1314; 
x_1313 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__2;
x_1314 = lean_name_eq(x_10, x_1313);
if (x_1314 == 0)
{
lean_object* x_1315; uint8_t x_1316; 
lean_dec(x_11);
x_1315 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_1316 = lean_name_eq(x_10, x_1315);
if (x_1316 == 0)
{
lean_object* x_1317; uint8_t x_1318; 
x_1317 = l_Lean_Parser_Term_namedPattern___elambda__1___closed__2;
x_1318 = lean_name_eq(x_10, x_1317);
if (x_1318 == 0)
{
lean_object* x_1319; uint8_t x_1320; 
x_1319 = l_Lean_Parser_Term_inaccessible___elambda__1___closed__2;
x_1320 = lean_name_eq(x_10, x_1319);
if (x_1320 == 0)
{
lean_object* x_1321; uint8_t x_1322; 
x_1321 = l_Lean_strLitKind;
x_1322 = lean_name_eq(x_10, x_1321);
if (x_1322 == 0)
{
lean_object* x_1323; uint8_t x_1324; 
x_1323 = l_Lean_numLitKind;
x_1324 = lean_name_eq(x_10, x_1323);
if (x_1324 == 0)
{
lean_object* x_1325; uint8_t x_1326; 
x_1325 = l_Lean_charLitKind;
x_1326 = lean_name_eq(x_10, x_1325);
if (x_1326 == 0)
{
lean_object* x_1327; uint8_t x_1328; 
lean_dec(x_1294);
lean_dec(x_1);
x_1327 = l_Lean_choiceKind;
x_1328 = lean_name_eq(x_10, x_1327);
lean_dec(x_10);
if (x_1328 == 0)
{
lean_object* x_1329; 
x_1329 = l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg(x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1293);
lean_dec(x_2);
return x_1329;
}
else
{
lean_object* x_1330; lean_object* x_1331; 
x_1330 = l___private_Lean_Elab_Match_20__collect___main___closed__3;
x_1331 = l_Lean_throwError___at___private_Lean_Elab_Match_12__throwCtorExpected___spec__1___rarg(x_1330, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1293);
lean_dec(x_2);
return x_1331;
}
}
else
{
lean_object* x_1332; 
lean_dec(x_1306);
lean_dec(x_1278);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1294)) {
 x_1332 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1332 = x_1294;
}
lean_ctor_set(x_1332, 0, x_1);
lean_ctor_set(x_1332, 1, x_1293);
return x_1332;
}
}
else
{
lean_object* x_1333; 
lean_dec(x_1306);
lean_dec(x_1278);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1294)) {
 x_1333 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1333 = x_1294;
}
lean_ctor_set(x_1333, 0, x_1);
lean_ctor_set(x_1333, 1, x_1293);
return x_1333;
}
}
else
{
lean_object* x_1334; 
lean_dec(x_1306);
lean_dec(x_1278);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1294)) {
 x_1334 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1334 = x_1294;
}
lean_ctor_set(x_1334, 0, x_1);
lean_ctor_set(x_1334, 1, x_1293);
return x_1334;
}
}
else
{
lean_object* x_1335; 
lean_dec(x_1306);
lean_dec(x_1278);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1294)) {
 x_1335 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1335 = x_1294;
}
lean_ctor_set(x_1335, 0, x_1);
lean_ctor_set(x_1335, 1, x_1293);
return x_1335;
}
}
else
{
lean_object* x_1336; lean_object* x_1337; lean_object* x_1338; uint8_t x_1339; lean_object* x_1340; 
lean_dec(x_1294);
lean_dec(x_10);
x_1336 = lean_unsigned_to_nat(0u);
x_1337 = l_Lean_Syntax_getArg(x_1, x_1336);
x_1338 = l_Lean_Syntax_getId(x_1337);
x_1339 = 0;
lean_inc(x_8);
lean_inc(x_1278);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1306);
x_1340 = l___private_Lean_Elab_Match_15__processVar(x_1338, x_1339, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1293);
if (lean_obj_tag(x_1340) == 0)
{
lean_object* x_1341; lean_object* x_1342; lean_object* x_1343; lean_object* x_1344; lean_object* x_1345; 
x_1341 = lean_ctor_get(x_1340, 1);
lean_inc(x_1341);
lean_dec(x_1340);
x_1342 = lean_unsigned_to_nat(2u);
x_1343 = l_Lean_Syntax_getArg(x_1, x_1342);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1344 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1344 = lean_box(0);
}
lean_inc(x_8);
lean_inc(x_1278);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1306);
x_1345 = l___private_Lean_Elab_Match_20__collect___main(x_1343, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1341);
if (lean_obj_tag(x_1345) == 0)
{
lean_object* x_1346; lean_object* x_1347; lean_object* x_1348; lean_object* x_1349; lean_object* x_1350; lean_object* x_1351; lean_object* x_1352; lean_object* x_1353; lean_object* x_1354; lean_object* x_1355; lean_object* x_1356; lean_object* x_1357; lean_object* x_1358; lean_object* x_1359; lean_object* x_1360; lean_object* x_1361; lean_object* x_1362; lean_object* x_1363; lean_object* x_1364; lean_object* x_1365; lean_object* x_1366; lean_object* x_1367; lean_object* x_1368; lean_object* x_1369; 
x_1346 = lean_ctor_get(x_1345, 0);
lean_inc(x_1346);
x_1347 = lean_ctor_get(x_1345, 1);
lean_inc(x_1347);
lean_dec(x_1345);
x_1348 = l_Lean_Elab_Term_getCurrMacroScope(x_1306, x_4, x_5, x_6, x_1278, x_8, x_1347);
lean_dec(x_1278);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1306);
x_1349 = lean_ctor_get(x_1348, 0);
lean_inc(x_1349);
x_1350 = lean_ctor_get(x_1348, 1);
lean_inc(x_1350);
lean_dec(x_1348);
x_1351 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_1350);
lean_dec(x_8);
x_1352 = lean_ctor_get(x_1351, 0);
lean_inc(x_1352);
x_1353 = lean_ctor_get(x_1351, 1);
lean_inc(x_1353);
if (lean_is_exclusive(x_1351)) {
 lean_ctor_release(x_1351, 0);
 lean_ctor_release(x_1351, 1);
 x_1354 = x_1351;
} else {
 lean_dec_ref(x_1351);
 x_1354 = lean_box(0);
}
x_1355 = l___private_Lean_Elab_Match_20__collect___main___closed__6;
x_1356 = l_Lean_addMacroScope(x_1352, x_1355, x_1349);
x_1357 = l_Lean_SourceInfo_inhabited___closed__1;
x_1358 = l___private_Lean_Elab_Match_20__collect___main___closed__5;
x_1359 = l___private_Lean_Elab_Match_20__collect___main___closed__8;
x_1360 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1360, 0, x_1357);
lean_ctor_set(x_1360, 1, x_1358);
lean_ctor_set(x_1360, 2, x_1356);
lean_ctor_set(x_1360, 3, x_1359);
x_1361 = l_Array_empty___closed__1;
x_1362 = lean_array_push(x_1361, x_1360);
x_1363 = lean_array_push(x_1361, x_1337);
x_1364 = lean_array_push(x_1363, x_1346);
x_1365 = l_Lean_nullKind___closed__2;
if (lean_is_scalar(x_1344)) {
 x_1366 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1366 = x_1344;
}
lean_ctor_set(x_1366, 0, x_1365);
lean_ctor_set(x_1366, 1, x_1364);
x_1367 = lean_array_push(x_1362, x_1366);
x_1368 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1368, 0, x_12);
lean_ctor_set(x_1368, 1, x_1367);
if (lean_is_scalar(x_1354)) {
 x_1369 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1369 = x_1354;
}
lean_ctor_set(x_1369, 0, x_1368);
lean_ctor_set(x_1369, 1, x_1353);
return x_1369;
}
else
{
lean_object* x_1370; lean_object* x_1371; lean_object* x_1372; lean_object* x_1373; 
lean_dec(x_1344);
lean_dec(x_1337);
lean_dec(x_1306);
lean_dec(x_1278);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_1370 = lean_ctor_get(x_1345, 0);
lean_inc(x_1370);
x_1371 = lean_ctor_get(x_1345, 1);
lean_inc(x_1371);
if (lean_is_exclusive(x_1345)) {
 lean_ctor_release(x_1345, 0);
 lean_ctor_release(x_1345, 1);
 x_1372 = x_1345;
} else {
 lean_dec_ref(x_1345);
 x_1372 = lean_box(0);
}
if (lean_is_scalar(x_1372)) {
 x_1373 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1373 = x_1372;
}
lean_ctor_set(x_1373, 0, x_1370);
lean_ctor_set(x_1373, 1, x_1371);
return x_1373;
}
}
else
{
lean_object* x_1374; lean_object* x_1375; lean_object* x_1376; lean_object* x_1377; 
lean_dec(x_1337);
lean_dec(x_1306);
lean_dec(x_1278);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1374 = lean_ctor_get(x_1340, 0);
lean_inc(x_1374);
x_1375 = lean_ctor_get(x_1340, 1);
lean_inc(x_1375);
if (lean_is_exclusive(x_1340)) {
 lean_ctor_release(x_1340, 0);
 lean_ctor_release(x_1340, 1);
 x_1376 = x_1340;
} else {
 lean_dec_ref(x_1340);
 x_1376 = lean_box(0);
}
if (lean_is_scalar(x_1376)) {
 x_1377 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1377 = x_1376;
}
lean_ctor_set(x_1377, 0, x_1374);
lean_ctor_set(x_1377, 1, x_1375);
return x_1377;
}
}
}
else
{
lean_object* x_1378; lean_object* x_1379; uint8_t x_1380; lean_object* x_1381; 
lean_dec(x_1294);
lean_dec(x_10);
x_1378 = lean_unsigned_to_nat(0u);
x_1379 = l_Lean_Syntax_getArg(x_1, x_1378);
x_1380 = 1;
x_1381 = l___private_Lean_Elab_Match_16__processIdAux(x_1379, x_1380, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1293);
if (lean_obj_tag(x_1381) == 0)
{
lean_object* x_1382; lean_object* x_1383; lean_object* x_1384; 
x_1382 = lean_ctor_get(x_1381, 1);
lean_inc(x_1382);
if (lean_is_exclusive(x_1381)) {
 lean_ctor_release(x_1381, 0);
 lean_ctor_release(x_1381, 1);
 x_1383 = x_1381;
} else {
 lean_dec_ref(x_1381);
 x_1383 = lean_box(0);
}
if (lean_is_scalar(x_1383)) {
 x_1384 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1384 = x_1383;
}
lean_ctor_set(x_1384, 0, x_1);
lean_ctor_set(x_1384, 1, x_1382);
return x_1384;
}
else
{
lean_object* x_1385; lean_object* x_1386; lean_object* x_1387; lean_object* x_1388; 
lean_dec(x_1);
x_1385 = lean_ctor_get(x_1381, 0);
lean_inc(x_1385);
x_1386 = lean_ctor_get(x_1381, 1);
lean_inc(x_1386);
if (lean_is_exclusive(x_1381)) {
 lean_ctor_release(x_1381, 0);
 lean_ctor_release(x_1381, 1);
 x_1387 = x_1381;
} else {
 lean_dec_ref(x_1381);
 x_1387 = lean_box(0);
}
if (lean_is_scalar(x_1387)) {
 x_1388 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1388 = x_1387;
}
lean_ctor_set(x_1388, 0, x_1385);
lean_ctor_set(x_1388, 1, x_1386);
return x_1388;
}
}
}
else
{
lean_object* x_1389; lean_object* x_1390; uint8_t x_1391; 
x_1389 = l_Lean_Syntax_inhabited;
x_1390 = lean_array_get(x_1389, x_11, x_1289);
x_1391 = l_Lean_Syntax_isNone(x_1390);
if (x_1391 == 0)
{
lean_object* x_1392; lean_object* x_1393; lean_object* x_1394; lean_object* x_1395; uint8_t x_1396; 
lean_dec(x_1294);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1392 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1392 = lean_box(0);
}
x_1393 = lean_unsigned_to_nat(0u);
x_1394 = l_Lean_Syntax_getArg(x_1390, x_1393);
x_1395 = l_Lean_Syntax_getArg(x_1390, x_1289);
x_1396 = l_Lean_Syntax_isNone(x_1395);
if (x_1396 == 0)
{
lean_object* x_1397; lean_object* x_1398; uint8_t x_1399; 
x_1397 = l_Lean_Syntax_getArg(x_1395, x_1393);
x_1398 = l_Lean_Parser_Term_typeAscription___elambda__1___closed__2;
lean_inc(x_1397);
x_1399 = l_Lean_Syntax_isOfKind(x_1397, x_1398);
if (x_1399 == 0)
{
lean_object* x_1400; 
lean_inc(x_8);
lean_inc(x_1278);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1306);
lean_inc(x_2);
x_1400 = l___private_Lean_Elab_Match_20__collect___main(x_1394, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1293);
if (lean_obj_tag(x_1400) == 0)
{
lean_object* x_1401; lean_object* x_1402; lean_object* x_1403; lean_object* x_1404; lean_object* x_1405; lean_object* x_1406; lean_object* x_1407; 
x_1401 = lean_ctor_get(x_1400, 0);
lean_inc(x_1401);
x_1402 = lean_ctor_get(x_1400, 1);
lean_inc(x_1402);
lean_dec(x_1400);
x_1403 = l_Lean_Syntax_setArg(x_1390, x_1393, x_1401);
x_1404 = l_Lean_Syntax_getArg(x_1397, x_1289);
x_1405 = l_Lean_Syntax_getArgs(x_1404);
lean_dec(x_1404);
x_1406 = l___private_Lean_Elab_Match_20__collect___main___closed__9;
x_1407 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_1405, x_1406, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1402);
lean_dec(x_1405);
if (lean_obj_tag(x_1407) == 0)
{
lean_object* x_1408; lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; lean_object* x_1412; lean_object* x_1413; lean_object* x_1414; lean_object* x_1415; lean_object* x_1416; lean_object* x_1417; lean_object* x_1418; 
x_1408 = lean_ctor_get(x_1407, 0);
lean_inc(x_1408);
x_1409 = lean_ctor_get(x_1407, 1);
lean_inc(x_1409);
if (lean_is_exclusive(x_1407)) {
 lean_ctor_release(x_1407, 0);
 lean_ctor_release(x_1407, 1);
 x_1410 = x_1407;
} else {
 lean_dec_ref(x_1407);
 x_1410 = lean_box(0);
}
x_1411 = l_Lean_nullKind;
if (lean_is_scalar(x_1392)) {
 x_1412 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1412 = x_1392;
}
lean_ctor_set(x_1412, 0, x_1411);
lean_ctor_set(x_1412, 1, x_1408);
x_1413 = l_Lean_Syntax_setArg(x_1397, x_1289, x_1412);
x_1414 = l_Lean_Syntax_setArg(x_1395, x_1393, x_1413);
x_1415 = l_Lean_Syntax_setArg(x_1403, x_1289, x_1414);
x_1416 = lean_array_set(x_11, x_1289, x_1415);
x_1417 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1417, 0, x_10);
lean_ctor_set(x_1417, 1, x_1416);
if (lean_is_scalar(x_1410)) {
 x_1418 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1418 = x_1410;
}
lean_ctor_set(x_1418, 0, x_1417);
lean_ctor_set(x_1418, 1, x_1409);
return x_1418;
}
else
{
lean_object* x_1419; lean_object* x_1420; lean_object* x_1421; lean_object* x_1422; 
lean_dec(x_1403);
lean_dec(x_1397);
lean_dec(x_1395);
lean_dec(x_1392);
lean_dec(x_11);
lean_dec(x_10);
x_1419 = lean_ctor_get(x_1407, 0);
lean_inc(x_1419);
x_1420 = lean_ctor_get(x_1407, 1);
lean_inc(x_1420);
if (lean_is_exclusive(x_1407)) {
 lean_ctor_release(x_1407, 0);
 lean_ctor_release(x_1407, 1);
 x_1421 = x_1407;
} else {
 lean_dec_ref(x_1407);
 x_1421 = lean_box(0);
}
if (lean_is_scalar(x_1421)) {
 x_1422 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1422 = x_1421;
}
lean_ctor_set(x_1422, 0, x_1419);
lean_ctor_set(x_1422, 1, x_1420);
return x_1422;
}
}
else
{
lean_object* x_1423; lean_object* x_1424; lean_object* x_1425; lean_object* x_1426; 
lean_dec(x_1397);
lean_dec(x_1395);
lean_dec(x_1392);
lean_dec(x_1390);
lean_dec(x_1306);
lean_dec(x_1278);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_1423 = lean_ctor_get(x_1400, 0);
lean_inc(x_1423);
x_1424 = lean_ctor_get(x_1400, 1);
lean_inc(x_1424);
if (lean_is_exclusive(x_1400)) {
 lean_ctor_release(x_1400, 0);
 lean_ctor_release(x_1400, 1);
 x_1425 = x_1400;
} else {
 lean_dec_ref(x_1400);
 x_1425 = lean_box(0);
}
if (lean_is_scalar(x_1425)) {
 x_1426 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1426 = x_1425;
}
lean_ctor_set(x_1426, 0, x_1423);
lean_ctor_set(x_1426, 1, x_1424);
return x_1426;
}
}
else
{
lean_object* x_1427; 
lean_dec(x_1397);
lean_dec(x_1395);
x_1427 = l___private_Lean_Elab_Match_20__collect___main(x_1394, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1293);
if (lean_obj_tag(x_1427) == 0)
{
lean_object* x_1428; lean_object* x_1429; lean_object* x_1430; lean_object* x_1431; lean_object* x_1432; lean_object* x_1433; lean_object* x_1434; 
x_1428 = lean_ctor_get(x_1427, 0);
lean_inc(x_1428);
x_1429 = lean_ctor_get(x_1427, 1);
lean_inc(x_1429);
if (lean_is_exclusive(x_1427)) {
 lean_ctor_release(x_1427, 0);
 lean_ctor_release(x_1427, 1);
 x_1430 = x_1427;
} else {
 lean_dec_ref(x_1427);
 x_1430 = lean_box(0);
}
x_1431 = l_Lean_Syntax_setArg(x_1390, x_1393, x_1428);
x_1432 = lean_array_set(x_11, x_1289, x_1431);
if (lean_is_scalar(x_1392)) {
 x_1433 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1433 = x_1392;
}
lean_ctor_set(x_1433, 0, x_10);
lean_ctor_set(x_1433, 1, x_1432);
if (lean_is_scalar(x_1430)) {
 x_1434 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1434 = x_1430;
}
lean_ctor_set(x_1434, 0, x_1433);
lean_ctor_set(x_1434, 1, x_1429);
return x_1434;
}
else
{
lean_object* x_1435; lean_object* x_1436; lean_object* x_1437; lean_object* x_1438; 
lean_dec(x_1392);
lean_dec(x_1390);
lean_dec(x_11);
lean_dec(x_10);
x_1435 = lean_ctor_get(x_1427, 0);
lean_inc(x_1435);
x_1436 = lean_ctor_get(x_1427, 1);
lean_inc(x_1436);
if (lean_is_exclusive(x_1427)) {
 lean_ctor_release(x_1427, 0);
 lean_ctor_release(x_1427, 1);
 x_1437 = x_1427;
} else {
 lean_dec_ref(x_1427);
 x_1437 = lean_box(0);
}
if (lean_is_scalar(x_1437)) {
 x_1438 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1438 = x_1437;
}
lean_ctor_set(x_1438, 0, x_1435);
lean_ctor_set(x_1438, 1, x_1436);
return x_1438;
}
}
}
else
{
lean_object* x_1439; 
lean_dec(x_1395);
x_1439 = l___private_Lean_Elab_Match_20__collect___main(x_1394, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1293);
if (lean_obj_tag(x_1439) == 0)
{
lean_object* x_1440; lean_object* x_1441; lean_object* x_1442; lean_object* x_1443; lean_object* x_1444; lean_object* x_1445; lean_object* x_1446; 
x_1440 = lean_ctor_get(x_1439, 0);
lean_inc(x_1440);
x_1441 = lean_ctor_get(x_1439, 1);
lean_inc(x_1441);
if (lean_is_exclusive(x_1439)) {
 lean_ctor_release(x_1439, 0);
 lean_ctor_release(x_1439, 1);
 x_1442 = x_1439;
} else {
 lean_dec_ref(x_1439);
 x_1442 = lean_box(0);
}
x_1443 = l_Lean_Syntax_setArg(x_1390, x_1393, x_1440);
x_1444 = lean_array_set(x_11, x_1289, x_1443);
if (lean_is_scalar(x_1392)) {
 x_1445 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1445 = x_1392;
}
lean_ctor_set(x_1445, 0, x_10);
lean_ctor_set(x_1445, 1, x_1444);
if (lean_is_scalar(x_1442)) {
 x_1446 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1446 = x_1442;
}
lean_ctor_set(x_1446, 0, x_1445);
lean_ctor_set(x_1446, 1, x_1441);
return x_1446;
}
else
{
lean_object* x_1447; lean_object* x_1448; lean_object* x_1449; lean_object* x_1450; 
lean_dec(x_1392);
lean_dec(x_1390);
lean_dec(x_11);
lean_dec(x_10);
x_1447 = lean_ctor_get(x_1439, 0);
lean_inc(x_1447);
x_1448 = lean_ctor_get(x_1439, 1);
lean_inc(x_1448);
if (lean_is_exclusive(x_1439)) {
 lean_ctor_release(x_1439, 0);
 lean_ctor_release(x_1439, 1);
 x_1449 = x_1439;
} else {
 lean_dec_ref(x_1439);
 x_1449 = lean_box(0);
}
if (lean_is_scalar(x_1449)) {
 x_1450 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1450 = x_1449;
}
lean_ctor_set(x_1450, 0, x_1447);
lean_ctor_set(x_1450, 1, x_1448);
return x_1450;
}
}
}
else
{
lean_object* x_1451; 
lean_dec(x_1390);
lean_dec(x_1306);
lean_dec(x_1278);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1294)) {
 x_1451 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1451 = x_1294;
}
lean_ctor_set(x_1451, 0, x_1);
lean_ctor_set(x_1451, 1, x_1293);
return x_1451;
}
}
}
else
{
lean_object* x_1452; lean_object* x_1453; lean_object* x_1454; lean_object* x_1455; lean_object* x_1456; lean_object* x_1457; lean_object* x_1458; lean_object* x_1459; lean_object* x_1460; lean_object* x_1461; lean_object* x_1462; lean_object* x_1463; lean_object* x_1464; lean_object* x_1465; lean_object* x_1466; lean_object* x_1467; lean_object* x_1468; 
lean_dec(x_1306);
lean_dec(x_1294);
lean_dec(x_1278);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1452 = l___private_Lean_Elab_Match_10__mkMVarSyntax___rarg(x_8, x_1293);
lean_dec(x_8);
x_1453 = lean_ctor_get(x_1452, 0);
lean_inc(x_1453);
x_1454 = lean_ctor_get(x_1452, 1);
lean_inc(x_1454);
lean_dec(x_1452);
x_1455 = lean_st_ref_take(x_2, x_1454);
x_1456 = lean_ctor_get(x_1455, 0);
lean_inc(x_1456);
x_1457 = lean_ctor_get(x_1455, 1);
lean_inc(x_1457);
lean_dec(x_1455);
x_1458 = lean_ctor_get(x_1456, 0);
lean_inc(x_1458);
x_1459 = lean_ctor_get(x_1456, 1);
lean_inc(x_1459);
if (lean_is_exclusive(x_1456)) {
 lean_ctor_release(x_1456, 0);
 lean_ctor_release(x_1456, 1);
 x_1460 = x_1456;
} else {
 lean_dec_ref(x_1456);
 x_1460 = lean_box(0);
}
x_1461 = l___private_Lean_Elab_Match_11__getMVarSyntaxMVarId(x_1453);
x_1462 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1462, 0, x_1461);
x_1463 = lean_array_push(x_1459, x_1462);
if (lean_is_scalar(x_1460)) {
 x_1464 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1464 = x_1460;
}
lean_ctor_set(x_1464, 0, x_1458);
lean_ctor_set(x_1464, 1, x_1463);
x_1465 = lean_st_ref_set(x_2, x_1464, x_1457);
lean_dec(x_2);
x_1466 = lean_ctor_get(x_1465, 1);
lean_inc(x_1466);
if (lean_is_exclusive(x_1465)) {
 lean_ctor_release(x_1465, 0);
 lean_ctor_release(x_1465, 1);
 x_1467 = x_1465;
} else {
 lean_dec_ref(x_1465);
 x_1467 = lean_box(0);
}
if (lean_is_scalar(x_1467)) {
 x_1468 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1468 = x_1467;
}
lean_ctor_set(x_1468, 0, x_1453);
lean_ctor_set(x_1468, 1, x_1466);
return x_1468;
}
}
else
{
lean_object* x_1469; lean_object* x_1470; lean_object* x_1471; uint8_t x_1472; 
lean_dec(x_1294);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1469 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1469 = lean_box(0);
}
x_1470 = l_Lean_Syntax_inhabited;
x_1471 = lean_array_get(x_1470, x_11, x_1289);
x_1472 = l_Lean_Syntax_isNone(x_1471);
if (x_1472 == 0)
{
lean_object* x_1473; lean_object* x_1474; lean_object* x_1475; lean_object* x_1476; lean_object* x_1477; lean_object* x_1478; 
lean_dec(x_1469);
lean_dec(x_11);
lean_dec(x_10);
x_1473 = l___private_Lean_Elab_Match_20__collect___main___closed__12;
x_1474 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg(x_1471, x_1473, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1293);
lean_dec(x_2);
lean_dec(x_1471);
x_1475 = lean_ctor_get(x_1474, 0);
lean_inc(x_1475);
x_1476 = lean_ctor_get(x_1474, 1);
lean_inc(x_1476);
if (lean_is_exclusive(x_1474)) {
 lean_ctor_release(x_1474, 0);
 lean_ctor_release(x_1474, 1);
 x_1477 = x_1474;
} else {
 lean_dec_ref(x_1474);
 x_1477 = lean_box(0);
}
if (lean_is_scalar(x_1477)) {
 x_1478 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1478 = x_1477;
}
lean_ctor_set(x_1478, 0, x_1475);
lean_ctor_set(x_1478, 1, x_1476);
return x_1478;
}
else
{
lean_object* x_1479; lean_object* x_1480; lean_object* x_1481; lean_object* x_1482; lean_object* x_1483; 
lean_dec(x_1471);
x_1479 = lean_unsigned_to_nat(2u);
x_1480 = lean_array_get(x_1470, x_11, x_1479);
x_1481 = l_Lean_Syntax_getArgs(x_1480);
lean_dec(x_1480);
x_1482 = l___private_Lean_Elab_Match_20__collect___main___closed__13;
x_1483 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_1481, x_1482, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1293);
lean_dec(x_1481);
if (lean_obj_tag(x_1483) == 0)
{
lean_object* x_1484; lean_object* x_1485; lean_object* x_1486; lean_object* x_1487; lean_object* x_1488; lean_object* x_1489; lean_object* x_1490; lean_object* x_1491; 
x_1484 = lean_ctor_get(x_1483, 0);
lean_inc(x_1484);
x_1485 = lean_ctor_get(x_1483, 1);
lean_inc(x_1485);
if (lean_is_exclusive(x_1483)) {
 lean_ctor_release(x_1483, 0);
 lean_ctor_release(x_1483, 1);
 x_1486 = x_1483;
} else {
 lean_dec_ref(x_1483);
 x_1486 = lean_box(0);
}
x_1487 = l_Lean_nullKind;
if (lean_is_scalar(x_1469)) {
 x_1488 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1488 = x_1469;
}
lean_ctor_set(x_1488, 0, x_1487);
lean_ctor_set(x_1488, 1, x_1484);
x_1489 = lean_array_set(x_11, x_1479, x_1488);
x_1490 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1490, 0, x_10);
lean_ctor_set(x_1490, 1, x_1489);
if (lean_is_scalar(x_1486)) {
 x_1491 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1491 = x_1486;
}
lean_ctor_set(x_1491, 0, x_1490);
lean_ctor_set(x_1491, 1, x_1485);
return x_1491;
}
else
{
lean_object* x_1492; lean_object* x_1493; lean_object* x_1494; lean_object* x_1495; 
lean_dec(x_1469);
lean_dec(x_11);
lean_dec(x_10);
x_1492 = lean_ctor_get(x_1483, 0);
lean_inc(x_1492);
x_1493 = lean_ctor_get(x_1483, 1);
lean_inc(x_1493);
if (lean_is_exclusive(x_1483)) {
 lean_ctor_release(x_1483, 0);
 lean_ctor_release(x_1483, 1);
 x_1494 = x_1483;
} else {
 lean_dec_ref(x_1483);
 x_1494 = lean_box(0);
}
if (lean_is_scalar(x_1494)) {
 x_1495 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1495 = x_1494;
}
lean_ctor_set(x_1495, 0, x_1492);
lean_ctor_set(x_1495, 1, x_1493);
return x_1495;
}
}
}
}
else
{
lean_object* x_1496; lean_object* x_1497; lean_object* x_1498; lean_object* x_1499; lean_object* x_1500; lean_object* x_1501; 
lean_dec(x_1294);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1496 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1496 = lean_box(0);
}
x_1497 = l_Lean_Syntax_inhabited;
x_1498 = lean_array_get(x_1497, x_11, x_1289);
x_1499 = l_Lean_Syntax_getArgs(x_1498);
lean_dec(x_1498);
x_1500 = l___private_Lean_Elab_Match_20__collect___main___closed__9;
x_1501 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_1499, x_1500, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1293);
lean_dec(x_1499);
if (lean_obj_tag(x_1501) == 0)
{
lean_object* x_1502; lean_object* x_1503; lean_object* x_1504; lean_object* x_1505; lean_object* x_1506; lean_object* x_1507; lean_object* x_1508; lean_object* x_1509; 
x_1502 = lean_ctor_get(x_1501, 0);
lean_inc(x_1502);
x_1503 = lean_ctor_get(x_1501, 1);
lean_inc(x_1503);
if (lean_is_exclusive(x_1501)) {
 lean_ctor_release(x_1501, 0);
 lean_ctor_release(x_1501, 1);
 x_1504 = x_1501;
} else {
 lean_dec_ref(x_1501);
 x_1504 = lean_box(0);
}
x_1505 = l_Lean_nullKind;
if (lean_is_scalar(x_1496)) {
 x_1506 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1506 = x_1496;
}
lean_ctor_set(x_1506, 0, x_1505);
lean_ctor_set(x_1506, 1, x_1502);
x_1507 = lean_array_set(x_11, x_1289, x_1506);
x_1508 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1508, 0, x_10);
lean_ctor_set(x_1508, 1, x_1507);
if (lean_is_scalar(x_1504)) {
 x_1509 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1509 = x_1504;
}
lean_ctor_set(x_1509, 0, x_1508);
lean_ctor_set(x_1509, 1, x_1503);
return x_1509;
}
else
{
lean_object* x_1510; lean_object* x_1511; lean_object* x_1512; lean_object* x_1513; 
lean_dec(x_1496);
lean_dec(x_11);
lean_dec(x_10);
x_1510 = lean_ctor_get(x_1501, 0);
lean_inc(x_1510);
x_1511 = lean_ctor_get(x_1501, 1);
lean_inc(x_1511);
if (lean_is_exclusive(x_1501)) {
 lean_ctor_release(x_1501, 0);
 lean_ctor_release(x_1501, 1);
 x_1512 = x_1501;
} else {
 lean_dec_ref(x_1501);
 x_1512 = lean_box(0);
}
if (lean_is_scalar(x_1512)) {
 x_1513 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1513 = x_1512;
}
lean_ctor_set(x_1513, 0, x_1510);
lean_ctor_set(x_1513, 1, x_1511);
return x_1513;
}
}
}
else
{
lean_object* x_1514; lean_object* x_1515; lean_object* x_1516; lean_object* x_1517; lean_object* x_1518; lean_object* x_1519; lean_object* x_1520; lean_object* x_1521; 
lean_dec(x_1294);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1514 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1514 = lean_box(0);
}
x_1515 = l_Lean_Syntax_inhabited;
x_1516 = lean_unsigned_to_nat(0u);
x_1517 = lean_array_get(x_1515, x_11, x_1516);
x_1518 = lean_array_get(x_1515, x_11, x_1289);
x_1519 = l_Lean_Syntax_getArgs(x_1518);
lean_dec(x_1518);
x_1520 = l_Lean_mkAppStx___closed__6;
lean_inc(x_8);
lean_inc(x_1278);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1306);
x_1521 = l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4(x_1520, x_1519, x_1516, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1293);
if (lean_obj_tag(x_1521) == 0)
{
lean_object* x_1522; uint8_t x_1523; lean_object* x_1524; 
x_1522 = lean_ctor_get(x_1521, 1);
lean_inc(x_1522);
lean_dec(x_1521);
x_1523 = 1;
lean_inc(x_8);
lean_inc(x_1278);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1306);
lean_inc(x_2);
x_1524 = l___private_Lean_Elab_Match_16__processIdAux(x_1517, x_1523, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1522);
if (lean_obj_tag(x_1524) == 0)
{
lean_object* x_1525; lean_object* x_1526; lean_object* x_1527; lean_object* x_1528; lean_object* x_1529; lean_object* x_1530; 
x_1525 = lean_ctor_get(x_1524, 0);
lean_inc(x_1525);
x_1526 = lean_ctor_get(x_1524, 1);
lean_inc(x_1526);
lean_dec(x_1524);
x_1527 = x_1519;
x_1528 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__5___boxed), 11, 3);
lean_closure_set(x_1528, 0, x_1525);
lean_closure_set(x_1528, 1, x_1516);
lean_closure_set(x_1528, 2, x_1527);
x_1529 = x_1528;
x_1530 = lean_apply_8(x_1529, x_2, x_1306, x_4, x_5, x_6, x_1278, x_8, x_1526);
if (lean_obj_tag(x_1530) == 0)
{
lean_object* x_1531; lean_object* x_1532; lean_object* x_1533; lean_object* x_1534; lean_object* x_1535; lean_object* x_1536; lean_object* x_1537; lean_object* x_1538; 
x_1531 = lean_ctor_get(x_1530, 0);
lean_inc(x_1531);
x_1532 = lean_ctor_get(x_1530, 1);
lean_inc(x_1532);
if (lean_is_exclusive(x_1530)) {
 lean_ctor_release(x_1530, 0);
 lean_ctor_release(x_1530, 1);
 x_1533 = x_1530;
} else {
 lean_dec_ref(x_1530);
 x_1533 = lean_box(0);
}
x_1534 = l_Lean_nullKind;
if (lean_is_scalar(x_1514)) {
 x_1535 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1535 = x_1514;
}
lean_ctor_set(x_1535, 0, x_1534);
lean_ctor_set(x_1535, 1, x_1531);
x_1536 = lean_array_set(x_11, x_1289, x_1535);
x_1537 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1537, 0, x_10);
lean_ctor_set(x_1537, 1, x_1536);
if (lean_is_scalar(x_1533)) {
 x_1538 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1538 = x_1533;
}
lean_ctor_set(x_1538, 0, x_1537);
lean_ctor_set(x_1538, 1, x_1532);
return x_1538;
}
else
{
lean_object* x_1539; lean_object* x_1540; lean_object* x_1541; lean_object* x_1542; 
lean_dec(x_1514);
lean_dec(x_11);
lean_dec(x_10);
x_1539 = lean_ctor_get(x_1530, 0);
lean_inc(x_1539);
x_1540 = lean_ctor_get(x_1530, 1);
lean_inc(x_1540);
if (lean_is_exclusive(x_1530)) {
 lean_ctor_release(x_1530, 0);
 lean_ctor_release(x_1530, 1);
 x_1541 = x_1530;
} else {
 lean_dec_ref(x_1530);
 x_1541 = lean_box(0);
}
if (lean_is_scalar(x_1541)) {
 x_1542 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1542 = x_1541;
}
lean_ctor_set(x_1542, 0, x_1539);
lean_ctor_set(x_1542, 1, x_1540);
return x_1542;
}
}
else
{
lean_object* x_1543; lean_object* x_1544; lean_object* x_1545; lean_object* x_1546; 
lean_dec(x_1519);
lean_dec(x_1514);
lean_dec(x_1306);
lean_dec(x_1278);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_1543 = lean_ctor_get(x_1524, 0);
lean_inc(x_1543);
x_1544 = lean_ctor_get(x_1524, 1);
lean_inc(x_1544);
if (lean_is_exclusive(x_1524)) {
 lean_ctor_release(x_1524, 0);
 lean_ctor_release(x_1524, 1);
 x_1545 = x_1524;
} else {
 lean_dec_ref(x_1524);
 x_1545 = lean_box(0);
}
if (lean_is_scalar(x_1545)) {
 x_1546 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1546 = x_1545;
}
lean_ctor_set(x_1546, 0, x_1543);
lean_ctor_set(x_1546, 1, x_1544);
return x_1546;
}
}
else
{
lean_object* x_1547; lean_object* x_1548; lean_object* x_1549; lean_object* x_1550; 
lean_dec(x_1519);
lean_dec(x_1517);
lean_dec(x_1514);
lean_dec(x_1306);
lean_dec(x_1278);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_1547 = lean_ctor_get(x_1521, 0);
lean_inc(x_1547);
x_1548 = lean_ctor_get(x_1521, 1);
lean_inc(x_1548);
if (lean_is_exclusive(x_1521)) {
 lean_ctor_release(x_1521, 0);
 lean_ctor_release(x_1521, 1);
 x_1549 = x_1521;
} else {
 lean_dec_ref(x_1521);
 x_1549 = lean_box(0);
}
if (lean_is_scalar(x_1549)) {
 x_1550 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1550 = x_1549;
}
lean_ctor_set(x_1550, 0, x_1547);
lean_ctor_set(x_1550, 1, x_1548);
return x_1550;
}
}
}
}
}
case 3:
{
lean_object* x_1558; 
lean_inc(x_1);
x_1558 = l___private_Lean_Elab_Match_18__processId(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_1558) == 0)
{
uint8_t x_1559; 
x_1559 = !lean_is_exclusive(x_1558);
if (x_1559 == 0)
{
lean_object* x_1560; 
x_1560 = lean_ctor_get(x_1558, 0);
lean_dec(x_1560);
lean_ctor_set(x_1558, 0, x_1);
return x_1558;
}
else
{
lean_object* x_1561; lean_object* x_1562; 
x_1561 = lean_ctor_get(x_1558, 1);
lean_inc(x_1561);
lean_dec(x_1558);
x_1562 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1562, 0, x_1);
lean_ctor_set(x_1562, 1, x_1561);
return x_1562;
}
}
else
{
uint8_t x_1563; 
lean_dec(x_1);
x_1563 = !lean_is_exclusive(x_1558);
if (x_1563 == 0)
{
return x_1558;
}
else
{
lean_object* x_1564; lean_object* x_1565; lean_object* x_1566; 
x_1564 = lean_ctor_get(x_1558, 0);
x_1565 = lean_ctor_get(x_1558, 1);
lean_inc(x_1565);
lean_inc(x_1564);
lean_dec(x_1558);
x_1566 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1566, 0, x_1564);
lean_ctor_set(x_1566, 1, x_1565);
return x_1566;
}
}
}
default: 
{
lean_object* x_1567; 
lean_dec(x_1);
x_1567 = l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_1567;
}
}
}
}
lean_object* l___private_Init_LeanInit_14__mapSepElemsMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_LeanInit_14__mapSepElemsMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_20__collect___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_20__collect___main___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_umapMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_20__collect(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_20__collect___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("collecting variables at pattern: ");
return x_1;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_2);
x_12 = lean_nat_dec_lt(x_1, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_13 = x_2;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_15 = lean_array_fget(x_2, x_1);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_fset(x_2, x_1, x_16);
x_18 = x_15;
x_19 = lean_ctor_get(x_8, 0);
lean_inc(x_19);
x_20 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13;
x_21 = l_Lean_checkTraceOption(x_19, x_20);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_22 = l___private_Lean_Elab_Match_20__collect___main(x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_1, x_25);
x_27 = x_23;
x_28 = lean_array_fset(x_17, x_1, x_27);
lean_dec(x_1);
x_1 = x_26;
x_2 = x_28;
x_10 = x_24;
goto _start;
}
else
{
uint8_t x_30; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_22);
if (x_30 == 0)
{
return x_22;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_22, 0);
x_32 = lean_ctor_get(x_22, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_22);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_inc(x_18);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_18);
x_35 = l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__3;
x_36 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_37 = l_Lean_Elab_Term_logTrace(x_20, x_36, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_39 = l___private_Lean_Elab_Match_20__collect___main(x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_nat_add(x_1, x_42);
x_44 = x_40;
x_45 = lean_array_fset(x_17, x_1, x_44);
lean_dec(x_1);
x_1 = x_43;
x_2 = x_45;
x_10 = x_41;
goto _start;
}
else
{
uint8_t x_47; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_39);
if (x_47 == 0)
{
return x_39;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_39, 0);
x_49 = lean_ctor_get(x_39, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_39);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_37);
if (x_51 == 0)
{
return x_37;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_37, 0);
x_53 = lean_ctor_get(x_37, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_37);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_1, 2);
x_14 = x_12;
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1), 10, 2);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_14);
x_17 = x_16;
x_18 = lean_apply_8(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_ctor_set(x_1, 1, x_20);
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_18, 0);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_18);
lean_ctor_set(x_1, 1, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_free_object(x_1);
lean_dec(x_13);
lean_dec(x_11);
x_24 = !lean_is_exclusive(x_18);
if (x_24 == 0)
{
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_18, 0);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_28 = lean_ctor_get(x_1, 0);
x_29 = lean_ctor_get(x_1, 1);
x_30 = lean_ctor_get(x_1, 2);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_1);
x_31 = x_29;
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1), 10, 2);
lean_closure_set(x_33, 0, x_32);
lean_closure_set(x_33, 1, x_31);
x_34 = x_33;
x_35 = lean_apply_8(x_34, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_38 = x_35;
} else {
 lean_dec_ref(x_35);
 x_38 = lean_box(0);
}
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_28);
lean_ctor_set(x_39, 1, x_36);
lean_ctor_set(x_39, 2, x_30);
if (lean_is_scalar(x_38)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_38;
}
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_37);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_30);
lean_dec(x_28);
x_41 = lean_ctor_get(x_35, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_35, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_43 = x_35;
} else {
 lean_dec_ref(x_35);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(1, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_21__collectPatternVars___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_NameSet_empty;
x_2 = l_Array_empty___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_21__collectPatternVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l___private_Lean_Elab_Match_21__collectPatternVars___closed__1;
x_10 = lean_st_mk_ref(x_9, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_11);
x_13 = l_Lean_Elab_Term_CollectPatternVars_main(x_1, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_11, x_15);
lean_dec(x_11);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_16, 0, x_20);
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_16);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_14);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_11);
x_26 = !lean_is_exclusive(x_13);
if (x_26 == 0)
{
return x_13;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_22__withPatternVarsAux___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_nat_dec_lt(x_2, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = lean_array_fget(x_1, x_2);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_mkFVar(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_18 = l_Lean_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_19);
x_22 = 0;
x_23 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_24 = l_Lean_Elab_Term_mkFreshExprMVarWithId(x_15, x_21, x_22, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_2, x_26);
lean_dec(x_2);
x_2 = x_27;
x_9 = x_25;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_24);
if (x_29 == 0)
{
return x_24;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_24, 0);
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_24);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_14);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_2, x_37);
lean_dec(x_2);
x_2 = x_38;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_1, x_13);
x_15 = l_Lean_Expr_fvarId_x21(x_5);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_array_push(x_2, x_16);
x_18 = l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg(x_3, x_4, x_14, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_18;
}
}
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_1, x_14);
x_16 = l_Lean_Expr_fvarId_x21(x_6);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_array_push(x_3, x_17);
x_19 = l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg(x_4, x_5, x_15, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_19;
}
}
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_3, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_1);
x_14 = lean_unsigned_to_nat(0u);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Array_forMAux___main___at___private_Lean_Elab_Match_22__withPatternVarsAux___main___spec__1(x_4, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_8(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; 
x_22 = lean_array_fget(x_1, x_3);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = 0;
x_25 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_26 = l_Lean_Elab_Term_mkFreshTypeMVar(x_24, x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg___lambda__1___boxed), 12, 4);
lean_closure_set(x_29, 0, x_3);
lean_closure_set(x_29, 1, x_4);
lean_closure_set(x_29, 2, x_1);
lean_closure_set(x_29, 3, x_2);
x_30 = 0;
x_31 = l_Lean_Elab_Term_withLocalDecl___rarg(x_23, x_30, x_27, x_29, x_5, x_6, x_7, x_8, x_9, x_10, x_28);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_23);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_26);
if (x_32 == 0)
{
return x_26;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_26, 0);
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_26);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_22, 0);
lean_inc(x_36);
lean_dec(x_22);
x_37 = 0;
x_38 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_39 = l_Lean_Elab_Term_mkFreshTypeMVar(x_37, x_38, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Closure_mkNextUserName___rarg___closed__2;
lean_inc(x_3);
x_43 = l_Lean_Name_appendIndexAfter(x_42, x_3);
x_44 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg___lambda__2___boxed), 13, 5);
lean_closure_set(x_44, 0, x_3);
lean_closure_set(x_44, 1, x_36);
lean_closure_set(x_44, 2, x_4);
lean_closure_set(x_44, 3, x_1);
lean_closure_set(x_44, 4, x_2);
x_45 = 0;
x_46 = l_Lean_Elab_Term_withLocalDecl___rarg(x_43, x_45, x_40, x_44, x_5, x_6, x_7, x_8, x_9, x_10, x_41);
return x_46;
}
else
{
uint8_t x_47; 
lean_dec(x_36);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_39);
if (x_47 == 0)
{
return x_39;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_39, 0);
x_49 = lean_ctor_get(x_39, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_39);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___main(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg), 11, 0);
return x_2;
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_22__withPatternVarsAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_forMAux___main___at___private_Lean_Elab_Match_22__withPatternVarsAux___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_1);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_22__withPatternVarsAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_22__withPatternVarsAux___rarg), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_23__withPatternVars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Array_empty___closed__1;
x_12 = l___private_Lean_Elab_Match_22__withPatternVarsAux___main___rarg(x_1, x_2, x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_23__withPatternVars(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_23__withPatternVars___rarg), 9, 0);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected match type");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_24__elabPatternsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_2, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
else
{
lean_object* x_16; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_whnf___at___private_Lean_Elab_Term_8__isTypeApp_x3f___spec__1(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 7)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 2);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_array_fget(x_1, x_2);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_19);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_23 = l_Lean_Elab_Term_elabTermEnsuringType(x_21, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_2, x_26);
lean_dec(x_2);
x_28 = lean_expr_instantiate1(x_20, x_24);
lean_dec(x_20);
x_29 = lean_array_push(x_4, x_24);
x_2 = x_27;
x_3 = x_28;
x_4 = x_29;
x_11 = x_25;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_23);
if (x_31 == 0)
{
return x_23;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_23, 0);
x_33 = lean_ctor_get(x_23, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_23);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_17);
lean_dec(x_4);
lean_dec(x_2);
x_35 = lean_ctor_get(x_16, 1);
lean_inc(x_35);
lean_dec(x_16);
x_36 = l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__3;
x_37 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_36, x_5, x_6, x_7, x_8, x_9, x_10, x_35);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_16);
if (x_38 == 0)
{
return x_16;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_16, 0);
x_40 = lean_ctor_get(x_16, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_16);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Match_24__elabPatternsAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_24__elabPatternsAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_24__elabPatternsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_24__elabPatternsAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_24__elabPatternsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_24__elabPatternsAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_getLocalDecl___at_Lean_Elab_Term_finalizePatternDecls___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = lean_apply_7(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_getLCtx___at_Lean_mkFreshExprMVar___spec__1(x_4, x_5, x_6, x_7, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_1);
x_20 = lean_local_ctx_find(x_18, x_1);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = l_Lean_throwUnknownFVar___rarg(x_1, x_4, x_5, x_6, x_7, x_19);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set_tag(x_24, 1);
lean_ctor_set(x_24, 0, x_22);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_22);
x_29 = !lean_is_exclusive(x_24);
if (x_29 == 0)
{
return x_24;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_24, 0);
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_24);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_1);
x_33 = lean_ctor_get(x_20, 0);
lean_inc(x_33);
lean_dec(x_20);
x_34 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_33);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_33);
x_39 = !lean_is_exclusive(x_34);
if (x_39 == 0)
{
return x_34;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_34, 0);
x_41 = lean_ctor_get(x_34, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_34);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_15);
if (x_43 == 0)
{
return x_15;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_15, 0);
x_45 = lean_ctor_get(x_15, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_15);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_11);
if (x_47 == 0)
{
return x_11;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_11, 0);
x_49 = lean_ctor_get(x_11, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_11);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
lean_object* l_Lean_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get(x_1, 3);
x_14 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_15 = lean_ctor_get(x_14, 2);
lean_inc(x_15);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_16 = lean_apply_7(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_20 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_13, x_4, x_5, x_6, x_7, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_ctor_set(x_1, 3, x_23);
x_25 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_24);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_1);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_1);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_25);
if (x_30 == 0)
{
return x_25;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_25, 0);
x_32 = lean_ctor_get(x_25, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_25);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_17);
lean_free_object(x_1);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_free_object(x_1);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_16);
if (x_38 == 0)
{
return x_16;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_16, 0);
x_40 = lean_ctor_get(x_16, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_16);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_42 = lean_ctor_get(x_1, 0);
x_43 = lean_ctor_get(x_1, 1);
x_44 = lean_ctor_get(x_1, 2);
x_45 = lean_ctor_get(x_1, 3);
x_46 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_1);
x_47 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_48 = lean_ctor_get(x_47, 2);
lean_inc(x_48);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_49 = lean_apply_7(x_48, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_53 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_52, x_2, x_3, x_4, x_5, x_6, x_7, x_51);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_45, x_4, x_5, x_6, x_7, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_58, 0, x_42);
lean_ctor_set(x_58, 1, x_43);
lean_ctor_set(x_58, 2, x_44);
lean_ctor_set(x_58, 3, x_56);
lean_ctor_set_uint8(x_58, sizeof(void*)*4, x_46);
x_59 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_50, x_2, x_3, x_4, x_5, x_6, x_7, x_57);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_61 = x_59;
} else {
 lean_dec_ref(x_59);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_58);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_58);
x_63 = lean_ctor_get(x_59, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_59, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_65 = x_59;
} else {
 lean_dec_ref(x_59);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_50);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_67 = lean_ctor_get(x_53, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_53, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_69 = x_53;
} else {
 lean_dec_ref(x_53);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_71 = lean_ctor_get(x_49, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_49, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_73 = x_49;
} else {
 lean_dec_ref(x_49);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
}
else
{
uint8_t x_75; 
x_75 = !lean_is_exclusive(x_1);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_76 = lean_ctor_get(x_1, 0);
x_77 = lean_ctor_get(x_1, 1);
x_78 = lean_ctor_get(x_1, 2);
x_79 = lean_ctor_get(x_1, 3);
x_80 = lean_ctor_get(x_1, 4);
x_81 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_82 = lean_ctor_get(x_81, 2);
lean_inc(x_82);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_83 = lean_apply_7(x_82, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_87 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_86, x_2, x_3, x_4, x_5, x_6, x_7, x_85);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
lean_dec(x_87);
x_89 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_79, x_4, x_5, x_6, x_7, x_88);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_80, x_4, x_5, x_6, x_7, x_91);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
lean_ctor_set(x_1, 4, x_93);
lean_ctor_set(x_1, 3, x_90);
x_95 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_84, x_2, x_3, x_4, x_5, x_6, x_7, x_94);
if (lean_obj_tag(x_95) == 0)
{
uint8_t x_96; 
x_96 = !lean_is_exclusive(x_95);
if (x_96 == 0)
{
lean_object* x_97; 
x_97 = lean_ctor_get(x_95, 0);
lean_dec(x_97);
lean_ctor_set(x_95, 0, x_1);
return x_95;
}
else
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_ctor_get(x_95, 1);
lean_inc(x_98);
lean_dec(x_95);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_1);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
else
{
uint8_t x_100; 
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_95);
if (x_100 == 0)
{
return x_95;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_95, 0);
x_102 = lean_ctor_get(x_95, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_95);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_84);
lean_free_object(x_1);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_104 = !lean_is_exclusive(x_87);
if (x_104 == 0)
{
return x_87;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_87, 0);
x_106 = lean_ctor_get(x_87, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_87);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
else
{
uint8_t x_108; 
lean_free_object(x_1);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_108 = !lean_is_exclusive(x_83);
if (x_108 == 0)
{
return x_83;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_83, 0);
x_110 = lean_ctor_get(x_83, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_83);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_112 = lean_ctor_get(x_1, 0);
x_113 = lean_ctor_get(x_1, 1);
x_114 = lean_ctor_get(x_1, 2);
x_115 = lean_ctor_get(x_1, 3);
x_116 = lean_ctor_get(x_1, 4);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_1);
x_117 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_118 = lean_ctor_get(x_117, 2);
lean_inc(x_118);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_119 = lean_apply_7(x_118, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_122 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_123 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_122, x_2, x_3, x_4, x_5, x_6, x_7, x_121);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_124 = lean_ctor_get(x_123, 1);
lean_inc(x_124);
lean_dec(x_123);
x_125 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_115, x_4, x_5, x_6, x_7, x_124);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = l_Lean_instantiateMVars___at_Lean_instantiateLocalDeclMVars___spec__1(x_116, x_4, x_5, x_6, x_7, x_127);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_alloc_ctor(1, 5, 0);
lean_ctor_set(x_131, 0, x_112);
lean_ctor_set(x_131, 1, x_113);
lean_ctor_set(x_131, 2, x_114);
lean_ctor_set(x_131, 3, x_126);
lean_ctor_set(x_131, 4, x_129);
x_132 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_120, x_2, x_3, x_4, x_5, x_6, x_7, x_130);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_134 = x_132;
} else {
 lean_dec_ref(x_132);
 x_134 = lean_box(0);
}
if (lean_is_scalar(x_134)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_134;
}
lean_ctor_set(x_135, 0, x_131);
lean_ctor_set(x_135, 1, x_133);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_131);
x_136 = lean_ctor_get(x_132, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_132, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_138 = x_132;
} else {
 lean_dec_ref(x_132);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_120);
lean_dec(x_116);
lean_dec(x_115);
lean_dec(x_114);
lean_dec(x_113);
lean_dec(x_112);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_140 = lean_ctor_get(x_123, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_123, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_142 = x_123;
} else {
 lean_dec_ref(x_123);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(1, 2, 0);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_140);
lean_ctor_set(x_143, 1, x_141);
return x_143;
}
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
lean_dec(x_116);
lean_dec(x_115);
lean_dec(x_114);
lean_dec(x_113);
lean_dec(x_112);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_144 = lean_ctor_get(x_119, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_119, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_146 = x_119;
} else {
 lean_dec_ref(x_119);
 x_146 = lean_box(0);
}
if (lean_is_scalar(x_146)) {
 x_147 = lean_alloc_ctor(1, 2, 0);
} else {
 x_147 = x_146;
}
lean_ctor_set(x_147, 0, x_144);
lean_ctor_set(x_147, 1, x_145);
return x_147;
}
}
}
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("finalizePatternDecls: ");
return x_1;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("finalizePatternDecls: mvarId: ");
return x_1;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", fvarId: ");
return x_1;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_2);
x_13 = lean_nat_dec_lt(x_3, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_2, x_3);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_3, x_16);
lean_dec(x_3);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = l_Lean_mkMVar(x_18);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_20);
x_21 = l_Lean_instantiateMVars___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(x_20, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_84 = lean_ctor_get(x_9, 0);
lean_inc(x_84);
x_85 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13;
x_86 = l_Lean_checkTraceOption(x_84, x_85);
lean_dec(x_84);
if (x_86 == 0)
{
lean_dec(x_20);
x_24 = x_23;
goto block_83;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_87 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_87, 0, x_20);
x_88 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__6;
x_89 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_87);
x_90 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__8;
x_91 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
lean_inc(x_22);
x_92 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_92, 0, x_22);
x_93 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
x_94 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__9;
x_95 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
lean_inc(x_19);
x_96 = l_Lean_mkFVar(x_19);
x_97 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_97, 0, x_96);
x_98 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_97);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_99 = l_Lean_Elab_Term_logTrace(x_85, x_98, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; 
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
lean_dec(x_99);
x_24 = x_100;
goto block_83;
}
else
{
uint8_t x_101; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_101 = !lean_is_exclusive(x_99);
if (x_101 == 0)
{
return x_99;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_99, 0);
x_103 = lean_ctor_get(x_99, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_99);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
block_83:
{
if (lean_obj_tag(x_22) == 2)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
lean_inc(x_19);
x_26 = l_Lean_mkFVar(x_19);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_26);
lean_inc(x_25);
x_27 = l_Lean_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(x_25, x_26, x_5, x_6, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_ctor_get(x_9, 0);
lean_inc(x_29);
x_30 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13;
x_31 = l_Lean_checkTraceOption(x_29, x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_26);
lean_dec(x_25);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_32 = l_Lean_getLocalDecl___at_Lean_Elab_Term_finalizePatternDecls___spec__1(x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_35 = l_Lean_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__2(x_33, x_5, x_6, x_7, x_8, x_9, x_10, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_array_push(x_4, x_36);
x_3 = x_17;
x_4 = x_38;
x_11 = x_37;
goto _start;
}
else
{
uint8_t x_40; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_40 = !lean_is_exclusive(x_35);
if (x_40 == 0)
{
return x_35;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_35, 0);
x_42 = lean_ctor_get(x_35, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_35);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_44 = !lean_is_exclusive(x_32);
if (x_44 == 0)
{
return x_32;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_32, 0);
x_46 = lean_ctor_get(x_32, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_32);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_48 = l_Lean_mkMVar(x_25);
x_49 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__3;
x_51 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__8;
x_53 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_54, 0, x_26);
x_55 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_56 = l_Lean_Elab_Term_logTrace(x_30, x_55, x_5, x_6, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_58 = l_Lean_getLocalDecl___at_Lean_Elab_Term_finalizePatternDecls___spec__1(x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_61 = l_Lean_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__2(x_59, x_5, x_6, x_7, x_8, x_9, x_10, x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_array_push(x_4, x_62);
x_3 = x_17;
x_4 = x_64;
x_11 = x_63;
goto _start;
}
else
{
uint8_t x_66; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_66 = !lean_is_exclusive(x_61);
if (x_66 == 0)
{
return x_61;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_61, 0);
x_68 = lean_ctor_get(x_61, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_61);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_70 = !lean_is_exclusive(x_58);
if (x_70 == 0)
{
return x_58;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_58, 0);
x_72 = lean_ctor_get(x_58, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_58);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_74 = !lean_is_exclusive(x_56);
if (x_74 == 0)
{
return x_56;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_56, 0);
x_76 = lean_ctor_get(x_56, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_56);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_78 = !lean_is_exclusive(x_27);
if (x_78 == 0)
{
return x_27;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_27, 0);
x_80 = lean_ctor_get(x_27, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_27);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
lean_dec(x_22);
lean_dec(x_19);
x_3 = x_17;
x_11 = x_24;
goto _start;
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_105 = !lean_is_exclusive(x_21);
if (x_105 == 0)
{
return x_21;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_21, 0);
x_107 = lean_ctor_get(x_21, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_21);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
else
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_15, 0);
lean_inc(x_109);
lean_dec(x_15);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_110 = l_Lean_getLocalDecl___at_Lean_Elab_Term_finalizePatternDecls___spec__1(x_109, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_113 = l_Lean_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__2(x_111, x_5, x_6, x_7, x_8, x_9, x_10, x_112);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
x_116 = lean_array_push(x_4, x_114);
x_3 = x_17;
x_4 = x_116;
x_11 = x_115;
goto _start;
}
else
{
uint8_t x_118; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_118 = !lean_is_exclusive(x_113);
if (x_118 == 0)
{
return x_113;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_ctor_get(x_113, 0);
x_120 = lean_ctor_get(x_113, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_113);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
return x_121;
}
}
}
else
{
uint8_t x_122; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_122 = !lean_is_exclusive(x_110);
if (x_122 == 0)
{
return x_110;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_110, 0);
x_124 = lean_ctor_get(x_110, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_110);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_finalizePatternDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_empty___closed__1;
x_11 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3(x_1, x_1, x_9, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_finalizePatternDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_finalizePatternDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Match_25__alreadyVisited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_st_ref_get(x_2, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_NameSet_contains(x_13, x_1);
lean_dec(x_13);
x_15 = lean_box(x_14);
lean_ctor_set(x_10, 0, x_15);
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_NameSet_contains(x_18, x_1);
lean_dec(x_18);
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_17);
return x_21;
}
}
}
lean_object* l___private_Lean_Elab_Match_25__alreadyVisited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_25__alreadyVisited(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_26__markAsVisited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_box(0);
x_16 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_14, x_1, x_15);
lean_ctor_set(x_11, 0, x_16);
x_17 = lean_st_ref_set(x_2, x_11, x_12);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_15);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_22 = lean_ctor_get(x_11, 0);
x_23 = lean_ctor_get(x_11, 1);
x_24 = lean_ctor_get(x_11, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_11);
x_25 = lean_box(0);
x_26 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_22, x_1, x_25);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
lean_ctor_set(x_27, 2, x_24);
x_28 = lean_st_ref_set(x_2, x_27, x_12);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_30 = x_28;
} else {
 lean_dec_ref(x_28);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
lean_object* l___private_Lean_Elab_Match_26__markAsVisited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_26__markAsVisited(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_27__throwInvalidPattern___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_7, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 6);
lean_inc(x_11);
lean_inc(x_11);
x_12 = l_Lean_Elab_getBetterRef(x_10, x_11);
lean_dec(x_10);
x_13 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
x_14 = l___private_Lean_Elab_Term_5__addContext_x27(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set_tag(x_14, 1);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_14, 0);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_14);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_12);
lean_ctor_set(x_20, 1, x_18);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_12);
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = l_Lean_Elab_addMacroStack(x_1, x_11);
x_27 = l___private_Lean_Elab_Term_5__addContext_x27(x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_12);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set_tag(x_27, 1);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_27, 0);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_27);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_12);
x_35 = !lean_is_exclusive(x_27);
if (x_35 == 0)
{
return x_27;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_27, 0);
x_37 = lean_ctor_get(x_27, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_27);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_27__throwInvalidPattern___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_Match_27__throwInvalidPattern___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid pattern ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_1);
x_11 = l_Lean_indentExpr(x_10);
x_12 = l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__3;
x_13 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_throwError___at___private_Lean_Elab_Match_27__throwInvalidPattern___spec__1___rarg(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Match_27__throwInvalidPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_27__throwInvalidPattern___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwError___at___private_Lean_Elab_Match_27__throwInvalidPattern___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_28__getFieldsBinderInfoAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 7)
{
lean_object* x_5; uint64_t x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 2);
x_6 = lean_ctor_get_uint64(x_3, sizeof(void*)*3);
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_nat_dec_lt(x_2, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_2, x_9);
lean_dec(x_2);
x_11 = (uint8_t)((x_6 << 24) >> 61);
x_12 = lean_box(x_11);
x_13 = lean_array_push(x_4, x_12);
x_2 = x_10;
x_3 = x_5;
x_4 = x_13;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_dec(x_2);
x_2 = x_16;
x_3 = x_5;
goto _start;
}
}
else
{
lean_dec(x_2);
return x_4;
}
}
}
lean_object* l___private_Lean_Elab_Match_28__getFieldsBinderInfoAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_28__getFieldsBinderInfoAux___main(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_28__getFieldsBinderInfoAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_28__getFieldsBinderInfoAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_28__getFieldsBinderInfoAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_28__getFieldsBinderInfoAux(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_getExprMVarAssignment_x3f___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = lean_apply_7(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_16 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_6, x_7, x_8, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_metavar_ctx_get_expr_assignment(x_19, x_1);
x_22 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_21);
x_27 = !lean_is_exclusive(x_22);
if (x_27 == 0)
{
return x_22;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_22, 0);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_22);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_16);
if (x_31 == 0)
{
return x_16;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_16, 0);
x_33 = lean_ctor_get(x_16, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_16);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_12);
if (x_35 == 0)
{
return x_12;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_12, 0);
x_37 = lean_ctor_get(x_12, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_12);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_inc(x_8);
x_10 = lean_name_mk_numeral(x_8, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_9, x_11);
lean_dec(x_9);
lean_ctor_set(x_5, 1, x_12);
x_13 = lean_st_ref_take(x_1, x_6);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_14, 1);
lean_dec(x_17);
lean_ctor_set(x_14, 1, x_5);
x_18 = lean_st_ref_set(x_1, x_14, x_15);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_10);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_10);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_5);
lean_ctor_set(x_25, 2, x_24);
x_26 = lean_st_ref_set(x_1, x_25, x_15);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_10);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_30 = lean_ctor_get(x_5, 0);
x_31 = lean_ctor_get(x_5, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_5);
lean_inc(x_31);
lean_inc(x_30);
x_32 = lean_name_mk_numeral(x_30, x_31);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_31, x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_st_ref_take(x_1, x_6);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_37, 2);
lean_inc(x_40);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 lean_ctor_release(x_37, 2);
 x_41 = x_37;
} else {
 lean_dec_ref(x_37);
 x_41 = lean_box(0);
}
if (lean_is_scalar(x_41)) {
 x_42 = lean_alloc_ctor(0, 3, 0);
} else {
 x_42 = x_41;
}
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_35);
lean_ctor_set(x_42, 2, x_40);
x_43 = lean_st_ref_set(x_1, x_42, x_38);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_45 = x_43;
} else {
 lean_dec_ref(x_43);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_32);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
}
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_mkFreshId___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__2___rarg___boxed), 2, 0);
return x_7;
}
}
lean_object* l_Lean_inferType___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = lean_apply_7(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_16 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_7, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_7, 3);
lean_inc(x_21);
x_22 = lean_nat_dec_eq(x_19, x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_19, x_23);
lean_dec(x_19);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_25, 2, x_20);
lean_ctor_set(x_25, 3, x_21);
x_26 = l_Lean_inferTypeRef;
x_27 = lean_st_ref_get(x_26, x_17);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
x_30 = lean_apply_6(x_28, x_1, x_5, x_6, x_25, x_8, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set(x_33, 0, x_31);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_31);
x_38 = !lean_is_exclusive(x_33);
if (x_38 == 0)
{
return x_33;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_33, 0);
x_40 = lean_ctor_get(x_33, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_33);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_30, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_30, 1);
lean_inc(x_43);
lean_dec(x_30);
x_44 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_43);
if (lean_obj_tag(x_44) == 0)
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_44, 0);
lean_dec(x_46);
lean_ctor_set_tag(x_44, 1);
lean_ctor_set(x_44, 0, x_42);
return x_44;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_42);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_dec(x_42);
x_49 = !lean_is_exclusive(x_44);
if (x_49 == 0)
{
return x_44;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_44, 0);
x_51 = lean_ctor_get(x_44, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_44);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_1);
x_53 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_54 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_53, x_5, x_6, x_7, x_8, x_17);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_56);
if (lean_obj_tag(x_57) == 0)
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_57, 0);
lean_dec(x_59);
lean_ctor_set_tag(x_57, 1);
lean_ctor_set(x_57, 0, x_55);
return x_57;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_55);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
else
{
uint8_t x_62; 
lean_dec(x_55);
x_62 = !lean_is_exclusive(x_57);
if (x_62 == 0)
{
return x_57;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_57, 0);
x_64 = lean_ctor_get(x_57, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_57);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_16);
if (x_66 == 0)
{
return x_16;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_16, 0);
x_68 = lean_ctor_get(x_16, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_16);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_12);
if (x_70 == 0)
{
return x_12;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_12, 0);
x_72 = lean_ctor_get(x_12, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_12);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
lean_object* l_Lean_assignExprMVar___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = lean_apply_7(x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_st_ref_take(x_7, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_20, 0);
x_24 = l_Lean_MetavarContext_assignExpr(x_23, x_1, x_2);
lean_ctor_set(x_20, 0, x_24);
x_25 = lean_st_ref_set(x_7, x_20, x_21);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_26);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
x_30 = lean_box(0);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_27, 1);
lean_inc(x_31);
lean_dec(x_27);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_27);
if (x_34 == 0)
{
return x_27;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_27, 0);
x_36 = lean_ctor_get(x_27, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_27);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_38 = lean_ctor_get(x_20, 0);
x_39 = lean_ctor_get(x_20, 1);
x_40 = lean_ctor_get(x_20, 2);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_20);
x_41 = l_Lean_MetavarContext_assignExpr(x_38, x_1, x_2);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
lean_ctor_set(x_42, 2, x_40);
x_43 = lean_st_ref_set(x_7, x_42, x_21);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
x_48 = lean_box(0);
if (lean_is_scalar(x_47)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_47;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_45, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_45, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_52 = x_45;
} else {
 lean_dec_ref(x_45);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_17);
if (x_54 == 0)
{
return x_17;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_17, 0);
x_56 = lean_ctor_get(x_17, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_17);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_13);
if (x_58 == 0)
{
return x_13;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_13, 0);
x_60 = lean_ctor_get(x_13, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_13);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Lean_LocalDecl_type(x_7);
lean_dec(x_7);
x_9 = l_Lean_Expr_occurs(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_3);
return x_13;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_29__mkLocalDeclFor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_Expr_mvarId_x21(x_1);
x_11 = lean_st_ref_get(x_2, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_10);
x_14 = l_Lean_getExprMVarAssignment_x3f___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__1(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_mkFreshId___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__2___rarg(x_8, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_20 = l_Lean_inferType___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_18);
x_23 = l_Lean_mkFVar(x_18);
x_24 = l_Lean_assignExprMVar___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__4(x_10, x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get(x_12, 1);
lean_inc(x_26);
lean_dec(x_12);
x_27 = lean_array_get_size(x_26);
lean_dec(x_26);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_27, x_28);
lean_dec(x_27);
x_30 = l_Lean_Closure_mkNextUserName___rarg___closed__2;
x_31 = l_Lean_Name_appendIndexAfter(x_30, x_29);
x_32 = lean_unsigned_to_nat(0u);
x_33 = 0;
lean_inc(x_18);
x_34 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_18);
lean_ctor_set(x_34, 2, x_31);
lean_ctor_set(x_34, 3, x_21);
lean_ctor_set_uint8(x_34, sizeof(void*)*4, x_33);
x_35 = lean_st_ref_take(x_2, x_25);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_36, 1);
x_40 = lean_ctor_get(x_36, 2);
x_41 = l_Array_findIdxAux___main___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__5(x_1, x_39, x_32);
lean_dec(x_1);
x_42 = lean_box(0);
lean_inc(x_18);
x_43 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_40, x_18, x_42);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_array_push(x_39, x_34);
lean_ctor_set(x_36, 2, x_43);
lean_ctor_set(x_36, 1, x_44);
x_45 = lean_st_ref_set(x_2, x_36, x_37);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_45, 0);
lean_dec(x_47);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_18);
lean_ctor_set(x_45, 0, x_48);
return x_45;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_45, 1);
lean_inc(x_49);
lean_dec(x_45);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_18);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_52 = lean_ctor_get(x_41, 0);
lean_inc(x_52);
lean_dec(x_41);
x_53 = l_Array_insertAt___rarg(x_39, x_52, x_34);
lean_dec(x_52);
lean_ctor_set(x_36, 2, x_43);
lean_ctor_set(x_36, 1, x_53);
x_54 = lean_st_ref_set(x_2, x_36, x_37);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_54, 0);
lean_dec(x_56);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_18);
lean_ctor_set(x_54, 0, x_57);
return x_54;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_54, 1);
lean_inc(x_58);
lean_dec(x_54);
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_18);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_36, 0);
x_62 = lean_ctor_get(x_36, 1);
x_63 = lean_ctor_get(x_36, 2);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_36);
x_64 = l_Array_findIdxAux___main___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__5(x_1, x_62, x_32);
lean_dec(x_1);
x_65 = lean_box(0);
lean_inc(x_18);
x_66 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_63, x_18, x_65);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_67 = lean_array_push(x_62, x_34);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_61);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_68, 2, x_66);
x_69 = lean_st_ref_set(x_2, x_68, x_37);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_71 = x_69;
} else {
 lean_dec_ref(x_69);
 x_71 = lean_box(0);
}
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_18);
if (lean_is_scalar(x_71)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_71;
}
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_70);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_74 = lean_ctor_get(x_64, 0);
lean_inc(x_74);
lean_dec(x_64);
x_75 = l_Array_insertAt___rarg(x_62, x_74, x_34);
lean_dec(x_74);
x_76 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_76, 0, x_61);
lean_ctor_set(x_76, 1, x_75);
lean_ctor_set(x_76, 2, x_66);
x_77 = lean_st_ref_set(x_2, x_76, x_37);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_79 = x_77;
} else {
 lean_dec_ref(x_77);
 x_79 = lean_box(0);
}
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_18);
if (lean_is_scalar(x_79)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_79;
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_78);
return x_81;
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_21);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_1);
x_82 = !lean_is_exclusive(x_24);
if (x_82 == 0)
{
return x_24;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_24, 0);
x_84 = lean_ctor_get(x_24, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_24);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_20);
if (x_86 == 0)
{
return x_20;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_20, 0);
x_88 = lean_ctor_get(x_20, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_20);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_90 = !lean_is_exclusive(x_14);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_14, 0);
lean_dec(x_91);
x_92 = lean_ctor_get(x_15, 0);
lean_inc(x_92);
lean_dec(x_15);
x_93 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_14, 0, x_93);
return x_14;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_94 = lean_ctor_get(x_14, 1);
lean_inc(x_94);
lean_dec(x_14);
x_95 = lean_ctor_get(x_15, 0);
lean_inc(x_95);
lean_dec(x_15);
x_96 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_96, 0, x_95);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_94);
return x_97;
}
}
}
else
{
uint8_t x_98; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_98 = !lean_is_exclusive(x_14);
if (x_98 == 0)
{
return x_14;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_14, 0);
x_100 = lean_ctor_get(x_14, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_14);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
}
lean_object* l_Lean_getExprMVarAssignment_x3f___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_getExprMVarAssignment_x3f___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkFreshId___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_mkFreshId___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_inferType___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_inferType___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_assignExprMVar___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_assignExprMVar___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findIdxAux___main___at___private_Lean_Elab_Match_29__mkLocalDeclFor___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Match_29__mkLocalDeclFor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_29__mkLocalDeclFor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_30__getFieldsBinderInfo(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_empty___closed__1;
x_6 = l___private_Lean_Elab_Match_28__getFieldsBinderInfoAux___main(x_1, x_4, x_3, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Match_30__getFieldsBinderInfo___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_Match_30__getFieldsBinderInfo(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_whnf___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = lean_apply_7(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_16 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_7, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_7, 3);
lean_inc(x_21);
x_22 = lean_nat_dec_eq(x_19, x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_19, x_23);
lean_dec(x_19);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_25, 2, x_20);
lean_ctor_set(x_25, 3, x_21);
x_26 = l_Lean_whnfRef;
x_27 = lean_st_ref_get(x_26, x_17);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
x_30 = lean_apply_6(x_28, x_1, x_5, x_6, x_25, x_8, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set(x_33, 0, x_31);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_31);
x_38 = !lean_is_exclusive(x_33);
if (x_38 == 0)
{
return x_33;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_33, 0);
x_40 = lean_ctor_get(x_33, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_33);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_30, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_30, 1);
lean_inc(x_43);
lean_dec(x_30);
x_44 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_43);
if (lean_obj_tag(x_44) == 0)
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_44, 0);
lean_dec(x_46);
lean_ctor_set_tag(x_44, 1);
lean_ctor_set(x_44, 0, x_42);
return x_44;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_42);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
else
{
uint8_t x_49; 
lean_dec(x_42);
x_49 = !lean_is_exclusive(x_44);
if (x_49 == 0)
{
return x_44;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_44, 0);
x_51 = lean_ctor_get(x_44, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_44);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_1);
x_53 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_54 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_53, x_5, x_6, x_7, x_8, x_17);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_56);
if (lean_obj_tag(x_57) == 0)
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_57, 0);
lean_dec(x_59);
lean_ctor_set_tag(x_57, 1);
lean_ctor_set(x_57, 0, x_55);
return x_57;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_55);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
else
{
uint8_t x_62; 
lean_dec(x_55);
x_62 = !lean_is_exclusive(x_57);
if (x_62 == 0)
{
return x_57;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_57, 0);
x_64 = lean_ctor_get(x_57, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_57);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_16);
if (x_66 == 0)
{
return x_16;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_16, 0);
x_68 = lean_ctor_get(x_16, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_16);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_12);
if (x_70 == 0)
{
return x_12;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_12, 0);
x_72 = lean_ctor_get(x_12, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_12);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_LocalDecl_fvarId(x_8);
lean_dec(x_8);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_5);
return x_10;
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_2, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_14 = x_3;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; uint8_t x_32; 
x_16 = lean_array_fget(x_3, x_2);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_fset(x_3, x_2, x_17);
x_27 = x_16;
x_28 = l_Lean_BinderInfo_inhabited;
x_29 = lean_box(x_28);
x_30 = lean_array_get(x_29, x_1, x_2);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
x_32 = l_Lean_BinderInfo_isExplicit(x_31);
if (x_32 == 0)
{
if (lean_obj_tag(x_27) == 1)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
x_34 = lean_st_ref_get(x_4, x_11);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
x_38 = lean_array_get_size(x_37);
x_39 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__2(x_33, x_35, x_37, x_38, x_17);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_35);
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_33);
x_40 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_40, 0, x_27);
x_19 = x_40;
x_20 = x_36;
goto block_26;
}
else
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = l___private_Lean_Elab_Match_25__alreadyVisited(x_33, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_36);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = l___private_Lean_Elab_Match_26__markAsVisited(x_33, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_44);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_Expr_fvarId_x21(x_27);
lean_dec(x_27);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_19 = x_48;
x_20 = x_46;
goto block_26;
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_33);
x_49 = lean_ctor_get(x_41, 1);
lean_inc(x_49);
lean_dec(x_41);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_27);
x_19 = x_50;
x_20 = x_49;
goto block_26;
}
}
}
else
{
lean_object* x_51; 
x_51 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_51, 0, x_27);
x_19 = x_51;
x_20 = x_11;
goto block_26;
}
}
else
{
lean_object* x_52; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_52 = l_Lean_Elab_Term_ToDepElimPattern_main___main(x_27, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_19 = x_53;
x_20 = x_54;
goto block_26;
}
else
{
uint8_t x_55; 
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
return x_52;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_52, 0);
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_52);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
block_26:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_2, x_21);
x_23 = x_19;
x_24 = lean_array_fset(x_18, x_2, x_23);
lean_dec(x_2);
x_2 = x_22;
x_3 = x_24;
x_11 = x_20;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_LocalDecl_fvarId(x_8);
lean_dec(x_8);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_5);
return x_10;
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_2, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_14 = x_3;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; uint8_t x_32; 
x_16 = lean_array_fget(x_3, x_2);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_fset(x_3, x_2, x_17);
x_27 = x_16;
x_28 = l_Lean_BinderInfo_inhabited;
x_29 = lean_box(x_28);
x_30 = lean_array_get(x_29, x_1, x_2);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
x_32 = l_Lean_BinderInfo_isExplicit(x_31);
if (x_32 == 0)
{
if (lean_obj_tag(x_27) == 1)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
x_34 = lean_st_ref_get(x_4, x_11);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
x_38 = lean_array_get_size(x_37);
x_39 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__4(x_33, x_35, x_37, x_38, x_17);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_35);
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_33);
x_40 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_40, 0, x_27);
x_19 = x_40;
x_20 = x_36;
goto block_26;
}
else
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = l___private_Lean_Elab_Match_25__alreadyVisited(x_33, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_36);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = l___private_Lean_Elab_Match_26__markAsVisited(x_33, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_44);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_Expr_fvarId_x21(x_27);
lean_dec(x_27);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_19 = x_48;
x_20 = x_46;
goto block_26;
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_33);
x_49 = lean_ctor_get(x_41, 1);
lean_inc(x_49);
lean_dec(x_41);
x_50 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_50, 0, x_27);
x_19 = x_50;
x_20 = x_49;
goto block_26;
}
}
}
else
{
lean_object* x_51; 
x_51 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_51, 0, x_27);
x_19 = x_51;
x_20 = x_11;
goto block_26;
}
}
else
{
lean_object* x_52; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_52 = l_Lean_Elab_Term_ToDepElimPattern_main___main(x_27, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_19 = x_53;
x_20 = x_54;
goto block_26;
}
else
{
uint8_t x_55; 
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
return x_52;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_52, 0);
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_52);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
block_26:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_2, x_21);
x_23 = x_19;
x_24 = lean_array_fset(x_18, x_2, x_23);
lean_dec(x_2);
x_2 = x_22;
x_3 = x_24;
x_11 = x_20;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_LocalDecl_fvarId(x_8);
lean_dec(x_8);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_5);
return x_10;
}
}
}
}
lean_object* l_List_mapM___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Lean_Elab_Term_ToDepElimPattern_main___main(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_List_mapM___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__7(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_ctor_set(x_1, 1, x_20);
lean_ctor_set(x_1, 0, x_16);
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_18, 0);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_18);
lean_ctor_set(x_1, 1, x_21);
lean_ctor_set(x_1, 0, x_16);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_16);
lean_free_object(x_1);
x_24 = !lean_is_exclusive(x_18);
if (x_24 == 0)
{
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_18, 0);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_free_object(x_1);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_15);
if (x_28 == 0)
{
return x_15;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_15);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_1, 0);
x_33 = lean_ctor_get(x_1, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_34 = l_Lean_Elab_Term_ToDepElimPattern_main___main(x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_List_mapM___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__7(x_33, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_40 = x_37;
} else {
 lean_dec_ref(x_37);
 x_40 = lean_box(0);
}
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_35);
lean_ctor_set(x_41, 1, x_38);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_35);
x_43 = lean_ctor_get(x_37, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_45 = x_37;
} else {
 lean_dec_ref(x_37);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(1, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_47 = lean_ctor_get(x_34, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_34, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_49 = x_34;
} else {
 lean_dec_ref(x_34);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_LocalDecl_fvarId(x_8);
lean_dec(x_8);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_5);
return x_10;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected occurrence of auxiliary declaration 'namedPattern'");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_inaccessible_x3f(x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Expr_arrayLit_x3f(x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = l___private_Lean_Elab_Match_20__collect___main___closed__6;
x_13 = lean_unsigned_to_nat(3u);
x_14 = l_Lean_Expr_isAppOfArity___main(x_1, x_12, x_13);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = l_Lean_Expr_isNatLit(x_1);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = l_Lean_Expr_isStringLit(x_1);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = l_Lean_Expr_isCharLit(x_1);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = l_Lean_Expr_isFVar(x_1);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = l_Lean_Expr_isMVar(x_1);
if (x_19 == 0)
{
lean_object* x_20; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_20 = l_Lean_whnf___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_expr_eqv(x_21, x_1);
if (x_23 == 0)
{
lean_dec(x_1);
x_1 = x_21;
x_9 = x_22;
goto _start;
}
else
{
lean_object* x_25; 
lean_dec(x_21);
x_25 = l_Lean_Expr_getAppFn___main(x_1);
if (lean_obj_tag(x_25) == 4)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_st_ref_get(x_8, x_22);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_26);
x_32 = lean_environment_find(x_31, x_26);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_33 = l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
lean_dec(x_2);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
if (lean_obj_tag(x_34) == 6)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_36);
x_38 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_37);
x_39 = lean_mk_array(x_37, x_38);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_sub(x_37, x_40);
lean_dec(x_37);
lean_inc(x_1);
x_42 = l___private_Lean_Expr_3__getAppArgsAux___main(x_1, x_39, x_41);
x_43 = lean_array_get_size(x_42);
x_44 = lean_ctor_get(x_35, 3);
lean_inc(x_44);
x_45 = lean_ctor_get(x_35, 4);
lean_inc(x_45);
x_46 = lean_nat_add(x_44, x_45);
lean_dec(x_45);
x_47 = lean_nat_dec_eq(x_43, x_46);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_35);
lean_dec(x_27);
lean_dec(x_26);
x_48 = l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
return x_48;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_48, 0);
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_48);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_1);
x_53 = l_Array_extract___rarg(x_42, x_36, x_44);
x_54 = l_Array_extract___rarg(x_42, x_44, x_43);
lean_dec(x_43);
lean_dec(x_42);
x_55 = l___private_Lean_Elab_Match_30__getFieldsBinderInfo(x_35);
lean_dec(x_35);
x_56 = x_54;
x_57 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5___boxed), 11, 3);
lean_closure_set(x_57, 0, x_55);
lean_closure_set(x_57, 1, x_36);
lean_closure_set(x_57, 2, x_56);
x_58 = x_57;
x_59 = lean_apply_8(x_58, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
if (lean_obj_tag(x_59) == 0)
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = l_Array_toList___rarg(x_53);
lean_dec(x_53);
x_63 = l_Array_toList___rarg(x_61);
lean_dec(x_61);
x_64 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_64, 0, x_26);
lean_ctor_set(x_64, 1, x_27);
lean_ctor_set(x_64, 2, x_62);
lean_ctor_set(x_64, 3, x_63);
lean_ctor_set(x_59, 0, x_64);
return x_59;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_65 = lean_ctor_get(x_59, 0);
x_66 = lean_ctor_get(x_59, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_59);
x_67 = l_Array_toList___rarg(x_53);
lean_dec(x_53);
x_68 = l_Array_toList___rarg(x_65);
lean_dec(x_65);
x_69 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_69, 0, x_26);
lean_ctor_set(x_69, 1, x_27);
lean_ctor_set(x_69, 2, x_67);
lean_ctor_set(x_69, 3, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_66);
return x_70;
}
}
else
{
uint8_t x_71; 
lean_dec(x_53);
lean_dec(x_27);
lean_dec(x_26);
x_71 = !lean_is_exclusive(x_59);
if (x_71 == 0)
{
return x_59;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_59, 0);
x_73 = lean_ctor_get(x_59, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_59);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
else
{
lean_object* x_75; 
lean_dec(x_34);
lean_dec(x_27);
lean_dec(x_26);
x_75 = l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
lean_dec(x_2);
return x_75;
}
}
}
else
{
lean_object* x_76; 
lean_dec(x_25);
x_76 = l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
lean_dec(x_2);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_20);
if (x_77 == 0)
{
return x_20;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_20, 0);
x_79 = lean_ctor_get(x_20, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_20);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
lean_object* x_81; 
x_81 = l___private_Lean_Elab_Match_29__mkLocalDeclFor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_82 = l_Lean_Expr_fvarId_x21(x_1);
x_102 = lean_st_ref_get(x_2, x_9);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
x_106 = lean_array_get_size(x_105);
x_107 = lean_unsigned_to_nat(0u);
x_108 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__6(x_82, x_103, x_105, x_106, x_107);
lean_dec(x_106);
lean_dec(x_105);
lean_dec(x_103);
if (x_108 == 0)
{
lean_object* x_109; uint8_t x_110; 
lean_dec(x_82);
x_109 = l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_104);
lean_dec(x_2);
x_110 = !lean_is_exclusive(x_109);
if (x_110 == 0)
{
return x_109;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_109, 0);
x_112 = lean_ctor_get(x_109, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_109);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
else
{
x_83 = x_104;
goto block_101;
}
block_101:
{
lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_84 = l___private_Lean_Elab_Match_25__alreadyVisited(x_82, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_83);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_unbox(x_85);
lean_dec(x_85);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
lean_dec(x_1);
x_87 = lean_ctor_get(x_84, 1);
lean_inc(x_87);
lean_dec(x_84);
lean_inc(x_82);
x_88 = l___private_Lean_Elab_Match_26__markAsVisited(x_82, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_87);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; 
x_90 = lean_ctor_get(x_88, 0);
lean_dec(x_90);
x_91 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_91, 0, x_82);
lean_ctor_set(x_88, 0, x_91);
return x_88;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_88, 1);
lean_inc(x_92);
lean_dec(x_88);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_82);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
else
{
uint8_t x_95; 
lean_dec(x_82);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_84);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; 
x_96 = lean_ctor_get(x_84, 0);
lean_dec(x_96);
x_97 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_97, 0, x_1);
lean_ctor_set(x_84, 0, x_97);
return x_84;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_84, 1);
lean_inc(x_98);
lean_dec(x_84);
x_99 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_99, 0, x_1);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
}
}
}
else
{
lean_object* x_114; lean_object* x_115; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_114 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_114, 0, x_1);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_9);
return x_115;
}
}
else
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_116 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_116, 0, x_1);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_9);
return x_117;
}
}
else
{
lean_object* x_118; lean_object* x_119; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_118 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_118, 0, x_1);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_9);
return x_119;
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_120 = lean_unsigned_to_nat(0u);
x_121 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_120);
x_122 = lean_unsigned_to_nat(2u);
x_123 = lean_nat_sub(x_121, x_122);
x_124 = lean_unsigned_to_nat(1u);
x_125 = lean_nat_sub(x_123, x_124);
lean_dec(x_123);
x_126 = l_Lean_Expr_getRevArg_x21___main(x_1, x_125);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_127 = l_Lean_Elab_Term_ToDepElimPattern_main___main(x_126, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_127) == 0)
{
uint8_t x_128; 
x_128 = !lean_is_exclusive(x_127);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_129 = lean_ctor_get(x_127, 0);
x_130 = lean_ctor_get(x_127, 1);
x_131 = lean_nat_sub(x_121, x_124);
lean_dec(x_121);
x_132 = lean_nat_sub(x_131, x_124);
lean_dec(x_131);
x_133 = l_Lean_Expr_getRevArg_x21___main(x_1, x_132);
lean_dec(x_1);
if (lean_obj_tag(x_133) == 1)
{
lean_object* x_134; lean_object* x_135; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
lean_dec(x_133);
x_135 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_129);
lean_ctor_set(x_127, 0, x_135);
return x_127;
}
else
{
lean_object* x_136; lean_object* x_137; 
lean_dec(x_133);
lean_free_object(x_127);
lean_dec(x_129);
x_136 = l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3;
x_137 = l_Lean_throwError___at___private_Lean_Elab_Match_27__throwInvalidPattern___spec__1___rarg(x_136, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_130);
lean_dec(x_2);
return x_137;
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_138 = lean_ctor_get(x_127, 0);
x_139 = lean_ctor_get(x_127, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_127);
x_140 = lean_nat_sub(x_121, x_124);
lean_dec(x_121);
x_141 = lean_nat_sub(x_140, x_124);
lean_dec(x_140);
x_142 = l_Lean_Expr_getRevArg_x21___main(x_1, x_141);
lean_dec(x_1);
if (lean_obj_tag(x_142) == 1)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
lean_dec(x_142);
x_144 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_138);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_139);
return x_145;
}
else
{
lean_object* x_146; lean_object* x_147; 
lean_dec(x_142);
lean_dec(x_138);
x_146 = l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3;
x_147 = l_Lean_throwError___at___private_Lean_Elab_Match_27__throwInvalidPattern___spec__1___rarg(x_146, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_139);
lean_dec(x_2);
return x_147;
}
}
}
else
{
uint8_t x_148; 
lean_dec(x_121);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_148 = !lean_is_exclusive(x_127);
if (x_148 == 0)
{
return x_127;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_149 = lean_ctor_get(x_127, 0);
x_150 = lean_ctor_get(x_127, 1);
lean_inc(x_150);
lean_inc(x_149);
lean_dec(x_127);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
return x_151;
}
}
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_1);
x_152 = lean_ctor_get(x_11, 0);
lean_inc(x_152);
lean_dec(x_11);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = l_List_mapM___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__7(x_154, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_155) == 0)
{
uint8_t x_156; 
x_156 = !lean_is_exclusive(x_155);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; 
x_157 = lean_ctor_get(x_155, 0);
x_158 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_158, 0, x_153);
lean_ctor_set(x_158, 1, x_157);
lean_ctor_set(x_155, 0, x_158);
return x_155;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_159 = lean_ctor_get(x_155, 0);
x_160 = lean_ctor_get(x_155, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_155);
x_161 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_161, 0, x_153);
lean_ctor_set(x_161, 1, x_159);
x_162 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_160);
return x_162;
}
}
else
{
uint8_t x_163; 
lean_dec(x_153);
x_163 = !lean_is_exclusive(x_155);
if (x_163 == 0)
{
return x_155;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_155, 0);
x_165 = lean_ctor_get(x_155, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_155);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
}
}
}
else
{
lean_object* x_167; 
lean_dec(x_1);
x_167 = lean_ctor_get(x_10, 0);
lean_inc(x_167);
lean_dec(x_10);
if (lean_obj_tag(x_167) == 1)
{
lean_object* x_168; lean_object* x_169; uint8_t x_170; 
x_168 = lean_ctor_get(x_167, 0);
lean_inc(x_168);
x_169 = lean_st_ref_get(x_2, x_9);
x_170 = !lean_is_exclusive(x_169);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; uint8_t x_176; 
x_171 = lean_ctor_get(x_169, 0);
x_172 = lean_ctor_get(x_169, 1);
x_173 = lean_ctor_get(x_171, 1);
lean_inc(x_173);
x_174 = lean_array_get_size(x_173);
x_175 = lean_unsigned_to_nat(0u);
x_176 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__8(x_168, x_171, x_173, x_174, x_175);
lean_dec(x_174);
lean_dec(x_173);
lean_dec(x_171);
if (x_176 == 0)
{
lean_object* x_177; 
lean_dec(x_168);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_177 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_177, 0, x_167);
lean_ctor_set(x_169, 0, x_177);
return x_169;
}
else
{
lean_object* x_178; lean_object* x_179; uint8_t x_180; 
lean_free_object(x_169);
x_178 = l___private_Lean_Elab_Match_25__alreadyVisited(x_168, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_172);
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
x_180 = lean_unbox(x_179);
lean_dec(x_179);
if (x_180 == 0)
{
lean_object* x_181; lean_object* x_182; uint8_t x_183; 
x_181 = lean_ctor_get(x_178, 1);
lean_inc(x_181);
lean_dec(x_178);
x_182 = l___private_Lean_Elab_Match_26__markAsVisited(x_168, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_181);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_183 = !lean_is_exclusive(x_182);
if (x_183 == 0)
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_182, 0);
lean_dec(x_184);
x_185 = l_Lean_Expr_fvarId_x21(x_167);
lean_dec(x_167);
x_186 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_182, 0, x_186);
return x_182;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_187 = lean_ctor_get(x_182, 1);
lean_inc(x_187);
lean_dec(x_182);
x_188 = l_Lean_Expr_fvarId_x21(x_167);
lean_dec(x_167);
x_189 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_189, 0, x_188);
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_187);
return x_190;
}
}
else
{
uint8_t x_191; 
lean_dec(x_168);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_191 = !lean_is_exclusive(x_178);
if (x_191 == 0)
{
lean_object* x_192; lean_object* x_193; 
x_192 = lean_ctor_get(x_178, 0);
lean_dec(x_192);
x_193 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_193, 0, x_167);
lean_ctor_set(x_178, 0, x_193);
return x_178;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_178, 1);
lean_inc(x_194);
lean_dec(x_178);
x_195 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_195, 0, x_167);
x_196 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_194);
return x_196;
}
}
}
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; uint8_t x_202; 
x_197 = lean_ctor_get(x_169, 0);
x_198 = lean_ctor_get(x_169, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_169);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
x_200 = lean_array_get_size(x_199);
x_201 = lean_unsigned_to_nat(0u);
x_202 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__8(x_168, x_197, x_199, x_200, x_201);
lean_dec(x_200);
lean_dec(x_199);
lean_dec(x_197);
if (x_202 == 0)
{
lean_object* x_203; lean_object* x_204; 
lean_dec(x_168);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_203 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_203, 0, x_167);
x_204 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_198);
return x_204;
}
else
{
lean_object* x_205; lean_object* x_206; uint8_t x_207; 
x_205 = l___private_Lean_Elab_Match_25__alreadyVisited(x_168, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_198);
x_206 = lean_ctor_get(x_205, 0);
lean_inc(x_206);
x_207 = lean_unbox(x_206);
lean_dec(x_206);
if (x_207 == 0)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_208 = lean_ctor_get(x_205, 1);
lean_inc(x_208);
lean_dec(x_205);
x_209 = l___private_Lean_Elab_Match_26__markAsVisited(x_168, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_208);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_210 = lean_ctor_get(x_209, 1);
lean_inc(x_210);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_211 = x_209;
} else {
 lean_dec_ref(x_209);
 x_211 = lean_box(0);
}
x_212 = l_Lean_Expr_fvarId_x21(x_167);
lean_dec(x_167);
x_213 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_213, 0, x_212);
if (lean_is_scalar(x_211)) {
 x_214 = lean_alloc_ctor(0, 2, 0);
} else {
 x_214 = x_211;
}
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_210);
return x_214;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
lean_dec(x_168);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_215 = lean_ctor_get(x_205, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_205)) {
 lean_ctor_release(x_205, 0);
 lean_ctor_release(x_205, 1);
 x_216 = x_205;
} else {
 lean_dec_ref(x_205);
 x_216 = lean_box(0);
}
x_217 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_217, 0, x_167);
if (lean_is_scalar(x_216)) {
 x_218 = lean_alloc_ctor(0, 2, 0);
} else {
 x_218 = x_216;
}
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_215);
return x_218;
}
}
}
}
else
{
lean_object* x_219; lean_object* x_220; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_219 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_219, 0, x_167);
x_220 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_9);
return x_220;
}
}
}
}
lean_object* l_Lean_whnf___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_whnf___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__6(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__8(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_ToDepElimPattern_main___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_2);
x_12 = lean_nat_dec_lt(x_1, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_13 = x_2;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_array_fget(x_2, x_1);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_fset(x_2, x_1, x_16);
x_18 = x_15;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_19 = l_Lean_Elab_Term_ToDepElimPattern_main___main(x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_1, x_22);
x_24 = x_20;
x_25 = lean_array_fset(x_17, x_1, x_24);
lean_dec(x_1);
x_1 = x_23;
x_2 = x_25;
x_10 = x_21;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_2);
x_11 = lean_nat_dec_lt(x_1, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = x_2;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_array_fget(x_2, x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_fset(x_2, x_1, x_15);
x_17 = x_14;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_18 = l_Lean_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__2(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_1, x_21);
x_23 = x_19;
x_24 = lean_array_fset(x_16, x_1, x_23);
lean_dec(x_1);
x_1 = x_22;
x_2 = x_24;
x_9 = x_20;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_18);
if (x_26 == 0)
{
return x_18;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Lean_LocalDecl_fvarId(x_7);
lean_dec(x_7);
x_9 = lean_local_ctx_erase(x_4, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
x_4 = x_9;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Lean_LocalContext_addDecl(x_4, x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
x_4 = x_8;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Term_withDepElimPatterns___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = x_2;
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__1), 10, 2);
lean_closure_set(x_13, 0, x_12);
lean_closure_set(x_13, 1, x_11);
x_14 = l_Lean_NameSet_empty;
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_1);
lean_ctor_set(x_15, 2, x_14);
x_16 = lean_st_mk_ref(x_15, x_10);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = x_13;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_17);
x_20 = lean_apply_8(x_19, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_st_ref_get(x_17, x_22);
lean_dec(x_17);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = x_26;
x_28 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__2), 9, 2);
lean_closure_set(x_28, 0, x_12);
lean_closure_set(x_28, 1, x_27);
x_29 = x_28;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_30 = lean_apply_7(x_29, x_4, x_5, x_6, x_7, x_8, x_9, x_25);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_33 = l_Lean_getLCtx___at_Lean_Elab_Term_getFVarLocalDecl_x21___spec__1(x_4, x_5, x_6, x_7, x_8, x_9, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3(x_31, x_31, x_12, x_34);
x_37 = l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__4(x_31, x_31, x_12, x_36);
x_38 = !lean_is_exclusive(x_6);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_6, 1);
lean_dec(x_39);
lean_ctor_set(x_6, 1, x_37);
x_40 = lean_apply_9(x_3, x_31, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_35);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_6, 0);
x_42 = lean_ctor_get(x_6, 2);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_6);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_37);
lean_ctor_set(x_43, 2, x_42);
x_44 = lean_apply_9(x_3, x_31, x_21, x_4, x_5, x_43, x_7, x_8, x_9, x_35);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_31);
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_45 = !lean_is_exclusive(x_33);
if (x_45 == 0)
{
return x_33;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_33, 0);
x_47 = lean_ctor_get(x_33, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_33);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_30);
if (x_49 == 0)
{
return x_30;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_30, 0);
x_51 = lean_ctor_get(x_30, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_30);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_53 = !lean_is_exclusive(x_20);
if (x_53 == 0)
{
return x_20;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_20, 0);
x_55 = lean_ctor_get(x_20, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_20);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
lean_object* l_Lean_Elab_Term_withDepElimPatterns(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDepElimPatterns___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_31__withElaboratedLHS___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_2);
x_11 = lean_nat_dec_lt(x_1, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = x_2;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_array_fget(x_2, x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_fset(x_2, x_1, x_15);
x_17 = x_14;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_18 = l_Lean_instantiateMVars___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_1, x_21);
x_23 = x_19;
x_24 = lean_array_fset(x_16, x_1, x_23);
lean_dec(x_1);
x_1 = x_22;
x_2 = x_24;
x_9 = x_20;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_18);
if (x_26 == 0)
{
return x_18;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_Array_toList___rarg(x_3);
x_13 = l_Array_toList___rarg(x_4);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_apply_9(x_1, x_14, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_15;
}
}
lean_object* l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_empty___closed__1;
x_14 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_24__elabPatternsAux___boxed), 11, 4);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_12);
lean_closure_set(x_14, 2, x_3);
lean_closure_set(x_14, 3, x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_Elab_Term_withSynthesize___rarg(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_20 = l_Lean_Elab_Term_finalizePatternDecls(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = x_18;
x_24 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Match_31__withElaboratedLHS___spec__1), 9, 2);
lean_closure_set(x_24, 0, x_12);
lean_closure_set(x_24, 1, x_23);
x_25 = x_24;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_26 = lean_apply_7(x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg___lambda__1___boxed), 11, 2);
lean_closure_set(x_29, 0, x_4);
lean_closure_set(x_29, 1, x_19);
x_30 = l_Lean_Elab_Term_withDepElimPatterns___rarg(x_21, x_27, x_29, x_5, x_6, x_7, x_8, x_9, x_10, x_28);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_31 = !lean_is_exclusive(x_26);
if (x_31 == 0)
{
return x_26;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_26, 0);
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_26);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_35 = !lean_is_exclusive(x_20);
if (x_35 == 0)
{
return x_20;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_20, 0);
x_37 = lean_ctor_get(x_20, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_20);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_39 = !lean_is_exclusive(x_15);
if (x_39 == 0)
{
return x_15;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_15, 0);
x_41 = lean_ctor_get(x_15, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_15);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_31__withElaboratedLHS(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = l_String_splitAux___main___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2(x_1, x_5);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_System_FilePath_dirName___closed__1;
x_9 = l_Lean_Name_toStringWithSep___main(x_8, x_7);
x_10 = l_List_reprAux___main___rarg___closed__1;
x_11 = lean_string_append(x_10, x_9);
lean_dec(x_9);
x_12 = lean_string_append(x_11, x_6);
lean_dec(x_6);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
x_14 = l_System_FilePath_dirName___closed__1;
x_15 = l_Lean_Name_toStringWithSep___main(x_14, x_13);
x_16 = l_Lean_Elab_Term_PatternVar_hasToString___closed__1;
x_17 = lean_string_append(x_16, x_15);
lean_dec(x_15);
x_18 = l_List_reprAux___main___rarg___closed__1;
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = lean_string_append(x_19, x_6);
lean_dec(x_6);
return x_20;
}
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_21; 
x_21 = l_String_splitAux___main___closed__1;
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
lean_dec(x_2);
x_24 = 0;
x_25 = l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2(x_24, x_23);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_22, 0);
lean_inc(x_26);
lean_dec(x_22);
x_27 = l_System_FilePath_dirName___closed__1;
x_28 = l_Lean_Name_toStringWithSep___main(x_27, x_26);
x_29 = lean_string_append(x_28, x_25);
lean_dec(x_25);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_30 = lean_ctor_get(x_22, 0);
lean_inc(x_30);
lean_dec(x_22);
x_31 = l_System_FilePath_dirName___closed__1;
x_32 = l_Lean_Name_toStringWithSep___main(x_31, x_30);
x_33 = l_Lean_Elab_Term_PatternVar_hasToString___closed__1;
x_34 = lean_string_append(x_33, x_32);
lean_dec(x_32);
x_35 = lean_string_append(x_34, x_25);
lean_dec(x_25);
return x_35;
}
}
}
}
}
lean_object* l_List_toString___at_Lean_Elab_Term_elabMatchAltView___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_List_repr___rarg___closed__1;
return x_2;
}
else
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = 1;
x_4 = l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2(x_3, x_1);
x_5 = l_List_repr___rarg___closed__2;
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = l_List_repr___rarg___closed__3;
x_8 = lean_string_append(x_6, x_7);
return x_8;
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rhs: ");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_Elab_Term_elabTermEnsuringType(x_12, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_ctor_get(x_3, 0);
lean_inc(x_18);
x_19 = l_List_redLength___main___rarg(x_18);
x_20 = lean_mk_empty_array_with_capacity(x_19);
lean_dec(x_19);
x_21 = l_List_toArrayAux___main___rarg(x_18, x_20);
x_22 = x_21;
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Array_umapMAux___main___at___private_Lean_Meta_EqnCompiler_Match_2__withAltsAux___main___spec__1(x_23, x_22);
x_25 = x_24;
x_26 = l_Array_isEmpty___rarg(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_free_object(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_27 = l_Lean_mkLambdaFVars___at_Lean_Elab_Term_elabImplicitLambdaAux___spec__1(x_25, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
x_31 = lean_ctor_get(x_9, 0);
lean_inc(x_31);
lean_inc(x_2);
x_32 = l_Lean_checkTraceOption(x_31, x_2);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_3);
lean_ctor_set(x_33, 1, x_29);
lean_ctor_set(x_27, 0, x_33);
return x_27;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_free_object(x_27);
lean_inc(x_29);
x_34 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_34, 0, x_29);
x_35 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3;
x_36 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_Elab_Term_logTrace(x_2, x_36, x_5, x_6, x_7, x_8, x_9, x_10, x_30);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_37, 0);
lean_dec(x_39);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_3);
lean_ctor_set(x_40, 1, x_29);
lean_ctor_set(x_37, 0, x_40);
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_37, 1);
lean_inc(x_41);
lean_dec(x_37);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_3);
lean_ctor_set(x_42, 1, x_29);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_29);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_37);
if (x_44 == 0)
{
return x_37;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_37, 0);
x_46 = lean_ctor_get(x_37, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_37);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_48 = lean_ctor_get(x_27, 0);
x_49 = lean_ctor_get(x_27, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_27);
x_50 = lean_ctor_get(x_9, 0);
lean_inc(x_50);
lean_inc(x_2);
x_51 = l_Lean_checkTraceOption(x_50, x_2);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_3);
lean_ctor_set(x_52, 1, x_48);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_49);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_inc(x_48);
x_54 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_54, 0, x_48);
x_55 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3;
x_56 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = l_Lean_Elab_Term_logTrace(x_2, x_56, x_5, x_6, x_7, x_8, x_9, x_10, x_49);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_59 = x_57;
} else {
 lean_dec_ref(x_57);
 x_59 = lean_box(0);
}
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_3);
lean_ctor_set(x_60, 1, x_48);
if (lean_is_scalar(x_59)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_59;
}
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_58);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_48);
lean_dec(x_3);
x_62 = lean_ctor_get(x_57, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_57, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_64 = x_57;
} else {
 lean_dec_ref(x_57);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_66 = !lean_is_exclusive(x_27);
if (x_66 == 0)
{
return x_27;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_27, 0);
x_68 = lean_ctor_get(x_27, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_27);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; 
lean_dec(x_25);
x_70 = l_Lean_mkThunk(x_16);
x_71 = lean_ctor_get(x_9, 0);
lean_inc(x_71);
lean_inc(x_2);
x_72 = l_Lean_checkTraceOption(x_71, x_2);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_3);
lean_ctor_set(x_73, 1, x_70);
lean_ctor_set(x_14, 0, x_73);
return x_14;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_free_object(x_14);
lean_inc(x_70);
x_74 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_74, 0, x_70);
x_75 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3;
x_76 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
x_77 = l_Lean_Elab_Term_logTrace(x_2, x_76, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_77) == 0)
{
uint8_t x_78; 
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_77, 0);
lean_dec(x_79);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_3);
lean_ctor_set(x_80, 1, x_70);
lean_ctor_set(x_77, 0, x_80);
return x_77;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_77, 1);
lean_inc(x_81);
lean_dec(x_77);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_3);
lean_ctor_set(x_82, 1, x_70);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
else
{
uint8_t x_84; 
lean_dec(x_70);
lean_dec(x_3);
x_84 = !lean_is_exclusive(x_77);
if (x_84 == 0)
{
return x_77;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_77, 0);
x_86 = lean_ctor_get(x_77, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_77);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_88 = lean_ctor_get(x_14, 0);
x_89 = lean_ctor_get(x_14, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_14);
x_90 = lean_ctor_get(x_3, 0);
lean_inc(x_90);
x_91 = l_List_redLength___main___rarg(x_90);
x_92 = lean_mk_empty_array_with_capacity(x_91);
lean_dec(x_91);
x_93 = l_List_toArrayAux___main___rarg(x_90, x_92);
x_94 = x_93;
x_95 = lean_unsigned_to_nat(0u);
x_96 = l_Array_umapMAux___main___at___private_Lean_Meta_EqnCompiler_Match_2__withAltsAux___main___spec__1(x_95, x_94);
x_97 = x_96;
x_98 = l_Array_isEmpty___rarg(x_97);
if (x_98 == 0)
{
lean_object* x_99; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_99 = l_Lean_mkLambdaFVars___at_Lean_Elab_Term_elabImplicitLambdaAux___spec__1(x_97, x_88, x_5, x_6, x_7, x_8, x_9, x_10, x_89);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_102 = x_99;
} else {
 lean_dec_ref(x_99);
 x_102 = lean_box(0);
}
x_103 = lean_ctor_get(x_9, 0);
lean_inc(x_103);
lean_inc(x_2);
x_104 = l_Lean_checkTraceOption(x_103, x_2);
lean_dec(x_103);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_3);
lean_ctor_set(x_105, 1, x_100);
if (lean_is_scalar(x_102)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_102;
}
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_101);
return x_106;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_102);
lean_inc(x_100);
x_107 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_107, 0, x_100);
x_108 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3;
x_109 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_107);
x_110 = l_Lean_Elab_Term_logTrace(x_2, x_109, x_5, x_6, x_7, x_8, x_9, x_10, x_101);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_112 = x_110;
} else {
 lean_dec_ref(x_110);
 x_112 = lean_box(0);
}
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_3);
lean_ctor_set(x_113, 1, x_100);
if (lean_is_scalar(x_112)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_112;
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_111);
return x_114;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_100);
lean_dec(x_3);
x_115 = lean_ctor_get(x_110, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_110, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_117 = x_110;
} else {
 lean_dec_ref(x_110);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_117)) {
 x_118 = lean_alloc_ctor(1, 2, 0);
} else {
 x_118 = x_117;
}
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_116);
return x_118;
}
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_119 = lean_ctor_get(x_99, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_99, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_121 = x_99;
} else {
 lean_dec_ref(x_99);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_121;
}
lean_ctor_set(x_122, 0, x_119);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
else
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; 
lean_dec(x_97);
x_123 = l_Lean_mkThunk(x_88);
x_124 = lean_ctor_get(x_9, 0);
lean_inc(x_124);
lean_inc(x_2);
x_125 = l_Lean_checkTraceOption(x_124, x_2);
lean_dec(x_124);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_3);
lean_ctor_set(x_126, 1, x_123);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_89);
return x_127;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_inc(x_123);
x_128 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_128, 0, x_123);
x_129 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3;
x_130 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_128);
x_131 = l_Lean_Elab_Term_logTrace(x_2, x_130, x_5, x_6, x_7, x_8, x_9, x_10, x_89);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_132 = lean_ctor_get(x_131, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_133 = x_131;
} else {
 lean_dec_ref(x_131);
 x_133 = lean_box(0);
}
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_3);
lean_ctor_set(x_134, 1, x_123);
if (lean_is_scalar(x_133)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_133;
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_132);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_123);
lean_dec(x_3);
x_136 = lean_ctor_get(x_131, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_131, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_138 = x_131;
} else {
 lean_dec_ref(x_131);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
}
}
}
else
{
uint8_t x_140; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_140 = !lean_is_exclusive(x_14);
if (x_140 == 0)
{
return x_14;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_14, 0);
x_142 = lean_ctor_get(x_14, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_14);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMatchAltView___lambda__1), 11, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
x_14 = l___private_Lean_Elab_Match_31__withElaboratedLHS___rarg(x_4, x_12, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatchAltView___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("patternVars: ");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatchAltView___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabMatchAltView___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatchAltView___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabMatchAltView___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabMatchAltView(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 3);
x_14 = l_Lean_replaceRef(x_10, x_13);
lean_dec(x_10);
x_15 = l_Lean_replaceRef(x_14, x_13);
lean_dec(x_14);
x_16 = l_Lean_replaceRef(x_15, x_13);
lean_dec(x_13);
lean_dec(x_15);
lean_inc(x_12);
lean_ctor_set(x_7, 3, x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_17 = l___private_Lean_Elab_Match_21__collectPatternVars(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13;
x_23 = l_Lean_checkTraceOption(x_12, x_22);
lean_dec(x_12);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMatchAltView___lambda__2___boxed), 11, 3);
lean_closure_set(x_24, 0, x_21);
lean_closure_set(x_24, 1, x_22);
lean_closure_set(x_24, 2, x_2);
x_25 = l___private_Lean_Elab_Match_23__withPatternVars___rarg(x_20, x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_26 = l_Array_toList___rarg(x_20);
x_27 = l_List_toString___at_Lean_Elab_Term_elabMatchAltView___spec__1(x_26);
x_28 = l_Array_HasRepr___rarg___closed__1;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = l_Lean_Elab_Term_elabMatchAltView___closed__3;
x_33 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_34 = l_Lean_Elab_Term_logTrace(x_22, x_33, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMatchAltView___lambda__2___boxed), 11, 3);
lean_closure_set(x_36, 0, x_21);
lean_closure_set(x_36, 1, x_22);
lean_closure_set(x_36, 2, x_2);
x_37 = l___private_Lean_Elab_Match_23__withPatternVars___rarg(x_20, x_36, x_3, x_4, x_5, x_6, x_7, x_8, x_35);
return x_37;
}
else
{
uint8_t x_38; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_34);
if (x_38 == 0)
{
return x_34;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_34, 0);
x_40 = lean_ctor_get(x_34, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_34);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_7);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_17);
if (x_42 == 0)
{
return x_17;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_17, 0);
x_44 = lean_ctor_get(x_17, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_17);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_46 = lean_ctor_get(x_7, 0);
x_47 = lean_ctor_get(x_7, 1);
x_48 = lean_ctor_get(x_7, 2);
x_49 = lean_ctor_get(x_7, 3);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_7);
x_50 = l_Lean_replaceRef(x_10, x_49);
lean_dec(x_10);
x_51 = l_Lean_replaceRef(x_50, x_49);
lean_dec(x_50);
x_52 = l_Lean_replaceRef(x_51, x_49);
lean_dec(x_49);
lean_dec(x_51);
lean_inc(x_46);
x_53 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_53, 0, x_46);
lean_ctor_set(x_53, 1, x_47);
lean_ctor_set(x_53, 2, x_48);
lean_ctor_set(x_53, 3, x_52);
lean_inc(x_8);
lean_inc(x_53);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_54 = l___private_Lean_Elab_Match_21__collectPatternVars(x_1, x_3, x_4, x_5, x_6, x_53, x_8, x_9);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_ctor_get(x_55, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_dec(x_55);
x_59 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13;
x_60 = l_Lean_checkTraceOption(x_46, x_59);
lean_dec(x_46);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMatchAltView___lambda__2___boxed), 11, 3);
lean_closure_set(x_61, 0, x_58);
lean_closure_set(x_61, 1, x_59);
lean_closure_set(x_61, 2, x_2);
x_62 = l___private_Lean_Elab_Match_23__withPatternVars___rarg(x_57, x_61, x_3, x_4, x_5, x_6, x_53, x_8, x_56);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_63 = l_Array_toList___rarg(x_57);
x_64 = l_List_toString___at_Lean_Elab_Term_elabMatchAltView___spec__1(x_63);
x_65 = l_Array_HasRepr___rarg___closed__1;
x_66 = lean_string_append(x_65, x_64);
lean_dec(x_64);
x_67 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_68 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_69 = l_Lean_Elab_Term_elabMatchAltView___closed__3;
x_70 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
lean_inc(x_8);
lean_inc(x_53);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_71 = l_Lean_Elab_Term_logTrace(x_59, x_70, x_3, x_4, x_5, x_6, x_53, x_8, x_56);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
lean_dec(x_71);
x_73 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMatchAltView___lambda__2___boxed), 11, 3);
lean_closure_set(x_73, 0, x_58);
lean_closure_set(x_73, 1, x_59);
lean_closure_set(x_73, 2, x_2);
x_74 = l___private_Lean_Elab_Match_23__withPatternVars___rarg(x_57, x_73, x_3, x_4, x_5, x_6, x_53, x_8, x_72);
return x_74;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_53);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_75 = lean_ctor_get(x_71, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_71, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_77 = x_71;
} else {
 lean_dec_ref(x_71);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_53);
lean_dec(x_46);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_79 = lean_ctor_get(x_54, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_54, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_81 = x_54;
} else {
 lean_dec_ref(x_54);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(1, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
}
}
lean_object* l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_elabMatchAltView___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_mkMotiveType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l_Lean_Meta_getLevel(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_mkSort(x_9);
x_12 = l_Lean_mkForallFVars___at___private_Lean_Meta_InferType_5__inferLambdaType___spec__1(x_1, x_11, x_3, x_4, x_5, x_6, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_mkMotiveType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_mkMotiveType___lambda__1), 7, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_mkMotiveType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = lean_apply_7(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_16 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_Elab_Term_mkMotiveType___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_19 = l_Lean_Meta_forallTelescopeReducing___rarg(x_1, x_18, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_21);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_20);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_20);
x_27 = !lean_is_exclusive(x_22);
if (x_27 == 0)
{
return x_22;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_22, 0);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_22);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_19, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_19, 1);
lean_inc(x_32);
lean_dec(x_19);
x_33 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set_tag(x_33, 1);
lean_ctor_set(x_33, 0, x_31);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_31);
x_38 = !lean_is_exclusive(x_33);
if (x_38 == 0)
{
return x_33;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_33, 0);
x_40 = lean_ctor_get(x_33, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_33);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_16);
if (x_42 == 0)
{
return x_16;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_16, 0);
x_44 = lean_ctor_get(x_16, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_16);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_12);
if (x_46 == 0)
{
return x_12;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_12, 0);
x_48 = lean_ctor_get(x_12, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_12);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_Lean_Elab_Term_mkMotiveType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_mkMotiveType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_mkElim(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = lean_apply_7(x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_19 = l_Lean_Meta_Match_mkElim(x_1, x_2, x_3, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_20);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_20);
x_27 = !lean_is_exclusive(x_22);
if (x_27 == 0)
{
return x_22;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_22, 0);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_22);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_19, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_19, 1);
lean_inc(x_32);
lean_dec(x_19);
x_33 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set_tag(x_33, 1);
lean_ctor_set(x_33, 0, x_31);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_31);
x_38 = !lean_is_exclusive(x_33);
if (x_38 == 0)
{
return x_33;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_33, 0);
x_40 = lean_ctor_get(x_33, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_33);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_17);
if (x_42 == 0)
{
return x_17;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_17, 0);
x_44 = lean_ctor_get(x_17, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_17);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_13);
if (x_46 == 0)
{
return x_13;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_13, 0);
x_48 = lean_ctor_get(x_13, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_13);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
lean_object* l_List_map___main___at_Lean_Elab_Term_reportElimResultErrors___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_8 = l_Nat_repr(x_7);
x_9 = l_Array_HasRepr___rarg___closed__1;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = l_List_map___main___at_Lean_Elab_Term_reportElimResultErrors___spec__1(x_5);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_12, x_14);
lean_dec(x_12);
x_16 = l_Nat_repr(x_15);
x_17 = l_Array_HasRepr___rarg___closed__1;
x_18 = lean_string_append(x_17, x_16);
lean_dec(x_16);
x_19 = l_List_map___main___at_Lean_Elab_Term_reportElimResultErrors___spec__1(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_reportElimResultErrors___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("missing cases:");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_reportElimResultErrors___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_reportElimResultErrors___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_reportElimResultErrors___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_reportElimResultErrors___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_reportElimResultErrors___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_reportElimResultErrors___closed__3;
x_2 = l_Lean_MessageData_ofList___closed__3;
x_3 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_reportElimResultErrors___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unused alternatives: ");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_reportElimResultErrors___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_reportElimResultErrors___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_reportElimResultErrors___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_reportElimResultErrors___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_reportElimResultErrors(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = l_List_isEmpty___rarg(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_1);
x_11 = l_Lean_Meta_Match_counterExamplesToMessageData(x_9);
x_12 = l_Lean_Elab_Term_reportElimResultErrors___closed__4;
x_13 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_9);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
lean_dec(x_1);
x_20 = l_List_isEmpty___rarg(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = l_List_map___main___at_Lean_Elab_Term_reportElimResultErrors___spec__1(x_19);
x_22 = l_List_toString___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__2(x_21);
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Lean_Elab_Term_reportElimResultErrors___closed__7;
x_26 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_8);
return x_29;
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_32__elabMatchAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_3);
x_12 = lean_nat_dec_lt(x_2, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_13 = x_3;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_array_fget(x_3, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_fset(x_3, x_2, x_16);
x_18 = x_15;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_19 = l_Lean_Elab_Term_elabMatchAltView(x_18, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_2, x_22);
x_24 = x_20;
x_25 = lean_array_fset(x_17, x_2, x_24);
lean_dec(x_2);
x_2 = x_23;
x_3 = x_25;
x_10 = x_21;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_32__elabMatchAux___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = x_2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
x_13 = x_10;
x_14 = lean_array_fset(x_8, x_1, x_13);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_14;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_32__elabMatchAux___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = x_2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
x_13 = x_10;
x_14 = lean_array_fset(x_8, x_1, x_13);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_14;
goto _start;
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_mkLambdaFVars___at_Lean_Meta_CheckAssignment_assignToConstFun___spec__1___boxed), 7, 0);
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elim");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Match_32__elabMatchAux___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("result: ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_32__elabMatchAux___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_32__elabMatchAux___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("matchType: ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_32__elabMatchAux___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_32__elabMatchAux___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_get_size(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l___private_Lean_Elab_Match_5__elabMatchOptType(x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Elab_Term_expandMacrosInPatterns(x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_14);
x_19 = l___private_Lean_Elab_Match_7__elabDiscrs(x_1, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_147; lean_object* x_148; uint8_t x_149; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_147 = lean_ctor_get(x_9, 0);
lean_inc(x_147);
x_148 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13;
x_149 = l_Lean_checkTraceOption(x_147, x_148);
lean_dec(x_147);
if (x_149 == 0)
{
x_22 = x_21;
goto block_146;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_inc(x_14);
x_150 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_150, 0, x_14);
x_151 = l___private_Lean_Elab_Match_32__elabMatchAux___closed__9;
x_152 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_150);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_153 = l_Lean_Elab_Term_logTrace(x_148, x_152, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; 
x_154 = lean_ctor_get(x_153, 1);
lean_inc(x_154);
lean_dec(x_153);
x_22 = x_154;
goto block_146;
}
else
{
uint8_t x_155; 
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_155 = !lean_is_exclusive(x_153);
if (x_155 == 0)
{
return x_153;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_153, 0);
x_157 = lean_ctor_get(x_153, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_153);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
block_146:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = x_17;
x_24 = lean_unsigned_to_nat(0u);
lean_inc(x_14);
x_25 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Match_32__elabMatchAux___spec__1), 10, 3);
lean_closure_set(x_25, 0, x_14);
lean_closure_set(x_25, 1, x_24);
lean_closure_set(x_25, 2, x_23);
x_26 = x_25;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_27 = lean_apply_7(x_26, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = x_28;
lean_inc(x_30);
x_31 = l_Array_umapMAux___main___at___private_Lean_Elab_Match_32__elabMatchAux___spec__2(x_24, x_30);
x_32 = x_31;
x_33 = l_Array_umapMAux___main___at___private_Lean_Elab_Match_32__elabMatchAux___spec__3(x_24, x_30);
x_34 = x_33;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_14);
x_35 = l_Lean_Elab_Term_mkMotiveType(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_29);
lean_dec(x_4);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Meta_CheckAssignment_checkFVar___closed__4;
x_39 = lean_ctor_get(x_38, 2);
lean_inc(x_39);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_40 = lean_apply_7(x_39, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_44 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_43, x_5, x_6, x_7, x_8, x_9, x_10, x_42);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = l___private_Lean_Elab_Match_32__elabMatchAux___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_47 = l_Lean_Meta_forallTelescopeReducing___rarg(x_14, x_46, x_7, x_8, x_9, x_10, x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_50 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_41, x_5, x_6, x_7, x_8, x_9, x_10, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = l___private_Lean_Elab_Match_32__elabMatchAux___closed__3;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_53 = l_Lean_Elab_Term_mkAuxName(x_52, x_5, x_6, x_7, x_8, x_9, x_10, x_51);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Array_toList___rarg(x_34);
lean_dec(x_34);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_57 = l_Lean_Elab_Term_mkElim(x_54, x_36, x_56, x_5, x_6, x_7, x_8, x_9, x_10, x_55);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_58);
x_60 = l_Lean_Elab_Term_reportElimResultErrors(x_58, x_5, x_6, x_7, x_8, x_9, x_10, x_59);
if (lean_obj_tag(x_60) == 0)
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_62 = lean_ctor_get(x_60, 1);
x_63 = lean_ctor_get(x_60, 0);
lean_dec(x_63);
x_64 = lean_ctor_get(x_58, 0);
lean_inc(x_64);
lean_dec(x_58);
x_65 = l_Lean_mkApp(x_64, x_48);
x_66 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_20, x_20, x_24, x_65);
lean_dec(x_20);
x_67 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_32, x_32, x_24, x_66);
lean_dec(x_32);
x_68 = lean_ctor_get(x_9, 0);
lean_inc(x_68);
x_69 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13;
x_70 = l_Lean_checkTraceOption(x_68, x_69);
lean_dec(x_68);
if (x_70 == 0)
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_60, 0, x_67);
return x_60;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_free_object(x_60);
lean_inc(x_67);
x_71 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_71, 0, x_67);
x_72 = l___private_Lean_Elab_Match_32__elabMatchAux___closed__6;
x_73 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = l_Lean_Elab_Term_logTrace(x_69, x_73, x_5, x_6, x_7, x_8, x_9, x_10, x_62);
if (lean_obj_tag(x_74) == 0)
{
uint8_t x_75; 
x_75 = !lean_is_exclusive(x_74);
if (x_75 == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_74, 0);
lean_dec(x_76);
lean_ctor_set(x_74, 0, x_67);
return x_74;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_77);
lean_dec(x_74);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_67);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
else
{
uint8_t x_79; 
lean_dec(x_67);
x_79 = !lean_is_exclusive(x_74);
if (x_79 == 0)
{
return x_74;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_74, 0);
x_81 = lean_ctor_get(x_74, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_74);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_83 = lean_ctor_get(x_60, 1);
lean_inc(x_83);
lean_dec(x_60);
x_84 = lean_ctor_get(x_58, 0);
lean_inc(x_84);
lean_dec(x_58);
x_85 = l_Lean_mkApp(x_84, x_48);
x_86 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_20, x_20, x_24, x_85);
lean_dec(x_20);
x_87 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_32, x_32, x_24, x_86);
lean_dec(x_32);
x_88 = lean_ctor_get(x_9, 0);
lean_inc(x_88);
x_89 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13;
x_90 = l_Lean_checkTraceOption(x_88, x_89);
lean_dec(x_88);
if (x_90 == 0)
{
lean_object* x_91; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_87);
lean_ctor_set(x_91, 1, x_83);
return x_91;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_inc(x_87);
x_92 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_92, 0, x_87);
x_93 = l___private_Lean_Elab_Match_32__elabMatchAux___closed__6;
x_94 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_92);
x_95 = l_Lean_Elab_Term_logTrace(x_89, x_94, x_5, x_6, x_7, x_8, x_9, x_10, x_83);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_97 = x_95;
} else {
 lean_dec_ref(x_95);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_87);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_87);
x_99 = lean_ctor_get(x_95, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_95, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_101 = x_95;
} else {
 lean_dec_ref(x_95);
 x_101 = lean_box(0);
}
if (lean_is_scalar(x_101)) {
 x_102 = lean_alloc_ctor(1, 2, 0);
} else {
 x_102 = x_101;
}
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_100);
return x_102;
}
}
}
}
else
{
uint8_t x_103; 
lean_dec(x_58);
lean_dec(x_48);
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_103 = !lean_is_exclusive(x_60);
if (x_103 == 0)
{
return x_60;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_60, 0);
x_105 = lean_ctor_get(x_60, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_60);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
else
{
uint8_t x_107; 
lean_dec(x_48);
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_107 = !lean_is_exclusive(x_57);
if (x_107 == 0)
{
return x_57;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_57, 0);
x_109 = lean_ctor_get(x_57, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_57);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
else
{
uint8_t x_111; 
lean_dec(x_48);
lean_dec(x_36);
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_111 = !lean_is_exclusive(x_53);
if (x_111 == 0)
{
return x_53;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_53, 0);
x_113 = lean_ctor_get(x_53, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_53);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
else
{
uint8_t x_115; 
lean_dec(x_48);
lean_dec(x_36);
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_115 = !lean_is_exclusive(x_50);
if (x_115 == 0)
{
return x_50;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_50, 0);
x_117 = lean_ctor_get(x_50, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_50);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_dec(x_36);
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_20);
x_119 = lean_ctor_get(x_47, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_47, 1);
lean_inc(x_120);
lean_dec(x_47);
x_121 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_41, x_5, x_6, x_7, x_8, x_9, x_10, x_120);
if (lean_obj_tag(x_121) == 0)
{
uint8_t x_122; 
x_122 = !lean_is_exclusive(x_121);
if (x_122 == 0)
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_121, 0);
lean_dec(x_123);
lean_ctor_set_tag(x_121, 1);
lean_ctor_set(x_121, 0, x_119);
return x_121;
}
else
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_121, 1);
lean_inc(x_124);
lean_dec(x_121);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_119);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
else
{
uint8_t x_126; 
lean_dec(x_119);
x_126 = !lean_is_exclusive(x_121);
if (x_126 == 0)
{
return x_121;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_121, 0);
x_128 = lean_ctor_get(x_121, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_121);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
return x_129;
}
}
}
}
else
{
uint8_t x_130; 
lean_dec(x_41);
lean_dec(x_36);
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_130 = !lean_is_exclusive(x_44);
if (x_130 == 0)
{
return x_44;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_44, 0);
x_132 = lean_ctor_get(x_44, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_44);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
}
else
{
uint8_t x_134; 
lean_dec(x_36);
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_134 = !lean_is_exclusive(x_40);
if (x_134 == 0)
{
return x_40;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_40, 0);
x_136 = lean_ctor_get(x_40, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_40);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
}
}
else
{
uint8_t x_138; 
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_138 = !lean_is_exclusive(x_35);
if (x_138 == 0)
{
return x_35;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_35, 0);
x_140 = lean_ctor_get(x_35, 1);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_35);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
return x_141;
}
}
}
else
{
uint8_t x_142; 
lean_dec(x_20);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_142 = !lean_is_exclusive(x_27);
if (x_142 == 0)
{
return x_27;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_27, 0);
x_144 = lean_ctor_get(x_27, 1);
lean_inc(x_144);
lean_inc(x_143);
lean_dec(x_27);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
return x_145;
}
}
}
}
else
{
uint8_t x_159; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_159 = !lean_is_exclusive(x_19);
if (x_159 == 0)
{
return x_19;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_19, 0);
x_161 = lean_ctor_get(x_19, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_19);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
}
else
{
uint8_t x_163; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_163 = !lean_is_exclusive(x_16);
if (x_163 == 0)
{
return x_16;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_16, 0);
x_165 = lean_ctor_get(x_16, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_16);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
}
}
else
{
uint8_t x_167; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_167 = !lean_is_exclusive(x_13);
if (x_167 == 0)
{
return x_13;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_13, 0);
x_169 = lean_ctor_get(x_13, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_13);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_32__elabMatchAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_32__elabMatchAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_33__waitExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = 0;
x_12 = lean_box(0);
x_13 = l_Lean_Elab_Term_mkFreshTypeMVar(x_11, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_10);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_9, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
else
{
uint8_t x_20; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_9);
if (x_20 == 0)
{
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_34__elabMatchCore___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = x_2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = x_6;
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_9, x_10);
lean_dec(x_9);
x_12 = lean_nat_add(x_1, x_10);
x_13 = x_11;
x_14 = lean_array_fset(x_8, x_1, x_13);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_14;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_Match_34__elabMatchCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = l___private_Lean_Elab_Match_33__waitExpectedType(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = l_Lean_Syntax_getArgs(x_14);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Array_empty___closed__1;
x_19 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_16, x_15, x_17, x_18);
lean_dec(x_15);
x_20 = x_19;
x_21 = l_Array_umapMAux___main___at___private_Lean_Elab_Match_34__elabMatchCore___spec__1(x_17, x_20);
x_22 = x_21;
x_23 = l___private_Lean_Elab_Match_8__getMatchAlts(x_1);
x_24 = l_Lean_Syntax_getArg(x_1, x_16);
x_25 = l___private_Lean_Elab_Match_32__elabMatchAux(x_22, x_23, x_24, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_24);
lean_dec(x_22);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_26 = !lean_is_exclusive(x_10);
if (x_26 == 0)
{
return x_10;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_10, 0);
x_28 = lean_ctor_get(x_10, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_10);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_34__elabMatchCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_34__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__2;
x_2 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_nullKind___closed__2;
x_2 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__3;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Lean_Parser_Command_openRenamingItem___elambda__1___closed__5;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Lean_setOptionFromString___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__6;
x_2 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__5;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_4, x_7);
if (x_6 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__5;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_dec(x_13);
lean_inc(x_4);
lean_inc(x_12);
lean_ctor_set(x_3, 1, x_4);
x_14 = lean_array_fget(x_1, x_2);
x_15 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
lean_inc(x_14);
x_16 = l_Lean_Syntax_isOfKind(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_4);
x_17 = lean_nat_add(x_2, x_7);
lean_dec(x_2);
x_2 = x_17;
x_4 = x_8;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_nat_add(x_2, x_7);
lean_dec(x_2);
x_20 = l___private_Lean_Elab_Match_35__mkMatchType___main(x_1, x_19, x_3, x_8);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Lean_Syntax_getArg(x_14, x_23);
x_25 = l_Lean_Syntax_isNone(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_26 = l_Lean_Syntax_getArg(x_14, x_7);
lean_dec(x_14);
x_27 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
x_28 = l_Lean_addMacroScope(x_12, x_27, x_4);
x_29 = lean_box(0);
x_30 = l_Lean_SourceInfo_inhabited___closed__1;
x_31 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__2;
x_32 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_32, 2, x_28);
lean_ctor_set(x_32, 3, x_29);
x_33 = l_Array_empty___closed__1;
lean_inc(x_32);
x_34 = lean_array_push(x_33, x_32);
x_35 = l_Lean_nullKind___closed__2;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__4;
x_38 = lean_array_push(x_37, x_36);
x_39 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__4;
x_40 = lean_array_push(x_38, x_39);
x_41 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_42 = lean_array_push(x_40, x_41);
x_43 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__6;
x_44 = lean_array_push(x_42, x_43);
x_45 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = lean_array_push(x_33, x_46);
x_48 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__5;
x_49 = lean_array_push(x_47, x_48);
x_50 = lean_array_push(x_33, x_26);
x_51 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__6;
x_52 = lean_array_push(x_50, x_51);
x_53 = lean_array_push(x_52, x_32);
x_54 = l_Lean_Parser_Term_eq___elambda__1___closed__2;
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = lean_array_push(x_33, x_55);
x_57 = lean_array_push(x_56, x_48);
x_58 = lean_array_push(x_57, x_22);
x_59 = l_Lean_Parser_Term_arrow___elambda__1___closed__2;
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_array_push(x_49, x_60);
x_62 = l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
lean_ctor_set(x_20, 0, x_63);
return x_20;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_4);
x_64 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__7;
x_65 = lean_array_push(x_64, x_22);
x_66 = l_Lean_Parser_Term_arrow___elambda__1___closed__2;
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
lean_ctor_set(x_20, 0, x_67);
return x_20;
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_68 = lean_ctor_get(x_20, 0);
x_69 = lean_ctor_get(x_20, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_20);
x_70 = lean_unsigned_to_nat(0u);
x_71 = l_Lean_Syntax_getArg(x_14, x_70);
x_72 = l_Lean_Syntax_isNone(x_71);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_73 = l_Lean_Syntax_getArg(x_14, x_7);
lean_dec(x_14);
x_74 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
x_75 = l_Lean_addMacroScope(x_12, x_74, x_4);
x_76 = lean_box(0);
x_77 = l_Lean_SourceInfo_inhabited___closed__1;
x_78 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__2;
x_79 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
lean_ctor_set(x_79, 2, x_75);
lean_ctor_set(x_79, 3, x_76);
x_80 = l_Array_empty___closed__1;
lean_inc(x_79);
x_81 = lean_array_push(x_80, x_79);
x_82 = l_Lean_nullKind___closed__2;
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__4;
x_85 = lean_array_push(x_84, x_83);
x_86 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__4;
x_87 = lean_array_push(x_85, x_86);
x_88 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_89 = lean_array_push(x_87, x_88);
x_90 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__6;
x_91 = lean_array_push(x_89, x_90);
x_92 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_array_push(x_80, x_93);
x_95 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__5;
x_96 = lean_array_push(x_94, x_95);
x_97 = lean_array_push(x_80, x_73);
x_98 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__6;
x_99 = lean_array_push(x_97, x_98);
x_100 = lean_array_push(x_99, x_79);
x_101 = l_Lean_Parser_Term_eq___elambda__1___closed__2;
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
x_103 = lean_array_push(x_80, x_102);
x_104 = lean_array_push(x_103, x_95);
x_105 = lean_array_push(x_104, x_68);
x_106 = l_Lean_Parser_Term_arrow___elambda__1___closed__2;
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_105);
x_108 = lean_array_push(x_96, x_107);
x_109 = l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_108);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_69);
return x_111;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_4);
x_112 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__7;
x_113 = lean_array_push(x_112, x_68);
x_114 = l_Lean_Parser_Term_arrow___elambda__1___closed__2;
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_69);
return x_116;
}
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; uint8_t x_123; 
x_117 = lean_ctor_get(x_3, 0);
x_118 = lean_ctor_get(x_3, 2);
x_119 = lean_ctor_get(x_3, 3);
lean_inc(x_119);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_3);
lean_inc(x_4);
lean_inc(x_117);
x_120 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_120, 0, x_117);
lean_ctor_set(x_120, 1, x_4);
lean_ctor_set(x_120, 2, x_118);
lean_ctor_set(x_120, 3, x_119);
x_121 = lean_array_fget(x_1, x_2);
x_122 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
lean_inc(x_121);
x_123 = l_Lean_Syntax_isOfKind(x_121, x_122);
if (x_123 == 0)
{
lean_object* x_124; 
lean_dec(x_121);
lean_dec(x_117);
lean_dec(x_4);
x_124 = lean_nat_add(x_2, x_7);
lean_dec(x_2);
x_2 = x_124;
x_3 = x_120;
x_4 = x_8;
goto _start;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; 
x_126 = lean_nat_add(x_2, x_7);
lean_dec(x_2);
x_127 = l___private_Lean_Elab_Match_35__mkMatchType___main(x_1, x_126, x_120, x_8);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_130 = x_127;
} else {
 lean_dec_ref(x_127);
 x_130 = lean_box(0);
}
x_131 = lean_unsigned_to_nat(0u);
x_132 = l_Lean_Syntax_getArg(x_121, x_131);
x_133 = l_Lean_Syntax_isNone(x_132);
lean_dec(x_132);
if (x_133 == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_134 = l_Lean_Syntax_getArg(x_121, x_7);
lean_dec(x_121);
x_135 = l_Lean_Meta_AbstractMVars_abstractExprMVars___main___closed__2;
x_136 = l_Lean_addMacroScope(x_117, x_135, x_4);
x_137 = lean_box(0);
x_138 = l_Lean_SourceInfo_inhabited___closed__1;
x_139 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__2;
x_140 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
lean_ctor_set(x_140, 2, x_136);
lean_ctor_set(x_140, 3, x_137);
x_141 = l_Array_empty___closed__1;
lean_inc(x_140);
x_142 = lean_array_push(x_141, x_140);
x_143 = l_Lean_nullKind___closed__2;
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_142);
x_145 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__4;
x_146 = lean_array_push(x_145, x_144);
x_147 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__4;
x_148 = lean_array_push(x_146, x_147);
x_149 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__5;
x_150 = lean_array_push(x_148, x_149);
x_151 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__6;
x_152 = lean_array_push(x_150, x_151);
x_153 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_152);
x_155 = lean_array_push(x_141, x_154);
x_156 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__5;
x_157 = lean_array_push(x_155, x_156);
x_158 = lean_array_push(x_141, x_134);
x_159 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__6;
x_160 = lean_array_push(x_158, x_159);
x_161 = lean_array_push(x_160, x_140);
x_162 = l_Lean_Parser_Term_eq___elambda__1___closed__2;
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
x_164 = lean_array_push(x_141, x_163);
x_165 = lean_array_push(x_164, x_156);
x_166 = lean_array_push(x_165, x_128);
x_167 = l_Lean_Parser_Term_arrow___elambda__1___closed__2;
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_166);
x_169 = lean_array_push(x_157, x_168);
x_170 = l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_169);
if (lean_is_scalar(x_130)) {
 x_172 = lean_alloc_ctor(0, 2, 0);
} else {
 x_172 = x_130;
}
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_129);
return x_172;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_121);
lean_dec(x_117);
lean_dec(x_4);
x_173 = l___private_Lean_Elab_Match_35__mkMatchType___main___closed__7;
x_174 = lean_array_push(x_173, x_128);
x_175 = l_Lean_Parser_Term_arrow___elambda__1___closed__2;
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_174);
if (lean_is_scalar(x_130)) {
 x_177 = lean_alloc_ctor(0, 2, 0);
} else {
 x_177 = x_130;
}
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_129);
return x_177;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_35__mkMatchType___main(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_35__mkMatchType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_35__mkMatchType___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_35__mkMatchType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_35__mkMatchType(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_36__mkOptType(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = l_List_reprAux___main___rarg___closed__1;
x_3 = l_Lean_mkAtomFrom(x_1, x_2);
x_4 = l_Lean_mkAppStx___closed__9;
x_5 = lean_array_push(x_4, x_3);
x_6 = lean_array_push(x_5, x_1);
x_7 = l_Lean_Parser_Term_typeSpec___elambda__1___closed__2;
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
x_9 = l_Lean_mkOptionalNode___closed__2;
x_10 = lean_array_push(x_9, x_8);
x_11 = l_Lean_nullKind;
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
lean_object* _init_l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Eq.refl");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_mkEqRefl___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__9;
x_2 = l_Lean_mkOptionalNode___closed__1;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_2, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_array_fget(x_1, x_2);
x_10 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_2, x_12);
lean_dec(x_2);
x_14 = lean_array_push(x_3, x_9);
x_2 = x_13;
x_3 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Syntax_getArg(x_9, x_16);
x_18 = l_Lean_Syntax_isNone(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_19 = l_Lean_mkOptionalNode___closed__1;
lean_inc(x_9);
x_20 = l_Lean_Syntax_setArg(x_9, x_16, x_19);
x_21 = lean_array_push(x_3, x_20);
x_22 = l_List_reprAux___main___rarg___closed__1;
x_23 = l_Lean_mkAtomFrom(x_9, x_22);
lean_dec(x_9);
x_24 = lean_array_push(x_21, x_23);
x_25 = lean_ctor_get(x_4, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_4, 0);
lean_inc(x_26);
x_27 = l_Lean_Meta_mkEqRefl___closed__2;
x_28 = l_Lean_addMacroScope(x_26, x_27, x_25);
x_29 = l_Lean_SourceInfo_inhabited___closed__1;
x_30 = l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__3;
x_31 = l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__5;
x_32 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_30);
lean_ctor_set(x_32, 2, x_28);
lean_ctor_set(x_32, 3, x_31);
x_33 = l_Array_empty___closed__1;
x_34 = lean_array_push(x_33, x_32);
x_35 = l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__7;
x_36 = lean_array_push(x_34, x_35);
x_37 = l_Lean_mkAppStx___closed__8;
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__6;
x_40 = lean_array_push(x_39, x_38);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_10);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_array_push(x_24, x_41);
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_nat_add(x_2, x_43);
lean_dec(x_2);
x_2 = x_44;
x_3 = x_42;
goto _start;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_add(x_2, x_46);
lean_dec(x_2);
x_48 = lean_array_push(x_3, x_9);
x_2 = x_47;
x_3 = x_48;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Match_37__mkNewDiscrs___main(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Match_37__mkNewDiscrs___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Match_37__mkNewDiscrs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Match_37__mkNewDiscrs(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* _init_l___private_Lean_Elab_Match_38__mkNewPatterns___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid number of patterns, expected #");
return x_1;
}
}
lean_object* l___private_Lean_Elab_Match_38__mkNewPatterns___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_2);
x_9 = lean_nat_dec_lt(x_4, x_8);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_array_fget(x_2, x_4);
x_12 = lean_array_get_size(x_3);
x_13 = lean_nat_dec_lt(x_4, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
x_14 = l_Nat_repr(x_8);
x_15 = l___private_Lean_Elab_Match_38__mkNewPatterns___main___closed__1;
x_16 = lean_string_append(x_15, x_14);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_7);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_8);
x_19 = lean_array_fget(x_3, x_4);
x_20 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
lean_inc(x_11);
x_21 = l_Lean_Syntax_isOfKind(x_11, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_11);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_4, x_22);
lean_dec(x_4);
x_24 = lean_array_push(x_5, x_19);
x_4 = x_23;
x_5 = x_24;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_unsigned_to_nat(0u);
x_27 = l_Lean_Syntax_getArg(x_11, x_26);
lean_dec(x_11);
x_28 = l_Lean_Syntax_isNone(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_inc(x_19);
x_29 = lean_array_push(x_5, x_19);
x_30 = l_List_reprAux___main___rarg___closed__1;
x_31 = l_Lean_mkAtomFrom(x_19, x_30);
lean_dec(x_19);
x_32 = lean_array_push(x_29, x_31);
x_33 = l_Lean_Syntax_getArg(x_27, x_26);
lean_dec(x_27);
x_34 = lean_array_push(x_32, x_33);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_nat_add(x_4, x_35);
lean_dec(x_4);
x_4 = x_36;
x_5 = x_34;
goto _start;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_27);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_4, x_38);
lean_dec(x_4);
x_40 = lean_array_push(x_5, x_19);
x_4 = x_39;
x_5 = x_40;
goto _start;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_Match_38__mkNewPatterns___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_Match_38__mkNewPatterns___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Match_38__mkNewPatterns(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_Match_38__mkNewPatterns___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Match_38__mkNewPatterns___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_Match_38__mkNewPatterns(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Match_39__mkNewAlt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Syntax_getArg(x_2, x_5);
x_7 = l_Lean_Syntax_getArgs(x_6);
lean_dec(x_6);
x_8 = l_Array_empty___closed__1;
lean_inc(x_2);
x_9 = l___private_Lean_Elab_Match_38__mkNewPatterns___main(x_2, x_1, x_7, x_5, x_8, x_3, x_4);
lean_dec(x_7);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Lean_nullKind;
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_Syntax_setArg(x_2, x_5, x_13);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = l_Lean_nullKind;
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
x_19 = l_Lean_Syntax_setArg(x_2, x_5, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_9);
if (x_21 == 0)
{
return x_9;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_9, 0);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_9);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_39__mkNewAlt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_39__mkNewAlt(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Init_LeanInit_14__mapSepElemsMAux___main___at___private_Lean_Elab_Match_40__mkNewAlts___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_1);
x_8 = lean_nat_dec_lt(x_3, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_array_fget(x_1, x_3);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_mod(x_3, x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_12, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_3, x_15);
lean_dec(x_3);
x_17 = lean_array_push(x_4, x_10);
x_3 = x_16;
x_4 = x_17;
goto _start;
}
else
{
lean_object* x_19; 
lean_inc(x_2);
lean_inc(x_5);
x_19 = lean_apply_3(x_2, x_10, x_5, x_6);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_3, x_22);
lean_dec(x_3);
x_24 = lean_array_push(x_4, x_20);
x_3 = x_23;
x_4 = x_24;
x_6 = x_21;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
return x_19;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_19, 0);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_19);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
}
lean_object* l_Array_mapSepElemsM___at___private_Lean_Elab_Match_40__mkNewAlts___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_empty___closed__1;
x_7 = l___private_Init_LeanInit_14__mapSepElemsMAux___main___at___private_Lean_Elab_Match_40__mkNewAlts___spec__2(x_1, x_2, x_5, x_6, x_3, x_4);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Match_40__mkNewAlts(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_39__mkNewAlt___boxed), 4, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_40__mkNewAlts___spec__1(x_2, x_5, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Init_LeanInit_14__mapSepElemsMAux___main___at___private_Lean_Elab_Match_40__mkNewAlts___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_LeanInit_14__mapSepElemsMAux___main___at___private_Lean_Elab_Match_40__mkNewAlts___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_mapSepElemsM___at___private_Lean_Elab_Match_40__mkNewAlts___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_40__mkNewAlts___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_40__mkNewAlts___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_40__mkNewAlts(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Match_41__expandMatchDiscr_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("match expected type should not be provided when discriminants with equality proofs are used");
return x_1;
}
}
lean_object* l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_empty___closed__1;
x_10 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_7, x_6, x_8, x_9);
x_11 = lean_array_get_size(x_10);
x_12 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Match_41__expandMatchDiscr_x3f___spec__1(x_1, x_10, x_11, x_8);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_3);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_Lean_Syntax_getArg(x_1, x_7);
x_16 = l_Lean_Syntax_isNone(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_17 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f___closed__1;
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_15);
lean_inc(x_2);
x_20 = l___private_Lean_Elab_Match_35__mkMatchType___main(x_6, x_8, x_2, x_3);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Syntax_copyInfo(x_21, x_1);
x_24 = l___private_Lean_Elab_Match_36__mkOptType(x_23);
x_25 = l_Lean_Syntax_setArg(x_1, x_7, x_24);
lean_inc(x_2);
x_26 = l___private_Lean_Elab_Match_37__mkNewDiscrs___main(x_6, x_8, x_9, x_2, x_22);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_nullKind;
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
x_31 = l_Lean_Syntax_setArg(x_25, x_4, x_30);
x_32 = lean_unsigned_to_nat(5u);
x_33 = l_Lean_Syntax_getArg(x_31, x_32);
x_34 = l_Lean_Syntax_getArgs(x_33);
lean_dec(x_33);
x_35 = l___private_Lean_Elab_Match_40__mkNewAlts(x_6, x_34, x_2, x_28);
lean_dec(x_34);
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_29);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_Syntax_setArg(x_31, x_32, x_38);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_35, 0, x_40);
return x_35;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_35, 0);
x_42 = lean_ctor_get(x_35, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_35);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_29);
lean_ctor_set(x_43, 1, x_41);
x_44 = l_Lean_Syntax_setArg(x_31, x_32, x_43);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_42);
return x_46;
}
}
else
{
uint8_t x_47; 
lean_dec(x_31);
x_47 = !lean_is_exclusive(x_35);
if (x_47 == 0)
{
return x_35;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_35, 0);
x_49 = lean_ctor_get(x_35, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_35);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Match_41__expandMatchDiscr_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Match_41__expandMatchDiscr_x3f___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_37; lean_object* x_1385; uint8_t x_1386; 
x_1385 = l_Lean_Parser_Term_match___elambda__1___closed__2;
lean_inc(x_1);
x_1386 = l_Lean_Syntax_isOfKind(x_1, x_1385);
if (x_1386 == 0)
{
uint8_t x_1387; 
x_1387 = 0;
x_37 = x_1387;
goto block_1384;
}
else
{
lean_object* x_1388; lean_object* x_1389; lean_object* x_1390; uint8_t x_1391; 
x_1388 = l_Lean_Syntax_getArgs(x_1);
x_1389 = lean_array_get_size(x_1388);
lean_dec(x_1388);
x_1390 = lean_unsigned_to_nat(6u);
x_1391 = lean_nat_dec_eq(x_1389, x_1390);
lean_dec(x_1389);
x_37 = x_1391;
goto block_1384;
}
block_36:
{
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_34__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
lean_dec(x_1);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_3, 6);
lean_inc(x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_3, 6, x_17);
x_18 = 1;
x_19 = l_Lean_Elab_Term_elabTerm(x_13, x_2, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_20 = lean_ctor_get(x_3, 0);
x_21 = lean_ctor_get(x_3, 1);
x_22 = lean_ctor_get(x_3, 2);
x_23 = lean_ctor_get(x_3, 3);
x_24 = lean_ctor_get(x_3, 4);
x_25 = lean_ctor_get(x_3, 5);
x_26 = lean_ctor_get(x_3, 6);
x_27 = lean_ctor_get(x_3, 7);
x_28 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_29 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_30 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_3);
lean_inc(x_13);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_13);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_26);
x_33 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_33, 0, x_20);
lean_ctor_set(x_33, 1, x_21);
lean_ctor_set(x_33, 2, x_22);
lean_ctor_set(x_33, 3, x_23);
lean_ctor_set(x_33, 4, x_24);
lean_ctor_set(x_33, 5, x_25);
lean_ctor_set(x_33, 6, x_32);
lean_ctor_set(x_33, 7, x_27);
lean_ctor_set_uint8(x_33, sizeof(void*)*8, x_28);
lean_ctor_set_uint8(x_33, sizeof(void*)*8 + 1, x_29);
lean_ctor_set_uint8(x_33, sizeof(void*)*8 + 2, x_30);
x_34 = 1;
x_35 = l_Lean_Elab_Term_elabTerm(x_13, x_2, x_34, x_33, x_4, x_5, x_6, x_7, x_8, x_11);
return x_35;
}
}
}
block_1384:
{
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_38 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_st_ref_get(x_8, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_ctor_get(x_42, 0);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_st_ref_get(x_4, x_43);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_ctor_get(x_46, 4);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_ctor_get(x_7, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_7, 2);
lean_inc(x_50);
x_51 = lean_environment_main_module(x_44);
x_52 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_39);
lean_ctor_set(x_52, 2, x_49);
lean_ctor_set(x_52, 3, x_50);
lean_inc(x_1);
x_53 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_52, x_48);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_st_ref_take(x_4, x_47);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = !lean_is_exclusive(x_57);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_57, 4);
lean_dec(x_60);
lean_ctor_set(x_57, 4, x_55);
x_61 = lean_st_ref_set(x_4, x_57, x_58);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_10 = x_54;
x_11 = x_62;
goto block_36;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_63 = lean_ctor_get(x_57, 0);
x_64 = lean_ctor_get(x_57, 1);
x_65 = lean_ctor_get(x_57, 2);
x_66 = lean_ctor_get(x_57, 3);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_57);
x_67 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_67, 0, x_63);
lean_ctor_set(x_67, 1, x_64);
lean_ctor_set(x_67, 2, x_65);
lean_ctor_set(x_67, 3, x_66);
lean_ctor_set(x_67, 4, x_55);
x_68 = lean_st_ref_set(x_4, x_67, x_58);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_10 = x_54;
x_11 = x_69;
goto block_36;
}
}
else
{
lean_object* x_70; 
lean_dec(x_2);
lean_dec(x_1);
x_70 = lean_ctor_get(x_53, 0);
lean_inc(x_70);
lean_dec(x_53);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_71, x_74, x_3, x_4, x_5, x_6, x_7, x_8, x_47);
lean_dec(x_71);
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
return x_75;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_75, 0);
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_75);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
else
{
lean_object* x_80; uint8_t x_81; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_80 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_47);
x_81 = !lean_is_exclusive(x_80);
if (x_81 == 0)
{
return x_80;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_80, 0);
x_83 = lean_ctor_get(x_80, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_80);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
else
{
lean_object* x_85; lean_object* x_86; uint8_t x_87; lean_object* x_1378; uint8_t x_1379; 
x_85 = lean_unsigned_to_nat(1u);
x_86 = l_Lean_Syntax_getArg(x_1, x_85);
x_1378 = l_Lean_nullKind___closed__2;
lean_inc(x_86);
x_1379 = l_Lean_Syntax_isOfKind(x_86, x_1378);
if (x_1379 == 0)
{
uint8_t x_1380; 
x_1380 = 0;
x_87 = x_1380;
goto block_1377;
}
else
{
lean_object* x_1381; lean_object* x_1382; uint8_t x_1383; 
x_1381 = l_Lean_Syntax_getArgs(x_86);
x_1382 = lean_array_get_size(x_1381);
lean_dec(x_1381);
x_1383 = lean_nat_dec_eq(x_1382, x_85);
lean_dec(x_1382);
x_87 = x_1383;
goto block_1377;
}
block_1377:
{
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_86);
x_88 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
x_91 = lean_st_ref_get(x_8, x_90);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_ctor_get(x_92, 0);
lean_inc(x_94);
lean_dec(x_92);
x_95 = lean_st_ref_get(x_4, x_93);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = lean_ctor_get(x_96, 4);
lean_inc(x_98);
lean_dec(x_96);
x_99 = lean_ctor_get(x_7, 1);
lean_inc(x_99);
x_100 = lean_ctor_get(x_7, 2);
lean_inc(x_100);
x_101 = lean_environment_main_module(x_94);
x_102 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_89);
lean_ctor_set(x_102, 2, x_99);
lean_ctor_set(x_102, 3, x_100);
lean_inc(x_1);
x_103 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_102, x_98);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = lean_st_ref_take(x_4, x_97);
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_109 = !lean_is_exclusive(x_107);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_107, 4);
lean_dec(x_110);
lean_ctor_set(x_107, 4, x_105);
x_111 = lean_st_ref_set(x_4, x_107, x_108);
x_112 = lean_ctor_get(x_111, 1);
lean_inc(x_112);
lean_dec(x_111);
x_10 = x_104;
x_11 = x_112;
goto block_36;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_113 = lean_ctor_get(x_107, 0);
x_114 = lean_ctor_get(x_107, 1);
x_115 = lean_ctor_get(x_107, 2);
x_116 = lean_ctor_get(x_107, 3);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_107);
x_117 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_117, 0, x_113);
lean_ctor_set(x_117, 1, x_114);
lean_ctor_set(x_117, 2, x_115);
lean_ctor_set(x_117, 3, x_116);
lean_ctor_set(x_117, 4, x_105);
x_118 = lean_st_ref_set(x_4, x_117, x_108);
x_119 = lean_ctor_get(x_118, 1);
lean_inc(x_119);
lean_dec(x_118);
x_10 = x_104;
x_11 = x_119;
goto block_36;
}
}
else
{
lean_object* x_120; 
lean_dec(x_2);
lean_dec(x_1);
x_120 = lean_ctor_get(x_103, 0);
lean_inc(x_120);
lean_dec(x_103);
if (lean_obj_tag(x_120) == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; 
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_123, 0, x_122);
x_124 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_124, 0, x_123);
x_125 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_121, x_124, x_3, x_4, x_5, x_6, x_7, x_8, x_97);
lean_dec(x_121);
x_126 = !lean_is_exclusive(x_125);
if (x_126 == 0)
{
return x_125;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_125, 0);
x_128 = lean_ctor_get(x_125, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_125);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
return x_129;
}
}
else
{
lean_object* x_130; uint8_t x_131; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_130 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_97);
x_131 = !lean_is_exclusive(x_130);
if (x_131 == 0)
{
return x_130;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_130, 0);
x_133 = lean_ctor_get(x_130, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_130);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
}
else
{
lean_object* x_135; lean_object* x_136; uint8_t x_137; lean_object* x_1370; uint8_t x_1371; 
x_135 = lean_unsigned_to_nat(0u);
x_136 = l_Lean_Syntax_getArg(x_86, x_135);
lean_dec(x_86);
x_1370 = l_Lean_Parser_Term_matchDiscr___elambda__1___closed__2;
lean_inc(x_136);
x_1371 = l_Lean_Syntax_isOfKind(x_136, x_1370);
if (x_1371 == 0)
{
uint8_t x_1372; 
x_1372 = 0;
x_137 = x_1372;
goto block_1369;
}
else
{
lean_object* x_1373; lean_object* x_1374; lean_object* x_1375; uint8_t x_1376; 
x_1373 = l_Lean_Syntax_getArgs(x_136);
x_1374 = lean_array_get_size(x_1373);
lean_dec(x_1373);
x_1375 = lean_unsigned_to_nat(2u);
x_1376 = lean_nat_dec_eq(x_1374, x_1375);
lean_dec(x_1374);
x_137 = x_1376;
goto block_1369;
}
block_1369:
{
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec(x_136);
x_138 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
lean_dec(x_138);
x_141 = lean_st_ref_get(x_8, x_140);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
lean_dec(x_141);
x_144 = lean_ctor_get(x_142, 0);
lean_inc(x_144);
lean_dec(x_142);
x_145 = lean_st_ref_get(x_4, x_143);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = lean_ctor_get(x_146, 4);
lean_inc(x_148);
lean_dec(x_146);
x_149 = lean_ctor_get(x_7, 1);
lean_inc(x_149);
x_150 = lean_ctor_get(x_7, 2);
lean_inc(x_150);
x_151 = lean_environment_main_module(x_144);
x_152 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_139);
lean_ctor_set(x_152, 2, x_149);
lean_ctor_set(x_152, 3, x_150);
lean_inc(x_1);
x_153 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_152, x_148);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_153, 1);
lean_inc(x_155);
lean_dec(x_153);
x_156 = lean_st_ref_take(x_4, x_147);
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
lean_dec(x_156);
x_159 = !lean_is_exclusive(x_157);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_157, 4);
lean_dec(x_160);
lean_ctor_set(x_157, 4, x_155);
x_161 = lean_st_ref_set(x_4, x_157, x_158);
x_162 = lean_ctor_get(x_161, 1);
lean_inc(x_162);
lean_dec(x_161);
x_10 = x_154;
x_11 = x_162;
goto block_36;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_163 = lean_ctor_get(x_157, 0);
x_164 = lean_ctor_get(x_157, 1);
x_165 = lean_ctor_get(x_157, 2);
x_166 = lean_ctor_get(x_157, 3);
lean_inc(x_166);
lean_inc(x_165);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_157);
x_167 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_167, 0, x_163);
lean_ctor_set(x_167, 1, x_164);
lean_ctor_set(x_167, 2, x_165);
lean_ctor_set(x_167, 3, x_166);
lean_ctor_set(x_167, 4, x_155);
x_168 = lean_st_ref_set(x_4, x_167, x_158);
x_169 = lean_ctor_get(x_168, 1);
lean_inc(x_169);
lean_dec(x_168);
x_10 = x_154;
x_11 = x_169;
goto block_36;
}
}
else
{
lean_object* x_170; 
lean_dec(x_2);
lean_dec(x_1);
x_170 = lean_ctor_get(x_153, 0);
lean_inc(x_170);
lean_dec(x_153);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; uint8_t x_176; 
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
lean_dec(x_170);
x_173 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_173, 0, x_172);
x_174 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_174, 0, x_173);
x_175 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_171, x_174, x_3, x_4, x_5, x_6, x_7, x_8, x_147);
lean_dec(x_171);
x_176 = !lean_is_exclusive(x_175);
if (x_176 == 0)
{
return x_175;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_175, 0);
x_178 = lean_ctor_get(x_175, 1);
lean_inc(x_178);
lean_inc(x_177);
lean_dec(x_175);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set(x_179, 1, x_178);
return x_179;
}
}
else
{
lean_object* x_180; uint8_t x_181; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_180 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_147);
x_181 = !lean_is_exclusive(x_180);
if (x_181 == 0)
{
return x_180;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_180, 0);
x_183 = lean_ctor_get(x_180, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_180);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_183);
return x_184;
}
}
}
}
else
{
lean_object* x_185; uint8_t x_186; lean_object* x_1363; uint8_t x_1364; 
x_185 = l_Lean_Syntax_getArg(x_136, x_135);
x_1363 = l_Lean_nullKind___closed__2;
lean_inc(x_185);
x_1364 = l_Lean_Syntax_isOfKind(x_185, x_1363);
if (x_1364 == 0)
{
uint8_t x_1365; 
lean_dec(x_185);
x_1365 = 0;
x_186 = x_1365;
goto block_1362;
}
else
{
lean_object* x_1366; lean_object* x_1367; uint8_t x_1368; 
x_1366 = l_Lean_Syntax_getArgs(x_185);
lean_dec(x_185);
x_1367 = lean_array_get_size(x_1366);
lean_dec(x_1366);
x_1368 = lean_nat_dec_eq(x_1367, x_135);
lean_dec(x_1367);
x_186 = x_1368;
goto block_1362;
}
block_1362:
{
if (x_186 == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
lean_dec(x_136);
x_187 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
lean_dec(x_187);
x_190 = lean_st_ref_get(x_8, x_189);
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_190, 1);
lean_inc(x_192);
lean_dec(x_190);
x_193 = lean_ctor_get(x_191, 0);
lean_inc(x_193);
lean_dec(x_191);
x_194 = lean_st_ref_get(x_4, x_192);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
lean_dec(x_194);
x_197 = lean_ctor_get(x_195, 4);
lean_inc(x_197);
lean_dec(x_195);
x_198 = lean_ctor_get(x_7, 1);
lean_inc(x_198);
x_199 = lean_ctor_get(x_7, 2);
lean_inc(x_199);
x_200 = lean_environment_main_module(x_193);
x_201 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_188);
lean_ctor_set(x_201, 2, x_198);
lean_ctor_set(x_201, 3, x_199);
lean_inc(x_1);
x_202 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_201, x_197);
if (lean_obj_tag(x_202) == 0)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; uint8_t x_208; 
x_203 = lean_ctor_get(x_202, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_202, 1);
lean_inc(x_204);
lean_dec(x_202);
x_205 = lean_st_ref_take(x_4, x_196);
x_206 = lean_ctor_get(x_205, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_205, 1);
lean_inc(x_207);
lean_dec(x_205);
x_208 = !lean_is_exclusive(x_206);
if (x_208 == 0)
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_209 = lean_ctor_get(x_206, 4);
lean_dec(x_209);
lean_ctor_set(x_206, 4, x_204);
x_210 = lean_st_ref_set(x_4, x_206, x_207);
x_211 = lean_ctor_get(x_210, 1);
lean_inc(x_211);
lean_dec(x_210);
x_10 = x_203;
x_11 = x_211;
goto block_36;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_212 = lean_ctor_get(x_206, 0);
x_213 = lean_ctor_get(x_206, 1);
x_214 = lean_ctor_get(x_206, 2);
x_215 = lean_ctor_get(x_206, 3);
lean_inc(x_215);
lean_inc(x_214);
lean_inc(x_213);
lean_inc(x_212);
lean_dec(x_206);
x_216 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_216, 0, x_212);
lean_ctor_set(x_216, 1, x_213);
lean_ctor_set(x_216, 2, x_214);
lean_ctor_set(x_216, 3, x_215);
lean_ctor_set(x_216, 4, x_204);
x_217 = lean_st_ref_set(x_4, x_216, x_207);
x_218 = lean_ctor_get(x_217, 1);
lean_inc(x_218);
lean_dec(x_217);
x_10 = x_203;
x_11 = x_218;
goto block_36;
}
}
else
{
lean_object* x_219; 
lean_dec(x_2);
lean_dec(x_1);
x_219 = lean_ctor_get(x_202, 0);
lean_inc(x_219);
lean_dec(x_202);
if (lean_obj_tag(x_219) == 0)
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; uint8_t x_225; 
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_219, 1);
lean_inc(x_221);
lean_dec(x_219);
x_222 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_222, 0, x_221);
x_223 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_223, 0, x_222);
x_224 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_220, x_223, x_3, x_4, x_5, x_6, x_7, x_8, x_196);
lean_dec(x_220);
x_225 = !lean_is_exclusive(x_224);
if (x_225 == 0)
{
return x_224;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_226 = lean_ctor_get(x_224, 0);
x_227 = lean_ctor_get(x_224, 1);
lean_inc(x_227);
lean_inc(x_226);
lean_dec(x_224);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_226);
lean_ctor_set(x_228, 1, x_227);
return x_228;
}
}
else
{
lean_object* x_229; uint8_t x_230; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_229 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_196);
x_230 = !lean_is_exclusive(x_229);
if (x_230 == 0)
{
return x_229;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_231 = lean_ctor_get(x_229, 0);
x_232 = lean_ctor_get(x_229, 1);
lean_inc(x_232);
lean_inc(x_231);
lean_dec(x_229);
x_233 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_233, 0, x_231);
lean_ctor_set(x_233, 1, x_232);
return x_233;
}
}
}
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; lean_object* x_848; uint8_t x_849; uint8_t x_850; 
x_234 = l_Lean_Syntax_getArg(x_136, x_85);
lean_dec(x_136);
x_235 = lean_unsigned_to_nat(2u);
x_236 = l_Lean_Syntax_getArg(x_1, x_235);
x_848 = l_Lean_nullKind___closed__2;
lean_inc(x_236);
x_849 = l_Lean_Syntax_isOfKind(x_236, x_848);
if (x_849 == 0)
{
uint8_t x_1358; 
x_1358 = 0;
x_850 = x_1358;
goto block_1357;
}
else
{
lean_object* x_1359; lean_object* x_1360; uint8_t x_1361; 
x_1359 = l_Lean_Syntax_getArgs(x_236);
x_1360 = lean_array_get_size(x_1359);
lean_dec(x_1359);
x_1361 = lean_nat_dec_eq(x_1360, x_135);
lean_dec(x_1360);
x_850 = x_1361;
goto block_1357;
}
block_847:
{
if (x_237 == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
lean_dec(x_236);
lean_dec(x_234);
x_238 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = lean_st_ref_get(x_8, x_240);
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_241, 1);
lean_inc(x_243);
lean_dec(x_241);
x_244 = lean_ctor_get(x_242, 0);
lean_inc(x_244);
lean_dec(x_242);
x_245 = lean_st_ref_get(x_4, x_243);
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_245, 1);
lean_inc(x_247);
lean_dec(x_245);
x_248 = lean_ctor_get(x_246, 4);
lean_inc(x_248);
lean_dec(x_246);
x_249 = lean_ctor_get(x_7, 1);
lean_inc(x_249);
x_250 = lean_ctor_get(x_7, 2);
lean_inc(x_250);
x_251 = lean_environment_main_module(x_244);
x_252 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_252, 0, x_251);
lean_ctor_set(x_252, 1, x_239);
lean_ctor_set(x_252, 2, x_249);
lean_ctor_set(x_252, 3, x_250);
lean_inc(x_1);
x_253 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_252, x_248);
if (lean_obj_tag(x_253) == 0)
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; uint8_t x_259; 
x_254 = lean_ctor_get(x_253, 0);
lean_inc(x_254);
x_255 = lean_ctor_get(x_253, 1);
lean_inc(x_255);
lean_dec(x_253);
x_256 = lean_st_ref_take(x_4, x_247);
x_257 = lean_ctor_get(x_256, 0);
lean_inc(x_257);
x_258 = lean_ctor_get(x_256, 1);
lean_inc(x_258);
lean_dec(x_256);
x_259 = !lean_is_exclusive(x_257);
if (x_259 == 0)
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_260 = lean_ctor_get(x_257, 4);
lean_dec(x_260);
lean_ctor_set(x_257, 4, x_255);
x_261 = lean_st_ref_set(x_4, x_257, x_258);
x_262 = lean_ctor_get(x_261, 1);
lean_inc(x_262);
lean_dec(x_261);
x_10 = x_254;
x_11 = x_262;
goto block_36;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_263 = lean_ctor_get(x_257, 0);
x_264 = lean_ctor_get(x_257, 1);
x_265 = lean_ctor_get(x_257, 2);
x_266 = lean_ctor_get(x_257, 3);
lean_inc(x_266);
lean_inc(x_265);
lean_inc(x_264);
lean_inc(x_263);
lean_dec(x_257);
x_267 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_267, 0, x_263);
lean_ctor_set(x_267, 1, x_264);
lean_ctor_set(x_267, 2, x_265);
lean_ctor_set(x_267, 3, x_266);
lean_ctor_set(x_267, 4, x_255);
x_268 = lean_st_ref_set(x_4, x_267, x_258);
x_269 = lean_ctor_get(x_268, 1);
lean_inc(x_269);
lean_dec(x_268);
x_10 = x_254;
x_11 = x_269;
goto block_36;
}
}
else
{
lean_object* x_270; 
lean_dec(x_2);
lean_dec(x_1);
x_270 = lean_ctor_get(x_253, 0);
lean_inc(x_270);
lean_dec(x_253);
if (lean_obj_tag(x_270) == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; uint8_t x_276; 
x_271 = lean_ctor_get(x_270, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_270, 1);
lean_inc(x_272);
lean_dec(x_270);
x_273 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_273, 0, x_272);
x_274 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_274, 0, x_273);
x_275 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_271, x_274, x_3, x_4, x_5, x_6, x_7, x_8, x_247);
lean_dec(x_271);
x_276 = !lean_is_exclusive(x_275);
if (x_276 == 0)
{
return x_275;
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_277 = lean_ctor_get(x_275, 0);
x_278 = lean_ctor_get(x_275, 1);
lean_inc(x_278);
lean_inc(x_277);
lean_dec(x_275);
x_279 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_279, 0, x_277);
lean_ctor_set(x_279, 1, x_278);
return x_279;
}
}
else
{
lean_object* x_280; uint8_t x_281; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_280 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_247);
x_281 = !lean_is_exclusive(x_280);
if (x_281 == 0)
{
return x_280;
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_282 = lean_ctor_get(x_280, 0);
x_283 = lean_ctor_get(x_280, 1);
lean_inc(x_283);
lean_inc(x_282);
lean_dec(x_280);
x_284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_284, 0, x_282);
lean_ctor_set(x_284, 1, x_283);
return x_284;
}
}
}
}
else
{
lean_object* x_285; uint8_t x_286; lean_object* x_841; uint8_t x_842; 
x_285 = l_Lean_Syntax_getArg(x_236, x_135);
lean_dec(x_236);
x_841 = l_Lean_Parser_Term_typeSpec___elambda__1___closed__2;
lean_inc(x_285);
x_842 = l_Lean_Syntax_isOfKind(x_285, x_841);
if (x_842 == 0)
{
uint8_t x_843; 
x_843 = 0;
x_286 = x_843;
goto block_840;
}
else
{
lean_object* x_844; lean_object* x_845; uint8_t x_846; 
x_844 = l_Lean_Syntax_getArgs(x_285);
x_845 = lean_array_get_size(x_844);
lean_dec(x_844);
x_846 = lean_nat_dec_eq(x_845, x_235);
lean_dec(x_845);
x_286 = x_846;
goto block_840;
}
block_840:
{
if (x_286 == 0)
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; 
lean_dec(x_285);
lean_dec(x_234);
x_287 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_288 = lean_ctor_get(x_287, 0);
lean_inc(x_288);
x_289 = lean_ctor_get(x_287, 1);
lean_inc(x_289);
lean_dec(x_287);
x_290 = lean_st_ref_get(x_8, x_289);
x_291 = lean_ctor_get(x_290, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_290, 1);
lean_inc(x_292);
lean_dec(x_290);
x_293 = lean_ctor_get(x_291, 0);
lean_inc(x_293);
lean_dec(x_291);
x_294 = lean_st_ref_get(x_4, x_292);
x_295 = lean_ctor_get(x_294, 0);
lean_inc(x_295);
x_296 = lean_ctor_get(x_294, 1);
lean_inc(x_296);
lean_dec(x_294);
x_297 = lean_ctor_get(x_295, 4);
lean_inc(x_297);
lean_dec(x_295);
x_298 = lean_ctor_get(x_7, 1);
lean_inc(x_298);
x_299 = lean_ctor_get(x_7, 2);
lean_inc(x_299);
x_300 = lean_environment_main_module(x_293);
x_301 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_301, 0, x_300);
lean_ctor_set(x_301, 1, x_288);
lean_ctor_set(x_301, 2, x_298);
lean_ctor_set(x_301, 3, x_299);
lean_inc(x_1);
x_302 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_301, x_297);
if (lean_obj_tag(x_302) == 0)
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; uint8_t x_308; 
x_303 = lean_ctor_get(x_302, 0);
lean_inc(x_303);
x_304 = lean_ctor_get(x_302, 1);
lean_inc(x_304);
lean_dec(x_302);
x_305 = lean_st_ref_take(x_4, x_296);
x_306 = lean_ctor_get(x_305, 0);
lean_inc(x_306);
x_307 = lean_ctor_get(x_305, 1);
lean_inc(x_307);
lean_dec(x_305);
x_308 = !lean_is_exclusive(x_306);
if (x_308 == 0)
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_309 = lean_ctor_get(x_306, 4);
lean_dec(x_309);
lean_ctor_set(x_306, 4, x_304);
x_310 = lean_st_ref_set(x_4, x_306, x_307);
x_311 = lean_ctor_get(x_310, 1);
lean_inc(x_311);
lean_dec(x_310);
x_10 = x_303;
x_11 = x_311;
goto block_36;
}
else
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; 
x_312 = lean_ctor_get(x_306, 0);
x_313 = lean_ctor_get(x_306, 1);
x_314 = lean_ctor_get(x_306, 2);
x_315 = lean_ctor_get(x_306, 3);
lean_inc(x_315);
lean_inc(x_314);
lean_inc(x_313);
lean_inc(x_312);
lean_dec(x_306);
x_316 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_316, 0, x_312);
lean_ctor_set(x_316, 1, x_313);
lean_ctor_set(x_316, 2, x_314);
lean_ctor_set(x_316, 3, x_315);
lean_ctor_set(x_316, 4, x_304);
x_317 = lean_st_ref_set(x_4, x_316, x_307);
x_318 = lean_ctor_get(x_317, 1);
lean_inc(x_318);
lean_dec(x_317);
x_10 = x_303;
x_11 = x_318;
goto block_36;
}
}
else
{
lean_object* x_319; 
lean_dec(x_2);
lean_dec(x_1);
x_319 = lean_ctor_get(x_302, 0);
lean_inc(x_319);
lean_dec(x_302);
if (lean_obj_tag(x_319) == 0)
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; uint8_t x_325; 
x_320 = lean_ctor_get(x_319, 0);
lean_inc(x_320);
x_321 = lean_ctor_get(x_319, 1);
lean_inc(x_321);
lean_dec(x_319);
x_322 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_322, 0, x_321);
x_323 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_323, 0, x_322);
x_324 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_320, x_323, x_3, x_4, x_5, x_6, x_7, x_8, x_296);
lean_dec(x_320);
x_325 = !lean_is_exclusive(x_324);
if (x_325 == 0)
{
return x_324;
}
else
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; 
x_326 = lean_ctor_get(x_324, 0);
x_327 = lean_ctor_get(x_324, 1);
lean_inc(x_327);
lean_inc(x_326);
lean_dec(x_324);
x_328 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_328, 0, x_326);
lean_ctor_set(x_328, 1, x_327);
return x_328;
}
}
else
{
lean_object* x_329; uint8_t x_330; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_329 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_296);
x_330 = !lean_is_exclusive(x_329);
if (x_330 == 0)
{
return x_329;
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_331 = lean_ctor_get(x_329, 0);
x_332 = lean_ctor_get(x_329, 1);
lean_inc(x_332);
lean_inc(x_331);
lean_dec(x_329);
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_331);
lean_ctor_set(x_333, 1, x_332);
return x_333;
}
}
}
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; uint8_t x_337; lean_object* x_608; uint8_t x_609; uint8_t x_610; 
x_334 = l_Lean_Syntax_getArg(x_285, x_85);
lean_dec(x_285);
x_335 = lean_unsigned_to_nat(4u);
x_336 = l_Lean_Syntax_getArg(x_1, x_335);
x_608 = l_Lean_nullKind___closed__2;
lean_inc(x_336);
x_609 = l_Lean_Syntax_isOfKind(x_336, x_608);
if (x_609 == 0)
{
uint8_t x_836; 
x_836 = 0;
x_610 = x_836;
goto block_835;
}
else
{
lean_object* x_837; lean_object* x_838; uint8_t x_839; 
x_837 = l_Lean_Syntax_getArgs(x_336);
x_838 = lean_array_get_size(x_837);
lean_dec(x_837);
x_839 = lean_nat_dec_eq(x_838, x_135);
lean_dec(x_838);
x_610 = x_839;
goto block_835;
}
block_607:
{
if (x_337 == 0)
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; 
lean_dec(x_334);
lean_dec(x_234);
x_338 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_339 = lean_ctor_get(x_338, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_338, 1);
lean_inc(x_340);
lean_dec(x_338);
x_341 = lean_st_ref_get(x_8, x_340);
x_342 = lean_ctor_get(x_341, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_341, 1);
lean_inc(x_343);
lean_dec(x_341);
x_344 = lean_ctor_get(x_342, 0);
lean_inc(x_344);
lean_dec(x_342);
x_345 = lean_st_ref_get(x_4, x_343);
x_346 = lean_ctor_get(x_345, 0);
lean_inc(x_346);
x_347 = lean_ctor_get(x_345, 1);
lean_inc(x_347);
lean_dec(x_345);
x_348 = lean_ctor_get(x_346, 4);
lean_inc(x_348);
lean_dec(x_346);
x_349 = lean_ctor_get(x_7, 1);
lean_inc(x_349);
x_350 = lean_ctor_get(x_7, 2);
lean_inc(x_350);
x_351 = lean_environment_main_module(x_344);
x_352 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_352, 0, x_351);
lean_ctor_set(x_352, 1, x_339);
lean_ctor_set(x_352, 2, x_349);
lean_ctor_set(x_352, 3, x_350);
lean_inc(x_1);
x_353 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_352, x_348);
if (lean_obj_tag(x_353) == 0)
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; uint8_t x_359; 
x_354 = lean_ctor_get(x_353, 0);
lean_inc(x_354);
x_355 = lean_ctor_get(x_353, 1);
lean_inc(x_355);
lean_dec(x_353);
x_356 = lean_st_ref_take(x_4, x_347);
x_357 = lean_ctor_get(x_356, 0);
lean_inc(x_357);
x_358 = lean_ctor_get(x_356, 1);
lean_inc(x_358);
lean_dec(x_356);
x_359 = !lean_is_exclusive(x_357);
if (x_359 == 0)
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; 
x_360 = lean_ctor_get(x_357, 4);
lean_dec(x_360);
lean_ctor_set(x_357, 4, x_355);
x_361 = lean_st_ref_set(x_4, x_357, x_358);
x_362 = lean_ctor_get(x_361, 1);
lean_inc(x_362);
lean_dec(x_361);
x_10 = x_354;
x_11 = x_362;
goto block_36;
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; 
x_363 = lean_ctor_get(x_357, 0);
x_364 = lean_ctor_get(x_357, 1);
x_365 = lean_ctor_get(x_357, 2);
x_366 = lean_ctor_get(x_357, 3);
lean_inc(x_366);
lean_inc(x_365);
lean_inc(x_364);
lean_inc(x_363);
lean_dec(x_357);
x_367 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_367, 0, x_363);
lean_ctor_set(x_367, 1, x_364);
lean_ctor_set(x_367, 2, x_365);
lean_ctor_set(x_367, 3, x_366);
lean_ctor_set(x_367, 4, x_355);
x_368 = lean_st_ref_set(x_4, x_367, x_358);
x_369 = lean_ctor_get(x_368, 1);
lean_inc(x_369);
lean_dec(x_368);
x_10 = x_354;
x_11 = x_369;
goto block_36;
}
}
else
{
lean_object* x_370; 
lean_dec(x_2);
lean_dec(x_1);
x_370 = lean_ctor_get(x_353, 0);
lean_inc(x_370);
lean_dec(x_353);
if (lean_obj_tag(x_370) == 0)
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; uint8_t x_376; 
x_371 = lean_ctor_get(x_370, 0);
lean_inc(x_371);
x_372 = lean_ctor_get(x_370, 1);
lean_inc(x_372);
lean_dec(x_370);
x_373 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_373, 0, x_372);
x_374 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_374, 0, x_373);
x_375 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_371, x_374, x_3, x_4, x_5, x_6, x_7, x_8, x_347);
lean_dec(x_371);
x_376 = !lean_is_exclusive(x_375);
if (x_376 == 0)
{
return x_375;
}
else
{
lean_object* x_377; lean_object* x_378; lean_object* x_379; 
x_377 = lean_ctor_get(x_375, 0);
x_378 = lean_ctor_get(x_375, 1);
lean_inc(x_378);
lean_inc(x_377);
lean_dec(x_375);
x_379 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_379, 0, x_377);
lean_ctor_set(x_379, 1, x_378);
return x_379;
}
}
else
{
lean_object* x_380; uint8_t x_381; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_380 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_347);
x_381 = !lean_is_exclusive(x_380);
if (x_381 == 0)
{
return x_380;
}
else
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_382 = lean_ctor_get(x_380, 0);
x_383 = lean_ctor_get(x_380, 1);
lean_inc(x_383);
lean_inc(x_382);
lean_dec(x_380);
x_384 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_384, 0, x_382);
lean_ctor_set(x_384, 1, x_383);
return x_384;
}
}
}
}
else
{
lean_object* x_385; lean_object* x_386; uint8_t x_387; lean_object* x_601; uint8_t x_602; 
x_385 = lean_unsigned_to_nat(5u);
x_386 = l_Lean_Syntax_getArg(x_1, x_385);
x_601 = l_Lean_nullKind___closed__2;
lean_inc(x_386);
x_602 = l_Lean_Syntax_isOfKind(x_386, x_601);
if (x_602 == 0)
{
uint8_t x_603; 
x_603 = 0;
x_387 = x_603;
goto block_600;
}
else
{
lean_object* x_604; lean_object* x_605; uint8_t x_606; 
x_604 = l_Lean_Syntax_getArgs(x_386);
x_605 = lean_array_get_size(x_604);
lean_dec(x_604);
x_606 = lean_nat_dec_eq(x_605, x_85);
lean_dec(x_605);
x_387 = x_606;
goto block_600;
}
block_600:
{
if (x_387 == 0)
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; 
lean_dec(x_386);
lean_dec(x_334);
lean_dec(x_234);
x_388 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_389 = lean_ctor_get(x_388, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_388, 1);
lean_inc(x_390);
lean_dec(x_388);
x_391 = lean_st_ref_get(x_8, x_390);
x_392 = lean_ctor_get(x_391, 0);
lean_inc(x_392);
x_393 = lean_ctor_get(x_391, 1);
lean_inc(x_393);
lean_dec(x_391);
x_394 = lean_ctor_get(x_392, 0);
lean_inc(x_394);
lean_dec(x_392);
x_395 = lean_st_ref_get(x_4, x_393);
x_396 = lean_ctor_get(x_395, 0);
lean_inc(x_396);
x_397 = lean_ctor_get(x_395, 1);
lean_inc(x_397);
lean_dec(x_395);
x_398 = lean_ctor_get(x_396, 4);
lean_inc(x_398);
lean_dec(x_396);
x_399 = lean_ctor_get(x_7, 1);
lean_inc(x_399);
x_400 = lean_ctor_get(x_7, 2);
lean_inc(x_400);
x_401 = lean_environment_main_module(x_394);
x_402 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_389);
lean_ctor_set(x_402, 2, x_399);
lean_ctor_set(x_402, 3, x_400);
lean_inc(x_1);
x_403 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_402, x_398);
if (lean_obj_tag(x_403) == 0)
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; uint8_t x_409; 
x_404 = lean_ctor_get(x_403, 0);
lean_inc(x_404);
x_405 = lean_ctor_get(x_403, 1);
lean_inc(x_405);
lean_dec(x_403);
x_406 = lean_st_ref_take(x_4, x_397);
x_407 = lean_ctor_get(x_406, 0);
lean_inc(x_407);
x_408 = lean_ctor_get(x_406, 1);
lean_inc(x_408);
lean_dec(x_406);
x_409 = !lean_is_exclusive(x_407);
if (x_409 == 0)
{
lean_object* x_410; lean_object* x_411; lean_object* x_412; 
x_410 = lean_ctor_get(x_407, 4);
lean_dec(x_410);
lean_ctor_set(x_407, 4, x_405);
x_411 = lean_st_ref_set(x_4, x_407, x_408);
x_412 = lean_ctor_get(x_411, 1);
lean_inc(x_412);
lean_dec(x_411);
x_10 = x_404;
x_11 = x_412;
goto block_36;
}
else
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; 
x_413 = lean_ctor_get(x_407, 0);
x_414 = lean_ctor_get(x_407, 1);
x_415 = lean_ctor_get(x_407, 2);
x_416 = lean_ctor_get(x_407, 3);
lean_inc(x_416);
lean_inc(x_415);
lean_inc(x_414);
lean_inc(x_413);
lean_dec(x_407);
x_417 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_417, 0, x_413);
lean_ctor_set(x_417, 1, x_414);
lean_ctor_set(x_417, 2, x_415);
lean_ctor_set(x_417, 3, x_416);
lean_ctor_set(x_417, 4, x_405);
x_418 = lean_st_ref_set(x_4, x_417, x_408);
x_419 = lean_ctor_get(x_418, 1);
lean_inc(x_419);
lean_dec(x_418);
x_10 = x_404;
x_11 = x_419;
goto block_36;
}
}
else
{
lean_object* x_420; 
lean_dec(x_2);
lean_dec(x_1);
x_420 = lean_ctor_get(x_403, 0);
lean_inc(x_420);
lean_dec(x_403);
if (lean_obj_tag(x_420) == 0)
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; uint8_t x_426; 
x_421 = lean_ctor_get(x_420, 0);
lean_inc(x_421);
x_422 = lean_ctor_get(x_420, 1);
lean_inc(x_422);
lean_dec(x_420);
x_423 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_423, 0, x_422);
x_424 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_424, 0, x_423);
x_425 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_421, x_424, x_3, x_4, x_5, x_6, x_7, x_8, x_397);
lean_dec(x_421);
x_426 = !lean_is_exclusive(x_425);
if (x_426 == 0)
{
return x_425;
}
else
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; 
x_427 = lean_ctor_get(x_425, 0);
x_428 = lean_ctor_get(x_425, 1);
lean_inc(x_428);
lean_inc(x_427);
lean_dec(x_425);
x_429 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_429, 0, x_427);
lean_ctor_set(x_429, 1, x_428);
return x_429;
}
}
else
{
lean_object* x_430; uint8_t x_431; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_430 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_397);
x_431 = !lean_is_exclusive(x_430);
if (x_431 == 0)
{
return x_430;
}
else
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; 
x_432 = lean_ctor_get(x_430, 0);
x_433 = lean_ctor_get(x_430, 1);
lean_inc(x_433);
lean_inc(x_432);
lean_dec(x_430);
x_434 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_434, 0, x_432);
lean_ctor_set(x_434, 1, x_433);
return x_434;
}
}
}
}
else
{
lean_object* x_435; uint8_t x_436; lean_object* x_593; uint8_t x_594; 
x_435 = l_Lean_Syntax_getArg(x_386, x_135);
lean_dec(x_386);
x_593 = l_Lean_Parser_Term_matchAlt___closed__2;
lean_inc(x_435);
x_594 = l_Lean_Syntax_isOfKind(x_435, x_593);
if (x_594 == 0)
{
uint8_t x_595; 
x_595 = 0;
x_436 = x_595;
goto block_592;
}
else
{
lean_object* x_596; lean_object* x_597; lean_object* x_598; uint8_t x_599; 
x_596 = l_Lean_Syntax_getArgs(x_435);
x_597 = lean_array_get_size(x_596);
lean_dec(x_596);
x_598 = lean_unsigned_to_nat(3u);
x_599 = lean_nat_dec_eq(x_597, x_598);
lean_dec(x_597);
x_436 = x_599;
goto block_592;
}
block_592:
{
if (x_436 == 0)
{
lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; 
lean_dec(x_435);
lean_dec(x_334);
lean_dec(x_234);
x_437 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_438 = lean_ctor_get(x_437, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_437, 1);
lean_inc(x_439);
lean_dec(x_437);
x_440 = lean_st_ref_get(x_8, x_439);
x_441 = lean_ctor_get(x_440, 0);
lean_inc(x_441);
x_442 = lean_ctor_get(x_440, 1);
lean_inc(x_442);
lean_dec(x_440);
x_443 = lean_ctor_get(x_441, 0);
lean_inc(x_443);
lean_dec(x_441);
x_444 = lean_st_ref_get(x_4, x_442);
x_445 = lean_ctor_get(x_444, 0);
lean_inc(x_445);
x_446 = lean_ctor_get(x_444, 1);
lean_inc(x_446);
lean_dec(x_444);
x_447 = lean_ctor_get(x_445, 4);
lean_inc(x_447);
lean_dec(x_445);
x_448 = lean_ctor_get(x_7, 1);
lean_inc(x_448);
x_449 = lean_ctor_get(x_7, 2);
lean_inc(x_449);
x_450 = lean_environment_main_module(x_443);
x_451 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_451, 0, x_450);
lean_ctor_set(x_451, 1, x_438);
lean_ctor_set(x_451, 2, x_448);
lean_ctor_set(x_451, 3, x_449);
lean_inc(x_1);
x_452 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_451, x_447);
if (lean_obj_tag(x_452) == 0)
{
lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; uint8_t x_458; 
x_453 = lean_ctor_get(x_452, 0);
lean_inc(x_453);
x_454 = lean_ctor_get(x_452, 1);
lean_inc(x_454);
lean_dec(x_452);
x_455 = lean_st_ref_take(x_4, x_446);
x_456 = lean_ctor_get(x_455, 0);
lean_inc(x_456);
x_457 = lean_ctor_get(x_455, 1);
lean_inc(x_457);
lean_dec(x_455);
x_458 = !lean_is_exclusive(x_456);
if (x_458 == 0)
{
lean_object* x_459; lean_object* x_460; lean_object* x_461; 
x_459 = lean_ctor_get(x_456, 4);
lean_dec(x_459);
lean_ctor_set(x_456, 4, x_454);
x_460 = lean_st_ref_set(x_4, x_456, x_457);
x_461 = lean_ctor_get(x_460, 1);
lean_inc(x_461);
lean_dec(x_460);
x_10 = x_453;
x_11 = x_461;
goto block_36;
}
else
{
lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; 
x_462 = lean_ctor_get(x_456, 0);
x_463 = lean_ctor_get(x_456, 1);
x_464 = lean_ctor_get(x_456, 2);
x_465 = lean_ctor_get(x_456, 3);
lean_inc(x_465);
lean_inc(x_464);
lean_inc(x_463);
lean_inc(x_462);
lean_dec(x_456);
x_466 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_466, 0, x_462);
lean_ctor_set(x_466, 1, x_463);
lean_ctor_set(x_466, 2, x_464);
lean_ctor_set(x_466, 3, x_465);
lean_ctor_set(x_466, 4, x_454);
x_467 = lean_st_ref_set(x_4, x_466, x_457);
x_468 = lean_ctor_get(x_467, 1);
lean_inc(x_468);
lean_dec(x_467);
x_10 = x_453;
x_11 = x_468;
goto block_36;
}
}
else
{
lean_object* x_469; 
lean_dec(x_2);
lean_dec(x_1);
x_469 = lean_ctor_get(x_452, 0);
lean_inc(x_469);
lean_dec(x_452);
if (lean_obj_tag(x_469) == 0)
{
lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; uint8_t x_475; 
x_470 = lean_ctor_get(x_469, 0);
lean_inc(x_470);
x_471 = lean_ctor_get(x_469, 1);
lean_inc(x_471);
lean_dec(x_469);
x_472 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_472, 0, x_471);
x_473 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_473, 0, x_472);
x_474 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_470, x_473, x_3, x_4, x_5, x_6, x_7, x_8, x_446);
lean_dec(x_470);
x_475 = !lean_is_exclusive(x_474);
if (x_475 == 0)
{
return x_474;
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; 
x_476 = lean_ctor_get(x_474, 0);
x_477 = lean_ctor_get(x_474, 1);
lean_inc(x_477);
lean_inc(x_476);
lean_dec(x_474);
x_478 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_478, 0, x_476);
lean_ctor_set(x_478, 1, x_477);
return x_478;
}
}
else
{
lean_object* x_479; uint8_t x_480; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_479 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_446);
x_480 = !lean_is_exclusive(x_479);
if (x_480 == 0)
{
return x_479;
}
else
{
lean_object* x_481; lean_object* x_482; lean_object* x_483; 
x_481 = lean_ctor_get(x_479, 0);
x_482 = lean_ctor_get(x_479, 1);
lean_inc(x_482);
lean_inc(x_481);
lean_dec(x_479);
x_483 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_483, 0, x_481);
lean_ctor_set(x_483, 1, x_482);
return x_483;
}
}
}
}
else
{
lean_object* x_484; uint8_t x_485; lean_object* x_586; uint8_t x_587; 
x_484 = l_Lean_Syntax_getArg(x_435, x_135);
x_586 = l_Lean_nullKind___closed__2;
lean_inc(x_484);
x_587 = l_Lean_Syntax_isOfKind(x_484, x_586);
if (x_587 == 0)
{
uint8_t x_588; 
x_588 = 0;
x_485 = x_588;
goto block_585;
}
else
{
lean_object* x_589; lean_object* x_590; uint8_t x_591; 
x_589 = l_Lean_Syntax_getArgs(x_484);
x_590 = lean_array_get_size(x_589);
lean_dec(x_589);
x_591 = lean_nat_dec_eq(x_590, x_85);
lean_dec(x_590);
x_485 = x_591;
goto block_585;
}
block_585:
{
if (x_485 == 0)
{
lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; 
lean_dec(x_484);
lean_dec(x_435);
lean_dec(x_334);
lean_dec(x_234);
x_486 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_487 = lean_ctor_get(x_486, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_486, 1);
lean_inc(x_488);
lean_dec(x_486);
x_489 = lean_st_ref_get(x_8, x_488);
x_490 = lean_ctor_get(x_489, 0);
lean_inc(x_490);
x_491 = lean_ctor_get(x_489, 1);
lean_inc(x_491);
lean_dec(x_489);
x_492 = lean_ctor_get(x_490, 0);
lean_inc(x_492);
lean_dec(x_490);
x_493 = lean_st_ref_get(x_4, x_491);
x_494 = lean_ctor_get(x_493, 0);
lean_inc(x_494);
x_495 = lean_ctor_get(x_493, 1);
lean_inc(x_495);
lean_dec(x_493);
x_496 = lean_ctor_get(x_494, 4);
lean_inc(x_496);
lean_dec(x_494);
x_497 = lean_ctor_get(x_7, 1);
lean_inc(x_497);
x_498 = lean_ctor_get(x_7, 2);
lean_inc(x_498);
x_499 = lean_environment_main_module(x_492);
x_500 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_500, 0, x_499);
lean_ctor_set(x_500, 1, x_487);
lean_ctor_set(x_500, 2, x_497);
lean_ctor_set(x_500, 3, x_498);
lean_inc(x_1);
x_501 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_500, x_496);
if (lean_obj_tag(x_501) == 0)
{
lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; uint8_t x_507; 
x_502 = lean_ctor_get(x_501, 0);
lean_inc(x_502);
x_503 = lean_ctor_get(x_501, 1);
lean_inc(x_503);
lean_dec(x_501);
x_504 = lean_st_ref_take(x_4, x_495);
x_505 = lean_ctor_get(x_504, 0);
lean_inc(x_505);
x_506 = lean_ctor_get(x_504, 1);
lean_inc(x_506);
lean_dec(x_504);
x_507 = !lean_is_exclusive(x_505);
if (x_507 == 0)
{
lean_object* x_508; lean_object* x_509; lean_object* x_510; 
x_508 = lean_ctor_get(x_505, 4);
lean_dec(x_508);
lean_ctor_set(x_505, 4, x_503);
x_509 = lean_st_ref_set(x_4, x_505, x_506);
x_510 = lean_ctor_get(x_509, 1);
lean_inc(x_510);
lean_dec(x_509);
x_10 = x_502;
x_11 = x_510;
goto block_36;
}
else
{
lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; 
x_511 = lean_ctor_get(x_505, 0);
x_512 = lean_ctor_get(x_505, 1);
x_513 = lean_ctor_get(x_505, 2);
x_514 = lean_ctor_get(x_505, 3);
lean_inc(x_514);
lean_inc(x_513);
lean_inc(x_512);
lean_inc(x_511);
lean_dec(x_505);
x_515 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_515, 0, x_511);
lean_ctor_set(x_515, 1, x_512);
lean_ctor_set(x_515, 2, x_513);
lean_ctor_set(x_515, 3, x_514);
lean_ctor_set(x_515, 4, x_503);
x_516 = lean_st_ref_set(x_4, x_515, x_506);
x_517 = lean_ctor_get(x_516, 1);
lean_inc(x_517);
lean_dec(x_516);
x_10 = x_502;
x_11 = x_517;
goto block_36;
}
}
else
{
lean_object* x_518; 
lean_dec(x_2);
lean_dec(x_1);
x_518 = lean_ctor_get(x_501, 0);
lean_inc(x_518);
lean_dec(x_501);
if (lean_obj_tag(x_518) == 0)
{
lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; uint8_t x_524; 
x_519 = lean_ctor_get(x_518, 0);
lean_inc(x_519);
x_520 = lean_ctor_get(x_518, 1);
lean_inc(x_520);
lean_dec(x_518);
x_521 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_521, 0, x_520);
x_522 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_522, 0, x_521);
x_523 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_519, x_522, x_3, x_4, x_5, x_6, x_7, x_8, x_495);
lean_dec(x_519);
x_524 = !lean_is_exclusive(x_523);
if (x_524 == 0)
{
return x_523;
}
else
{
lean_object* x_525; lean_object* x_526; lean_object* x_527; 
x_525 = lean_ctor_get(x_523, 0);
x_526 = lean_ctor_get(x_523, 1);
lean_inc(x_526);
lean_inc(x_525);
lean_dec(x_523);
x_527 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_527, 0, x_525);
lean_ctor_set(x_527, 1, x_526);
return x_527;
}
}
else
{
lean_object* x_528; uint8_t x_529; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_528 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_495);
x_529 = !lean_is_exclusive(x_528);
if (x_529 == 0)
{
return x_528;
}
else
{
lean_object* x_530; lean_object* x_531; lean_object* x_532; 
x_530 = lean_ctor_get(x_528, 0);
x_531 = lean_ctor_get(x_528, 1);
lean_inc(x_531);
lean_inc(x_530);
lean_dec(x_528);
x_532 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_532, 0, x_530);
lean_ctor_set(x_532, 1, x_531);
return x_532;
}
}
}
}
else
{
lean_object* x_533; lean_object* x_534; uint8_t x_535; 
x_533 = l_Lean_Syntax_getArg(x_484, x_135);
lean_dec(x_484);
x_534 = l_Lean_identKind___closed__2;
lean_inc(x_533);
x_535 = l_Lean_Syntax_isOfKind(x_533, x_534);
if (x_535 == 0)
{
lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; 
lean_dec(x_533);
lean_dec(x_435);
lean_dec(x_334);
lean_dec(x_234);
x_536 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_537 = lean_ctor_get(x_536, 0);
lean_inc(x_537);
x_538 = lean_ctor_get(x_536, 1);
lean_inc(x_538);
lean_dec(x_536);
x_539 = lean_st_ref_get(x_8, x_538);
x_540 = lean_ctor_get(x_539, 0);
lean_inc(x_540);
x_541 = lean_ctor_get(x_539, 1);
lean_inc(x_541);
lean_dec(x_539);
x_542 = lean_ctor_get(x_540, 0);
lean_inc(x_542);
lean_dec(x_540);
x_543 = lean_st_ref_get(x_4, x_541);
x_544 = lean_ctor_get(x_543, 0);
lean_inc(x_544);
x_545 = lean_ctor_get(x_543, 1);
lean_inc(x_545);
lean_dec(x_543);
x_546 = lean_ctor_get(x_544, 4);
lean_inc(x_546);
lean_dec(x_544);
x_547 = lean_ctor_get(x_7, 1);
lean_inc(x_547);
x_548 = lean_ctor_get(x_7, 2);
lean_inc(x_548);
x_549 = lean_environment_main_module(x_542);
x_550 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_550, 0, x_549);
lean_ctor_set(x_550, 1, x_537);
lean_ctor_set(x_550, 2, x_547);
lean_ctor_set(x_550, 3, x_548);
lean_inc(x_1);
x_551 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_550, x_546);
if (lean_obj_tag(x_551) == 0)
{
lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; uint8_t x_557; 
x_552 = lean_ctor_get(x_551, 0);
lean_inc(x_552);
x_553 = lean_ctor_get(x_551, 1);
lean_inc(x_553);
lean_dec(x_551);
x_554 = lean_st_ref_take(x_4, x_545);
x_555 = lean_ctor_get(x_554, 0);
lean_inc(x_555);
x_556 = lean_ctor_get(x_554, 1);
lean_inc(x_556);
lean_dec(x_554);
x_557 = !lean_is_exclusive(x_555);
if (x_557 == 0)
{
lean_object* x_558; lean_object* x_559; lean_object* x_560; 
x_558 = lean_ctor_get(x_555, 4);
lean_dec(x_558);
lean_ctor_set(x_555, 4, x_553);
x_559 = lean_st_ref_set(x_4, x_555, x_556);
x_560 = lean_ctor_get(x_559, 1);
lean_inc(x_560);
lean_dec(x_559);
x_10 = x_552;
x_11 = x_560;
goto block_36;
}
else
{
lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; 
x_561 = lean_ctor_get(x_555, 0);
x_562 = lean_ctor_get(x_555, 1);
x_563 = lean_ctor_get(x_555, 2);
x_564 = lean_ctor_get(x_555, 3);
lean_inc(x_564);
lean_inc(x_563);
lean_inc(x_562);
lean_inc(x_561);
lean_dec(x_555);
x_565 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_565, 0, x_561);
lean_ctor_set(x_565, 1, x_562);
lean_ctor_set(x_565, 2, x_563);
lean_ctor_set(x_565, 3, x_564);
lean_ctor_set(x_565, 4, x_553);
x_566 = lean_st_ref_set(x_4, x_565, x_556);
x_567 = lean_ctor_get(x_566, 1);
lean_inc(x_567);
lean_dec(x_566);
x_10 = x_552;
x_11 = x_567;
goto block_36;
}
}
else
{
lean_object* x_568; 
lean_dec(x_2);
lean_dec(x_1);
x_568 = lean_ctor_get(x_551, 0);
lean_inc(x_568);
lean_dec(x_551);
if (lean_obj_tag(x_568) == 0)
{
lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; uint8_t x_574; 
x_569 = lean_ctor_get(x_568, 0);
lean_inc(x_569);
x_570 = lean_ctor_get(x_568, 1);
lean_inc(x_570);
lean_dec(x_568);
x_571 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_571, 0, x_570);
x_572 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_572, 0, x_571);
x_573 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_569, x_572, x_3, x_4, x_5, x_6, x_7, x_8, x_545);
lean_dec(x_569);
x_574 = !lean_is_exclusive(x_573);
if (x_574 == 0)
{
return x_573;
}
else
{
lean_object* x_575; lean_object* x_576; lean_object* x_577; 
x_575 = lean_ctor_get(x_573, 0);
x_576 = lean_ctor_get(x_573, 1);
lean_inc(x_576);
lean_inc(x_575);
lean_dec(x_573);
x_577 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_577, 0, x_575);
lean_ctor_set(x_577, 1, x_576);
return x_577;
}
}
else
{
lean_object* x_578; uint8_t x_579; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_578 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_545);
x_579 = !lean_is_exclusive(x_578);
if (x_579 == 0)
{
return x_578;
}
else
{
lean_object* x_580; lean_object* x_581; lean_object* x_582; 
x_580 = lean_ctor_get(x_578, 0);
x_581 = lean_ctor_get(x_578, 1);
lean_inc(x_581);
lean_inc(x_580);
lean_dec(x_578);
x_582 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_582, 0, x_580);
lean_ctor_set(x_582, 1, x_581);
return x_582;
}
}
}
}
else
{
lean_object* x_583; lean_object* x_584; 
x_583 = l_Lean_Syntax_getArg(x_435, x_235);
lean_dec(x_435);
x_584 = l___private_Lean_Elab_Match_2__expandSimpleMatchWithType(x_1, x_234, x_533, x_334, x_583, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_584;
}
}
}
}
}
}
}
}
}
block_835:
{
if (x_610 == 0)
{
if (x_609 == 0)
{
uint8_t x_611; 
lean_dec(x_336);
x_611 = 0;
x_337 = x_611;
goto block_607;
}
else
{
lean_object* x_612; lean_object* x_613; uint8_t x_614; 
x_612 = l_Lean_Syntax_getArgs(x_336);
lean_dec(x_336);
x_613 = lean_array_get_size(x_612);
lean_dec(x_612);
x_614 = lean_nat_dec_eq(x_613, x_85);
lean_dec(x_613);
x_337 = x_614;
goto block_607;
}
}
else
{
lean_object* x_615; lean_object* x_616; uint8_t x_617; uint8_t x_830; 
lean_dec(x_336);
x_615 = lean_unsigned_to_nat(5u);
x_616 = l_Lean_Syntax_getArg(x_1, x_615);
lean_inc(x_616);
x_830 = l_Lean_Syntax_isOfKind(x_616, x_608);
if (x_830 == 0)
{
uint8_t x_831; 
x_831 = 0;
x_617 = x_831;
goto block_829;
}
else
{
lean_object* x_832; lean_object* x_833; uint8_t x_834; 
x_832 = l_Lean_Syntax_getArgs(x_616);
x_833 = lean_array_get_size(x_832);
lean_dec(x_832);
x_834 = lean_nat_dec_eq(x_833, x_85);
lean_dec(x_833);
x_617 = x_834;
goto block_829;
}
block_829:
{
if (x_617 == 0)
{
lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; 
lean_dec(x_616);
lean_dec(x_334);
lean_dec(x_234);
x_618 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_619 = lean_ctor_get(x_618, 0);
lean_inc(x_619);
x_620 = lean_ctor_get(x_618, 1);
lean_inc(x_620);
lean_dec(x_618);
x_621 = lean_st_ref_get(x_8, x_620);
x_622 = lean_ctor_get(x_621, 0);
lean_inc(x_622);
x_623 = lean_ctor_get(x_621, 1);
lean_inc(x_623);
lean_dec(x_621);
x_624 = lean_ctor_get(x_622, 0);
lean_inc(x_624);
lean_dec(x_622);
x_625 = lean_st_ref_get(x_4, x_623);
x_626 = lean_ctor_get(x_625, 0);
lean_inc(x_626);
x_627 = lean_ctor_get(x_625, 1);
lean_inc(x_627);
lean_dec(x_625);
x_628 = lean_ctor_get(x_626, 4);
lean_inc(x_628);
lean_dec(x_626);
x_629 = lean_ctor_get(x_7, 1);
lean_inc(x_629);
x_630 = lean_ctor_get(x_7, 2);
lean_inc(x_630);
x_631 = lean_environment_main_module(x_624);
x_632 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_632, 0, x_631);
lean_ctor_set(x_632, 1, x_619);
lean_ctor_set(x_632, 2, x_629);
lean_ctor_set(x_632, 3, x_630);
lean_inc(x_1);
x_633 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_632, x_628);
if (lean_obj_tag(x_633) == 0)
{
lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; uint8_t x_639; 
x_634 = lean_ctor_get(x_633, 0);
lean_inc(x_634);
x_635 = lean_ctor_get(x_633, 1);
lean_inc(x_635);
lean_dec(x_633);
x_636 = lean_st_ref_take(x_4, x_627);
x_637 = lean_ctor_get(x_636, 0);
lean_inc(x_637);
x_638 = lean_ctor_get(x_636, 1);
lean_inc(x_638);
lean_dec(x_636);
x_639 = !lean_is_exclusive(x_637);
if (x_639 == 0)
{
lean_object* x_640; lean_object* x_641; lean_object* x_642; 
x_640 = lean_ctor_get(x_637, 4);
lean_dec(x_640);
lean_ctor_set(x_637, 4, x_635);
x_641 = lean_st_ref_set(x_4, x_637, x_638);
x_642 = lean_ctor_get(x_641, 1);
lean_inc(x_642);
lean_dec(x_641);
x_10 = x_634;
x_11 = x_642;
goto block_36;
}
else
{
lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; 
x_643 = lean_ctor_get(x_637, 0);
x_644 = lean_ctor_get(x_637, 1);
x_645 = lean_ctor_get(x_637, 2);
x_646 = lean_ctor_get(x_637, 3);
lean_inc(x_646);
lean_inc(x_645);
lean_inc(x_644);
lean_inc(x_643);
lean_dec(x_637);
x_647 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_647, 0, x_643);
lean_ctor_set(x_647, 1, x_644);
lean_ctor_set(x_647, 2, x_645);
lean_ctor_set(x_647, 3, x_646);
lean_ctor_set(x_647, 4, x_635);
x_648 = lean_st_ref_set(x_4, x_647, x_638);
x_649 = lean_ctor_get(x_648, 1);
lean_inc(x_649);
lean_dec(x_648);
x_10 = x_634;
x_11 = x_649;
goto block_36;
}
}
else
{
lean_object* x_650; 
lean_dec(x_2);
lean_dec(x_1);
x_650 = lean_ctor_get(x_633, 0);
lean_inc(x_650);
lean_dec(x_633);
if (lean_obj_tag(x_650) == 0)
{
lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; uint8_t x_656; 
x_651 = lean_ctor_get(x_650, 0);
lean_inc(x_651);
x_652 = lean_ctor_get(x_650, 1);
lean_inc(x_652);
lean_dec(x_650);
x_653 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_653, 0, x_652);
x_654 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_654, 0, x_653);
x_655 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_651, x_654, x_3, x_4, x_5, x_6, x_7, x_8, x_627);
lean_dec(x_651);
x_656 = !lean_is_exclusive(x_655);
if (x_656 == 0)
{
return x_655;
}
else
{
lean_object* x_657; lean_object* x_658; lean_object* x_659; 
x_657 = lean_ctor_get(x_655, 0);
x_658 = lean_ctor_get(x_655, 1);
lean_inc(x_658);
lean_inc(x_657);
lean_dec(x_655);
x_659 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_659, 0, x_657);
lean_ctor_set(x_659, 1, x_658);
return x_659;
}
}
else
{
lean_object* x_660; uint8_t x_661; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_660 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_627);
x_661 = !lean_is_exclusive(x_660);
if (x_661 == 0)
{
return x_660;
}
else
{
lean_object* x_662; lean_object* x_663; lean_object* x_664; 
x_662 = lean_ctor_get(x_660, 0);
x_663 = lean_ctor_get(x_660, 1);
lean_inc(x_663);
lean_inc(x_662);
lean_dec(x_660);
x_664 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_664, 0, x_662);
lean_ctor_set(x_664, 1, x_663);
return x_664;
}
}
}
}
else
{
lean_object* x_665; uint8_t x_666; lean_object* x_822; uint8_t x_823; 
x_665 = l_Lean_Syntax_getArg(x_616, x_135);
lean_dec(x_616);
x_822 = l_Lean_Parser_Term_matchAlt___closed__2;
lean_inc(x_665);
x_823 = l_Lean_Syntax_isOfKind(x_665, x_822);
if (x_823 == 0)
{
uint8_t x_824; 
x_824 = 0;
x_666 = x_824;
goto block_821;
}
else
{
lean_object* x_825; lean_object* x_826; lean_object* x_827; uint8_t x_828; 
x_825 = l_Lean_Syntax_getArgs(x_665);
x_826 = lean_array_get_size(x_825);
lean_dec(x_825);
x_827 = lean_unsigned_to_nat(3u);
x_828 = lean_nat_dec_eq(x_826, x_827);
lean_dec(x_826);
x_666 = x_828;
goto block_821;
}
block_821:
{
if (x_666 == 0)
{
lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; 
lean_dec(x_665);
lean_dec(x_334);
lean_dec(x_234);
x_667 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_668 = lean_ctor_get(x_667, 0);
lean_inc(x_668);
x_669 = lean_ctor_get(x_667, 1);
lean_inc(x_669);
lean_dec(x_667);
x_670 = lean_st_ref_get(x_8, x_669);
x_671 = lean_ctor_get(x_670, 0);
lean_inc(x_671);
x_672 = lean_ctor_get(x_670, 1);
lean_inc(x_672);
lean_dec(x_670);
x_673 = lean_ctor_get(x_671, 0);
lean_inc(x_673);
lean_dec(x_671);
x_674 = lean_st_ref_get(x_4, x_672);
x_675 = lean_ctor_get(x_674, 0);
lean_inc(x_675);
x_676 = lean_ctor_get(x_674, 1);
lean_inc(x_676);
lean_dec(x_674);
x_677 = lean_ctor_get(x_675, 4);
lean_inc(x_677);
lean_dec(x_675);
x_678 = lean_ctor_get(x_7, 1);
lean_inc(x_678);
x_679 = lean_ctor_get(x_7, 2);
lean_inc(x_679);
x_680 = lean_environment_main_module(x_673);
x_681 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_681, 0, x_680);
lean_ctor_set(x_681, 1, x_668);
lean_ctor_set(x_681, 2, x_678);
lean_ctor_set(x_681, 3, x_679);
lean_inc(x_1);
x_682 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_681, x_677);
if (lean_obj_tag(x_682) == 0)
{
lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; uint8_t x_688; 
x_683 = lean_ctor_get(x_682, 0);
lean_inc(x_683);
x_684 = lean_ctor_get(x_682, 1);
lean_inc(x_684);
lean_dec(x_682);
x_685 = lean_st_ref_take(x_4, x_676);
x_686 = lean_ctor_get(x_685, 0);
lean_inc(x_686);
x_687 = lean_ctor_get(x_685, 1);
lean_inc(x_687);
lean_dec(x_685);
x_688 = !lean_is_exclusive(x_686);
if (x_688 == 0)
{
lean_object* x_689; lean_object* x_690; lean_object* x_691; 
x_689 = lean_ctor_get(x_686, 4);
lean_dec(x_689);
lean_ctor_set(x_686, 4, x_684);
x_690 = lean_st_ref_set(x_4, x_686, x_687);
x_691 = lean_ctor_get(x_690, 1);
lean_inc(x_691);
lean_dec(x_690);
x_10 = x_683;
x_11 = x_691;
goto block_36;
}
else
{
lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; 
x_692 = lean_ctor_get(x_686, 0);
x_693 = lean_ctor_get(x_686, 1);
x_694 = lean_ctor_get(x_686, 2);
x_695 = lean_ctor_get(x_686, 3);
lean_inc(x_695);
lean_inc(x_694);
lean_inc(x_693);
lean_inc(x_692);
lean_dec(x_686);
x_696 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_696, 0, x_692);
lean_ctor_set(x_696, 1, x_693);
lean_ctor_set(x_696, 2, x_694);
lean_ctor_set(x_696, 3, x_695);
lean_ctor_set(x_696, 4, x_684);
x_697 = lean_st_ref_set(x_4, x_696, x_687);
x_698 = lean_ctor_get(x_697, 1);
lean_inc(x_698);
lean_dec(x_697);
x_10 = x_683;
x_11 = x_698;
goto block_36;
}
}
else
{
lean_object* x_699; 
lean_dec(x_2);
lean_dec(x_1);
x_699 = lean_ctor_get(x_682, 0);
lean_inc(x_699);
lean_dec(x_682);
if (lean_obj_tag(x_699) == 0)
{
lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; uint8_t x_705; 
x_700 = lean_ctor_get(x_699, 0);
lean_inc(x_700);
x_701 = lean_ctor_get(x_699, 1);
lean_inc(x_701);
lean_dec(x_699);
x_702 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_702, 0, x_701);
x_703 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_703, 0, x_702);
x_704 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_700, x_703, x_3, x_4, x_5, x_6, x_7, x_8, x_676);
lean_dec(x_700);
x_705 = !lean_is_exclusive(x_704);
if (x_705 == 0)
{
return x_704;
}
else
{
lean_object* x_706; lean_object* x_707; lean_object* x_708; 
x_706 = lean_ctor_get(x_704, 0);
x_707 = lean_ctor_get(x_704, 1);
lean_inc(x_707);
lean_inc(x_706);
lean_dec(x_704);
x_708 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_708, 0, x_706);
lean_ctor_set(x_708, 1, x_707);
return x_708;
}
}
else
{
lean_object* x_709; uint8_t x_710; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_709 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_676);
x_710 = !lean_is_exclusive(x_709);
if (x_710 == 0)
{
return x_709;
}
else
{
lean_object* x_711; lean_object* x_712; lean_object* x_713; 
x_711 = lean_ctor_get(x_709, 0);
x_712 = lean_ctor_get(x_709, 1);
lean_inc(x_712);
lean_inc(x_711);
lean_dec(x_709);
x_713 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_713, 0, x_711);
lean_ctor_set(x_713, 1, x_712);
return x_713;
}
}
}
}
else
{
lean_object* x_714; uint8_t x_715; uint8_t x_816; 
x_714 = l_Lean_Syntax_getArg(x_665, x_135);
lean_inc(x_714);
x_816 = l_Lean_Syntax_isOfKind(x_714, x_608);
if (x_816 == 0)
{
uint8_t x_817; 
x_817 = 0;
x_715 = x_817;
goto block_815;
}
else
{
lean_object* x_818; lean_object* x_819; uint8_t x_820; 
x_818 = l_Lean_Syntax_getArgs(x_714);
x_819 = lean_array_get_size(x_818);
lean_dec(x_818);
x_820 = lean_nat_dec_eq(x_819, x_85);
lean_dec(x_819);
x_715 = x_820;
goto block_815;
}
block_815:
{
if (x_715 == 0)
{
lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; 
lean_dec(x_714);
lean_dec(x_665);
lean_dec(x_334);
lean_dec(x_234);
x_716 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_717 = lean_ctor_get(x_716, 0);
lean_inc(x_717);
x_718 = lean_ctor_get(x_716, 1);
lean_inc(x_718);
lean_dec(x_716);
x_719 = lean_st_ref_get(x_8, x_718);
x_720 = lean_ctor_get(x_719, 0);
lean_inc(x_720);
x_721 = lean_ctor_get(x_719, 1);
lean_inc(x_721);
lean_dec(x_719);
x_722 = lean_ctor_get(x_720, 0);
lean_inc(x_722);
lean_dec(x_720);
x_723 = lean_st_ref_get(x_4, x_721);
x_724 = lean_ctor_get(x_723, 0);
lean_inc(x_724);
x_725 = lean_ctor_get(x_723, 1);
lean_inc(x_725);
lean_dec(x_723);
x_726 = lean_ctor_get(x_724, 4);
lean_inc(x_726);
lean_dec(x_724);
x_727 = lean_ctor_get(x_7, 1);
lean_inc(x_727);
x_728 = lean_ctor_get(x_7, 2);
lean_inc(x_728);
x_729 = lean_environment_main_module(x_722);
x_730 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_730, 0, x_729);
lean_ctor_set(x_730, 1, x_717);
lean_ctor_set(x_730, 2, x_727);
lean_ctor_set(x_730, 3, x_728);
lean_inc(x_1);
x_731 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_730, x_726);
if (lean_obj_tag(x_731) == 0)
{
lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; uint8_t x_737; 
x_732 = lean_ctor_get(x_731, 0);
lean_inc(x_732);
x_733 = lean_ctor_get(x_731, 1);
lean_inc(x_733);
lean_dec(x_731);
x_734 = lean_st_ref_take(x_4, x_725);
x_735 = lean_ctor_get(x_734, 0);
lean_inc(x_735);
x_736 = lean_ctor_get(x_734, 1);
lean_inc(x_736);
lean_dec(x_734);
x_737 = !lean_is_exclusive(x_735);
if (x_737 == 0)
{
lean_object* x_738; lean_object* x_739; lean_object* x_740; 
x_738 = lean_ctor_get(x_735, 4);
lean_dec(x_738);
lean_ctor_set(x_735, 4, x_733);
x_739 = lean_st_ref_set(x_4, x_735, x_736);
x_740 = lean_ctor_get(x_739, 1);
lean_inc(x_740);
lean_dec(x_739);
x_10 = x_732;
x_11 = x_740;
goto block_36;
}
else
{
lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; 
x_741 = lean_ctor_get(x_735, 0);
x_742 = lean_ctor_get(x_735, 1);
x_743 = lean_ctor_get(x_735, 2);
x_744 = lean_ctor_get(x_735, 3);
lean_inc(x_744);
lean_inc(x_743);
lean_inc(x_742);
lean_inc(x_741);
lean_dec(x_735);
x_745 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_745, 0, x_741);
lean_ctor_set(x_745, 1, x_742);
lean_ctor_set(x_745, 2, x_743);
lean_ctor_set(x_745, 3, x_744);
lean_ctor_set(x_745, 4, x_733);
x_746 = lean_st_ref_set(x_4, x_745, x_736);
x_747 = lean_ctor_get(x_746, 1);
lean_inc(x_747);
lean_dec(x_746);
x_10 = x_732;
x_11 = x_747;
goto block_36;
}
}
else
{
lean_object* x_748; 
lean_dec(x_2);
lean_dec(x_1);
x_748 = lean_ctor_get(x_731, 0);
lean_inc(x_748);
lean_dec(x_731);
if (lean_obj_tag(x_748) == 0)
{
lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; uint8_t x_754; 
x_749 = lean_ctor_get(x_748, 0);
lean_inc(x_749);
x_750 = lean_ctor_get(x_748, 1);
lean_inc(x_750);
lean_dec(x_748);
x_751 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_751, 0, x_750);
x_752 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_752, 0, x_751);
x_753 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_749, x_752, x_3, x_4, x_5, x_6, x_7, x_8, x_725);
lean_dec(x_749);
x_754 = !lean_is_exclusive(x_753);
if (x_754 == 0)
{
return x_753;
}
else
{
lean_object* x_755; lean_object* x_756; lean_object* x_757; 
x_755 = lean_ctor_get(x_753, 0);
x_756 = lean_ctor_get(x_753, 1);
lean_inc(x_756);
lean_inc(x_755);
lean_dec(x_753);
x_757 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_757, 0, x_755);
lean_ctor_set(x_757, 1, x_756);
return x_757;
}
}
else
{
lean_object* x_758; uint8_t x_759; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_758 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_725);
x_759 = !lean_is_exclusive(x_758);
if (x_759 == 0)
{
return x_758;
}
else
{
lean_object* x_760; lean_object* x_761; lean_object* x_762; 
x_760 = lean_ctor_get(x_758, 0);
x_761 = lean_ctor_get(x_758, 1);
lean_inc(x_761);
lean_inc(x_760);
lean_dec(x_758);
x_762 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_762, 0, x_760);
lean_ctor_set(x_762, 1, x_761);
return x_762;
}
}
}
}
else
{
lean_object* x_763; lean_object* x_764; uint8_t x_765; 
x_763 = l_Lean_Syntax_getArg(x_714, x_135);
lean_dec(x_714);
x_764 = l_Lean_identKind___closed__2;
lean_inc(x_763);
x_765 = l_Lean_Syntax_isOfKind(x_763, x_764);
if (x_765 == 0)
{
lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; 
lean_dec(x_763);
lean_dec(x_665);
lean_dec(x_334);
lean_dec(x_234);
x_766 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_767 = lean_ctor_get(x_766, 0);
lean_inc(x_767);
x_768 = lean_ctor_get(x_766, 1);
lean_inc(x_768);
lean_dec(x_766);
x_769 = lean_st_ref_get(x_8, x_768);
x_770 = lean_ctor_get(x_769, 0);
lean_inc(x_770);
x_771 = lean_ctor_get(x_769, 1);
lean_inc(x_771);
lean_dec(x_769);
x_772 = lean_ctor_get(x_770, 0);
lean_inc(x_772);
lean_dec(x_770);
x_773 = lean_st_ref_get(x_4, x_771);
x_774 = lean_ctor_get(x_773, 0);
lean_inc(x_774);
x_775 = lean_ctor_get(x_773, 1);
lean_inc(x_775);
lean_dec(x_773);
x_776 = lean_ctor_get(x_774, 4);
lean_inc(x_776);
lean_dec(x_774);
x_777 = lean_ctor_get(x_7, 1);
lean_inc(x_777);
x_778 = lean_ctor_get(x_7, 2);
lean_inc(x_778);
x_779 = lean_environment_main_module(x_772);
x_780 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_780, 0, x_779);
lean_ctor_set(x_780, 1, x_767);
lean_ctor_set(x_780, 2, x_777);
lean_ctor_set(x_780, 3, x_778);
lean_inc(x_1);
x_781 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_780, x_776);
if (lean_obj_tag(x_781) == 0)
{
lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; lean_object* x_786; uint8_t x_787; 
x_782 = lean_ctor_get(x_781, 0);
lean_inc(x_782);
x_783 = lean_ctor_get(x_781, 1);
lean_inc(x_783);
lean_dec(x_781);
x_784 = lean_st_ref_take(x_4, x_775);
x_785 = lean_ctor_get(x_784, 0);
lean_inc(x_785);
x_786 = lean_ctor_get(x_784, 1);
lean_inc(x_786);
lean_dec(x_784);
x_787 = !lean_is_exclusive(x_785);
if (x_787 == 0)
{
lean_object* x_788; lean_object* x_789; lean_object* x_790; 
x_788 = lean_ctor_get(x_785, 4);
lean_dec(x_788);
lean_ctor_set(x_785, 4, x_783);
x_789 = lean_st_ref_set(x_4, x_785, x_786);
x_790 = lean_ctor_get(x_789, 1);
lean_inc(x_790);
lean_dec(x_789);
x_10 = x_782;
x_11 = x_790;
goto block_36;
}
else
{
lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; lean_object* x_797; 
x_791 = lean_ctor_get(x_785, 0);
x_792 = lean_ctor_get(x_785, 1);
x_793 = lean_ctor_get(x_785, 2);
x_794 = lean_ctor_get(x_785, 3);
lean_inc(x_794);
lean_inc(x_793);
lean_inc(x_792);
lean_inc(x_791);
lean_dec(x_785);
x_795 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_795, 0, x_791);
lean_ctor_set(x_795, 1, x_792);
lean_ctor_set(x_795, 2, x_793);
lean_ctor_set(x_795, 3, x_794);
lean_ctor_set(x_795, 4, x_783);
x_796 = lean_st_ref_set(x_4, x_795, x_786);
x_797 = lean_ctor_get(x_796, 1);
lean_inc(x_797);
lean_dec(x_796);
x_10 = x_782;
x_11 = x_797;
goto block_36;
}
}
else
{
lean_object* x_798; 
lean_dec(x_2);
lean_dec(x_1);
x_798 = lean_ctor_get(x_781, 0);
lean_inc(x_798);
lean_dec(x_781);
if (lean_obj_tag(x_798) == 0)
{
lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; uint8_t x_804; 
x_799 = lean_ctor_get(x_798, 0);
lean_inc(x_799);
x_800 = lean_ctor_get(x_798, 1);
lean_inc(x_800);
lean_dec(x_798);
x_801 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_801, 0, x_800);
x_802 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_802, 0, x_801);
x_803 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_799, x_802, x_3, x_4, x_5, x_6, x_7, x_8, x_775);
lean_dec(x_799);
x_804 = !lean_is_exclusive(x_803);
if (x_804 == 0)
{
return x_803;
}
else
{
lean_object* x_805; lean_object* x_806; lean_object* x_807; 
x_805 = lean_ctor_get(x_803, 0);
x_806 = lean_ctor_get(x_803, 1);
lean_inc(x_806);
lean_inc(x_805);
lean_dec(x_803);
x_807 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_807, 0, x_805);
lean_ctor_set(x_807, 1, x_806);
return x_807;
}
}
else
{
lean_object* x_808; uint8_t x_809; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_808 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_775);
x_809 = !lean_is_exclusive(x_808);
if (x_809 == 0)
{
return x_808;
}
else
{
lean_object* x_810; lean_object* x_811; lean_object* x_812; 
x_810 = lean_ctor_get(x_808, 0);
x_811 = lean_ctor_get(x_808, 1);
lean_inc(x_811);
lean_inc(x_810);
lean_dec(x_808);
x_812 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_812, 0, x_810);
lean_ctor_set(x_812, 1, x_811);
return x_812;
}
}
}
}
else
{
lean_object* x_813; lean_object* x_814; 
x_813 = l_Lean_Syntax_getArg(x_665, x_235);
lean_dec(x_665);
x_814 = l___private_Lean_Elab_Match_2__expandSimpleMatchWithType(x_1, x_234, x_763, x_334, x_813, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_814;
}
}
}
}
}
}
}
}
}
}
}
}
}
block_1357:
{
if (x_850 == 0)
{
if (x_849 == 0)
{
uint8_t x_851; 
x_851 = 0;
x_237 = x_851;
goto block_847;
}
else
{
lean_object* x_852; lean_object* x_853; uint8_t x_854; 
x_852 = l_Lean_Syntax_getArgs(x_236);
x_853 = lean_array_get_size(x_852);
lean_dec(x_852);
x_854 = lean_nat_dec_eq(x_853, x_85);
lean_dec(x_853);
x_237 = x_854;
goto block_847;
}
}
else
{
lean_object* x_855; lean_object* x_856; uint8_t x_857; uint8_t x_1126; uint8_t x_1127; 
lean_dec(x_236);
x_855 = lean_unsigned_to_nat(4u);
x_856 = l_Lean_Syntax_getArg(x_1, x_855);
lean_inc(x_856);
x_1126 = l_Lean_Syntax_isOfKind(x_856, x_848);
if (x_1126 == 0)
{
uint8_t x_1353; 
x_1353 = 0;
x_1127 = x_1353;
goto block_1352;
}
else
{
lean_object* x_1354; lean_object* x_1355; uint8_t x_1356; 
x_1354 = l_Lean_Syntax_getArgs(x_856);
x_1355 = lean_array_get_size(x_1354);
lean_dec(x_1354);
x_1356 = lean_nat_dec_eq(x_1355, x_135);
lean_dec(x_1355);
x_1127 = x_1356;
goto block_1352;
}
block_1125:
{
if (x_857 == 0)
{
lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; lean_object* x_872; lean_object* x_873; 
lean_dec(x_234);
x_858 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_859 = lean_ctor_get(x_858, 0);
lean_inc(x_859);
x_860 = lean_ctor_get(x_858, 1);
lean_inc(x_860);
lean_dec(x_858);
x_861 = lean_st_ref_get(x_8, x_860);
x_862 = lean_ctor_get(x_861, 0);
lean_inc(x_862);
x_863 = lean_ctor_get(x_861, 1);
lean_inc(x_863);
lean_dec(x_861);
x_864 = lean_ctor_get(x_862, 0);
lean_inc(x_864);
lean_dec(x_862);
x_865 = lean_st_ref_get(x_4, x_863);
x_866 = lean_ctor_get(x_865, 0);
lean_inc(x_866);
x_867 = lean_ctor_get(x_865, 1);
lean_inc(x_867);
lean_dec(x_865);
x_868 = lean_ctor_get(x_866, 4);
lean_inc(x_868);
lean_dec(x_866);
x_869 = lean_ctor_get(x_7, 1);
lean_inc(x_869);
x_870 = lean_ctor_get(x_7, 2);
lean_inc(x_870);
x_871 = lean_environment_main_module(x_864);
x_872 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_872, 0, x_871);
lean_ctor_set(x_872, 1, x_859);
lean_ctor_set(x_872, 2, x_869);
lean_ctor_set(x_872, 3, x_870);
lean_inc(x_1);
x_873 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_872, x_868);
if (lean_obj_tag(x_873) == 0)
{
lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; uint8_t x_879; 
x_874 = lean_ctor_get(x_873, 0);
lean_inc(x_874);
x_875 = lean_ctor_get(x_873, 1);
lean_inc(x_875);
lean_dec(x_873);
x_876 = lean_st_ref_take(x_4, x_867);
x_877 = lean_ctor_get(x_876, 0);
lean_inc(x_877);
x_878 = lean_ctor_get(x_876, 1);
lean_inc(x_878);
lean_dec(x_876);
x_879 = !lean_is_exclusive(x_877);
if (x_879 == 0)
{
lean_object* x_880; lean_object* x_881; lean_object* x_882; 
x_880 = lean_ctor_get(x_877, 4);
lean_dec(x_880);
lean_ctor_set(x_877, 4, x_875);
x_881 = lean_st_ref_set(x_4, x_877, x_878);
x_882 = lean_ctor_get(x_881, 1);
lean_inc(x_882);
lean_dec(x_881);
x_10 = x_874;
x_11 = x_882;
goto block_36;
}
else
{
lean_object* x_883; lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; 
x_883 = lean_ctor_get(x_877, 0);
x_884 = lean_ctor_get(x_877, 1);
x_885 = lean_ctor_get(x_877, 2);
x_886 = lean_ctor_get(x_877, 3);
lean_inc(x_886);
lean_inc(x_885);
lean_inc(x_884);
lean_inc(x_883);
lean_dec(x_877);
x_887 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_887, 0, x_883);
lean_ctor_set(x_887, 1, x_884);
lean_ctor_set(x_887, 2, x_885);
lean_ctor_set(x_887, 3, x_886);
lean_ctor_set(x_887, 4, x_875);
x_888 = lean_st_ref_set(x_4, x_887, x_878);
x_889 = lean_ctor_get(x_888, 1);
lean_inc(x_889);
lean_dec(x_888);
x_10 = x_874;
x_11 = x_889;
goto block_36;
}
}
else
{
lean_object* x_890; 
lean_dec(x_2);
lean_dec(x_1);
x_890 = lean_ctor_get(x_873, 0);
lean_inc(x_890);
lean_dec(x_873);
if (lean_obj_tag(x_890) == 0)
{
lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; uint8_t x_896; 
x_891 = lean_ctor_get(x_890, 0);
lean_inc(x_891);
x_892 = lean_ctor_get(x_890, 1);
lean_inc(x_892);
lean_dec(x_890);
x_893 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_893, 0, x_892);
x_894 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_894, 0, x_893);
x_895 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_891, x_894, x_3, x_4, x_5, x_6, x_7, x_8, x_867);
lean_dec(x_891);
x_896 = !lean_is_exclusive(x_895);
if (x_896 == 0)
{
return x_895;
}
else
{
lean_object* x_897; lean_object* x_898; lean_object* x_899; 
x_897 = lean_ctor_get(x_895, 0);
x_898 = lean_ctor_get(x_895, 1);
lean_inc(x_898);
lean_inc(x_897);
lean_dec(x_895);
x_899 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_899, 0, x_897);
lean_ctor_set(x_899, 1, x_898);
return x_899;
}
}
else
{
lean_object* x_900; uint8_t x_901; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_900 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_867);
x_901 = !lean_is_exclusive(x_900);
if (x_901 == 0)
{
return x_900;
}
else
{
lean_object* x_902; lean_object* x_903; lean_object* x_904; 
x_902 = lean_ctor_get(x_900, 0);
x_903 = lean_ctor_get(x_900, 1);
lean_inc(x_903);
lean_inc(x_902);
lean_dec(x_900);
x_904 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_904, 0, x_902);
lean_ctor_set(x_904, 1, x_903);
return x_904;
}
}
}
}
else
{
lean_object* x_905; lean_object* x_906; uint8_t x_907; uint8_t x_1120; 
x_905 = lean_unsigned_to_nat(5u);
x_906 = l_Lean_Syntax_getArg(x_1, x_905);
lean_inc(x_906);
x_1120 = l_Lean_Syntax_isOfKind(x_906, x_848);
if (x_1120 == 0)
{
uint8_t x_1121; 
x_1121 = 0;
x_907 = x_1121;
goto block_1119;
}
else
{
lean_object* x_1122; lean_object* x_1123; uint8_t x_1124; 
x_1122 = l_Lean_Syntax_getArgs(x_906);
x_1123 = lean_array_get_size(x_1122);
lean_dec(x_1122);
x_1124 = lean_nat_dec_eq(x_1123, x_85);
lean_dec(x_1123);
x_907 = x_1124;
goto block_1119;
}
block_1119:
{
if (x_907 == 0)
{
lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; 
lean_dec(x_906);
lean_dec(x_234);
x_908 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_909 = lean_ctor_get(x_908, 0);
lean_inc(x_909);
x_910 = lean_ctor_get(x_908, 1);
lean_inc(x_910);
lean_dec(x_908);
x_911 = lean_st_ref_get(x_8, x_910);
x_912 = lean_ctor_get(x_911, 0);
lean_inc(x_912);
x_913 = lean_ctor_get(x_911, 1);
lean_inc(x_913);
lean_dec(x_911);
x_914 = lean_ctor_get(x_912, 0);
lean_inc(x_914);
lean_dec(x_912);
x_915 = lean_st_ref_get(x_4, x_913);
x_916 = lean_ctor_get(x_915, 0);
lean_inc(x_916);
x_917 = lean_ctor_get(x_915, 1);
lean_inc(x_917);
lean_dec(x_915);
x_918 = lean_ctor_get(x_916, 4);
lean_inc(x_918);
lean_dec(x_916);
x_919 = lean_ctor_get(x_7, 1);
lean_inc(x_919);
x_920 = lean_ctor_get(x_7, 2);
lean_inc(x_920);
x_921 = lean_environment_main_module(x_914);
x_922 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_922, 0, x_921);
lean_ctor_set(x_922, 1, x_909);
lean_ctor_set(x_922, 2, x_919);
lean_ctor_set(x_922, 3, x_920);
lean_inc(x_1);
x_923 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_922, x_918);
if (lean_obj_tag(x_923) == 0)
{
lean_object* x_924; lean_object* x_925; lean_object* x_926; lean_object* x_927; lean_object* x_928; uint8_t x_929; 
x_924 = lean_ctor_get(x_923, 0);
lean_inc(x_924);
x_925 = lean_ctor_get(x_923, 1);
lean_inc(x_925);
lean_dec(x_923);
x_926 = lean_st_ref_take(x_4, x_917);
x_927 = lean_ctor_get(x_926, 0);
lean_inc(x_927);
x_928 = lean_ctor_get(x_926, 1);
lean_inc(x_928);
lean_dec(x_926);
x_929 = !lean_is_exclusive(x_927);
if (x_929 == 0)
{
lean_object* x_930; lean_object* x_931; lean_object* x_932; 
x_930 = lean_ctor_get(x_927, 4);
lean_dec(x_930);
lean_ctor_set(x_927, 4, x_925);
x_931 = lean_st_ref_set(x_4, x_927, x_928);
x_932 = lean_ctor_get(x_931, 1);
lean_inc(x_932);
lean_dec(x_931);
x_10 = x_924;
x_11 = x_932;
goto block_36;
}
else
{
lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; 
x_933 = lean_ctor_get(x_927, 0);
x_934 = lean_ctor_get(x_927, 1);
x_935 = lean_ctor_get(x_927, 2);
x_936 = lean_ctor_get(x_927, 3);
lean_inc(x_936);
lean_inc(x_935);
lean_inc(x_934);
lean_inc(x_933);
lean_dec(x_927);
x_937 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_937, 0, x_933);
lean_ctor_set(x_937, 1, x_934);
lean_ctor_set(x_937, 2, x_935);
lean_ctor_set(x_937, 3, x_936);
lean_ctor_set(x_937, 4, x_925);
x_938 = lean_st_ref_set(x_4, x_937, x_928);
x_939 = lean_ctor_get(x_938, 1);
lean_inc(x_939);
lean_dec(x_938);
x_10 = x_924;
x_11 = x_939;
goto block_36;
}
}
else
{
lean_object* x_940; 
lean_dec(x_2);
lean_dec(x_1);
x_940 = lean_ctor_get(x_923, 0);
lean_inc(x_940);
lean_dec(x_923);
if (lean_obj_tag(x_940) == 0)
{
lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; uint8_t x_946; 
x_941 = lean_ctor_get(x_940, 0);
lean_inc(x_941);
x_942 = lean_ctor_get(x_940, 1);
lean_inc(x_942);
lean_dec(x_940);
x_943 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_943, 0, x_942);
x_944 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_944, 0, x_943);
x_945 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_941, x_944, x_3, x_4, x_5, x_6, x_7, x_8, x_917);
lean_dec(x_941);
x_946 = !lean_is_exclusive(x_945);
if (x_946 == 0)
{
return x_945;
}
else
{
lean_object* x_947; lean_object* x_948; lean_object* x_949; 
x_947 = lean_ctor_get(x_945, 0);
x_948 = lean_ctor_get(x_945, 1);
lean_inc(x_948);
lean_inc(x_947);
lean_dec(x_945);
x_949 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_949, 0, x_947);
lean_ctor_set(x_949, 1, x_948);
return x_949;
}
}
else
{
lean_object* x_950; uint8_t x_951; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_950 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_917);
x_951 = !lean_is_exclusive(x_950);
if (x_951 == 0)
{
return x_950;
}
else
{
lean_object* x_952; lean_object* x_953; lean_object* x_954; 
x_952 = lean_ctor_get(x_950, 0);
x_953 = lean_ctor_get(x_950, 1);
lean_inc(x_953);
lean_inc(x_952);
lean_dec(x_950);
x_954 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_954, 0, x_952);
lean_ctor_set(x_954, 1, x_953);
return x_954;
}
}
}
}
else
{
lean_object* x_955; uint8_t x_956; lean_object* x_1112; uint8_t x_1113; 
x_955 = l_Lean_Syntax_getArg(x_906, x_135);
lean_dec(x_906);
x_1112 = l_Lean_Parser_Term_matchAlt___closed__2;
lean_inc(x_955);
x_1113 = l_Lean_Syntax_isOfKind(x_955, x_1112);
if (x_1113 == 0)
{
uint8_t x_1114; 
x_1114 = 0;
x_956 = x_1114;
goto block_1111;
}
else
{
lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; uint8_t x_1118; 
x_1115 = l_Lean_Syntax_getArgs(x_955);
x_1116 = lean_array_get_size(x_1115);
lean_dec(x_1115);
x_1117 = lean_unsigned_to_nat(3u);
x_1118 = lean_nat_dec_eq(x_1116, x_1117);
lean_dec(x_1116);
x_956 = x_1118;
goto block_1111;
}
block_1111:
{
if (x_956 == 0)
{
lean_object* x_957; lean_object* x_958; lean_object* x_959; lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; lean_object* x_966; lean_object* x_967; lean_object* x_968; lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_972; 
lean_dec(x_955);
lean_dec(x_234);
x_957 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_958 = lean_ctor_get(x_957, 0);
lean_inc(x_958);
x_959 = lean_ctor_get(x_957, 1);
lean_inc(x_959);
lean_dec(x_957);
x_960 = lean_st_ref_get(x_8, x_959);
x_961 = lean_ctor_get(x_960, 0);
lean_inc(x_961);
x_962 = lean_ctor_get(x_960, 1);
lean_inc(x_962);
lean_dec(x_960);
x_963 = lean_ctor_get(x_961, 0);
lean_inc(x_963);
lean_dec(x_961);
x_964 = lean_st_ref_get(x_4, x_962);
x_965 = lean_ctor_get(x_964, 0);
lean_inc(x_965);
x_966 = lean_ctor_get(x_964, 1);
lean_inc(x_966);
lean_dec(x_964);
x_967 = lean_ctor_get(x_965, 4);
lean_inc(x_967);
lean_dec(x_965);
x_968 = lean_ctor_get(x_7, 1);
lean_inc(x_968);
x_969 = lean_ctor_get(x_7, 2);
lean_inc(x_969);
x_970 = lean_environment_main_module(x_963);
x_971 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_971, 0, x_970);
lean_ctor_set(x_971, 1, x_958);
lean_ctor_set(x_971, 2, x_968);
lean_ctor_set(x_971, 3, x_969);
lean_inc(x_1);
x_972 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_971, x_967);
if (lean_obj_tag(x_972) == 0)
{
lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; lean_object* x_977; uint8_t x_978; 
x_973 = lean_ctor_get(x_972, 0);
lean_inc(x_973);
x_974 = lean_ctor_get(x_972, 1);
lean_inc(x_974);
lean_dec(x_972);
x_975 = lean_st_ref_take(x_4, x_966);
x_976 = lean_ctor_get(x_975, 0);
lean_inc(x_976);
x_977 = lean_ctor_get(x_975, 1);
lean_inc(x_977);
lean_dec(x_975);
x_978 = !lean_is_exclusive(x_976);
if (x_978 == 0)
{
lean_object* x_979; lean_object* x_980; lean_object* x_981; 
x_979 = lean_ctor_get(x_976, 4);
lean_dec(x_979);
lean_ctor_set(x_976, 4, x_974);
x_980 = lean_st_ref_set(x_4, x_976, x_977);
x_981 = lean_ctor_get(x_980, 1);
lean_inc(x_981);
lean_dec(x_980);
x_10 = x_973;
x_11 = x_981;
goto block_36;
}
else
{
lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; lean_object* x_988; 
x_982 = lean_ctor_get(x_976, 0);
x_983 = lean_ctor_get(x_976, 1);
x_984 = lean_ctor_get(x_976, 2);
x_985 = lean_ctor_get(x_976, 3);
lean_inc(x_985);
lean_inc(x_984);
lean_inc(x_983);
lean_inc(x_982);
lean_dec(x_976);
x_986 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_986, 0, x_982);
lean_ctor_set(x_986, 1, x_983);
lean_ctor_set(x_986, 2, x_984);
lean_ctor_set(x_986, 3, x_985);
lean_ctor_set(x_986, 4, x_974);
x_987 = lean_st_ref_set(x_4, x_986, x_977);
x_988 = lean_ctor_get(x_987, 1);
lean_inc(x_988);
lean_dec(x_987);
x_10 = x_973;
x_11 = x_988;
goto block_36;
}
}
else
{
lean_object* x_989; 
lean_dec(x_2);
lean_dec(x_1);
x_989 = lean_ctor_get(x_972, 0);
lean_inc(x_989);
lean_dec(x_972);
if (lean_obj_tag(x_989) == 0)
{
lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; uint8_t x_995; 
x_990 = lean_ctor_get(x_989, 0);
lean_inc(x_990);
x_991 = lean_ctor_get(x_989, 1);
lean_inc(x_991);
lean_dec(x_989);
x_992 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_992, 0, x_991);
x_993 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_993, 0, x_992);
x_994 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_990, x_993, x_3, x_4, x_5, x_6, x_7, x_8, x_966);
lean_dec(x_990);
x_995 = !lean_is_exclusive(x_994);
if (x_995 == 0)
{
return x_994;
}
else
{
lean_object* x_996; lean_object* x_997; lean_object* x_998; 
x_996 = lean_ctor_get(x_994, 0);
x_997 = lean_ctor_get(x_994, 1);
lean_inc(x_997);
lean_inc(x_996);
lean_dec(x_994);
x_998 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_998, 0, x_996);
lean_ctor_set(x_998, 1, x_997);
return x_998;
}
}
else
{
lean_object* x_999; uint8_t x_1000; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_999 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_966);
x_1000 = !lean_is_exclusive(x_999);
if (x_1000 == 0)
{
return x_999;
}
else
{
lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; 
x_1001 = lean_ctor_get(x_999, 0);
x_1002 = lean_ctor_get(x_999, 1);
lean_inc(x_1002);
lean_inc(x_1001);
lean_dec(x_999);
x_1003 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1003, 0, x_1001);
lean_ctor_set(x_1003, 1, x_1002);
return x_1003;
}
}
}
}
else
{
lean_object* x_1004; uint8_t x_1005; uint8_t x_1106; 
x_1004 = l_Lean_Syntax_getArg(x_955, x_135);
lean_inc(x_1004);
x_1106 = l_Lean_Syntax_isOfKind(x_1004, x_848);
if (x_1106 == 0)
{
uint8_t x_1107; 
x_1107 = 0;
x_1005 = x_1107;
goto block_1105;
}
else
{
lean_object* x_1108; lean_object* x_1109; uint8_t x_1110; 
x_1108 = l_Lean_Syntax_getArgs(x_1004);
x_1109 = lean_array_get_size(x_1108);
lean_dec(x_1108);
x_1110 = lean_nat_dec_eq(x_1109, x_85);
lean_dec(x_1109);
x_1005 = x_1110;
goto block_1105;
}
block_1105:
{
if (x_1005 == 0)
{
lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; 
lean_dec(x_1004);
lean_dec(x_955);
lean_dec(x_234);
x_1006 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_1007 = lean_ctor_get(x_1006, 0);
lean_inc(x_1007);
x_1008 = lean_ctor_get(x_1006, 1);
lean_inc(x_1008);
lean_dec(x_1006);
x_1009 = lean_st_ref_get(x_8, x_1008);
x_1010 = lean_ctor_get(x_1009, 0);
lean_inc(x_1010);
x_1011 = lean_ctor_get(x_1009, 1);
lean_inc(x_1011);
lean_dec(x_1009);
x_1012 = lean_ctor_get(x_1010, 0);
lean_inc(x_1012);
lean_dec(x_1010);
x_1013 = lean_st_ref_get(x_4, x_1011);
x_1014 = lean_ctor_get(x_1013, 0);
lean_inc(x_1014);
x_1015 = lean_ctor_get(x_1013, 1);
lean_inc(x_1015);
lean_dec(x_1013);
x_1016 = lean_ctor_get(x_1014, 4);
lean_inc(x_1016);
lean_dec(x_1014);
x_1017 = lean_ctor_get(x_7, 1);
lean_inc(x_1017);
x_1018 = lean_ctor_get(x_7, 2);
lean_inc(x_1018);
x_1019 = lean_environment_main_module(x_1012);
x_1020 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_1020, 0, x_1019);
lean_ctor_set(x_1020, 1, x_1007);
lean_ctor_set(x_1020, 2, x_1017);
lean_ctor_set(x_1020, 3, x_1018);
lean_inc(x_1);
x_1021 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_1020, x_1016);
if (lean_obj_tag(x_1021) == 0)
{
lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; uint8_t x_1027; 
x_1022 = lean_ctor_get(x_1021, 0);
lean_inc(x_1022);
x_1023 = lean_ctor_get(x_1021, 1);
lean_inc(x_1023);
lean_dec(x_1021);
x_1024 = lean_st_ref_take(x_4, x_1015);
x_1025 = lean_ctor_get(x_1024, 0);
lean_inc(x_1025);
x_1026 = lean_ctor_get(x_1024, 1);
lean_inc(x_1026);
lean_dec(x_1024);
x_1027 = !lean_is_exclusive(x_1025);
if (x_1027 == 0)
{
lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; 
x_1028 = lean_ctor_get(x_1025, 4);
lean_dec(x_1028);
lean_ctor_set(x_1025, 4, x_1023);
x_1029 = lean_st_ref_set(x_4, x_1025, x_1026);
x_1030 = lean_ctor_get(x_1029, 1);
lean_inc(x_1030);
lean_dec(x_1029);
x_10 = x_1022;
x_11 = x_1030;
goto block_36;
}
else
{
lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; 
x_1031 = lean_ctor_get(x_1025, 0);
x_1032 = lean_ctor_get(x_1025, 1);
x_1033 = lean_ctor_get(x_1025, 2);
x_1034 = lean_ctor_get(x_1025, 3);
lean_inc(x_1034);
lean_inc(x_1033);
lean_inc(x_1032);
lean_inc(x_1031);
lean_dec(x_1025);
x_1035 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1035, 0, x_1031);
lean_ctor_set(x_1035, 1, x_1032);
lean_ctor_set(x_1035, 2, x_1033);
lean_ctor_set(x_1035, 3, x_1034);
lean_ctor_set(x_1035, 4, x_1023);
x_1036 = lean_st_ref_set(x_4, x_1035, x_1026);
x_1037 = lean_ctor_get(x_1036, 1);
lean_inc(x_1037);
lean_dec(x_1036);
x_10 = x_1022;
x_11 = x_1037;
goto block_36;
}
}
else
{
lean_object* x_1038; 
lean_dec(x_2);
lean_dec(x_1);
x_1038 = lean_ctor_get(x_1021, 0);
lean_inc(x_1038);
lean_dec(x_1021);
if (lean_obj_tag(x_1038) == 0)
{
lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; uint8_t x_1044; 
x_1039 = lean_ctor_get(x_1038, 0);
lean_inc(x_1039);
x_1040 = lean_ctor_get(x_1038, 1);
lean_inc(x_1040);
lean_dec(x_1038);
x_1041 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1041, 0, x_1040);
x_1042 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1042, 0, x_1041);
x_1043 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_1039, x_1042, x_3, x_4, x_5, x_6, x_7, x_8, x_1015);
lean_dec(x_1039);
x_1044 = !lean_is_exclusive(x_1043);
if (x_1044 == 0)
{
return x_1043;
}
else
{
lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; 
x_1045 = lean_ctor_get(x_1043, 0);
x_1046 = lean_ctor_get(x_1043, 1);
lean_inc(x_1046);
lean_inc(x_1045);
lean_dec(x_1043);
x_1047 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1047, 0, x_1045);
lean_ctor_set(x_1047, 1, x_1046);
return x_1047;
}
}
else
{
lean_object* x_1048; uint8_t x_1049; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1048 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_1015);
x_1049 = !lean_is_exclusive(x_1048);
if (x_1049 == 0)
{
return x_1048;
}
else
{
lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; 
x_1050 = lean_ctor_get(x_1048, 0);
x_1051 = lean_ctor_get(x_1048, 1);
lean_inc(x_1051);
lean_inc(x_1050);
lean_dec(x_1048);
x_1052 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1052, 0, x_1050);
lean_ctor_set(x_1052, 1, x_1051);
return x_1052;
}
}
}
}
else
{
lean_object* x_1053; lean_object* x_1054; uint8_t x_1055; 
x_1053 = l_Lean_Syntax_getArg(x_1004, x_135);
lean_dec(x_1004);
x_1054 = l_Lean_identKind___closed__2;
lean_inc(x_1053);
x_1055 = l_Lean_Syntax_isOfKind(x_1053, x_1054);
if (x_1055 == 0)
{
lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; 
lean_dec(x_1053);
lean_dec(x_955);
lean_dec(x_234);
x_1056 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_1057 = lean_ctor_get(x_1056, 0);
lean_inc(x_1057);
x_1058 = lean_ctor_get(x_1056, 1);
lean_inc(x_1058);
lean_dec(x_1056);
x_1059 = lean_st_ref_get(x_8, x_1058);
x_1060 = lean_ctor_get(x_1059, 0);
lean_inc(x_1060);
x_1061 = lean_ctor_get(x_1059, 1);
lean_inc(x_1061);
lean_dec(x_1059);
x_1062 = lean_ctor_get(x_1060, 0);
lean_inc(x_1062);
lean_dec(x_1060);
x_1063 = lean_st_ref_get(x_4, x_1061);
x_1064 = lean_ctor_get(x_1063, 0);
lean_inc(x_1064);
x_1065 = lean_ctor_get(x_1063, 1);
lean_inc(x_1065);
lean_dec(x_1063);
x_1066 = lean_ctor_get(x_1064, 4);
lean_inc(x_1066);
lean_dec(x_1064);
x_1067 = lean_ctor_get(x_7, 1);
lean_inc(x_1067);
x_1068 = lean_ctor_get(x_7, 2);
lean_inc(x_1068);
x_1069 = lean_environment_main_module(x_1062);
x_1070 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_1070, 0, x_1069);
lean_ctor_set(x_1070, 1, x_1057);
lean_ctor_set(x_1070, 2, x_1067);
lean_ctor_set(x_1070, 3, x_1068);
lean_inc(x_1);
x_1071 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_1070, x_1066);
if (lean_obj_tag(x_1071) == 0)
{
lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; uint8_t x_1077; 
x_1072 = lean_ctor_get(x_1071, 0);
lean_inc(x_1072);
x_1073 = lean_ctor_get(x_1071, 1);
lean_inc(x_1073);
lean_dec(x_1071);
x_1074 = lean_st_ref_take(x_4, x_1065);
x_1075 = lean_ctor_get(x_1074, 0);
lean_inc(x_1075);
x_1076 = lean_ctor_get(x_1074, 1);
lean_inc(x_1076);
lean_dec(x_1074);
x_1077 = !lean_is_exclusive(x_1075);
if (x_1077 == 0)
{
lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; 
x_1078 = lean_ctor_get(x_1075, 4);
lean_dec(x_1078);
lean_ctor_set(x_1075, 4, x_1073);
x_1079 = lean_st_ref_set(x_4, x_1075, x_1076);
x_1080 = lean_ctor_get(x_1079, 1);
lean_inc(x_1080);
lean_dec(x_1079);
x_10 = x_1072;
x_11 = x_1080;
goto block_36;
}
else
{
lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; 
x_1081 = lean_ctor_get(x_1075, 0);
x_1082 = lean_ctor_get(x_1075, 1);
x_1083 = lean_ctor_get(x_1075, 2);
x_1084 = lean_ctor_get(x_1075, 3);
lean_inc(x_1084);
lean_inc(x_1083);
lean_inc(x_1082);
lean_inc(x_1081);
lean_dec(x_1075);
x_1085 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1085, 0, x_1081);
lean_ctor_set(x_1085, 1, x_1082);
lean_ctor_set(x_1085, 2, x_1083);
lean_ctor_set(x_1085, 3, x_1084);
lean_ctor_set(x_1085, 4, x_1073);
x_1086 = lean_st_ref_set(x_4, x_1085, x_1076);
x_1087 = lean_ctor_get(x_1086, 1);
lean_inc(x_1087);
lean_dec(x_1086);
x_10 = x_1072;
x_11 = x_1087;
goto block_36;
}
}
else
{
lean_object* x_1088; 
lean_dec(x_2);
lean_dec(x_1);
x_1088 = lean_ctor_get(x_1071, 0);
lean_inc(x_1088);
lean_dec(x_1071);
if (lean_obj_tag(x_1088) == 0)
{
lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; lean_object* x_1092; lean_object* x_1093; uint8_t x_1094; 
x_1089 = lean_ctor_get(x_1088, 0);
lean_inc(x_1089);
x_1090 = lean_ctor_get(x_1088, 1);
lean_inc(x_1090);
lean_dec(x_1088);
x_1091 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1091, 0, x_1090);
x_1092 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1092, 0, x_1091);
x_1093 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_1089, x_1092, x_3, x_4, x_5, x_6, x_7, x_8, x_1065);
lean_dec(x_1089);
x_1094 = !lean_is_exclusive(x_1093);
if (x_1094 == 0)
{
return x_1093;
}
else
{
lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; 
x_1095 = lean_ctor_get(x_1093, 0);
x_1096 = lean_ctor_get(x_1093, 1);
lean_inc(x_1096);
lean_inc(x_1095);
lean_dec(x_1093);
x_1097 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1097, 0, x_1095);
lean_ctor_set(x_1097, 1, x_1096);
return x_1097;
}
}
else
{
lean_object* x_1098; uint8_t x_1099; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1098 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_1065);
x_1099 = !lean_is_exclusive(x_1098);
if (x_1099 == 0)
{
return x_1098;
}
else
{
lean_object* x_1100; lean_object* x_1101; lean_object* x_1102; 
x_1100 = lean_ctor_get(x_1098, 0);
x_1101 = lean_ctor_get(x_1098, 1);
lean_inc(x_1101);
lean_inc(x_1100);
lean_dec(x_1098);
x_1102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1102, 0, x_1100);
lean_ctor_set(x_1102, 1, x_1101);
return x_1102;
}
}
}
}
else
{
lean_object* x_1103; lean_object* x_1104; 
x_1103 = l_Lean_Syntax_getArg(x_955, x_235);
lean_dec(x_955);
x_1104 = l___private_Lean_Elab_Match_1__expandSimpleMatch(x_1, x_234, x_1053, x_1103, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_1104;
}
}
}
}
}
}
}
}
}
block_1352:
{
if (x_1127 == 0)
{
if (x_1126 == 0)
{
uint8_t x_1128; 
lean_dec(x_856);
x_1128 = 0;
x_857 = x_1128;
goto block_1125;
}
else
{
lean_object* x_1129; lean_object* x_1130; uint8_t x_1131; 
x_1129 = l_Lean_Syntax_getArgs(x_856);
lean_dec(x_856);
x_1130 = lean_array_get_size(x_1129);
lean_dec(x_1129);
x_1131 = lean_nat_dec_eq(x_1130, x_85);
lean_dec(x_1130);
x_857 = x_1131;
goto block_1125;
}
}
else
{
lean_object* x_1132; lean_object* x_1133; uint8_t x_1134; uint8_t x_1347; 
lean_dec(x_856);
x_1132 = lean_unsigned_to_nat(5u);
x_1133 = l_Lean_Syntax_getArg(x_1, x_1132);
lean_inc(x_1133);
x_1347 = l_Lean_Syntax_isOfKind(x_1133, x_848);
if (x_1347 == 0)
{
uint8_t x_1348; 
x_1348 = 0;
x_1134 = x_1348;
goto block_1346;
}
else
{
lean_object* x_1349; lean_object* x_1350; uint8_t x_1351; 
x_1349 = l_Lean_Syntax_getArgs(x_1133);
x_1350 = lean_array_get_size(x_1349);
lean_dec(x_1349);
x_1351 = lean_nat_dec_eq(x_1350, x_85);
lean_dec(x_1350);
x_1134 = x_1351;
goto block_1346;
}
block_1346:
{
if (x_1134 == 0)
{
lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; 
lean_dec(x_1133);
lean_dec(x_234);
x_1135 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_1136 = lean_ctor_get(x_1135, 0);
lean_inc(x_1136);
x_1137 = lean_ctor_get(x_1135, 1);
lean_inc(x_1137);
lean_dec(x_1135);
x_1138 = lean_st_ref_get(x_8, x_1137);
x_1139 = lean_ctor_get(x_1138, 0);
lean_inc(x_1139);
x_1140 = lean_ctor_get(x_1138, 1);
lean_inc(x_1140);
lean_dec(x_1138);
x_1141 = lean_ctor_get(x_1139, 0);
lean_inc(x_1141);
lean_dec(x_1139);
x_1142 = lean_st_ref_get(x_4, x_1140);
x_1143 = lean_ctor_get(x_1142, 0);
lean_inc(x_1143);
x_1144 = lean_ctor_get(x_1142, 1);
lean_inc(x_1144);
lean_dec(x_1142);
x_1145 = lean_ctor_get(x_1143, 4);
lean_inc(x_1145);
lean_dec(x_1143);
x_1146 = lean_ctor_get(x_7, 1);
lean_inc(x_1146);
x_1147 = lean_ctor_get(x_7, 2);
lean_inc(x_1147);
x_1148 = lean_environment_main_module(x_1141);
x_1149 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_1149, 0, x_1148);
lean_ctor_set(x_1149, 1, x_1136);
lean_ctor_set(x_1149, 2, x_1146);
lean_ctor_set(x_1149, 3, x_1147);
lean_inc(x_1);
x_1150 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_1149, x_1145);
if (lean_obj_tag(x_1150) == 0)
{
lean_object* x_1151; lean_object* x_1152; lean_object* x_1153; lean_object* x_1154; lean_object* x_1155; uint8_t x_1156; 
x_1151 = lean_ctor_get(x_1150, 0);
lean_inc(x_1151);
x_1152 = lean_ctor_get(x_1150, 1);
lean_inc(x_1152);
lean_dec(x_1150);
x_1153 = lean_st_ref_take(x_4, x_1144);
x_1154 = lean_ctor_get(x_1153, 0);
lean_inc(x_1154);
x_1155 = lean_ctor_get(x_1153, 1);
lean_inc(x_1155);
lean_dec(x_1153);
x_1156 = !lean_is_exclusive(x_1154);
if (x_1156 == 0)
{
lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; 
x_1157 = lean_ctor_get(x_1154, 4);
lean_dec(x_1157);
lean_ctor_set(x_1154, 4, x_1152);
x_1158 = lean_st_ref_set(x_4, x_1154, x_1155);
x_1159 = lean_ctor_get(x_1158, 1);
lean_inc(x_1159);
lean_dec(x_1158);
x_10 = x_1151;
x_11 = x_1159;
goto block_36;
}
else
{
lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; lean_object* x_1164; lean_object* x_1165; lean_object* x_1166; 
x_1160 = lean_ctor_get(x_1154, 0);
x_1161 = lean_ctor_get(x_1154, 1);
x_1162 = lean_ctor_get(x_1154, 2);
x_1163 = lean_ctor_get(x_1154, 3);
lean_inc(x_1163);
lean_inc(x_1162);
lean_inc(x_1161);
lean_inc(x_1160);
lean_dec(x_1154);
x_1164 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1164, 0, x_1160);
lean_ctor_set(x_1164, 1, x_1161);
lean_ctor_set(x_1164, 2, x_1162);
lean_ctor_set(x_1164, 3, x_1163);
lean_ctor_set(x_1164, 4, x_1152);
x_1165 = lean_st_ref_set(x_4, x_1164, x_1155);
x_1166 = lean_ctor_get(x_1165, 1);
lean_inc(x_1166);
lean_dec(x_1165);
x_10 = x_1151;
x_11 = x_1166;
goto block_36;
}
}
else
{
lean_object* x_1167; 
lean_dec(x_2);
lean_dec(x_1);
x_1167 = lean_ctor_get(x_1150, 0);
lean_inc(x_1167);
lean_dec(x_1150);
if (lean_obj_tag(x_1167) == 0)
{
lean_object* x_1168; lean_object* x_1169; lean_object* x_1170; lean_object* x_1171; lean_object* x_1172; uint8_t x_1173; 
x_1168 = lean_ctor_get(x_1167, 0);
lean_inc(x_1168);
x_1169 = lean_ctor_get(x_1167, 1);
lean_inc(x_1169);
lean_dec(x_1167);
x_1170 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1170, 0, x_1169);
x_1171 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1171, 0, x_1170);
x_1172 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_1168, x_1171, x_3, x_4, x_5, x_6, x_7, x_8, x_1144);
lean_dec(x_1168);
x_1173 = !lean_is_exclusive(x_1172);
if (x_1173 == 0)
{
return x_1172;
}
else
{
lean_object* x_1174; lean_object* x_1175; lean_object* x_1176; 
x_1174 = lean_ctor_get(x_1172, 0);
x_1175 = lean_ctor_get(x_1172, 1);
lean_inc(x_1175);
lean_inc(x_1174);
lean_dec(x_1172);
x_1176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1176, 0, x_1174);
lean_ctor_set(x_1176, 1, x_1175);
return x_1176;
}
}
else
{
lean_object* x_1177; uint8_t x_1178; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1177 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_1144);
x_1178 = !lean_is_exclusive(x_1177);
if (x_1178 == 0)
{
return x_1177;
}
else
{
lean_object* x_1179; lean_object* x_1180; lean_object* x_1181; 
x_1179 = lean_ctor_get(x_1177, 0);
x_1180 = lean_ctor_get(x_1177, 1);
lean_inc(x_1180);
lean_inc(x_1179);
lean_dec(x_1177);
x_1181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1181, 0, x_1179);
lean_ctor_set(x_1181, 1, x_1180);
return x_1181;
}
}
}
}
else
{
lean_object* x_1182; uint8_t x_1183; lean_object* x_1339; uint8_t x_1340; 
x_1182 = l_Lean_Syntax_getArg(x_1133, x_135);
lean_dec(x_1133);
x_1339 = l_Lean_Parser_Term_matchAlt___closed__2;
lean_inc(x_1182);
x_1340 = l_Lean_Syntax_isOfKind(x_1182, x_1339);
if (x_1340 == 0)
{
uint8_t x_1341; 
x_1341 = 0;
x_1183 = x_1341;
goto block_1338;
}
else
{
lean_object* x_1342; lean_object* x_1343; lean_object* x_1344; uint8_t x_1345; 
x_1342 = l_Lean_Syntax_getArgs(x_1182);
x_1343 = lean_array_get_size(x_1342);
lean_dec(x_1342);
x_1344 = lean_unsigned_to_nat(3u);
x_1345 = lean_nat_dec_eq(x_1343, x_1344);
lean_dec(x_1343);
x_1183 = x_1345;
goto block_1338;
}
block_1338:
{
if (x_1183 == 0)
{
lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; lean_object* x_1193; lean_object* x_1194; lean_object* x_1195; lean_object* x_1196; lean_object* x_1197; lean_object* x_1198; lean_object* x_1199; 
lean_dec(x_1182);
lean_dec(x_234);
x_1184 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_1185 = lean_ctor_get(x_1184, 0);
lean_inc(x_1185);
x_1186 = lean_ctor_get(x_1184, 1);
lean_inc(x_1186);
lean_dec(x_1184);
x_1187 = lean_st_ref_get(x_8, x_1186);
x_1188 = lean_ctor_get(x_1187, 0);
lean_inc(x_1188);
x_1189 = lean_ctor_get(x_1187, 1);
lean_inc(x_1189);
lean_dec(x_1187);
x_1190 = lean_ctor_get(x_1188, 0);
lean_inc(x_1190);
lean_dec(x_1188);
x_1191 = lean_st_ref_get(x_4, x_1189);
x_1192 = lean_ctor_get(x_1191, 0);
lean_inc(x_1192);
x_1193 = lean_ctor_get(x_1191, 1);
lean_inc(x_1193);
lean_dec(x_1191);
x_1194 = lean_ctor_get(x_1192, 4);
lean_inc(x_1194);
lean_dec(x_1192);
x_1195 = lean_ctor_get(x_7, 1);
lean_inc(x_1195);
x_1196 = lean_ctor_get(x_7, 2);
lean_inc(x_1196);
x_1197 = lean_environment_main_module(x_1190);
x_1198 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_1198, 0, x_1197);
lean_ctor_set(x_1198, 1, x_1185);
lean_ctor_set(x_1198, 2, x_1195);
lean_ctor_set(x_1198, 3, x_1196);
lean_inc(x_1);
x_1199 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_1198, x_1194);
if (lean_obj_tag(x_1199) == 0)
{
lean_object* x_1200; lean_object* x_1201; lean_object* x_1202; lean_object* x_1203; lean_object* x_1204; uint8_t x_1205; 
x_1200 = lean_ctor_get(x_1199, 0);
lean_inc(x_1200);
x_1201 = lean_ctor_get(x_1199, 1);
lean_inc(x_1201);
lean_dec(x_1199);
x_1202 = lean_st_ref_take(x_4, x_1193);
x_1203 = lean_ctor_get(x_1202, 0);
lean_inc(x_1203);
x_1204 = lean_ctor_get(x_1202, 1);
lean_inc(x_1204);
lean_dec(x_1202);
x_1205 = !lean_is_exclusive(x_1203);
if (x_1205 == 0)
{
lean_object* x_1206; lean_object* x_1207; lean_object* x_1208; 
x_1206 = lean_ctor_get(x_1203, 4);
lean_dec(x_1206);
lean_ctor_set(x_1203, 4, x_1201);
x_1207 = lean_st_ref_set(x_4, x_1203, x_1204);
x_1208 = lean_ctor_get(x_1207, 1);
lean_inc(x_1208);
lean_dec(x_1207);
x_10 = x_1200;
x_11 = x_1208;
goto block_36;
}
else
{
lean_object* x_1209; lean_object* x_1210; lean_object* x_1211; lean_object* x_1212; lean_object* x_1213; lean_object* x_1214; lean_object* x_1215; 
x_1209 = lean_ctor_get(x_1203, 0);
x_1210 = lean_ctor_get(x_1203, 1);
x_1211 = lean_ctor_get(x_1203, 2);
x_1212 = lean_ctor_get(x_1203, 3);
lean_inc(x_1212);
lean_inc(x_1211);
lean_inc(x_1210);
lean_inc(x_1209);
lean_dec(x_1203);
x_1213 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1213, 0, x_1209);
lean_ctor_set(x_1213, 1, x_1210);
lean_ctor_set(x_1213, 2, x_1211);
lean_ctor_set(x_1213, 3, x_1212);
lean_ctor_set(x_1213, 4, x_1201);
x_1214 = lean_st_ref_set(x_4, x_1213, x_1204);
x_1215 = lean_ctor_get(x_1214, 1);
lean_inc(x_1215);
lean_dec(x_1214);
x_10 = x_1200;
x_11 = x_1215;
goto block_36;
}
}
else
{
lean_object* x_1216; 
lean_dec(x_2);
lean_dec(x_1);
x_1216 = lean_ctor_get(x_1199, 0);
lean_inc(x_1216);
lean_dec(x_1199);
if (lean_obj_tag(x_1216) == 0)
{
lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; lean_object* x_1221; uint8_t x_1222; 
x_1217 = lean_ctor_get(x_1216, 0);
lean_inc(x_1217);
x_1218 = lean_ctor_get(x_1216, 1);
lean_inc(x_1218);
lean_dec(x_1216);
x_1219 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1219, 0, x_1218);
x_1220 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1220, 0, x_1219);
x_1221 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_1217, x_1220, x_3, x_4, x_5, x_6, x_7, x_8, x_1193);
lean_dec(x_1217);
x_1222 = !lean_is_exclusive(x_1221);
if (x_1222 == 0)
{
return x_1221;
}
else
{
lean_object* x_1223; lean_object* x_1224; lean_object* x_1225; 
x_1223 = lean_ctor_get(x_1221, 0);
x_1224 = lean_ctor_get(x_1221, 1);
lean_inc(x_1224);
lean_inc(x_1223);
lean_dec(x_1221);
x_1225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1225, 0, x_1223);
lean_ctor_set(x_1225, 1, x_1224);
return x_1225;
}
}
else
{
lean_object* x_1226; uint8_t x_1227; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1226 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_1193);
x_1227 = !lean_is_exclusive(x_1226);
if (x_1227 == 0)
{
return x_1226;
}
else
{
lean_object* x_1228; lean_object* x_1229; lean_object* x_1230; 
x_1228 = lean_ctor_get(x_1226, 0);
x_1229 = lean_ctor_get(x_1226, 1);
lean_inc(x_1229);
lean_inc(x_1228);
lean_dec(x_1226);
x_1230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1230, 0, x_1228);
lean_ctor_set(x_1230, 1, x_1229);
return x_1230;
}
}
}
}
else
{
lean_object* x_1231; uint8_t x_1232; uint8_t x_1333; 
x_1231 = l_Lean_Syntax_getArg(x_1182, x_135);
lean_inc(x_1231);
x_1333 = l_Lean_Syntax_isOfKind(x_1231, x_848);
if (x_1333 == 0)
{
uint8_t x_1334; 
x_1334 = 0;
x_1232 = x_1334;
goto block_1332;
}
else
{
lean_object* x_1335; lean_object* x_1336; uint8_t x_1337; 
x_1335 = l_Lean_Syntax_getArgs(x_1231);
x_1336 = lean_array_get_size(x_1335);
lean_dec(x_1335);
x_1337 = lean_nat_dec_eq(x_1336, x_85);
lean_dec(x_1336);
x_1232 = x_1337;
goto block_1332;
}
block_1332:
{
if (x_1232 == 0)
{
lean_object* x_1233; lean_object* x_1234; lean_object* x_1235; lean_object* x_1236; lean_object* x_1237; lean_object* x_1238; lean_object* x_1239; lean_object* x_1240; lean_object* x_1241; lean_object* x_1242; lean_object* x_1243; lean_object* x_1244; lean_object* x_1245; lean_object* x_1246; lean_object* x_1247; lean_object* x_1248; 
lean_dec(x_1231);
lean_dec(x_1182);
lean_dec(x_234);
x_1233 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_1234 = lean_ctor_get(x_1233, 0);
lean_inc(x_1234);
x_1235 = lean_ctor_get(x_1233, 1);
lean_inc(x_1235);
lean_dec(x_1233);
x_1236 = lean_st_ref_get(x_8, x_1235);
x_1237 = lean_ctor_get(x_1236, 0);
lean_inc(x_1237);
x_1238 = lean_ctor_get(x_1236, 1);
lean_inc(x_1238);
lean_dec(x_1236);
x_1239 = lean_ctor_get(x_1237, 0);
lean_inc(x_1239);
lean_dec(x_1237);
x_1240 = lean_st_ref_get(x_4, x_1238);
x_1241 = lean_ctor_get(x_1240, 0);
lean_inc(x_1241);
x_1242 = lean_ctor_get(x_1240, 1);
lean_inc(x_1242);
lean_dec(x_1240);
x_1243 = lean_ctor_get(x_1241, 4);
lean_inc(x_1243);
lean_dec(x_1241);
x_1244 = lean_ctor_get(x_7, 1);
lean_inc(x_1244);
x_1245 = lean_ctor_get(x_7, 2);
lean_inc(x_1245);
x_1246 = lean_environment_main_module(x_1239);
x_1247 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_1247, 0, x_1246);
lean_ctor_set(x_1247, 1, x_1234);
lean_ctor_set(x_1247, 2, x_1244);
lean_ctor_set(x_1247, 3, x_1245);
lean_inc(x_1);
x_1248 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_1247, x_1243);
if (lean_obj_tag(x_1248) == 0)
{
lean_object* x_1249; lean_object* x_1250; lean_object* x_1251; lean_object* x_1252; lean_object* x_1253; uint8_t x_1254; 
x_1249 = lean_ctor_get(x_1248, 0);
lean_inc(x_1249);
x_1250 = lean_ctor_get(x_1248, 1);
lean_inc(x_1250);
lean_dec(x_1248);
x_1251 = lean_st_ref_take(x_4, x_1242);
x_1252 = lean_ctor_get(x_1251, 0);
lean_inc(x_1252);
x_1253 = lean_ctor_get(x_1251, 1);
lean_inc(x_1253);
lean_dec(x_1251);
x_1254 = !lean_is_exclusive(x_1252);
if (x_1254 == 0)
{
lean_object* x_1255; lean_object* x_1256; lean_object* x_1257; 
x_1255 = lean_ctor_get(x_1252, 4);
lean_dec(x_1255);
lean_ctor_set(x_1252, 4, x_1250);
x_1256 = lean_st_ref_set(x_4, x_1252, x_1253);
x_1257 = lean_ctor_get(x_1256, 1);
lean_inc(x_1257);
lean_dec(x_1256);
x_10 = x_1249;
x_11 = x_1257;
goto block_36;
}
else
{
lean_object* x_1258; lean_object* x_1259; lean_object* x_1260; lean_object* x_1261; lean_object* x_1262; lean_object* x_1263; lean_object* x_1264; 
x_1258 = lean_ctor_get(x_1252, 0);
x_1259 = lean_ctor_get(x_1252, 1);
x_1260 = lean_ctor_get(x_1252, 2);
x_1261 = lean_ctor_get(x_1252, 3);
lean_inc(x_1261);
lean_inc(x_1260);
lean_inc(x_1259);
lean_inc(x_1258);
lean_dec(x_1252);
x_1262 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1262, 0, x_1258);
lean_ctor_set(x_1262, 1, x_1259);
lean_ctor_set(x_1262, 2, x_1260);
lean_ctor_set(x_1262, 3, x_1261);
lean_ctor_set(x_1262, 4, x_1250);
x_1263 = lean_st_ref_set(x_4, x_1262, x_1253);
x_1264 = lean_ctor_get(x_1263, 1);
lean_inc(x_1264);
lean_dec(x_1263);
x_10 = x_1249;
x_11 = x_1264;
goto block_36;
}
}
else
{
lean_object* x_1265; 
lean_dec(x_2);
lean_dec(x_1);
x_1265 = lean_ctor_get(x_1248, 0);
lean_inc(x_1265);
lean_dec(x_1248);
if (lean_obj_tag(x_1265) == 0)
{
lean_object* x_1266; lean_object* x_1267; lean_object* x_1268; lean_object* x_1269; lean_object* x_1270; uint8_t x_1271; 
x_1266 = lean_ctor_get(x_1265, 0);
lean_inc(x_1266);
x_1267 = lean_ctor_get(x_1265, 1);
lean_inc(x_1267);
lean_dec(x_1265);
x_1268 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1268, 0, x_1267);
x_1269 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1269, 0, x_1268);
x_1270 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_1266, x_1269, x_3, x_4, x_5, x_6, x_7, x_8, x_1242);
lean_dec(x_1266);
x_1271 = !lean_is_exclusive(x_1270);
if (x_1271 == 0)
{
return x_1270;
}
else
{
lean_object* x_1272; lean_object* x_1273; lean_object* x_1274; 
x_1272 = lean_ctor_get(x_1270, 0);
x_1273 = lean_ctor_get(x_1270, 1);
lean_inc(x_1273);
lean_inc(x_1272);
lean_dec(x_1270);
x_1274 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1274, 0, x_1272);
lean_ctor_set(x_1274, 1, x_1273);
return x_1274;
}
}
else
{
lean_object* x_1275; uint8_t x_1276; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1275 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_1242);
x_1276 = !lean_is_exclusive(x_1275);
if (x_1276 == 0)
{
return x_1275;
}
else
{
lean_object* x_1277; lean_object* x_1278; lean_object* x_1279; 
x_1277 = lean_ctor_get(x_1275, 0);
x_1278 = lean_ctor_get(x_1275, 1);
lean_inc(x_1278);
lean_inc(x_1277);
lean_dec(x_1275);
x_1279 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1279, 0, x_1277);
lean_ctor_set(x_1279, 1, x_1278);
return x_1279;
}
}
}
}
else
{
lean_object* x_1280; lean_object* x_1281; uint8_t x_1282; 
x_1280 = l_Lean_Syntax_getArg(x_1231, x_135);
lean_dec(x_1231);
x_1281 = l_Lean_identKind___closed__2;
lean_inc(x_1280);
x_1282 = l_Lean_Syntax_isOfKind(x_1280, x_1281);
if (x_1282 == 0)
{
lean_object* x_1283; lean_object* x_1284; lean_object* x_1285; lean_object* x_1286; lean_object* x_1287; lean_object* x_1288; lean_object* x_1289; lean_object* x_1290; lean_object* x_1291; lean_object* x_1292; lean_object* x_1293; lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; lean_object* x_1297; lean_object* x_1298; 
lean_dec(x_1280);
lean_dec(x_1182);
lean_dec(x_234);
x_1283 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_1284 = lean_ctor_get(x_1283, 0);
lean_inc(x_1284);
x_1285 = lean_ctor_get(x_1283, 1);
lean_inc(x_1285);
lean_dec(x_1283);
x_1286 = lean_st_ref_get(x_8, x_1285);
x_1287 = lean_ctor_get(x_1286, 0);
lean_inc(x_1287);
x_1288 = lean_ctor_get(x_1286, 1);
lean_inc(x_1288);
lean_dec(x_1286);
x_1289 = lean_ctor_get(x_1287, 0);
lean_inc(x_1289);
lean_dec(x_1287);
x_1290 = lean_st_ref_get(x_4, x_1288);
x_1291 = lean_ctor_get(x_1290, 0);
lean_inc(x_1291);
x_1292 = lean_ctor_get(x_1290, 1);
lean_inc(x_1292);
lean_dec(x_1290);
x_1293 = lean_ctor_get(x_1291, 4);
lean_inc(x_1293);
lean_dec(x_1291);
x_1294 = lean_ctor_get(x_7, 1);
lean_inc(x_1294);
x_1295 = lean_ctor_get(x_7, 2);
lean_inc(x_1295);
x_1296 = lean_environment_main_module(x_1289);
x_1297 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_1297, 0, x_1296);
lean_ctor_set(x_1297, 1, x_1284);
lean_ctor_set(x_1297, 2, x_1294);
lean_ctor_set(x_1297, 3, x_1295);
lean_inc(x_1);
x_1298 = l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f(x_1, x_1297, x_1293);
if (lean_obj_tag(x_1298) == 0)
{
lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; lean_object* x_1303; uint8_t x_1304; 
x_1299 = lean_ctor_get(x_1298, 0);
lean_inc(x_1299);
x_1300 = lean_ctor_get(x_1298, 1);
lean_inc(x_1300);
lean_dec(x_1298);
x_1301 = lean_st_ref_take(x_4, x_1292);
x_1302 = lean_ctor_get(x_1301, 0);
lean_inc(x_1302);
x_1303 = lean_ctor_get(x_1301, 1);
lean_inc(x_1303);
lean_dec(x_1301);
x_1304 = !lean_is_exclusive(x_1302);
if (x_1304 == 0)
{
lean_object* x_1305; lean_object* x_1306; lean_object* x_1307; 
x_1305 = lean_ctor_get(x_1302, 4);
lean_dec(x_1305);
lean_ctor_set(x_1302, 4, x_1300);
x_1306 = lean_st_ref_set(x_4, x_1302, x_1303);
x_1307 = lean_ctor_get(x_1306, 1);
lean_inc(x_1307);
lean_dec(x_1306);
x_10 = x_1299;
x_11 = x_1307;
goto block_36;
}
else
{
lean_object* x_1308; lean_object* x_1309; lean_object* x_1310; lean_object* x_1311; lean_object* x_1312; lean_object* x_1313; lean_object* x_1314; 
x_1308 = lean_ctor_get(x_1302, 0);
x_1309 = lean_ctor_get(x_1302, 1);
x_1310 = lean_ctor_get(x_1302, 2);
x_1311 = lean_ctor_get(x_1302, 3);
lean_inc(x_1311);
lean_inc(x_1310);
lean_inc(x_1309);
lean_inc(x_1308);
lean_dec(x_1302);
x_1312 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1312, 0, x_1308);
lean_ctor_set(x_1312, 1, x_1309);
lean_ctor_set(x_1312, 2, x_1310);
lean_ctor_set(x_1312, 3, x_1311);
lean_ctor_set(x_1312, 4, x_1300);
x_1313 = lean_st_ref_set(x_4, x_1312, x_1303);
x_1314 = lean_ctor_get(x_1313, 1);
lean_inc(x_1314);
lean_dec(x_1313);
x_10 = x_1299;
x_11 = x_1314;
goto block_36;
}
}
else
{
lean_object* x_1315; 
lean_dec(x_2);
lean_dec(x_1);
x_1315 = lean_ctor_get(x_1298, 0);
lean_inc(x_1315);
lean_dec(x_1298);
if (lean_obj_tag(x_1315) == 0)
{
lean_object* x_1316; lean_object* x_1317; lean_object* x_1318; lean_object* x_1319; lean_object* x_1320; uint8_t x_1321; 
x_1316 = lean_ctor_get(x_1315, 0);
lean_inc(x_1316);
x_1317 = lean_ctor_get(x_1315, 1);
lean_inc(x_1317);
lean_dec(x_1315);
x_1318 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_1318, 0, x_1317);
x_1319 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1319, 0, x_1318);
x_1320 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_1316, x_1319, x_3, x_4, x_5, x_6, x_7, x_8, x_1292);
lean_dec(x_1316);
x_1321 = !lean_is_exclusive(x_1320);
if (x_1321 == 0)
{
return x_1320;
}
else
{
lean_object* x_1322; lean_object* x_1323; lean_object* x_1324; 
x_1322 = lean_ctor_get(x_1320, 0);
x_1323 = lean_ctor_get(x_1320, 1);
lean_inc(x_1323);
lean_inc(x_1322);
lean_dec(x_1320);
x_1324 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1324, 0, x_1322);
lean_ctor_set(x_1324, 1, x_1323);
return x_1324;
}
}
else
{
lean_object* x_1325; uint8_t x_1326; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_1325 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(x_1292);
x_1326 = !lean_is_exclusive(x_1325);
if (x_1326 == 0)
{
return x_1325;
}
else
{
lean_object* x_1327; lean_object* x_1328; lean_object* x_1329; 
x_1327 = lean_ctor_get(x_1325, 0);
x_1328 = lean_ctor_get(x_1325, 1);
lean_inc(x_1328);
lean_inc(x_1327);
lean_dec(x_1325);
x_1329 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1329, 0, x_1327);
lean_ctor_set(x_1329, 1, x_1328);
return x_1329;
}
}
}
}
else
{
lean_object* x_1330; lean_object* x_1331; 
x_1330 = l_Lean_Syntax_getArg(x_1182, x_235);
lean_dec(x_1182);
x_1331 = l___private_Lean_Elab_Match_1__expandSimpleMatch(x_1, x_234, x_1280, x_1330, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_1331;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabMatch___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMatch), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabMatch(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabMatch___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_42__regTraceClasses(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_dec(x_5);
x_6 = lean_box(0);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
return x_3;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg), 1, 0);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_elabNoMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Parser_Term_nomatch___elambda__1___closed__2;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = l_Lean_Syntax_getArgs(x_1);
x_14 = lean_array_get_size(x_13);
lean_dec(x_13);
x_15 = lean_unsigned_to_nat(2u);
x_16 = lean_nat_dec_eq(x_14, x_15);
lean_dec(x_14);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___rarg(x_9);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_unsigned_to_nat(1u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_20 = l___private_Lean_Elab_Match_33__waitExpectedType(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_mkOptionalNode___closed__2;
x_24 = lean_array_push(x_23, x_19);
x_25 = l_Array_empty___closed__1;
x_26 = l_Lean_mkOptionalNode___closed__1;
x_27 = l___private_Lean_Elab_Match_32__elabMatchAux(x_24, x_25, x_26, x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
lean_dec(x_24);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_19);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_28 = !lean_is_exclusive(x_20);
if (x_28 == 0)
{
return x_20;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_20, 0);
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_20);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabNoMatch___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNoMatch___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabNoMatch), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabNoMatch(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_nomatch___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabNoMatch___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_EqnCompiler_MatchPatternAttr(lean_object*);
lean_object* initialize_Lean_Meta_EqnCompiler_Match(lean_object*);
lean_object* initialize_Lean_Elab_SyntheticMVars(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Match(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_EqnCompiler_MatchPatternAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_EqnCompiler_Match(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__1 = _init_l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__1);
l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__2 = _init_l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__2);
l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__3 = _init_l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__3);
l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__4 = _init_l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__4);
l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__5 = _init_l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__5);
l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__6 = _init_l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_1__expandSimpleMatch___closed__6);
l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__1 = _init_l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__1);
l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__2 = _init_l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_2__expandSimpleMatchWithType___closed__2);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__1 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__1);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__2 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__2);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__3 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__3);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__4 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__4);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__5 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__5);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__6 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__6);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__7 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__7);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__8 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__8);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__9 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__9);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__10 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__10);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__11 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__11();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__11);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__12 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__12();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__12);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__13 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__13();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__13);
l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__14 = _init_l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__14();
lean_mark_persistent(l___private_Lean_Elab_Match_3__expandMatchOptTypeAux___main___closed__14);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__1 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__1);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__2 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__2);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__3 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__3);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__4 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__4);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__5 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__5);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__6 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__6);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__7 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__7);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__8 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__8);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__9 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__9);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__10 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__10);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__11 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__11();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__11);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__12 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__12();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__12);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__13);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__14 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__14();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__14);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__15 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__15();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__15);
l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__16 = _init_l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__16();
lean_mark_persistent(l___private_Lean_Elab_Match_6__elabDiscrsAux___main___closed__16);
l_Lean_Elab_Term_mkInaccessible___closed__1 = _init_l_Lean_Elab_Term_mkInaccessible___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkInaccessible___closed__1);
l_Lean_Elab_Term_mkInaccessible___closed__2 = _init_l_Lean_Elab_Term_mkInaccessible___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkInaccessible___closed__2);
l_Lean_Elab_Term_PatternVar_hasToString___closed__1 = _init_l_Lean_Elab_Term_PatternVar_hasToString___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_PatternVar_hasToString___closed__1);
l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__1 = _init_l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__1);
l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__2 = _init_l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind___closed__2);
res = l___private_Lean_Elab_Match_9__registerAuxiliaryNodeKind(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabInaccessible(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__1 = _init_l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__1);
l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__2 = _init_l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__2);
l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__3 = _init_l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_12__throwCtorExpected___rarg___closed__3);
l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__1 = _init_l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__1);
l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__2 = _init_l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__2);
l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__3 = _init_l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_14__throwAmbiguous___rarg___closed__3);
l___private_Lean_Elab_Match_15__processVar___closed__1 = _init_l___private_Lean_Elab_Match_15__processVar___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_15__processVar___closed__1);
l___private_Lean_Elab_Match_15__processVar___closed__2 = _init_l___private_Lean_Elab_Match_15__processVar___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_15__processVar___closed__2);
l___private_Lean_Elab_Match_15__processVar___closed__3 = _init_l___private_Lean_Elab_Match_15__processVar___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_15__processVar___closed__3);
l___private_Lean_Elab_Match_15__processVar___closed__4 = _init_l___private_Lean_Elab_Match_15__processVar___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_15__processVar___closed__4);
l___private_Lean_Elab_Match_15__processVar___closed__5 = _init_l___private_Lean_Elab_Match_15__processVar___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_15__processVar___closed__5);
l___private_Lean_Elab_Match_15__processVar___closed__6 = _init_l___private_Lean_Elab_Match_15__processVar___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_15__processVar___closed__6);
l___private_Lean_Elab_Match_15__processVar___closed__7 = _init_l___private_Lean_Elab_Match_15__processVar___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Match_15__processVar___closed__7);
l___private_Lean_Elab_Match_15__processVar___closed__8 = _init_l___private_Lean_Elab_Match_15__processVar___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Match_15__processVar___closed__8);
l___private_Lean_Elab_Match_15__processVar___closed__9 = _init_l___private_Lean_Elab_Match_15__processVar___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Match_15__processVar___closed__9);
l___private_Lean_Elab_Match_16__processIdAux___closed__1 = _init_l___private_Lean_Elab_Match_16__processIdAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_16__processIdAux___closed__1);
l___private_Lean_Elab_Match_16__processIdAux___closed__2 = _init_l___private_Lean_Elab_Match_16__processIdAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_16__processIdAux___closed__2);
l___private_Lean_Elab_Match_16__processIdAux___closed__3 = _init_l___private_Lean_Elab_Match_16__processIdAux___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_16__processIdAux___closed__3);
l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__1 = _init_l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__1);
l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__2 = _init_l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__2);
l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__3 = _init_l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_19__throwInvalidPattern___rarg___closed__3);
l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__1 = _init_l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__1();
lean_mark_persistent(l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__1);
l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__2 = _init_l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__2();
lean_mark_persistent(l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__2);
l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__3 = _init_l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__3();
lean_mark_persistent(l_Array_forMAux___main___at___private_Lean_Elab_Match_20__collect___main___spec__4___closed__3);
l___private_Lean_Elab_Match_20__collect___main___closed__1 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__1);
l___private_Lean_Elab_Match_20__collect___main___closed__2 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__2);
l___private_Lean_Elab_Match_20__collect___main___closed__3 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__3);
l___private_Lean_Elab_Match_20__collect___main___closed__4 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__4);
l___private_Lean_Elab_Match_20__collect___main___closed__5 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__5);
l___private_Lean_Elab_Match_20__collect___main___closed__6 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__6);
l___private_Lean_Elab_Match_20__collect___main___closed__7 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__7);
l___private_Lean_Elab_Match_20__collect___main___closed__8 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__8);
l___private_Lean_Elab_Match_20__collect___main___closed__9 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__9);
l___private_Lean_Elab_Match_20__collect___main___closed__10 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__10);
l___private_Lean_Elab_Match_20__collect___main___closed__11 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__11();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__11);
l___private_Lean_Elab_Match_20__collect___main___closed__12 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__12();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__12);
l___private_Lean_Elab_Match_20__collect___main___closed__13 = _init_l___private_Lean_Elab_Match_20__collect___main___closed__13();
lean_mark_persistent(l___private_Lean_Elab_Match_20__collect___main___closed__13);
l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__1 = _init_l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__1();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__1);
l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__2 = _init_l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__2();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__2);
l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__3 = _init_l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__3();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___closed__3);
l___private_Lean_Elab_Match_21__collectPatternVars___closed__1 = _init_l___private_Lean_Elab_Match_21__collectPatternVars___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_21__collectPatternVars___closed__1);
l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__1 = _init_l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__1);
l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__2 = _init_l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__2);
l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__3 = _init_l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_24__elabPatternsAux___main___closed__3);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__1 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__1();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__1);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__2 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__2();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__2);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__3 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__3();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__3);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__4 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__4();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__4);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__5 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__5();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__5);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__6 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__6();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__6);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__7 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__7();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__7);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__8 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__8();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__8);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__9 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__9();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__3___closed__9);
l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__1 = _init_l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__1);
l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__2 = _init_l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__2);
l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__3 = _init_l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_27__throwInvalidPattern___rarg___closed__3);
l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__1 = _init_l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__1);
l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__2 = _init_l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__2);
l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3 = _init_l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3);
l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__1 = _init_l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__1);
l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__2 = _init_l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__2);
l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3 = _init_l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3);
l_Lean_Elab_Term_elabMatchAltView___closed__1 = _init_l_Lean_Elab_Term_elabMatchAltView___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabMatchAltView___closed__1);
l_Lean_Elab_Term_elabMatchAltView___closed__2 = _init_l_Lean_Elab_Term_elabMatchAltView___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabMatchAltView___closed__2);
l_Lean_Elab_Term_elabMatchAltView___closed__3 = _init_l_Lean_Elab_Term_elabMatchAltView___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabMatchAltView___closed__3);
l_Lean_Elab_Term_mkMotiveType___closed__1 = _init_l_Lean_Elab_Term_mkMotiveType___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkMotiveType___closed__1);
l_Lean_Elab_Term_reportElimResultErrors___closed__1 = _init_l_Lean_Elab_Term_reportElimResultErrors___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_reportElimResultErrors___closed__1);
l_Lean_Elab_Term_reportElimResultErrors___closed__2 = _init_l_Lean_Elab_Term_reportElimResultErrors___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_reportElimResultErrors___closed__2);
l_Lean_Elab_Term_reportElimResultErrors___closed__3 = _init_l_Lean_Elab_Term_reportElimResultErrors___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_reportElimResultErrors___closed__3);
l_Lean_Elab_Term_reportElimResultErrors___closed__4 = _init_l_Lean_Elab_Term_reportElimResultErrors___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_reportElimResultErrors___closed__4);
l_Lean_Elab_Term_reportElimResultErrors___closed__5 = _init_l_Lean_Elab_Term_reportElimResultErrors___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_reportElimResultErrors___closed__5);
l_Lean_Elab_Term_reportElimResultErrors___closed__6 = _init_l_Lean_Elab_Term_reportElimResultErrors___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_reportElimResultErrors___closed__6);
l_Lean_Elab_Term_reportElimResultErrors___closed__7 = _init_l_Lean_Elab_Term_reportElimResultErrors___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_reportElimResultErrors___closed__7);
l___private_Lean_Elab_Match_32__elabMatchAux___closed__1 = _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_32__elabMatchAux___closed__1);
l___private_Lean_Elab_Match_32__elabMatchAux___closed__2 = _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_32__elabMatchAux___closed__2);
l___private_Lean_Elab_Match_32__elabMatchAux___closed__3 = _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_32__elabMatchAux___closed__3);
l___private_Lean_Elab_Match_32__elabMatchAux___closed__4 = _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_32__elabMatchAux___closed__4);
l___private_Lean_Elab_Match_32__elabMatchAux___closed__5 = _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_32__elabMatchAux___closed__5);
l___private_Lean_Elab_Match_32__elabMatchAux___closed__6 = _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_32__elabMatchAux___closed__6);
l___private_Lean_Elab_Match_32__elabMatchAux___closed__7 = _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Match_32__elabMatchAux___closed__7);
l___private_Lean_Elab_Match_32__elabMatchAux___closed__8 = _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Match_32__elabMatchAux___closed__8);
l___private_Lean_Elab_Match_32__elabMatchAux___closed__9 = _init_l___private_Lean_Elab_Match_32__elabMatchAux___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Match_32__elabMatchAux___closed__9);
l___private_Lean_Elab_Match_35__mkMatchType___main___closed__1 = _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_35__mkMatchType___main___closed__1);
l___private_Lean_Elab_Match_35__mkMatchType___main___closed__2 = _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_35__mkMatchType___main___closed__2);
l___private_Lean_Elab_Match_35__mkMatchType___main___closed__3 = _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_35__mkMatchType___main___closed__3);
l___private_Lean_Elab_Match_35__mkMatchType___main___closed__4 = _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_35__mkMatchType___main___closed__4);
l___private_Lean_Elab_Match_35__mkMatchType___main___closed__5 = _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_35__mkMatchType___main___closed__5);
l___private_Lean_Elab_Match_35__mkMatchType___main___closed__6 = _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_35__mkMatchType___main___closed__6);
l___private_Lean_Elab_Match_35__mkMatchType___main___closed__7 = _init_l___private_Lean_Elab_Match_35__mkMatchType___main___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Match_35__mkMatchType___main___closed__7);
l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__1 = _init_l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__1);
l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__2 = _init_l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__2);
l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__3 = _init_l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__3);
l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__4 = _init_l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__4);
l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__5 = _init_l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__5);
l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__6 = _init_l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_37__mkNewDiscrs___main___closed__6);
l___private_Lean_Elab_Match_38__mkNewPatterns___main___closed__1 = _init_l___private_Lean_Elab_Match_38__mkNewPatterns___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_38__mkNewPatterns___main___closed__1);
l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f___closed__1 = _init_l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_41__expandMatchDiscr_x3f___closed__1);
l___regBuiltin_Lean_Elab_Term_elabMatch___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabMatch___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabMatch___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabMatch(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Match_42__regTraceClasses(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabNoMatch___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabNoMatch___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNoMatch___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabNoMatch(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
