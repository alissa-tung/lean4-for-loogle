// Lean compiler output
// Module: Lean.Elab.Term
// Imports: Init Lean.Util.Sorry Lean.Structure Lean.Meta.ExprDefEq Lean.Meta.AppBuilder Lean.Meta.SynthInstance Lean.Meta.Tactic.Util Lean.Hygiene Lean.Util.RecDepth Lean.Elab.Log Lean.Elab.Alias Lean.Elab.ResolveName Lean.Elab.Level
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
lean_object* l_Lean_Elab_Term_getLevelNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__4;
lean_object* l_Lean_Elab_Term_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MonadError___closed__6;
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__2;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabStrLit___closed__1;
uint8_t l___private_Lean_Elab_Term_6__hasCDot(lean_object*);
lean_object* l_Lean_Elab_Term_elabImplicitLambdaAux___closed__2;
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__1;
lean_object* l_Lean_mkAppStx(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadQuotation;
lean_object* l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Closure_mkNewLevelParam___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__1;
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__8;
lean_object* l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabImplicitLambdaAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_17__tryCoeSort___closed__7;
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l___private_Lean_Elab_Term_7__expandCDot(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_mkLambdaFVars___at_Lean_Elab_Term_elabImplicitLambdaAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabImplicitLambdaAux___closed__1;
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__4;
lean_object* l_Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
extern lean_object* l_Lean_Parser_Term_explicit___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_State_inhabited;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_setMCtx___at___private_Lean_Meta_Basic_3__liftMkBindingM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_ReaderT_read___at_Lean_Elab_Term_monadLog___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__9;
lean_object* l_Lean_Elab_Term_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
extern lean_object* l_Lean_Meta_Lean_MonadError;
lean_object* l_Lean_mkFreshLevelMVar___at_Lean_Meta_openAbstractMVarsResult___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unreachable_x21___rarg(lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_MetavarContext_instantiateMVars(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabHole___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__8;
lean_object* l_Lean_Elab_Term_elabStrLit___closed__3;
lean_object* l_Lean_isType___at_Lean_Elab_Term_ensureType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isDefEqNoConstantApprox(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_ofList___closed__3;
extern lean_object* l_Lean_InternalExceptionId_toString___closed__1;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_Term_tryPostpone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_logTrace___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__7;
lean_object* l_Lean_Elab_Term_logException___closed__3;
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_addLevelMVarDecl(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabUsingElabFns___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__3;
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__2;
extern lean_object* l_IO_Prim_fopenFlags___closed__12;
lean_object* l_Lean_Elab_Term_throwErrorIfErrors___closed__1;
lean_object* l_Lean_Elab_Term_resettingSynthInstanceCacheWhen(lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_6__hasCDot___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___closed__3;
lean_object* l_Lean_Format_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getDeclName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabTacticBlock(lean_object*);
extern lean_object* l_Lean_KeyedDeclsAttribute_Def_inhabited___closed__2;
extern lean_object* l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__2___closed__1;
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_2__liftMetaMCore(lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__10;
lean_object* l_Lean_Elab_Term_elabParen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getIdAt(lean_object*, lean_object*);
lean_object* l_ReaderT_read___at_Lean_Elab_Term_monadLog___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__1;
lean_object* lean_local_ctx_mk_let_decl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_HashMap_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_MonadError___closed__4;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__7;
lean_object* l_Lean_Elab_Term_resettingSynthInstanceCacheWhen___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_AppBuilder_9__getDecLevel___closed__3;
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1___rarg(lean_object*, lean_object*);
uint8_t l_List_elem___main___at_Lean_NameHashSet_insert___spec__2(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_type___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Term_22__resolveLocalNameAux___main(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Prod_HasRepr___rarg___closed__1;
lean_object* l_Lean_Elab_Term_elabUsingElabFns___closed__2;
lean_object* l___private_Lean_Elab_Term_24__mkFreshLevelMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_4__liftMetaMFinalizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabQuotedName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_mkFreshExprMVarAt___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_MacroScopesView_format(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_hasEval___rarg___closed__2;
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__5;
lean_object* l_Lean_Elab_Term_saveAllState(lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__11;
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_inferTypeRef;
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l___private_Lean_Elab_Term_22__resolveLocalNameAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_environment_find(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_mkSorry___closed__4;
lean_object* l_Lean_Elab_Term_tryCoe___closed__2;
lean_object* l_Lean_Elab_Term_resolveName___closed__3;
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__2;
lean_object* l_Lean_Elab_Term_elabTypeStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__2(lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwErrorIfErrors___closed__2;
extern lean_object* l_Lean_charLitKind___closed__2;
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
lean_object* l_Lean_Elab_mkMessageAt___at_Lean_Elab_Term_logTrace___spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__6;
lean_object* l___private_Lean_Elab_Term_17__tryCoeSort___closed__3;
lean_object* l_Lean_Elab_Term_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadQuotation___closed__2;
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_declareBuiltinParser___closed__3;
lean_object* l___private_Lean_Elab_Term_17__tryCoeSort___closed__5;
lean_object* l_Lean_Elab_Term_withoutPostponing(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__13;
lean_object* l_Lean_Elab_Term_decLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_17__tryCoeSort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_lift___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParen___closed__3;
lean_object* lean_local_ctx_find_from_user_name(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMVarDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
extern lean_object* l_Lean_Literal_type___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_elabBadCDot___closed__1;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMessageLog___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Term_mkAuxName___closed__3;
lean_object* l___private_Lean_Elab_Term_27__regTraceClasses___closed__1;
lean_object* l_Lean_Elab_Term_resetSynthInstanceCache(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___closed__7;
lean_object* l___regBuiltin_Lean_Elab_Term_elabProp(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_formatAux___main(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getLocalInstances___at_Lean_mkFreshExprMVar___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBadCDot___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshAnonymousName___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_tacticBlock___elambda__1___closed__2;
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabParen(lean_object*);
extern lean_object* l_String_splitAux___main___closed__1;
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__1;
lean_object* l_Lean_Elab_Level_elabLevel(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkAuxName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_repr___rarg___closed__3;
extern lean_object* l_Lean_unitToExpr___lambda__1___closed__3;
extern lean_object* l_Lean_Parser_Term_typeAscription___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_withLocalContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_10__tryPureCoe_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSort___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_16__isLambdaWithImplicit___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withLCtx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_saveAndResetSynthInstanceCache(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_printTraces___at_Lean_Core_hasEval___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__3;
lean_object* l_Lean_Elab_Term_resolveName___closed__6;
lean_object* l_Lean_Elab_Term_MonadError___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabByTactic(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
extern lean_object* l_Lean_Parser_Term_tupleTail___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Term_5__addContext_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabTypeStx(lean_object*);
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_dbgTrace___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__3___rarg(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withLetDecl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__5;
extern lean_object* l_Lean_LocalContext_Inhabited___closed__1;
extern lean_object* l_Lean_listToExpr___rarg___closed__4;
lean_object* l_Lean_Elab_Term_resolveName___closed__5;
lean_object* l_Lean_Elab_Term_mkFreshExprMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_LVal_hasToString(lean_object*);
lean_object* l_Lean_Elab_Term_elabImplicitLambda___main(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__7;
lean_object* l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__2;
extern lean_object* l_Lean_mkAppStx___closed__8;
extern lean_object* l_Lean_levelZero;
lean_object* l_Lean_Elab_Term_mkExpectedTypeHint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabResult_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_MonadError___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabStrLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandCDot_x3f___closed__4;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___main___at_Lean_Elab_Term_elabUsingElabFns___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__1;
lean_object* l_Lean_Elab_Term_termElabAttribute___closed__2;
lean_object* l___private_Lean_Elab_Term_25__mkConsts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_17__tryCoeSort___closed__2;
lean_object* l_Lean_Elab_Term_elabStrLit___closed__1;
extern lean_object* l_Lean_getConstInfo___rarg___lambda__1___closed__3;
lean_object* l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1;
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshTypeMVar(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermAux___main___closed__1;
lean_object* l_Lean_Elab_Term_withConfig(lean_object*);
lean_object* l_Lean_Elab_Term_elabBadCDot___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshAnonymousIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParen___closed__2;
lean_object* l_Lean_Elab_Term_elabTermAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_elabImplicitLambdaAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_SavedState_inhabited___closed__2;
lean_object* l___private_Lean_Elab_Term_9__isMonad_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabParen___closed__1;
lean_object* l___private_Lean_Elab_Term_7__expandCDot___main___closed__2;
lean_object* l___private_Lean_Elab_Term_7__expandCDot___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_dbgTrace___rarg___closed__1;
lean_object* l_Lean_Elab_Term_liftMetaM(lean_object*);
lean_object* l_Lean_Elab_Term_saveAllState___boxed(lean_object*);
extern lean_object* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_AppBuilder_9__getDecLevel___closed__6;
uint8_t lean_metavar_ctx_is_expr_assigned(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Term_7__expandCDot___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabHole(lean_object*);
lean_object* l_Lean_Elab_Term_withTransparency(lean_object*);
lean_object* l___private_Lean_Elab_Term_17__tryCoeSort___closed__8;
extern lean_object* l_Lean_Parser_Term_byTactic___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_restoreSynthInstanceCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withConfig___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryCoe___closed__4;
lean_object* l_Lean_Elab_Term_mkFreshAnonymousName___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___closed__5;
extern lean_object* l_Lean_Parser_termParser___closed__1;
lean_object* l_Lean_Elab_Term_tryCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_sort___elambda__1___closed__1;
lean_object* l___private_Lean_Elab_Term_17__tryCoeSort___closed__1;
lean_object* l_Lean_Elab_Term_elabLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNamedHole(lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___closed__1;
lean_object* l_Lean_Syntax_isCharLit_x3f(lean_object*);
lean_object* l_Array_isEqvAux___main___at_Lean_Elab_Term_withMVarContext___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__3;
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__5;
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_foldlMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshAnonymousName___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_Inhabited___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withMVarContext(lean_object*);
lean_object* l_Lean_Elab_Term_termElabAttribute___closed__4;
lean_object* l_Lean_getLCtx___at_Lean_mkFreshExprMVar___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabByTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_observing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutMacroStackAtErr(lean_object*);
extern lean_object* l_Lean_Exception_inhabited___closed__1;
lean_object* l___private_Lean_Elab_Term_9__isMonad_x3f___closed__1;
lean_object* l_Lean_Elab_Term_withMacroExpansion(lean_object*);
lean_object* l_Lean_Elab_Term_getMessageLog(lean_object*);
lean_object* l_Std_PersistentArray_foldlM___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_State_inhabited___closed__1;
extern lean_object* l_Lean_EnvExtension_Inhabited___rarg___closed__1;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MonadIO___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_dbgTrace(lean_object*);
lean_object* l_Lean_Elab_Term_decLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* l_Lean_Elab_Term_elabTermWithoutImplicitLambdas(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_9__isMonad_x3f___closed__2;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryCoe___closed__1;
lean_object* l_Lean_Elab_Term_getCurrNamespace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
lean_object* l_Lean_Elab_Term_monadLog___closed__8;
lean_object* l_Lean_Elab_Term_TermElabM_run(lean_object*);
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__4;
lean_object* l_Lean_Elab_Term_Lean_MonadMetaM(lean_object*);
lean_object* l_Lean_Elab_Term_elabProp___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object*);
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Elab_Term_elabUsingElabFns___spec__6___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_termElabAttribute___closed__1;
lean_object* l_Lean_Elab_Term_mkFreshInstanceName(lean_object*);
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
extern lean_object* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2;
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3;
lean_object* l_Lean_Elab_mkMessageCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_Parser_Term_quotedName___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_withMacroExpansion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabByTactic___closed__2;
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__3;
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_logTrace___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__1;
lean_object* l_Lean_Elab_Term_mkConst___closed__2;
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logException(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabQuotedName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNumLit___closed__1;
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__1;
lean_object* l_Lean_Elab_Term_TermElabM_inhabited(lean_object*);
lean_object* l_Lean_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkInstMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_MonadMetaM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTacticBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_6__hasCDot___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam___lambda__1___boxed(lean_object*, lean_object*);
uint8_t l_Lean_Exception_hasSyntheticSorry(lean_object*);
lean_object* l___private_Lean_Meta_Basic_2__mkFreshExprMVarAtCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1___closed__1;
lean_object* l_Lean_Elab_Term_withTransparency___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMVarDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabUsingElabFns___closed__4;
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__7;
lean_object* l_Lean_Elab_Term_elabTacticBlock___closed__1;
lean_object* l___private_Lean_Elab_Term_26__mkSomeContext___closed__2;
lean_object* l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1___closed__2;
lean_object* l_Lean_Elab_Term_TermElabM_run_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__2;
lean_object* l___private_Lean_Elab_Term_15__isExplicitApp___boxed(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthAux___main___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_getConstInfo___rarg___lambda__1___closed__5;
lean_object* l_Lean_Name_appendIndexAfter(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_blockImplicitLambda___boxed(lean_object*);
lean_object* l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__2;
lean_object* l_Lean_Elab_Term_monadQuotation___closed__1;
uint8_t l_Lean_Elab_Term_blockImplicitLambda(lean_object*);
lean_object* l_Lean_Elab_Term_elabTypeStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_assignLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___main___at_Lean_Elab_Term_elabUsingElabFns___spec__3(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__3;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___closed__6;
lean_object* l___private_Lean_Elab_Term_2__liftMetaMCore___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_strLitKind___closed__2;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_dropTermParens(lean_object*);
lean_object* l_Lean_Elab_Term_elabUsingElabFns___closed__1;
lean_object* l_Lean_Elab_Term_withFreshMacroScope(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__1;
lean_object* l_Lean_Elab_Term_resolveName___closed__7;
size_t l_Lean_Name_hash(lean_object*);
lean_object* l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermAux___main(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_termElabAttribute___closed__3;
lean_object* l_Lean_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_Elab_Term_elabUsingElabFns___closed__6;
lean_object* l_Lean_Elab_Term_elabImplicitLambda(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwErrorIfErrors___closed__3;
lean_object* l___private_Lean_Elab_Term_26__mkSomeContext___closed__1;
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getMacros(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandCDot_x3f___closed__3;
lean_object* l_Lean_Elab_Term_logTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_3__saveTraceAsMessages(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_namedHole___elambda__1___closed__2;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabCharLit(lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__12;
lean_object* l_Lean_Elab_Term_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_liftLevelM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_dbgTrace___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabParen___closed__1;
lean_object* l_Lean_Syntax_prettyPrint(lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter;
lean_object* l_Std_mkHashMap___at_Lean_Elab_Term_termElabAttribute___spec__2(lean_object*);
lean_object* l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MonadError___closed__3;
extern lean_object* l_List_repr___rarg___closed__2;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__16;
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_logTrace___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__5;
lean_object* l_Lean_Elab_Term_monadLog___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_fun___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Term_7__expandCDot___main___closed__1;
lean_object* l_Lean_Elab_Term_resolveName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_19__elabOptLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern size_t l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
lean_object* l_Lean_Elab_Term_elabProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_isEqvAux___main___at_Lean_Elab_Term_withLocalContext___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_assignExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwAppTypeMismatch___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withLocalContext(lean_object*);
lean_object* l_Lean_Elab_Term_elabStrLit___closed__2;
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_applyResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_16__isLambdaWithImplicit___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadQuotation___closed__4;
lean_object* l_Lean_Elab_Term_withLocalDecl___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MonadError___closed__5;
lean_object* l_Lean_Elab_Term_mkTermElabAttribute(lean_object*);
extern lean_object* l_Lean_numLitKind___closed__2;
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__4;
lean_object* l_Lean_Elab_Term_SavedState_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_elabTacticBlock___closed__2;
extern lean_object* l_Lean_Parser_Term_fun___elambda__1___closed__1;
lean_object* l_Lean_Elab_Term_monadLog___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkAppM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__6;
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__9;
lean_object* l_Lean_Elab_Term_getMessageLog___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_useImplicitLambda_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
extern lean_object* l_Lean_charToExpr___lambda__1___closed__1;
lean_object* l_Lean_Elab_Term_expandCDot_x3f___closed__2;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__4;
lean_object* l_Lean_Elab_Term_elabImplicitLambda___main___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__15;
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_liftLevelM(lean_object*);
uint8_t l_Std_PersistentArray_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_elabProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveName___closed__8;
lean_object* l_Lean_Elab_addMacroStack(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_Lean_Elab_Term_elabTermAux(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_termElabAttribute___closed__5;
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__8;
extern lean_object* l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__8;
lean_object* l_Lean_Elab_mkElabAttribute___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNumLit(lean_object*);
lean_object* l___private_Lean_Elab_Term_7__expandCDot___main___closed__3;
lean_object* l___private_Lean_Elab_Term_16__isLambdaWithImplicit___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__13;
lean_object* l___regBuiltin_Lean_Elab_Term_expandListLit___closed__1;
lean_object* l_Lean_Elab_Term_getCurrNamespace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_12__postponeElabTerm___closed__1;
extern lean_object* l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
lean_object* l_Lean_Elab_Term_logException___closed__1;
lean_object* l___private_Lean_Elab_Term_1__mkMessageAux(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_logTrace___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_17__tryCoeSort___closed__4;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabResult_inhabited;
extern lean_object* l___private_Lean_Meta_Basic_1__regTraceClasses___closed__3;
lean_object* l_Lean_Elab_Term_withMVarContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_inhabited___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandListLit___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__1;
lean_object* l_Lean_mkFreshExprMVarWithId___at_Lean_Elab_Term_mkFreshExprMVarWithId___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
lean_object* l_Lean_Elab_Term_mkFreshAnonymousIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__1(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandListLit(lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__15;
extern lean_object* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__3;
lean_object* l_Lean_Elab_Term_tryLiftAndCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_23__resolveLocalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_State_inhabited___closed__1;
extern lean_object* l_Lean_Parser_Term_cdot___elambda__1___closed__2;
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelMVar(lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSort(lean_object*);
lean_object* l_Lean_Elab_Term_resolveName___closed__9;
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Elab_Term_elabUsingElabFns___spec__6(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_inhabited___closed__1;
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_Elab_Term_mkConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__2;
lean_object* l_Lean_Elab_Term_mkConst___closed__3;
lean_object* l_Lean_Elab_Term_resolveName___closed__4;
extern lean_object* l_Lean_nullKind___closed__2;
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__2;
lean_object* l_Lean_Elab_Term_elabCharLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandListLit___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNamedHole___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandCDot_x3f___closed__1;
lean_object* l_fix1___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__2;
lean_object* l_Lean_Elab_Term_monadLog___closed__2;
lean_object* l_Lean_Elab_Term_dropTermParens___main(lean_object*);
lean_object* l_Lean_mkFreshExprMVarWithId___at_Lean_Elab_Term_mkFreshExprMVarWithId___spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logDbgTrace___closed__1;
lean_object* l___private_Lean_Elab_Term_21__elabCDot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getDeclName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__10;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__5;
lean_object* l___regBuiltin_Lean_Elab_Term_expandArrayLit(lean_object*);
lean_object* l_Lean_ConstantInfo_lparams(lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__9;
lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Term_mkFreshAnonymousName(lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_26__mkSomeContext;
lean_object* l_Lean_Elab_Term_withLCtx(lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__14;
extern lean_object* l_Option_HasRepr___rarg___closed__3;
lean_object* l_Lean_Elab_Term_withoutPostponing___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_prop___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Term_3__saveTraceAsMessages___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_inhabited___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_prodToExpr___rarg___lambda__1___closed__4;
lean_object* l_Lean_Elab_Term_savingMCtx(lean_object*);
lean_object* l_Lean_Elab_Term_elabHole(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabCharLit___closed__1;
extern lean_object* l_Lean_Syntax_inhabited;
lean_object* l___regBuiltin_Lean_Elab_Term_elabNamedHole___closed__1;
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_11__exceptionToSorry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__5;
lean_object* l___regBuiltin_Lean_Elab_Term_elabStrLit(lean_object*);
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Elab_Term_elabBadCDot___rarg___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_elabNumLit___closed__1;
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_mkLevelSucc(lean_object*);
lean_object* l_Lean_getLCtx___at_Lean_Elab_Term_getFVarLocalDecl_x21___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_traceAtCmdPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_postponeExceptionId;
lean_object* l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1___rarg(lean_object*);
lean_object* lean_environment_main_module(lean_object*);
lean_object* l_Lean_Meta_isType___at_Lean_isType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTacticBlock___closed__3;
extern lean_object* l_Std_PersistentArray_empty___closed__3;
lean_object* l_Lean_Elab_Term_withReducible(lean_object*);
lean_object* l_Lean_Elab_Term_elabUsingElabFns___closed__5;
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Elab_Term_saveAndResetSynthInstanceCache___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___closed__9;
lean_object* l_Lean_Elab_Term_restoreSynthInstanceCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_throwPostpone___rarg___closed__1;
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
extern lean_object* l_Lean_SourceInfo_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_saveAllState___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getMaxRecDepth(lean_object*);
lean_object* l_Lean_Elab_Term_SavedState_restore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabUsingElabFns(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Elab_Term_MonadIO___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabHole___closed__1;
lean_object* l_Lean_Elab_Term_SavedState_restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l___private_Lean_Elab_Term_13__elabUsingElabFnsAux(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_18__mkAuxNameAux(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_12__postponeElabTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ReaderT_monadError___rarg(lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l_Lean_Elab_Term_registerSyntheticMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_Term_expandArrayLit(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabSort___closed__1;
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__9;
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withTransparency___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_assignLevelMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Term_16__isLambdaWithImplicit(lean_object*);
lean_object* lean_metavar_ctx_assign_level(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__6;
lean_object* l_Lean_Elab_Term_savingMCtx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__3;
extern lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
lean_object* l_Lean_Elab_Term_elabImplicitLambda___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_logTrace___spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNamedHole(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toExprAux___main(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBadCDot(lean_object*);
lean_object* l_Lean_Elab_Term_elabUsingElabFns___closed__3;
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Term_14__isExplicit(lean_object*);
extern lean_object* l___private_Lean_Elab_Util_4__regTraceClasses___closed__3;
lean_object* l_Lean_getMCtx___at___private_Lean_Elab_Term_5__addContext_x27___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Init_Util_1__mkPanicMessage___closed__2;
lean_object* l___private_Lean_Elab_Term_1__mkMessageAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resettingSynthInstanceCacheWhen___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshExprMVar___at___private_Lean_Meta_Basic_7__forallMetaTelescopeReducingAux___main___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveGlobalName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__6;
lean_object* l_Lean_Elab_Term_MonadIO(lean_object*);
lean_object* l_Lean_Elab_Term_logException___closed__2;
uint8_t l___private_Lean_Elab_Term_6__hasCDot___main(lean_object*);
lean_object* l___private_Lean_Elab_Term_2__liftMetaMCore___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabProp___closed__1;
lean_object* l_Lean_Elab_Term_mkConst___closed__1;
lean_object* l_Lean_Elab_Term_dbgTrace___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MonadError___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkMessageAt___at_Lean_Elab_Term_logTrace___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isExprMVarAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabCharLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabHole___boxed(lean_object*);
extern lean_object* l_Lean_Meta_evalNat___main___closed__8;
lean_object* l_Lean_Elab_Term_mkExplicitBinder(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabSort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_levelMVarToParam___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_adaptExpander(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withMVarContext___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabImplicitLambda___main___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_evalNat___main___closed__7;
lean_object* l_Lean_Syntax_getPos(lean_object*);
lean_object* l_Lean_Elab_Term_getMessageLog___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_saveAndResetSynthInstanceCache___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabQuotedName(lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__9;
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_logTrace___spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2(lean_object*);
lean_object* l___private_Lean_Elab_Term_17__tryCoeSort___closed__6;
lean_object* l_Lean_Elab_Term_withFreshMacroScope___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
extern lean_object* l_Lean_TraceState_Inhabited___closed__1;
lean_object* l_Lean_Elab_Term_resetSynthInstanceCache___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getOpenDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_FileMap_Inhabited___closed__1;
extern lean_object* l_Lean_mkOptionalNode___closed__1;
lean_object* l_Lean_Elab_Term_logDbgTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object*);
lean_object* l_Lean_Elab_Term_liftCoreM(lean_object*);
lean_object* l_Lean_Elab_Term_restoreSynthInstanceCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshExprMVarWithId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__12;
lean_object* l_Lean_Elab_Term_mkFreshExprMVarWithId(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__3;
lean_object* l_Lean_Elab_Term_MonadError;
lean_object* l_Lean_Elab_Term_MonadError___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__12;
lean_object* l_Lean_MetavarContext_MkBinding_mkBinding(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Elab_Term_mkTacticMVar___closed__2;
lean_object* l_Lean_Elab_Term_liftCoreM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_saveAndResetSynthInstanceCache___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__1;
lean_object* l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabImplicitLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__6;
lean_object* l___private_Lean_Elab_Term_6__hasCDot___main___boxed(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabByTactic___closed__3;
lean_object* l_Lean_Elab_Term_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getOpenDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withLetDecl(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_expandArrayLit___closed__1;
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__4;
lean_object* l_Lean_Elab_Term_withoutMacroStackAtErr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_toIO___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Term_15__isExplicitApp(lean_object*);
lean_object* l_Lean_Elab_Term_resettingSynthInstanceCache___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkHole___closed__2;
lean_object* l_Lean_Elab_Term_withLocalDecl(lean_object*);
lean_object* l_Lean_Elab_Term_elabByTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveName___closed__2;
lean_object* l_Lean_Elab_Term_withLocalDecl___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkPairs___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore___closed__11;
lean_object* l_Lean_Elab_Term_getLevelNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_whnfRef;
lean_object* l_List_foldlM___main___at___private_Lean_Elab_Term_25__mkConsts___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_16__isLambdaWithImplicit___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_whnfForall___at_Lean_Elab_Term_useImplicitLambda_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabByTactic___closed__1;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__1___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_ppGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run_x27(lean_object*);
lean_object* l_Lean_Meta_mkExpectedTypeHint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostpone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkPairs(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwErrorIfErrors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MonadError___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadQuotation___closed__3;
extern lean_object* l_Lean_arrayToExpr___rarg___lambda__1___closed__2;
lean_object* l_Lean_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTacticBlock(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l_Nat_foldMAux___main___at___private_Lean_Elab_Term_24__mkFreshLevelMVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_27__regTraceClasses(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(lean_object*);
extern lean_object* l_Lean_Unhygienic_run___rarg___closed__1;
lean_object* l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
extern lean_object* l_Lean_MessageData_coeOfOptExpr___closed__1;
lean_object* l_Std_PersistentHashMap_findAtAux___main___at_Lean_Elab_Term_elabUsingElabFns___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_listLit___elambda__1___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabTacticBlock___closed__1;
uint8_t l_Lean_LocalInstance_beq(lean_object*, lean_object*);
lean_object* l_Nat_foldMAux___main___at___private_Lean_Elab_Term_24__mkFreshLevelMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__2;
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_16__isLambdaWithImplicit___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MonadError___closed__1;
lean_object* l_Lean_Syntax_formatStxAux___main(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resetSynthInstanceCache___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_PersistentArray_anyM___at_Lean_MessageLog_hasErrors___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_Term_6__hasCDot___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__1;
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__2;
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MonadError___closed__2;
lean_object* l_Lean_Elab_Term_applyResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_foldlM___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep___main(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkTacticMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
extern lean_object* l_Lean_Elab_mkMacroAttribute___closed__2;
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__3;
uint8_t l_Array_isEqvAux___main___at_Lean_Elab_Term_withMVarContext___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_14__isExplicit___boxed(lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_simpleMonadTracerAdapterLift___at_Lean_ReaderT_tracer___spec__1___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_resetSynthInstanceCache___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_19__elabOptLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__8;
lean_object* l_Lean_Elab_Term_elabStrLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_trace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___main___at_Lean_Elab_Term_withLocalContext___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___boxed(lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_3__liftMkBindingM___rarg___closed__3;
lean_object* l_Lean_whnf___at___private_Lean_Elab_Term_8__isTypeApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder___closed__6;
lean_object* l_Lean_Elab_Term_resolveName___closed__1;
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__1;
lean_object* l_Lean_Elab_Term_mkAuxName___closed__1;
lean_object* l_Lean_Elab_Term_resettingSynthInstanceCache(lean_object*);
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_MetaHasEval(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_Inhabited___closed__1;
lean_object* l_Lean_Elab_Term_registerSyntheticMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withReducible___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasTypeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_SavedState_inhabited;
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__5;
lean_object* l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Std_PersistentArray_foldlMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__1;
lean_object* l_Lean_getLocalInstances___at_Lean_Elab_Term_withLocalDecl___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1;
lean_object* l_Lean_Elab_Term_mkTacticMVar___closed__1;
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_logTrace___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandListLit___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__4;
lean_object* l_Lean_Elab_Term_MonadError___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_mkSorry___closed__2;
extern lean_object* l_Lean_Parser_Term_arrayLit___elambda__1___closed__2;
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__7;
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Term_18__mkAuxNameAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandListLit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_saveAllState___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog;
extern lean_object* l_Lean_Meta_MetaM_run_x27___rarg___closed__3;
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__4;
lean_object* l_Lean_Elab_Term_monadLog___closed__4;
lean_object* l_Lean_Elab_Term_elabBadCDot___rarg___closed__1;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__5___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_liftMetaM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkTermElabAttribute___closed__1;
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__2;
lean_object* l_Lean_Elab_Term_elabTermWithoutImplicitLambdas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___main___at_Lean_Elab_Term_elabUsingElabFns___spec__3___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_listToExpr___rarg___closed__6;
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_monadLog___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_toIO(lean_object*);
lean_object* l_Lean_Elab_Term_expandCDot_x3f(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameGenerator_Inhabited___closed__3;
lean_object* l_Lean_Elab_Term_mkFreshTypeMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBadCDot___rarg___closed__2;
lean_object* l_Lean_Elab_Term_elabBadCDot(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkAuxName___closed__2;
lean_object* l_Lean_Elab_Term_elabNumLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_logTrace___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__6;
lean_object* l_Lean_Elab_Term_tryLiftAndCoe___closed__3;
lean_object* l_Lean_Elab_Term_expandArrayLit___closed__5;
lean_object* l___private_Lean_Elab_Term_8__isTypeApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_registerPostponeId___closed__1;
lean_object* l_Lean_Elab_Term_tryCoe___closed__3;
lean_object* _init_l_Lean_Elab_Term_State_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = l_Std_PersistentArray_empty___closed__3;
x_3 = lean_unsigned_to_nat(1u);
x_4 = l_Lean_Unhygienic_run___rarg___closed__1;
x_5 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_3);
lean_ctor_set(x_5, 4, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_State_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_State_inhabited___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_TermElabM_inhabited___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_TermElabM_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Exception_inhabited___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_TermElabM_inhabited___lambda__1___boxed), 8, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_TermElabM_inhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_TermElabM_inhabited___closed__1;
return x_2;
}
}
lean_object* l_Lean_Elab_Term_TermElabM_inhabited___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_TermElabM_inhabited___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_SavedState_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = l_Std_PersistentArray_empty___closed__3;
x_3 = lean_unsigned_to_nat(1u);
x_4 = l_Lean_Unhygienic_run___rarg___closed__1;
x_5 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_3);
lean_ctor_set(x_5, 4, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_SavedState_inhabited___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Core_State_inhabited___closed__1;
x_2 = l_Lean_Meta_MetaM_run_x27___rarg___closed__3;
x_3 = l_Lean_Elab_Term_SavedState_inhabited___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_SavedState_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_SavedState_inhabited___closed__2;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_saveAllState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_st_ref_get(x_3, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_get(x_1, x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_8);
lean_ctor_set(x_16, 1, x_11);
lean_ctor_set(x_16, 2, x_15);
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
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_8);
lean_ctor_set(x_19, 1, x_11);
lean_ctor_set(x_19, 2, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
lean_object* l_Lean_Elab_Term_saveAllState(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_saveAllState___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_saveAllState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_saveAllState___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_saveAllState___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_saveAllState(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_SavedState_restore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_st_ref_set(x_7, x_9, x_8);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_st_ref_set(x_5, x_12, x_11);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_st_ref_set(x_3, x_15, x_14);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
lean_object* l_Lean_Elab_Term_SavedState_restore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_SavedState_restore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_TermElabResult_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_Inhabited___closed__1;
x_2 = l_Lean_Elab_Term_SavedState_inhabited___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_TermElabResult_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_TermElabResult_inhabited___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_observing(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_42; 
x_9 = l_Lean_Elab_Term_saveAllState___rarg(x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_12 = x_9;
} else {
 lean_dec_ref(x_9);
 x_12 = lean_box(0);
}
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_42 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
lean_dec(x_12);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_Elab_Term_saveAllState___rarg(x_3, x_4, x_5, x_6, x_7, x_44);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_47 = lean_ctor_get(x_45, 0);
x_48 = lean_ctor_get(x_45, 1);
x_49 = l_Lean_Elab_Term_SavedState_restore(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_48);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_49, 1);
x_52 = lean_ctor_get(x_49, 0);
lean_dec(x_52);
lean_ctor_set(x_49, 1, x_47);
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_45, 1, x_51);
lean_ctor_set(x_45, 0, x_49);
return x_45;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_49, 1);
lean_inc(x_53);
lean_dec(x_49);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_43);
lean_ctor_set(x_54, 1, x_47);
lean_ctor_set(x_45, 1, x_53);
lean_ctor_set(x_45, 0, x_54);
return x_45;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_55 = lean_ctor_get(x_45, 0);
x_56 = lean_ctor_get(x_45, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_45);
x_57 = l_Lean_Elab_Term_SavedState_restore(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_56);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_43);
lean_ctor_set(x_60, 1, x_55);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_58);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_42, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_42, 1);
lean_inc(x_63);
lean_dec(x_42);
x_13 = x_62;
x_14 = x_63;
goto block_41;
}
block_41:
{
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_15; uint8_t x_16; 
lean_dec(x_12);
x_15 = l_Lean_Elab_Term_saveAllState___rarg(x_3, x_4, x_5, x_6, x_7, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l_Lean_Elab_Term_SavedState_restore(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 1);
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
lean_ctor_set_tag(x_19, 1);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_15, 1, x_21);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_13);
lean_ctor_set(x_24, 1, x_17);
lean_ctor_set(x_15, 1, x_23);
lean_ctor_set(x_15, 0, x_24);
return x_15;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = l_Lean_Elab_Term_SavedState_restore(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_29 = x_27;
} else {
 lean_dec_ref(x_27);
 x_29 = lean_box(0);
}
if (lean_is_scalar(x_29)) {
 x_30 = lean_alloc_ctor(1, 2, 0);
} else {
 x_30 = x_29;
 lean_ctor_set_tag(x_30, 1);
}
lean_ctor_set(x_30, 0, x_13);
lean_ctor_set(x_30, 1, x_25);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_13, 0);
lean_inc(x_32);
x_33 = l_Lean_Elab_postponeExceptionId;
x_34 = lean_nat_dec_eq(x_32, x_33);
lean_dec(x_32);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_12)) {
 x_35 = lean_alloc_ctor(1, 2, 0);
} else {
 x_35 = x_12;
 lean_ctor_set_tag(x_35, 1);
}
lean_ctor_set(x_35, 0, x_13);
lean_ctor_set(x_35, 1, x_14);
return x_35;
}
else
{
lean_object* x_36; uint8_t x_37; 
lean_dec(x_12);
x_36 = l_Lean_Elab_Term_SavedState_restore(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 0);
lean_dec(x_38);
lean_ctor_set_tag(x_36, 1);
lean_ctor_set(x_36, 0, x_13);
return x_36;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_13);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_applyResult(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_Lean_Elab_Term_SavedState_restore(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 0);
lean_dec(x_13);
lean_ctor_set(x_11, 0, x_9);
return x_11;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l_Lean_Elab_Term_SavedState_restore(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set_tag(x_18, 1);
lean_ctor_set(x_18, 0, x_16);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Elab_Term_applyResult___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_applyResult(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Term_1__mkMessageAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Syntax_getPos(x_1);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Elab_mkMessageCore(x_6, x_7, x_3, x_4, x_8);
lean_dec(x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = l_Lean_Elab_mkMessageCore(x_10, x_11, x_3, x_4, x_12);
lean_dec(x_11);
return x_13;
}
}
}
lean_object* l___private_Lean_Elab_Term_1__mkMessageAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l___private_Lean_Elab_Term_1__mkMessageAux(x_1, x_2, x_3, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Term_2__liftMetaMCore___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_apply_5(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Term_2__liftMetaMCore(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Term_2__liftMetaMCore___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Term_2__liftMetaMCore___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Term_2__liftMetaMCore___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_MonadIO___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_apply_1(x_1, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_io_error_to_string(x_16);
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
lean_inc(x_9);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_9);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_10, 0, x_20);
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = lean_io_error_to_string(x_21);
x_24 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
lean_inc(x_9);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_9);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
return x_27;
}
}
}
}
lean_object* l_Lean_Elab_Term_MonadIO(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_MonadIO___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_MonadIO___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_MonadIO___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_array_fget(x_4, x_5);
lean_inc(x_1);
x_10 = l_Std_PersistentArray_foldlMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__2(x_1, x_2, x_9, x_6);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
x_6 = x_10;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = 0;
lean_inc(x_1);
x_11 = l___private_Lean_Elab_Term_1__mkMessageAux(x_2, x_1, x_9, x_10);
x_12 = l_Std_PersistentArray_push___rarg(x_6, x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_5 = x_14;
x_6 = x_12;
goto _start;
}
}
}
lean_object* l_Std_PersistentArray_foldlMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__3(x_1, x_2, x_5, x_5, x_6, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__4(x_1, x_2, x_8, x_8, x_9, x_4);
return x_10;
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = 0;
lean_inc(x_1);
x_11 = l___private_Lean_Elab_Term_1__mkMessageAux(x_2, x_1, x_9, x_10);
x_12 = l_Std_PersistentArray_push___rarg(x_6, x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_5 = x_14;
x_6 = x_12;
goto _start;
}
}
}
lean_object* l_Std_PersistentArray_foldlM___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_1);
x_6 = l_Std_PersistentArray_foldlMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__2(x_1, x_2, x_5, x_4);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__5(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Term_3__saveTraceAsMessages(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = l_Std_PersistentArray_isEmpty___rarg(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_ctor_get(x_6, 3);
x_12 = lean_st_ref_take(x_3, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_13, 1);
x_17 = l_Std_PersistentArray_foldlM___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__1(x_2, x_11, x_9, x_16);
lean_ctor_set(x_13, 1, x_17);
x_18 = lean_st_ref_set(x_3, x_13, x_14);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_25 = lean_ctor_get(x_13, 0);
x_26 = lean_ctor_get(x_13, 1);
x_27 = lean_ctor_get(x_13, 2);
x_28 = lean_ctor_get(x_13, 3);
x_29 = lean_ctor_get(x_13, 4);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_13);
x_30 = l_Std_PersistentArray_foldlM___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__1(x_2, x_11, x_9, x_26);
x_31 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_30);
lean_ctor_set(x_31, 2, x_27);
lean_ctor_set(x_31, 3, x_28);
lean_ctor_set(x_31, 4, x_29);
x_32 = lean_st_ref_set(x_3, x_31, x_14);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
x_35 = lean_box(0);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_2);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_8);
return x_38;
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentArray_foldlMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentArray_foldlMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_iterateMAux___main___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentArray_foldlM___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentArray_foldlM___at___private_Lean_Elab_Term_3__saveTraceAsMessages___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Term_3__saveTraceAsMessages___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Term_3__saveTraceAsMessages(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* _init_l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Util_Trace_5__checkTraceOptionM___at_Lean_Meta_SynthInstance_newSubgoal___spec__7___closed__1;
x_2 = l_Lean_simpleMonadTracerAdapterLift___at_Lean_ReaderT_tracer___spec__1___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = lean_alloc_closure((void*)(l_fix1___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = lean_apply_8(x_10, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Term_4__liftMetaMFinalizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_2);
x_14 = l___private_Lean_Elab_Term_3__saveTraceAsMessages(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
lean_dec(x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_11);
if (x_17 == 0)
{
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_11, 0);
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_11);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Elab_Term_liftMetaM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = lean_apply_5(x_1, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_18);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_dec(x_17);
x_31 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set_tag(x_31, 1);
lean_ctor_set(x_31, 0, x_29);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_29);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
return x_15;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_11);
if (x_44 == 0)
{
return x_11;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_11, 0);
x_46 = lean_ctor_get(x_11, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_11);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Lean_Elab_Term_liftMetaM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_liftMetaM___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_liftCoreM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_7);
lean_inc(x_6);
x_17 = lean_apply_3(x_1, x_6, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_18);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_dec(x_17);
x_31 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set_tag(x_31, 1);
lean_ctor_set(x_31, 0, x_29);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_29);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
return x_15;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_11);
if (x_44 == 0)
{
return x_11;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_11, 0);
x_46 = lean_ctor_get(x_11, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_11);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Lean_Elab_Term_liftCoreM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_liftCoreM___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_Lean_MonadMetaM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = lean_apply_5(x_1, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_18);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_dec(x_17);
x_31 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set_tag(x_31, 1);
lean_ctor_set(x_31, 0, x_29);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_29);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
return x_15;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_11);
if (x_44 == 0)
{
return x_11;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_11, 0);
x_46 = lean_ctor_get(x_11, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_11);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Lean_Elab_Term_Lean_MonadMetaM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_MonadMetaM___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_getLevelNames(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getLevelNames___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_getLevelNames(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_getLCtx___at_Lean_Elab_Term_getFVarLocalDecl_x21___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = lean_apply_7(x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
x_17 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_15);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_16);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_14);
if (x_26 == 0)
{
return x_14;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_14, 0);
x_28 = lean_ctor_get(x_14, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_14);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_10);
if (x_30 == 0)
{
return x_10;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_10, 0);
x_32 = lean_ctor_get(x_10, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_10);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_TermElabM_inhabited(lean_box(0));
return x_1;
}
}
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_Lean_getLCtx___at_Lean_Elab_Term_getFVarLocalDecl_x21___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = l_Lean_Expr_fvarId_x21(x_1);
x_14 = lean_local_ctx_find(x_11, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_free_object(x_9);
x_15 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_16 = l_unreachable_x21___rarg(x_15);
x_17 = lean_apply_7(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_12);
return x_17;
}
else
{
lean_object* x_18; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
lean_ctor_set(x_9, 0, x_18);
return x_9;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_9);
x_21 = l_Lean_Expr_fvarId_x21(x_1);
x_22 = lean_local_ctx_find(x_19, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1;
x_24 = l_unreachable_x21___rarg(x_23);
x_25 = lean_apply_7(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_20);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_22, 0);
lean_inc(x_26);
lean_dec(x_22);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_20);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_9);
if (x_28 == 0)
{
return x_9;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_9, 0);
x_30 = lean_ctor_get(x_9, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_9);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l_Lean_Elab_Term_getFVarLocalDecl_x21___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_getFVarLocalDecl_x21(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getMessageLog___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_1, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
lean_object* l_Lean_Elab_Term_getMessageLog(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getMessageLog___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_getMessageLog___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_getMessageLog___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_getMessageLog___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_getMessageLog(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_getMCtx___at___private_Lean_Elab_Term_5__addContext_x27___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = lean_apply_7(x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_st_ref_get(x_4, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_18);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_19);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_14);
if (x_29 == 0)
{
return x_14;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_14, 0);
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_14);
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
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_10);
if (x_33 == 0)
{
return x_10;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_10, 0);
x_35 = lean_ctor_get(x_10, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_10);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l___private_Lean_Elab_Term_5__addContext_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_13 = l_Lean_getMCtx___at___private_Lean_Elab_Term_5__addContext_x27___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_6);
x_16 = l_Lean_getLCtx___at_Lean_Elab_Term_getFVarLocalDecl_x21___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_6, 0);
lean_inc(x_19);
lean_dec(x_6);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_12);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_18);
lean_ctor_set(x_20, 3, x_19);
x_21 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_1);
lean_ctor_set(x_16, 0, x_21);
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_16);
x_24 = lean_ctor_get(x_6, 0);
lean_inc(x_24);
lean_dec(x_6);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_12);
lean_ctor_set(x_25, 1, x_14);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_24);
x_26 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_1);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_16);
if (x_28 == 0)
{
return x_16;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_16, 0);
x_30 = lean_ctor_get(x_16, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_16);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_13);
if (x_32 == 0)
{
return x_13;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_13, 0);
x_34 = lean_ctor_get(x_13, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_13);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Lean_Elab_Term_MonadError___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 3);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_MonadError___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_3, 6);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_1, x_10);
x_12 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
x_13 = l___private_Lean_Elab_Term_5__addContext_x27(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
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
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_11);
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
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_Lean_Elab_addMacroStack(x_2, x_10);
x_26 = l___private_Lean_Elab_Term_5__addContext_x27(x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_11);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_26, 0, x_29);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_26, 0);
x_31 = lean_ctor_get(x_26, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_11);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_11);
x_34 = !lean_is_exclusive(x_26);
if (x_34 == 0)
{
return x_26;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_26, 0);
x_36 = lean_ctor_get(x_26, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_26);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_MonadError___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 3);
x_13 = l_Lean_replaceRef(x_2, x_12);
x_14 = l_Lean_replaceRef(x_13, x_12);
lean_dec(x_12);
lean_dec(x_13);
lean_ctor_set(x_8, 3, x_14);
x_15 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 1);
x_18 = lean_ctor_get(x_8, 2);
x_19 = lean_ctor_get(x_8, 3);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_20 = l_Lean_replaceRef(x_2, x_19);
x_21 = l_Lean_replaceRef(x_20, x_19);
lean_dec(x_19);
lean_dec(x_20);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_17);
lean_ctor_set(x_22, 2, x_18);
lean_ctor_set(x_22, 3, x_21);
x_23 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_22, x_9, x_10);
return x_23;
}
}
}
lean_object* _init_l_Lean_Elab_Term_MonadError___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Lean_MonadError;
x_2 = l_Lean_ReaderT_monadError___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_MonadError___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_MonadError___closed__1;
x_2 = l_Lean_ReaderT_monadError___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_MonadError___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_MonadError___lambda__1___boxed), 7, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_MonadError___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_MonadError___lambda__2___boxed), 9, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_MonadError___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_MonadError___lambda__3___boxed), 10, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_MonadError___closed__6() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = l_Lean_Elab_Term_MonadError___closed__2;
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 3);
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_dec(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_dec(x_5);
x_6 = l_Lean_Elab_Term_MonadError___closed__3;
x_7 = l_Lean_Elab_Term_MonadError___closed__4;
x_8 = l_Lean_Elab_Term_MonadError___closed__5;
lean_ctor_set(x_1, 3, x_8);
lean_ctor_set(x_1, 2, x_7);
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_Lean_Elab_Term_MonadError___closed__3;
x_11 = l_Lean_Elab_Term_MonadError___closed__4;
x_12 = l_Lean_Elab_Term_MonadError___closed__5;
x_13 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_10);
lean_ctor_set(x_13, 2, x_11);
lean_ctor_set(x_13, 3, x_12);
return x_13;
}
}
}
lean_object* _init_l_Lean_Elab_Term_MonadError() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_MonadError___closed__6;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_MonadError___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_MonadError___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_MonadError___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_MonadError___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_MonadError___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_MonadError___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_ReaderT_read___at_Lean_Elab_Term_monadLog___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = lean_apply_7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_apply_8(x_2, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg), 9, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_monadLog___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_monadLog___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_monadLog___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_take(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_Std_PersistentArray_push___rarg(x_13, x_1);
lean_ctor_set(x_10, 1, x_14);
x_15 = lean_st_ref_set(x_3, x_10, x_11);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
x_18 = lean_box(0);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_ctor_get(x_10, 1);
x_24 = lean_ctor_get(x_10, 2);
x_25 = lean_ctor_get(x_10, 3);
x_26 = lean_ctor_get(x_10, 4);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_10);
x_27 = l_Std_PersistentArray_push___rarg(x_23, x_1);
x_28 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_28, 2, x_24);
lean_ctor_set(x_28, 3, x_25);
lean_ctor_set(x_28, 4, x_26);
x_29 = lean_st_ref_set(x_3, x_28, x_11);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_31 = x_29;
} else {
 lean_dec_ref(x_29);
 x_31 = lean_box(0);
}
x_32 = lean_box(0);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_read___at_Lean_Elab_Term_monadLog___spec__1___boxed), 7, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_monadLog___lambda__1___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_monadLog___closed__1;
x_2 = l_Lean_Elab_Term_monadLog___closed__2;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg), 9, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_monadLog___lambda__2___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_monadLog___closed__1;
x_2 = l_Lean_Elab_Term_monadLog___closed__4;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg), 9, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Term_5__addContext_x27), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_monadLog___closed__3;
x_2 = l_Lean_Elab_Term_monadLog___closed__5;
x_3 = l_Lean_Elab_Term_monadLog___closed__6;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_monadLog___lambda__3___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_monadLog___closed__7;
x_2 = l_Lean_Elab_Term_monadLog___closed__8;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_monadLog() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_monadLog___closed__9;
return x_1;
}
}
lean_object* l_ReaderT_read___at_Lean_Elab_Term_monadLog___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_ReaderT_read___at_Lean_Elab_Term_monadLog___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_monadLog___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_monadLog___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_monadLog___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_monadLog___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_monadLog___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_monadLog___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 7);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getCurrMacroScope___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_getCurrMacroScope(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_environment_main_module(x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_environment_main_module(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
}
}
lean_object* l_Lean_Elab_Term_getMainModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getMainModule___rarg___boxed), 2, 0);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_getMainModule___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_getMainModule___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_getMainModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Term_getMainModule(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_withFreshMacroScope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_take(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_10, 4);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_13, x_14);
lean_ctor_set(x_10, 4, x_15);
x_16 = lean_st_ref_set(x_3, x_10, x_11);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = !lean_is_exclusive(x_2);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_2, 7);
lean_dec(x_19);
lean_ctor_set(x_2, 7, x_13);
x_20 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
x_23 = lean_ctor_get(x_2, 2);
x_24 = lean_ctor_get(x_2, 3);
x_25 = lean_ctor_get(x_2, 4);
x_26 = lean_ctor_get(x_2, 5);
x_27 = lean_ctor_get(x_2, 6);
x_28 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_29 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
x_30 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
x_31 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_31, 0, x_21);
lean_ctor_set(x_31, 1, x_22);
lean_ctor_set(x_31, 2, x_23);
lean_ctor_set(x_31, 3, x_24);
lean_ctor_set(x_31, 4, x_25);
lean_ctor_set(x_31, 5, x_26);
lean_ctor_set(x_31, 6, x_27);
lean_ctor_set(x_31, 7, x_13);
lean_ctor_set_uint8(x_31, sizeof(void*)*8, x_28);
lean_ctor_set_uint8(x_31, sizeof(void*)*8 + 1, x_29);
lean_ctor_set_uint8(x_31, sizeof(void*)*8 + 2, x_30);
x_32 = lean_apply_7(x_1, x_31, x_3, x_4, x_5, x_6, x_7, x_17);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_33 = lean_ctor_get(x_10, 0);
x_34 = lean_ctor_get(x_10, 1);
x_35 = lean_ctor_get(x_10, 2);
x_36 = lean_ctor_get(x_10, 3);
x_37 = lean_ctor_get(x_10, 4);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_10);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_37, x_38);
x_40 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_40, 0, x_33);
lean_ctor_set(x_40, 1, x_34);
lean_ctor_set(x_40, 2, x_35);
lean_ctor_set(x_40, 3, x_36);
lean_ctor_set(x_40, 4, x_39);
x_41 = lean_st_ref_set(x_3, x_40, x_11);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_ctor_get(x_2, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_2, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_2, 2);
lean_inc(x_45);
x_46 = lean_ctor_get(x_2, 3);
lean_inc(x_46);
x_47 = lean_ctor_get(x_2, 4);
lean_inc(x_47);
x_48 = lean_ctor_get(x_2, 5);
lean_inc(x_48);
x_49 = lean_ctor_get(x_2, 6);
lean_inc(x_49);
x_50 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_51 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
x_52 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 lean_ctor_release(x_2, 5);
 lean_ctor_release(x_2, 6);
 lean_ctor_release(x_2, 7);
 x_53 = x_2;
} else {
 lean_dec_ref(x_2);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(0, 8, 3);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_43);
lean_ctor_set(x_54, 1, x_44);
lean_ctor_set(x_54, 2, x_45);
lean_ctor_set(x_54, 3, x_46);
lean_ctor_set(x_54, 4, x_47);
lean_ctor_set(x_54, 5, x_48);
lean_ctor_set(x_54, 6, x_49);
lean_ctor_set(x_54, 7, x_37);
lean_ctor_set_uint8(x_54, sizeof(void*)*8, x_50);
lean_ctor_set_uint8(x_54, sizeof(void*)*8 + 1, x_51);
lean_ctor_set_uint8(x_54, sizeof(void*)*8 + 2, x_52);
x_55 = lean_apply_7(x_1, x_54, x_3, x_4, x_5, x_6, x_7, x_42);
return x_55;
}
}
}
lean_object* l_Lean_Elab_Term_withFreshMacroScope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withFreshMacroScope___rarg), 8, 0);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_monadQuotation___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getCurrMacroScope___boxed), 7, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadQuotation___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_getMainModule___boxed), 5, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadQuotation___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withFreshMacroScope), 1, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_monadQuotation___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_monadQuotation___closed__1;
x_2 = l_Lean_Elab_Term_monadQuotation___closed__2;
x_3 = l_Lean_Elab_Term_monadQuotation___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_monadQuotation() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_monadQuotation___closed__4;
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_mkMacroAttribute___closed__2;
x_2 = l_Lean_mkAppStx___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("termElabAttribute");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_mkTermElabAttribute___closed__1;
x_2 = l_Lean_Elab_Term_mkTermElabAttribute___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("builtinTermElab");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_mkTermElabAttribute___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("termElab");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_mkTermElabAttribute___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("TermElab");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_mkTermElabAttribute___closed__1;
x_2 = l_Lean_Elab_Term_mkTermElabAttribute___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_mkTermElabAttribute(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = l_Lean_Elab_Term_mkTermElabAttribute___closed__3;
x_3 = l_Lean_Elab_Term_mkTermElabAttribute___closed__5;
x_4 = l_Lean_Elab_Term_mkTermElabAttribute___closed__7;
x_5 = l_Lean_mkAppStx___closed__6;
x_6 = l_Lean_Elab_Term_mkTermElabAttribute___closed__9;
x_7 = l_Lean_Parser_termParser___closed__1;
x_8 = l_Lean_Elab_mkElabAttribute___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_1);
return x_8;
}
}
lean_object* l_Std_mkHashMap___at_Lean_Elab_Term_termElabAttribute___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Std_PersistentHashMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_LocalContext_Inhabited___closed__1;
return x_1;
}
}
lean_object* _init_l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1___closed__1;
x_3 = l_Std_PersistentHashMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__3;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1___closed__2;
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_termElabAttribute___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_termElabAttribute___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Term_termElabAttribute___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_termElabAttribute___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_EnvExtension_Inhabited___rarg___closed__1;
x_3 = l_Lean_Elab_Term_termElabAttribute___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_termElabAttribute___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_Lean_Elab_Term_termElabAttribute___closed__3;
x_2 = lean_box(0);
x_3 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1;
x_4 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2;
x_5 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__3;
x_6 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__4;
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_6);
return x_7;
}
}
lean_object* _init_l_Lean_Elab_Term_termElabAttribute___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_KeyedDeclsAttribute_Def_inhabited___closed__2;
x_2 = lean_box(0);
x_3 = l_Lean_Elab_Term_termElabAttribute___closed__4;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_LVal_hasToString(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Nat_repr(x_2);
return x_3;
}
case 1:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
return x_4;
}
default: 
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_box(0);
x_7 = 0;
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_formatStxAux___main(x_6, x_7, x_8, x_5);
x_10 = l_Lean_Options_empty;
x_11 = l_Lean_Format_pretty(x_9, x_10);
x_12 = l_List_repr___rarg___closed__2;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = l_List_repr___rarg___closed__3;
x_15 = lean_string_append(x_13, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_Elab_Term_getDeclName_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getDeclName_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_getDeclName_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_getCurrNamespace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getCurrNamespace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_getCurrNamespace(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_getOpenDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 5);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_getOpenDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_getOpenDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_isExprMVarAssigned(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getMCtx___at___private_Lean_Elab_Term_5__addContext_x27___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_metavar_ctx_is_expr_assigned(x_11, x_1);
x_13 = lean_box(x_12);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_metavar_ctx_is_expr_assigned(x_14, x_1);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_9);
if (x_19 == 0)
{
return x_9;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_9, 0);
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_9);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Elab_Term_getMVarDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getMCtx___at___private_Lean_Elab_Term_5__addContext_x27___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Lean_MetavarContext_getDecl(x_11, x_1);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = l_Lean_MetavarContext_getDecl(x_13, x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Elab_Term_getMVarDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_getMVarDecl(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_assignLevelMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_6, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_metavar_ctx_assign_level(x_14, x_1, x_2);
lean_ctor_set(x_11, 0, x_15);
x_16 = lean_st_ref_set(x_6, x_11, x_12);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
x_25 = lean_ctor_get(x_11, 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_26 = lean_metavar_ctx_assign_level(x_23, x_1, x_2);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
lean_ctor_set(x_27, 2, x_25);
x_28 = lean_st_ref_set(x_6, x_27, x_12);
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
x_31 = lean_box(0);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
}
lean_object* l_Lean_Elab_Term_assignLevelMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_assignLevelMVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_logTrace___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
x_5 = l_Lean_Syntax_getPos(x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
}
}
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_logTrace___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_getRefPos___at_Lean_Elab_Term_logTrace___spec__2___rarg___boxed), 3, 0);
return x_5;
}
}
lean_object* l_Lean_Elab_mkMessageAt___at_Lean_Elab_Term_logTrace___spec__4(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
x_13 = l_Lean_FileMap_toPosition(x_12, x_3);
lean_dec(x_12);
x_14 = l___private_Lean_Elab_Term_5__addContext_x27(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_box(0);
x_18 = l_String_splitAux___main___closed__1;
x_19 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_17);
lean_ctor_set(x_19, 3, x_18);
lean_ctor_set(x_19, 4, x_16);
lean_ctor_set_uint8(x_19, sizeof(void*)*5, x_2);
lean_ctor_set(x_14, 0, x_19);
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_box(0);
x_23 = l_String_splitAux___main___closed__1;
x_24 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_24, 0, x_11);
lean_ctor_set(x_24, 1, x_13);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
lean_ctor_set(x_24, 4, x_20);
lean_ctor_set_uint8(x_24, sizeof(void*)*5, x_2);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_21);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_13);
lean_dec(x_11);
x_26 = !lean_is_exclusive(x_14);
if (x_26 == 0)
{
return x_14;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_14, 0);
x_28 = lean_ctor_get(x_14, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_14);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_logTrace___spec__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_5);
x_11 = l_Lean_Elab_mkMessageAt___at_Lean_Elab_Term_logTrace___spec__4(x_3, x_2, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_take(x_5, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_15, 1);
x_19 = l_Std_PersistentArray_push___rarg(x_18, x_12);
lean_ctor_set(x_15, 1, x_19);
x_20 = lean_st_ref_set(x_5, x_15, x_16);
lean_dec(x_5);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = lean_box(0);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_27 = lean_ctor_get(x_15, 0);
x_28 = lean_ctor_get(x_15, 1);
x_29 = lean_ctor_get(x_15, 2);
x_30 = lean_ctor_get(x_15, 3);
x_31 = lean_ctor_get(x_15, 4);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_15);
x_32 = l_Std_PersistentArray_push___rarg(x_28, x_12);
x_33 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_33, 2, x_29);
lean_ctor_set(x_33, 3, x_30);
lean_ctor_set(x_33, 4, x_31);
x_34 = lean_st_ref_set(x_5, x_33, x_16);
lean_dec(x_5);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_36 = x_34;
} else {
 lean_dec_ref(x_34);
 x_36 = lean_box(0);
}
x_37 = lean_box(0);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_5);
x_39 = !lean_is_exclusive(x_11);
if (x_39 == 0)
{
return x_11;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_11, 0);
x_41 = lean_ctor_get(x_11, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_11);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_logTrace___spec__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_Elab_getRefPos___at_Lean_Elab_Term_logTrace___spec__2___rarg(x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_logAt___at_Lean_Elab_Term_logTrace___spec__3(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_logTrace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = l_Lean_getMCtx___at___private_Lean_Elab_Term_5__addContext_x27___spec__1(x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_17 = l_Lean_getLCtx___at_Lean_Elab_Term_getFVarLocalDecl_x21___spec__1(x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_7, 0);
lean_inc(x_20);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_15);
lean_ctor_set(x_21, 2, x_18);
lean_ctor_set(x_21, 3, x_20);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_2);
x_23 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = 0;
x_25 = l_Lean_Elab_log___at_Lean_Elab_Term_logTrace___spec__1(x_24, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_17);
if (x_26 == 0)
{
return x_17;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_17, 0);
x_28 = lean_ctor_get(x_17, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_17);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_14);
if (x_30 == 0)
{
return x_14;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_14, 0);
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_14);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_logTrace___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_getRefPos___at_Lean_Elab_Term_logTrace___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_getRefPos___at_Lean_Elab_Term_logTrace___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_getRefPos___at_Lean_Elab_Term_logTrace___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_mkMessageAt___at_Lean_Elab_Term_logTrace___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_Lean_Elab_mkMessageAt___at_Lean_Elab_Term_logTrace___spec__4(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_logTrace___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_Lean_Elab_logAt___at_Lean_Elab_Term_logTrace___spec__3(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_logTrace___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Elab_log___at_Lean_Elab_Term_logTrace___spec__1(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_trace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_inc(x_1);
x_11 = l_Lean_checkTraceOption(x_10, x_1);
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
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_box(0);
x_15 = lean_apply_1(x_2, x_14);
x_16 = l_Lean_Elab_Term_logTrace(x_1, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_16;
}
}
}
lean_object* _init_l_Lean_Elab_Term_logDbgTrace___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
x_2 = l___private_Lean_Meta_Basic_1__regTraceClasses___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_logDbgTrace(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = l_Lean_Elab_Term_logDbgTrace___closed__1;
x_11 = l_Lean_checkTraceOption(x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = l_Lean_Elab_Term_logTrace(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_6, 3);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 6);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
lean_dec(x_9);
x_12 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
x_13 = l___private_Lean_Elab_Term_5__addContext_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_tag(x_13, 1);
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
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_11);
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
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_Lean_Elab_addMacroStack(x_1, x_10);
x_26 = l___private_Lean_Elab_Term_5__addContext_x27(x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_11);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set_tag(x_26, 1);
lean_ctor_set(x_26, 0, x_29);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_26, 0);
x_31 = lean_ctor_get(x_26, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_11);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_11);
x_34 = !lean_is_exclusive(x_26);
if (x_34 == 0)
{
return x_26;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_26, 0);
x_36 = lean_ctor_get(x_26, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_26);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg), 8, 0);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_throwErrorIfErrors___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Error(s)");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_throwErrorIfErrors___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_throwErrorIfErrors___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_throwErrorIfErrors___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_throwErrorIfErrors___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_throwErrorIfErrors(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_st_ref_get(x_2, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Std_PersistentArray_anyM___at_Lean_MessageLog_hasErrors___spec__1(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_box(0);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_free_object(x_8);
x_15 = l_Lean_Elab_Term_throwErrorIfErrors___closed__3;
x_16 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_15, x_1, x_2, x_3, x_4, x_5, x_6, x_11);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Std_PersistentArray_anyM___at_Lean_MessageLog_hasErrors___spec__1(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = l_Lean_Elab_Term_throwErrorIfErrors___closed__3;
x_24 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_23, x_1, x_2, x_3, x_4, x_5, x_6, x_18);
return x_24;
}
}
}
}
lean_object* l_Lean_Elab_Term_traceAtCmdPos(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 3);
x_13 = lean_box(0);
x_14 = l_Lean_replaceRef(x_13, x_12);
x_15 = l_Lean_replaceRef(x_14, x_12);
lean_dec(x_14);
x_16 = l_Lean_replaceRef(x_15, x_12);
lean_dec(x_12);
lean_dec(x_15);
lean_inc(x_11);
lean_ctor_set(x_7, 3, x_16);
lean_inc(x_1);
x_17 = l_Lean_checkTraceOption(x_11, x_1);
lean_dec(x_11);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_9);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_box(0);
x_21 = lean_apply_1(x_2, x_20);
x_22 = l_Lean_Elab_Term_logTrace(x_1, x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_23 = lean_ctor_get(x_7, 0);
x_24 = lean_ctor_get(x_7, 1);
x_25 = lean_ctor_get(x_7, 2);
x_26 = lean_ctor_get(x_7, 3);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_7);
x_27 = lean_box(0);
x_28 = l_Lean_replaceRef(x_27, x_26);
x_29 = l_Lean_replaceRef(x_28, x_26);
lean_dec(x_28);
x_30 = l_Lean_replaceRef(x_29, x_26);
lean_dec(x_26);
lean_dec(x_29);
lean_inc(x_23);
x_31 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_31, 0, x_23);
lean_ctor_set(x_31, 1, x_24);
lean_ctor_set(x_31, 2, x_25);
lean_ctor_set(x_31, 3, x_30);
lean_inc(x_1);
x_32 = l_Lean_checkTraceOption(x_23, x_1);
lean_dec(x_23);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_9);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_box(0);
x_36 = lean_apply_1(x_2, x_35);
x_37 = l_Lean_Elab_Term_logTrace(x_1, x_36, x_3, x_4, x_5, x_6, x_31, x_8, x_9);
return x_37;
}
}
}
}
lean_object* l_Lean_Elab_Term_dbgTrace___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* _init_l_Lean_Elab_Term_dbgTrace___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_dbgTrace___rarg___lambda__1___boxed), 8, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_dbgTrace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_apply_1(x_1, x_2);
x_11 = l_Lean_Elab_Term_dbgTrace___rarg___closed__1;
x_12 = lean_dbg_trace(x_10, x_11);
x_13 = lean_apply_7(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_dbgTrace(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_dbgTrace___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_dbgTrace___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_dbgTrace___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_ppGoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_inc(x_6);
x_17 = l_Lean_Meta_ppGoal(x_1, x_4, x_5, x_6, x_7, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_18);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_15);
if (x_29 == 0)
{
return x_15;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_15, 0);
x_31 = lean_ctor_get(x_15, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_15);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_11);
if (x_33 == 0)
{
return x_11;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_11, 0);
x_35 = lean_ctor_get(x_11, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_11);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_Elab_Term_isDefEqNoConstantApprox(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_5, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_5, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_5, 2);
lean_inc(x_20);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_22 = 1;
lean_ctor_set_uint8(x_17, 0, x_22);
lean_ctor_set_uint8(x_17, 1, x_22);
lean_ctor_set_uint8(x_17, 2, x_22);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_19);
lean_ctor_set(x_23, 2, x_20);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_24 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_1, x_2, x_23, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_26);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_25);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_25);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_24, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_24, 1);
lean_inc(x_37);
lean_dec(x_24);
x_38 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_37);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
lean_ctor_set_tag(x_38, 1);
lean_ctor_set(x_38, 0, x_36);
return x_38;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_36);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
uint8_t x_43; 
lean_dec(x_36);
x_43 = !lean_is_exclusive(x_38);
if (x_43 == 0)
{
return x_38;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_38, 0);
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_38);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_ctor_get_uint8(x_17, 3);
x_48 = lean_ctor_get_uint8(x_17, 4);
x_49 = lean_ctor_get_uint8(x_17, 5);
lean_dec(x_17);
x_50 = 1;
x_51 = lean_alloc_ctor(0, 0, 6);
lean_ctor_set_uint8(x_51, 0, x_50);
lean_ctor_set_uint8(x_51, 1, x_50);
lean_ctor_set_uint8(x_51, 2, x_50);
lean_ctor_set_uint8(x_51, 3, x_47);
lean_ctor_set_uint8(x_51, 4, x_48);
lean_ctor_set_uint8(x_51, 5, x_49);
x_52 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_19);
lean_ctor_set(x_52, 2, x_20);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_53 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_1, x_2, x_52, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_55);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_54);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_54);
x_60 = lean_ctor_get(x_56, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_56, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_62 = x_56;
} else {
 lean_dec_ref(x_56);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_53, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_53, 1);
lean_inc(x_65);
lean_dec(x_53);
x_66 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_68 = x_66;
} else {
 lean_dec_ref(x_66);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
 lean_ctor_set_tag(x_69, 1);
}
lean_ctor_set(x_69, 0, x_64);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_64);
x_70 = lean_ctor_get(x_66, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_66, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_72 = x_66;
} else {
 lean_dec_ref(x_66);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(1, 2, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_70);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_16);
if (x_74 == 0)
{
return x_16;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_16, 0);
x_76 = lean_ctor_get(x_16, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_16);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_12);
if (x_78 == 0)
{
return x_12;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_12, 0);
x_80 = lean_ctor_get(x_12, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_12);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
lean_object* l_Lean_Elab_Term_isDefEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_5, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_5, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_5, 2);
lean_inc(x_20);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_22 = 1;
lean_ctor_set_uint8(x_17, 0, x_22);
lean_ctor_set_uint8(x_17, 1, x_22);
lean_ctor_set_uint8(x_17, 2, x_22);
lean_ctor_set_uint8(x_17, 3, x_22);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_19);
lean_ctor_set(x_23, 2, x_20);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_24 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_1, x_2, x_23, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_26);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_25);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_25);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_24, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_24, 1);
lean_inc(x_37);
lean_dec(x_24);
x_38 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_37);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
lean_ctor_set_tag(x_38, 1);
lean_ctor_set(x_38, 0, x_36);
return x_38;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_36);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
uint8_t x_43; 
lean_dec(x_36);
x_43 = !lean_is_exclusive(x_38);
if (x_43 == 0)
{
return x_38;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_38, 0);
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_38);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; uint8_t x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_47 = lean_ctor_get_uint8(x_17, 4);
x_48 = lean_ctor_get_uint8(x_17, 5);
lean_dec(x_17);
x_49 = 1;
x_50 = lean_alloc_ctor(0, 0, 6);
lean_ctor_set_uint8(x_50, 0, x_49);
lean_ctor_set_uint8(x_50, 1, x_49);
lean_ctor_set_uint8(x_50, 2, x_49);
lean_ctor_set_uint8(x_50, 3, x_49);
lean_ctor_set_uint8(x_50, 4, x_47);
lean_ctor_set_uint8(x_50, 5, x_48);
x_51 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_19);
lean_ctor_set(x_51, 2, x_20);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_52 = l_Lean_isExprDefEq___at_Lean_isDefEqNoConstantApprox___spec__1(x_1, x_2, x_51, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_54);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_57 = x_55;
} else {
 lean_dec_ref(x_55);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_53);
x_59 = lean_ctor_get(x_55, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_55, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_61 = x_55;
} else {
 lean_dec_ref(x_55);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_52, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_52, 1);
lean_inc(x_64);
lean_dec(x_52);
x_65 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_64);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_67 = x_65;
} else {
 lean_dec_ref(x_65);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
 lean_ctor_set_tag(x_68, 1);
}
lean_ctor_set(x_68, 0, x_63);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_63);
x_69 = lean_ctor_get(x_65, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_65, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_71 = x_65;
} else {
 lean_dec_ref(x_65);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_16);
if (x_73 == 0)
{
return x_16;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_16, 0);
x_75 = lean_ctor_get(x_16, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_16);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
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
x_77 = !lean_is_exclusive(x_12);
if (x_77 == 0)
{
return x_12;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_12, 0);
x_79 = lean_ctor_get(x_12, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_12);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
lean_object* l_Lean_Elab_Term_isClass_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = l_Lean_Meta_isClass_x3f(x_1, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_18);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_dec(x_17);
x_31 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set_tag(x_31, 1);
lean_ctor_set(x_31, 0, x_29);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_29);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
return x_15;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_11);
if (x_44 == 0)
{
return x_11;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_11, 0);
x_46 = lean_ctor_get(x_11, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_11);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshExprMVar(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_Lean_mkFreshLevelMVar___at_Lean_Meta_openAbstractMVarsResult___spec__1___rarg(x_7, x_8, x_9, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_mkSort(x_20);
x_23 = lean_box(0);
x_24 = 0;
x_25 = l_Lean_mkFreshExprMVar___at___private_Lean_Meta_Basic_7__forallMetaTelescopeReducingAux___main___spec__1(x_22, x_23, x_24, x_6, x_7, x_8, x_9, x_21);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_mkFreshExprMVar___at___private_Lean_Meta_Basic_7__forallMetaTelescopeReducingAux___main___spec__1(x_26, x_3, x_2, x_6, x_7, x_8, x_9, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set(x_31, 0, x_29);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_29);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_40 = !lean_is_exclusive(x_17);
if (x_40 == 0)
{
return x_17;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_17, 0);
x_42 = lean_ctor_get(x_17, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_17);
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
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_13);
if (x_44 == 0)
{
return x_13;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_13, 0);
x_46 = lean_ctor_get(x_13, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_13);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_50 = lean_ctor_get(x_49, 2);
lean_inc(x_50);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_51 = lean_apply_7(x_50, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_55 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_54, x_4, x_5, x_6, x_7, x_8, x_9, x_53);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = l_Lean_mkFreshExprMVar___at___private_Lean_Meta_Basic_7__forallMetaTelescopeReducingAux___main___spec__1(x_48, x_3, x_2, x_6, x_7, x_8, x_9, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_52, x_4, x_5, x_6, x_7, x_8, x_9, x_59);
if (lean_obj_tag(x_60) == 0)
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_60);
if (x_61 == 0)
{
lean_object* x_62; 
x_62 = lean_ctor_get(x_60, 0);
lean_dec(x_62);
lean_ctor_set(x_60, 0, x_58);
return x_60;
}
else
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
lean_dec(x_60);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_58);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
else
{
uint8_t x_65; 
lean_dec(x_58);
x_65 = !lean_is_exclusive(x_60);
if (x_65 == 0)
{
return x_60;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_60, 0);
x_67 = lean_ctor_get(x_60, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_60);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_52);
lean_dec(x_48);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_69 = !lean_is_exclusive(x_55);
if (x_69 == 0)
{
return x_55;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_55, 0);
x_71 = lean_ctor_get(x_55, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_55);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_48);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_73 = !lean_is_exclusive(x_51);
if (x_73 == 0)
{
return x_51;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_51, 0);
x_75 = lean_ctor_get(x_51, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_51);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshExprMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_Lean_Elab_Term_mkFreshExprMVar(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_mkFreshExprMVarWithId___at_Lean_Elab_Term_mkFreshExprMVarWithId___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = l_Lean_getLCtx___at_Lean_mkFreshExprMVar___spec__1(x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_getLocalInstances___at_Lean_mkFreshExprMVar___spec__2(x_5, x_6, x_7, x_8, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l___private_Lean_Meta_Basic_2__mkFreshExprMVarAtCore(x_1, x_11, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
return x_16;
}
}
lean_object* l_Lean_Elab_Term_mkFreshExprMVarWithId(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_13 = lean_ctor_get(x_12, 2);
lean_inc(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = lean_apply_7(x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_mkFreshLevelMVar___at_Lean_Meta_openAbstractMVarsResult___spec__1___rarg(x_8, x_9, x_10, x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_mkSort(x_21);
x_24 = lean_box(0);
x_25 = 0;
x_26 = l_Lean_mkFreshExprMVar___at___private_Lean_Meta_Basic_7__forallMetaTelescopeReducingAux___main___spec__1(x_23, x_24, x_25, x_7, x_8, x_9, x_10, x_22);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_mkFreshExprMVarWithId___at_Lean_Elab_Term_mkFreshExprMVarWithId___spec__1(x_1, x_27, x_4, x_3, x_7, x_8, x_9, x_10, x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_31);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set(x_32, 0, x_30);
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_30);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_18);
if (x_41 == 0)
{
return x_18;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_18, 0);
x_43 = lean_ctor_get(x_18, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_18);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_14);
if (x_45 == 0)
{
return x_14;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_14, 0);
x_47 = lean_ctor_get(x_14, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_14);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_2, 0);
lean_inc(x_49);
lean_dec(x_2);
x_50 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_51 = lean_ctor_get(x_50, 2);
lean_inc(x_51);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_52 = lean_apply_7(x_51, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_56 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_55, x_5, x_6, x_7, x_8, x_9, x_10, x_54);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_58 = l_Lean_mkFreshExprMVarWithId___at_Lean_Elab_Term_mkFreshExprMVarWithId___spec__1(x_1, x_49, x_4, x_3, x_7, x_8, x_9, x_10, x_57);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_53, x_5, x_6, x_7, x_8, x_9, x_10, x_60);
if (lean_obj_tag(x_61) == 0)
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
lean_object* x_63; 
x_63 = lean_ctor_get(x_61, 0);
lean_dec(x_63);
lean_ctor_set(x_61, 0, x_59);
return x_61;
}
else
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec(x_61);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_59);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
else
{
uint8_t x_66; 
lean_dec(x_59);
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
lean_dec(x_53);
lean_dec(x_49);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_56);
if (x_70 == 0)
{
return x_56;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_56, 0);
x_72 = lean_ctor_get(x_56, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_56);
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
lean_dec(x_49);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_52);
if (x_74 == 0)
{
return x_52;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_52, 0);
x_76 = lean_ctor_get(x_52, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_52);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
}
lean_object* l_Lean_mkFreshExprMVarWithId___at_Lean_Elab_Term_mkFreshExprMVarWithId___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_mkFreshExprMVarWithId___at_Lean_Elab_Term_mkFreshExprMVarWithId___spec__1(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_mkFreshExprMVarWithId___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = l_Lean_Elab_Term_mkFreshExprMVarWithId(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_mkFreshTypeMVar(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_mkFreshLevelMVar___at_Lean_Meta_openAbstractMVarsResult___spec__1___rarg(x_6, x_7, x_8, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_mkSort(x_19);
x_22 = l_Lean_mkFreshExprMVar___at___private_Lean_Meta_Basic_7__forallMetaTelescopeReducingAux___main___spec__1(x_21, x_2, x_1, x_5, x_6, x_7, x_8, x_20);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_23);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_23);
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
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_16);
if (x_34 == 0)
{
return x_16;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_16, 0);
x_36 = lean_ctor_get(x_16, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_16);
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
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_12);
if (x_38 == 0)
{
return x_12;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_12, 0);
x_40 = lean_ctor_get(x_12, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_12);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshTypeMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Elab_Term_mkFreshTypeMVar(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_getLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = l_Lean_Meta_getLevel(x_1, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_18);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_dec(x_17);
x_31 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set_tag(x_31, 1);
lean_ctor_set(x_31, 0, x_29);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_29);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
return x_15;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_11);
if (x_44 == 0)
{
return x_11;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_11, 0);
x_46 = lean_ctor_get(x_11, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_11);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Lean_Elab_Term_trySynthInstance(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = l_Lean_Meta_trySynthInstance(x_1, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_18);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_dec(x_17);
x_31 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set_tag(x_31, 1);
lean_ctor_set(x_31, 0, x_29);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_29);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
return x_15;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_11);
if (x_44 == 0)
{
return x_11;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_11, 0);
x_46 = lean_ctor_get(x_11, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_11);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Lean_Elab_Term_mkAppM(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_Meta_mkAppM(x_1, x_2, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_19);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_19);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_18, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_18, 1);
lean_inc(x_31);
lean_dec(x_18);
x_32 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_31);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set_tag(x_32, 1);
lean_ctor_set(x_32, 0, x_30);
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_30);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_16);
if (x_41 == 0)
{
return x_16;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_16, 0);
x_43 = lean_ctor_get(x_16, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_16);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_12);
if (x_45 == 0)
{
return x_12;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_12, 0);
x_47 = lean_ctor_get(x_12, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_12);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
lean_object* l_Lean_Elab_Term_mkAppM___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_mkAppM(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_mkExpectedTypeHint(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_Meta_mkExpectedTypeHint(x_1, x_2, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_19);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_19);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_18, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_18, 1);
lean_inc(x_31);
lean_dec(x_18);
x_32 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_31);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set_tag(x_32, 1);
lean_ctor_set(x_32, 0, x_30);
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_30);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_16);
if (x_41 == 0)
{
return x_16;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_16, 0);
x_43 = lean_ctor_get(x_16, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_16);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_12);
if (x_45 == 0)
{
return x_12;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_12, 0);
x_47 = lean_ctor_get(x_12, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_12);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
lean_object* l_Lean_Elab_Term_decLevel_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_Meta_decLevel_x3f(x_1, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_18);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_dec(x_17);
x_31 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set_tag(x_31, 1);
lean_ctor_set(x_31, 0, x_29);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_29);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
return x_15;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_11);
if (x_44 == 0)
{
return x_11;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_11, 0);
x_46 = lean_ctor_get(x_11, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_11);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Lean_Elab_Term_decLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
x_9 = l_Lean_Elab_Term_decLevel_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_12, 0, x_1);
x_13 = l___private_Lean_Meta_AppBuilder_9__getDecLevel___closed__3;
x_14 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = l___private_Lean_Meta_AppBuilder_9__getDecLevel___closed__6;
x_16 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_9, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_10, 0);
lean_inc(x_20);
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_20);
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_dec(x_9);
x_22 = lean_ctor_get(x_10, 0);
lean_inc(x_22);
lean_dec(x_10);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_9);
if (x_24 == 0)
{
return x_9;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_9, 0);
x_26 = lean_ctor_get(x_9, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_9);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Lean_Elab_Term_getDecLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_Lean_Elab_Term_getLevel(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Elab_Term_decLevel(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_take(x_5, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
lean_ctor_set(x_18, 0, x_1);
x_22 = lean_st_ref_set(x_5, x_18, x_19);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
x_27 = lean_box(0);
lean_ctor_set(x_24, 0, x_27);
return x_24;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_24, 1);
lean_inc(x_28);
lean_dec(x_24);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_24);
if (x_31 == 0)
{
return x_24;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_24, 0);
x_33 = lean_ctor_get(x_24, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_24);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_18, 1);
x_36 = lean_ctor_get(x_18, 2);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_18);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_1);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_37, 2, x_36);
x_38 = lean_st_ref_set(x_5, x_37, x_19);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_39);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_42 = x_40;
} else {
 lean_dec_ref(x_40);
 x_42 = lean_box(0);
}
x_43 = lean_box(0);
if (lean_is_scalar(x_42)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_42;
}
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_41);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_40, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_40, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_47 = x_40;
} else {
 lean_dec_ref(x_40);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(1, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_15);
if (x_49 == 0)
{
return x_15;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_15, 0);
x_51 = lean_ctor_get(x_15, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_15);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_11);
if (x_53 == 0)
{
return x_11;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_11, 0);
x_55 = lean_ctor_get(x_11, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_11);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
lean_object* l_Lean_Elab_Term_savingMCtx___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_Lean_getMCtx___at___private_Lean_Elab_Term_5__addContext_x27___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_12 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
lean_ctor_set(x_15, 0, x_13);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_13);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_12, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_12, 1);
lean_inc(x_25);
lean_dec(x_12);
x_26 = l_Lean_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_25);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set_tag(x_26, 1);
lean_ctor_set(x_26, 0, x_24);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_24);
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
}
else
{
uint8_t x_35; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_9);
if (x_35 == 0)
{
return x_9;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_9, 0);
x_37 = lean_ctor_get(x_9, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_9);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Lean_Elab_Term_savingMCtx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_savingMCtx___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_liftLevelM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 3);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = l_Lean_getMCtx___at___private_Lean_Elab_Term_5__addContext_x27___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_get(x_7, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 4);
lean_inc(x_19);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_9);
lean_ctor_set(x_20, 3, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_11);
x_22 = lean_apply_2(x_1, x_20, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_inc(x_7);
x_26 = l_Lean_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_ctor_get(x_24, 0);
lean_inc(x_28);
lean_dec(x_24);
x_29 = lean_st_ref_take(x_7, x_27);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_30, 1);
lean_dec(x_33);
lean_ctor_set(x_30, 1, x_28);
x_34 = lean_st_ref_set(x_7, x_30, x_31);
lean_dec(x_7);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_23);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_23);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_39 = lean_ctor_get(x_30, 0);
x_40 = lean_ctor_get(x_30, 2);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_30);
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_28);
lean_ctor_set(x_41, 2, x_40);
x_42 = lean_st_ref_set(x_7, x_41, x_31);
lean_dec(x_7);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_44 = x_42;
} else {
 lean_dec_ref(x_42);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_23);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_7);
x_46 = !lean_is_exclusive(x_26);
if (x_46 == 0)
{
return x_26;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_26, 0);
x_48 = lean_ctor_get(x_26, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_26);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_22);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_22, 1);
lean_dec(x_51);
lean_ctor_set(x_22, 1, x_15);
return x_22;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_22, 0);
lean_inc(x_52);
lean_dec(x_22);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_15);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_10);
if (x_54 == 0)
{
return x_10;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_10, 0);
x_56 = lean_ctor_get(x_10, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_10);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
lean_object* l_Lean_Elab_Term_liftLevelM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_liftLevelM___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_Level_elabLevel), 3, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = l_Lean_Elab_Term_liftLevelM___rarg(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_withConfig___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_apply_1(x_1, x_11);
lean_ctor_set(x_5, 0, x_12);
x_13 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
x_16 = lean_ctor_get(x_5, 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
x_17 = lean_apply_1(x_1, x_14);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
lean_ctor_set(x_18, 2, x_16);
x_19 = lean_apply_7(x_2, x_3, x_4, x_18, x_6, x_7, x_8, x_9);
return x_19;
}
}
}
lean_object* l_Lean_Elab_Term_withConfig(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withConfig___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_withTransparency___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_ctor_set_uint8(x_11, 5, x_1);
x_13 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
else
{
uint8_t x_14; uint8_t x_15; uint8_t x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get_uint8(x_11, 0);
x_15 = lean_ctor_get_uint8(x_11, 1);
x_16 = lean_ctor_get_uint8(x_11, 2);
x_17 = lean_ctor_get_uint8(x_11, 3);
x_18 = lean_ctor_get_uint8(x_11, 4);
lean_dec(x_11);
x_19 = lean_alloc_ctor(0, 0, 6);
lean_ctor_set_uint8(x_19, 0, x_14);
lean_ctor_set_uint8(x_19, 1, x_15);
lean_ctor_set_uint8(x_19, 2, x_16);
lean_ctor_set_uint8(x_19, 3, x_17);
lean_ctor_set_uint8(x_19, 4, x_18);
lean_ctor_set_uint8(x_19, 5, x_1);
lean_ctor_set(x_5, 0, x_19);
x_20 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_21 = lean_ctor_get(x_5, 0);
x_22 = lean_ctor_get(x_5, 1);
x_23 = lean_ctor_get(x_5, 2);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_5);
x_24 = lean_ctor_get_uint8(x_21, 0);
x_25 = lean_ctor_get_uint8(x_21, 1);
x_26 = lean_ctor_get_uint8(x_21, 2);
x_27 = lean_ctor_get_uint8(x_21, 3);
x_28 = lean_ctor_get_uint8(x_21, 4);
if (lean_is_exclusive(x_21)) {
 x_29 = x_21;
} else {
 lean_dec_ref(x_21);
 x_29 = lean_box(0);
}
if (lean_is_scalar(x_29)) {
 x_30 = lean_alloc_ctor(0, 0, 6);
} else {
 x_30 = x_29;
}
lean_ctor_set_uint8(x_30, 0, x_24);
lean_ctor_set_uint8(x_30, 1, x_25);
lean_ctor_set_uint8(x_30, 2, x_26);
lean_ctor_set_uint8(x_30, 3, x_27);
lean_ctor_set_uint8(x_30, 4, x_28);
lean_ctor_set_uint8(x_30, 5, x_1);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_22);
lean_ctor_set(x_31, 2, x_23);
x_32 = lean_apply_7(x_2, x_3, x_4, x_31, x_6, x_7, x_8, x_9);
return x_32;
}
}
}
lean_object* l_Lean_Elab_Term_withTransparency(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withTransparency___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_withTransparency___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Elab_Term_withTransparency___rarg(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_withReducible___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; 
x_12 = 2;
lean_ctor_set_uint8(x_10, 5, x_12);
x_13 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
else
{
uint8_t x_14; uint8_t x_15; uint8_t x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get_uint8(x_10, 0);
x_15 = lean_ctor_get_uint8(x_10, 1);
x_16 = lean_ctor_get_uint8(x_10, 2);
x_17 = lean_ctor_get_uint8(x_10, 3);
x_18 = lean_ctor_get_uint8(x_10, 4);
lean_dec(x_10);
x_19 = 2;
x_20 = lean_alloc_ctor(0, 0, 6);
lean_ctor_set_uint8(x_20, 0, x_14);
lean_ctor_set_uint8(x_20, 1, x_15);
lean_ctor_set_uint8(x_20, 2, x_16);
lean_ctor_set_uint8(x_20, 3, x_17);
lean_ctor_set_uint8(x_20, 4, x_18);
lean_ctor_set_uint8(x_20, 5, x_19);
lean_ctor_set(x_4, 0, x_20);
x_21 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_22 = lean_ctor_get(x_4, 0);
x_23 = lean_ctor_get(x_4, 1);
x_24 = lean_ctor_get(x_4, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_4);
x_25 = lean_ctor_get_uint8(x_22, 0);
x_26 = lean_ctor_get_uint8(x_22, 1);
x_27 = lean_ctor_get_uint8(x_22, 2);
x_28 = lean_ctor_get_uint8(x_22, 3);
x_29 = lean_ctor_get_uint8(x_22, 4);
if (lean_is_exclusive(x_22)) {
 x_30 = x_22;
} else {
 lean_dec_ref(x_22);
 x_30 = lean_box(0);
}
x_31 = 2;
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 0, 6);
} else {
 x_32 = x_30;
}
lean_ctor_set_uint8(x_32, 0, x_25);
lean_ctor_set_uint8(x_32, 1, x_26);
lean_ctor_set_uint8(x_32, 2, x_27);
lean_ctor_set_uint8(x_32, 3, x_28);
lean_ctor_set_uint8(x_32, 4, x_29);
lean_ctor_set_uint8(x_32, 5, x_31);
x_33 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_23);
lean_ctor_set(x_33, 2, x_24);
x_34 = lean_apply_7(x_1, x_2, x_3, x_33, x_5, x_6, x_7, x_8);
return x_34;
}
}
}
lean_object* l_Lean_Elab_Term_withReducible(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withReducible___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_withMacroExpansion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_4, 6);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_2);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set(x_4, 6, x_14);
x_15 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_ctor_get(x_4, 1);
x_18 = lean_ctor_get(x_4, 2);
x_19 = lean_ctor_get(x_4, 3);
x_20 = lean_ctor_get(x_4, 4);
x_21 = lean_ctor_get(x_4, 5);
x_22 = lean_ctor_get(x_4, 6);
x_23 = lean_ctor_get(x_4, 7);
x_24 = lean_ctor_get_uint8(x_4, sizeof(void*)*8);
x_25 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 1);
x_26 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 2);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_4);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_1);
lean_ctor_set(x_27, 1, x_2);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_22);
x_29 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_29, 0, x_16);
lean_ctor_set(x_29, 1, x_17);
lean_ctor_set(x_29, 2, x_18);
lean_ctor_set(x_29, 3, x_19);
lean_ctor_set(x_29, 4, x_20);
lean_ctor_set(x_29, 5, x_21);
lean_ctor_set(x_29, 6, x_28);
lean_ctor_set(x_29, 7, x_23);
lean_ctor_set_uint8(x_29, sizeof(void*)*8, x_24);
lean_ctor_set_uint8(x_29, sizeof(void*)*8 + 1, x_25);
lean_ctor_set_uint8(x_29, sizeof(void*)*8 + 2, x_26);
x_30 = lean_apply_7(x_3, x_29, x_5, x_6, x_7, x_8, x_9, x_10);
return x_30;
}
}
}
lean_object* l_Lean_Elab_Term_withMacroExpansion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withMacroExpansion___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_registerSyntheticMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_st_ref_take(x_5, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_1);
lean_ctor_set(x_14, 2, x_3);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_12, 0, x_17);
x_18 = lean_st_ref_set(x_5, x_12, x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_25 = lean_ctor_get(x_12, 0);
x_26 = lean_ctor_get(x_12, 1);
x_27 = lean_ctor_get(x_12, 2);
x_28 = lean_ctor_get(x_12, 3);
x_29 = lean_ctor_get(x_12, 4);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_12);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_14);
lean_ctor_set(x_30, 1, x_25);
x_31 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_26);
lean_ctor_set(x_31, 2, x_27);
lean_ctor_set(x_31, 3, x_28);
lean_ctor_set(x_31, 4, x_29);
x_32 = lean_st_ref_set(x_5, x_31, x_13);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
x_35 = lean_box(0);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
}
lean_object* l_Lean_Elab_Term_registerSyntheticMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_registerSyntheticMVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 3);
lean_inc(x_10);
x_11 = l_Lean_Elab_Term_registerSyntheticMVar(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_withoutPostponing___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_2);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; 
x_10 = 0;
lean_ctor_set_uint8(x_2, sizeof(void*)*8, x_10);
x_11 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
x_15 = lean_ctor_get(x_2, 3);
x_16 = lean_ctor_get(x_2, 4);
x_17 = lean_ctor_get(x_2, 5);
x_18 = lean_ctor_get(x_2, 6);
x_19 = lean_ctor_get(x_2, 7);
x_20 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
x_21 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_22 = 0;
x_23 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_23, 0, x_12);
lean_ctor_set(x_23, 1, x_13);
lean_ctor_set(x_23, 2, x_14);
lean_ctor_set(x_23, 3, x_15);
lean_ctor_set(x_23, 4, x_16);
lean_ctor_set(x_23, 5, x_17);
lean_ctor_set(x_23, 6, x_18);
lean_ctor_set(x_23, 7, x_19);
lean_ctor_set_uint8(x_23, sizeof(void*)*8, x_22);
lean_ctor_set_uint8(x_23, sizeof(void*)*8 + 1, x_20);
lean_ctor_set_uint8(x_23, sizeof(void*)*8 + 2, x_21);
x_24 = lean_apply_7(x_1, x_23, x_3, x_4, x_5, x_6, x_7, x_8);
return x_24;
}
}
}
lean_object* l_Lean_Elab_Term_withoutPostponing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutPostponing___rarg), 8, 0);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Prod_HasRepr___rarg___closed__1;
x_2 = l_Lean_mkAtom(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Util_1__mkPanicMessage___closed__2;
x_2 = l_Lean_mkAtom(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__9;
x_2 = l_Lean_Elab_Term_mkExplicitBinder___closed__2;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Option_HasRepr___rarg___closed__3;
x_2 = l_Lean_mkAtom(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkExplicitBinder___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_mkExplicitBinder___closed__5;
x_2 = l_Lean_Elab_Term_mkExplicitBinder___closed__1;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_mkExplicitBinder(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_3 = l_Lean_mkOptionalNode___closed__2;
x_4 = lean_array_push(x_3, x_1);
x_5 = l_Lean_nullKind;
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = l_Lean_Elab_Term_mkExplicitBinder___closed__3;
x_8 = lean_array_push(x_7, x_2);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_Lean_Elab_Term_mkExplicitBinder___closed__6;
x_11 = lean_array_push(x_10, x_6);
x_12 = lean_array_push(x_11, x_9);
x_13 = l_Lean_mkOptionalNode___closed__1;
x_14 = lean_array_push(x_12, x_13);
x_15 = l_Lean_Elab_Term_mkExplicitBinder___closed__4;
x_16 = lean_array_push(x_14, x_15);
x_17 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
uint8_t l_Lean_Elab_Term_levelMVarToParam___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 4);
x_4 = l_List_elem___main___at_Lean_NameHashSet_insert___spec__2(x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_levelMVarToParam(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = l_Lean_getMCtx___at___private_Lean_Elab_Term_5__addContext_x27___spec__1(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_3);
x_13 = lean_alloc_closure((void*)(l_Lean_Elab_Term_levelMVarToParam___lambda__1___boxed), 2, 1);
lean_closure_set(x_13, 0, x_3);
x_14 = l_Lean_Closure_mkNewLevelParam___closed__2;
x_15 = l_Lean_MetavarContext_levelMVarToParam(x_11, x_13, x_1, x_14, x_2);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = l_Lean_setMCtx___at_Lean_Elab_Term_savingMCtx___spec__1(x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_15, 3);
lean_inc(x_20);
x_21 = lean_ctor_get(x_15, 2);
lean_inc(x_21);
lean_dec(x_15);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_17, 0, x_22);
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_dec(x_17);
x_24 = lean_ctor_get(x_15, 3);
lean_inc(x_24);
x_25 = lean_ctor_get(x_15, 2);
lean_inc(x_25);
lean_dec(x_15);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_15);
x_28 = !lean_is_exclusive(x_17);
if (x_28 == 0)
{
return x_17;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_17);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_10);
if (x_32 == 0)
{
return x_10;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_10, 0);
x_34 = lean_ctor_get(x_10, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_10);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Lean_Elab_Term_levelMVarToParam___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_Term_levelMVarToParam___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_levelMVarToParam_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_st_ref_get(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_levelMVarToParam(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_st_ref_set(x_2, x_17, x_15);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_16);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_13);
if (x_23 == 0)
{
return x_13;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_Elab_Term_levelMVarToParam_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_levelMVarToParam_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* _init_l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_a");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_mkFreshAnonymousName___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_st_ref_get(x_1, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 3);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_st_ref_take(x_1, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_12, 3);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_15, x_16);
lean_dec(x_15);
lean_ctor_set(x_12, 3, x_17);
x_18 = lean_st_ref_set(x_1, x_12, x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__2;
x_22 = l_Lean_Name_appendIndexAfter(x_21, x_10);
lean_ctor_set(x_18, 0, x_22);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__2;
x_25 = l_Lean_Name_appendIndexAfter(x_24, x_10);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_27 = lean_ctor_get(x_12, 0);
x_28 = lean_ctor_get(x_12, 1);
x_29 = lean_ctor_get(x_12, 2);
x_30 = lean_ctor_get(x_12, 3);
x_31 = lean_ctor_get(x_12, 4);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_12);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_30, x_32);
lean_dec(x_30);
x_34 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_34, 0, x_27);
lean_ctor_set(x_34, 1, x_28);
lean_ctor_set(x_34, 2, x_29);
lean_ctor_set(x_34, 3, x_33);
lean_ctor_set(x_34, 4, x_31);
x_35 = lean_st_ref_set(x_1, x_34, x_13);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_37 = x_35;
} else {
 lean_dec_ref(x_35);
 x_37 = lean_box(0);
}
x_38 = l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__2;
x_39 = l_Lean_Name_appendIndexAfter(x_38, x_10);
if (lean_is_scalar(x_37)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_37;
}
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_36);
return x_40;
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshAnonymousName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_mkFreshAnonymousName___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_mkFreshAnonymousName___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_mkFreshAnonymousName___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_mkFreshAnonymousName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_mkFreshAnonymousName(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_mkFreshAnonymousIdent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Elab_Term_mkFreshAnonymousName___rarg(x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Lean_mkIdentFrom(x_1, x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = l_Lean_mkIdentFrom(x_1, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshAnonymousIdent___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_mkFreshAnonymousIdent(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_inst");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_st_ref_get(x_1, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_st_ref_take(x_1, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_12, 2);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_15, x_16);
lean_dec(x_15);
lean_ctor_set(x_12, 2, x_17);
x_18 = lean_st_ref_set(x_1, x_12, x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
x_21 = l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__2;
x_22 = l_Lean_Name_appendIndexAfter(x_21, x_10);
lean_ctor_set(x_18, 0, x_22);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__2;
x_25 = l_Lean_Name_appendIndexAfter(x_24, x_10);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_27 = lean_ctor_get(x_12, 0);
x_28 = lean_ctor_get(x_12, 1);
x_29 = lean_ctor_get(x_12, 2);
x_30 = lean_ctor_get(x_12, 3);
x_31 = lean_ctor_get(x_12, 4);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_12);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_29, x_32);
lean_dec(x_29);
x_34 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_34, 0, x_27);
lean_ctor_set(x_34, 1, x_28);
lean_ctor_set(x_34, 2, x_33);
lean_ctor_set(x_34, 3, x_30);
lean_ctor_set(x_34, 4, x_31);
x_35 = lean_st_ref_set(x_1, x_34, x_13);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_37 = x_35;
} else {
 lean_dec_ref(x_35);
 x_37 = lean_box(0);
}
x_38 = l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__2;
x_39 = l_Lean_Name_appendIndexAfter(x_38, x_10);
if (lean_is_scalar(x_37)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_37;
}
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_36);
return x_40;
}
}
}
lean_object* l_Lean_Elab_Term_mkFreshInstanceName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_mkFreshInstanceName___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_mkFreshInstanceName___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_mkFreshInstanceName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_mkFreshInstanceName(x_1);
lean_dec(x_1);
return x_2;
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_6__hasCDot___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = l___private_Lean_Elab_Term_6__hasCDot___main(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
x_4 = x_10;
goto _start;
}
else
{
lean_dec(x_4);
return x_8;
}
}
}
}
uint8_t l___private_Lean_Elab_Term_6__hasCDot___main(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__2;
x_5 = lean_name_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Lean_Parser_Term_cdot___elambda__1___closed__2;
x_7 = lean_name_eq(x_2, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_get_size(x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_6__hasCDot___main___spec__1(x_3, x_3, x_8, x_9);
lean_dec(x_8);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_6__hasCDot___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_6__hasCDot___main___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Term_6__hasCDot___main___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Term_6__hasCDot___main(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l___private_Lean_Elab_Term_6__hasCDot(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l___private_Lean_Elab_Term_6__hasCDot___main(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Term_6__hasCDot___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Term_6__hasCDot(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Term_7__expandCDot___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_1, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_1);
x_8 = x_2;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_array_fget(x_2, x_1);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_fset(x_2, x_1, x_12);
x_14 = x_11;
lean_inc(x_4);
x_15 = l___private_Lean_Elab_Term_7__expandCDot___main(x_14, x_3, x_4, x_5);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
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
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_1, x_20);
x_22 = x_18;
x_23 = lean_array_fset(x_13, x_1, x_22);
lean_dec(x_1);
x_1 = x_21;
x_2 = x_23;
x_3 = x_19;
x_5 = x_17;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_15);
if (x_25 == 0)
{
return x_15;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Term_7__expandCDot___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_IO_Prim_fopenFlags___closed__12;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_7__expandCDot___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_IO_Prim_fopenFlags___closed__12;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Term_7__expandCDot___main___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Term_7__expandCDot___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_IO_Prim_fopenFlags___closed__12;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_7__expandCDot___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__2;
x_8 = lean_name_eq(x_5, x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = l_Lean_Parser_Term_cdot___elambda__1___closed__2;
x_13 = lean_name_eq(x_5, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = x_6;
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Term_7__expandCDot___main___spec__1), 5, 2);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_14);
x_17 = x_16;
x_18 = lean_apply_3(x_17, x_2, x_3, x_4);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_ctor_set(x_1, 1, x_22);
lean_ctor_set(x_20, 0, x_1);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_20, 0);
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_20);
lean_ctor_set(x_1, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_18, 0, x_25);
return x_18;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_18, 0);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_18);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_30 = x_26;
} else {
 lean_dec_ref(x_26);
 x_30 = lean_box(0);
}
lean_ctor_set(x_1, 1, x_28);
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_27);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_free_object(x_1);
lean_dec(x_5);
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
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_free_object(x_1);
lean_dec(x_6);
lean_dec(x_5);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_4, x_37);
x_39 = lean_ctor_get(x_3, 0);
lean_inc(x_39);
lean_dec(x_3);
x_40 = l___private_Lean_Elab_Term_7__expandCDot___main___closed__3;
x_41 = l_Lean_addMacroScope(x_39, x_40, x_4);
x_42 = lean_box(0);
x_43 = l_Lean_SourceInfo_inhabited___closed__1;
x_44 = l___private_Lean_Elab_Term_7__expandCDot___main___closed__2;
x_45 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
lean_ctor_set(x_45, 2, x_41);
lean_ctor_set(x_45, 3, x_42);
lean_inc(x_45);
x_46 = lean_array_push(x_2, x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_38);
return x_48;
}
}
else
{
lean_object* x_49; uint8_t x_50; 
lean_dec(x_1);
x_49 = l_Lean_Parser_Term_cdot___elambda__1___closed__2;
x_50 = lean_name_eq(x_5, x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_51 = x_6;
x_52 = lean_unsigned_to_nat(0u);
x_53 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Term_7__expandCDot___main___spec__1), 5, 2);
lean_closure_set(x_53, 0, x_52);
lean_closure_set(x_53, 1, x_51);
x_54 = x_53;
x_55 = lean_apply_3(x_54, x_2, x_3, x_4);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
x_59 = lean_ctor_get(x_56, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_56, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_61 = x_56;
} else {
 lean_dec_ref(x_56);
 x_61 = lean_box(0);
}
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_5);
lean_ctor_set(x_62, 1, x_59);
if (lean_is_scalar(x_61)) {
 x_63 = lean_alloc_ctor(0, 2, 0);
} else {
 x_63 = x_61;
}
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_60);
if (lean_is_scalar(x_58)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_58;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_57);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_5);
x_65 = lean_ctor_get(x_55, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_55, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_67 = x_55;
} else {
 lean_dec_ref(x_55);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_6);
lean_dec(x_5);
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_add(x_4, x_69);
x_71 = lean_ctor_get(x_3, 0);
lean_inc(x_71);
lean_dec(x_3);
x_72 = l___private_Lean_Elab_Term_7__expandCDot___main___closed__3;
x_73 = l_Lean_addMacroScope(x_71, x_72, x_4);
x_74 = lean_box(0);
x_75 = l_Lean_SourceInfo_inhabited___closed__1;
x_76 = l___private_Lean_Elab_Term_7__expandCDot___main___closed__2;
x_77 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
lean_ctor_set(x_77, 2, x_73);
lean_ctor_set(x_77, 3, x_74);
lean_inc(x_77);
x_78 = lean_array_push(x_2, x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_70);
return x_80;
}
}
}
else
{
lean_object* x_81; lean_object* x_82; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_1);
lean_ctor_set(x_81, 1, x_2);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_4);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; 
lean_dec(x_3);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_1);
lean_ctor_set(x_83, 1, x_2);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_4);
return x_84;
}
}
}
lean_object* l___private_Lean_Elab_Term_7__expandCDot(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Term_7__expandCDot___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandCDot_x3f___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_fun___elambda__1___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandCDot_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Term_expandCDot_x3f___closed__1;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandCDot_x3f___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("=>");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandCDot_x3f___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_Lean_Elab_Term_expandCDot_x3f___closed__3;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandCDot_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l___private_Lean_Elab_Term_6__hasCDot___main(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Array_empty___closed__1;
x_8 = l___private_Lean_Elab_Term_7__expandCDot___main(x_1, x_7, x_2, x_3);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_12, x_12, x_13, x_7);
lean_dec(x_12);
x_15 = l_Lean_nullKind___closed__2;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_Elab_Term_expandCDot_x3f___closed__2;
x_18 = lean_array_push(x_17, x_16);
x_19 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_20 = lean_array_push(x_18, x_19);
x_21 = lean_array_push(x_20, x_11);
x_22 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_8, 0, x_24);
return x_8;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_25 = lean_ctor_get(x_8, 0);
x_26 = lean_ctor_get(x_8, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_8);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_28, x_28, x_29, x_7);
lean_dec(x_28);
x_31 = l_Lean_nullKind___closed__2;
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = l_Lean_Elab_Term_expandCDot_x3f___closed__2;
x_34 = lean_array_push(x_33, x_32);
x_35 = l_Lean_Elab_Term_expandCDot_x3f___closed__4;
x_36 = lean_array_push(x_34, x_35);
x_37 = lean_array_push(x_36, x_27);
x_38 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_26);
return x_41;
}
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1___rarg___boxed), 2, 0);
return x_6;
}
}
lean_object* l_Lean_getLocalInstances___at_Lean_Elab_Term_withLocalDecl___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = lean_apply_7(x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_3, 2);
lean_inc(x_16);
x_17 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_15);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_16);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_14);
if (x_26 == 0)
{
return x_14;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_14, 0);
x_28 = lean_ctor_get(x_14, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_14);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_10);
if (x_30 == 0)
{
return x_10;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_10, 0);
x_32 = lean_ctor_get(x_10, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_10);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_Lean_Elab_Term_withLocalDecl___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1___rarg(x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_getLCtx___at_Lean_Elab_Term_getFVarLocalDecl_x21___spec__1(x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_getLocalInstances___at_Lean_Elab_Term_withLocalDecl___spec__2(x_5, x_6, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_13);
x_21 = lean_local_ctx_mk_local_decl(x_16, x_13, x_1, x_3, x_2);
x_22 = l_Lean_mkFVar(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_23 = l_Lean_Elab_Term_isClass_x3f(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; uint8_t x_26; 
lean_dec(x_19);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = !lean_is_exclusive(x_7);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_7, 1);
lean_dec(x_27);
lean_ctor_set(x_7, 1, x_21);
x_28 = lean_apply_8(x_4, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_7, 0);
x_30 = lean_ctor_get(x_7, 2);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_7);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_21);
lean_ctor_set(x_31, 2, x_30);
x_32 = lean_apply_8(x_4, x_22, x_5, x_6, x_31, x_8, x_9, x_10, x_25);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_23, 1);
lean_inc(x_33);
lean_dec(x_23);
x_34 = lean_ctor_get(x_24, 0);
lean_inc(x_34);
lean_dec(x_24);
x_35 = !lean_is_exclusive(x_7);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_7, 2);
lean_dec(x_36);
x_37 = lean_ctor_get(x_7, 1);
lean_dec(x_37);
lean_inc(x_22);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_34);
lean_ctor_set(x_38, 1, x_22);
x_39 = lean_array_push(x_19, x_38);
lean_ctor_set(x_7, 2, x_39);
lean_ctor_set(x_7, 1, x_21);
x_40 = lean_apply_8(x_4, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_33);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_7, 0);
lean_inc(x_41);
lean_dec(x_7);
lean_inc(x_22);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_34);
lean_ctor_set(x_42, 1, x_22);
x_43 = lean_array_push(x_19, x_42);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_21);
lean_ctor_set(x_44, 2, x_43);
x_45 = lean_apply_8(x_4, x_22, x_5, x_6, x_44, x_8, x_9, x_10, x_33);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_46 = !lean_is_exclusive(x_23);
if (x_46 == 0)
{
return x_23;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_23, 0);
x_48 = lean_ctor_get(x_23, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_23);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_18);
if (x_50 == 0)
{
return x_18;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_18, 0);
x_52 = lean_ctor_get(x_18, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_18);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_15);
if (x_54 == 0)
{
return x_15;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_15, 0);
x_56 = lean_ctor_get(x_15, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_15);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
lean_object* l_Lean_Elab_Term_withLocalDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withLocalDecl___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_withLocalDecl___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Elab_Term_withLocalDecl___rarg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_withLetDecl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_Lean_mkFreshId___at_Lean_Elab_Term_withLocalDecl___spec__1___rarg(x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_getLCtx___at_Lean_Elab_Term_getFVarLocalDecl_x21___spec__1(x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_getLocalInstances___at_Lean_Elab_Term_withLocalDecl___spec__2(x_5, x_6, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_2);
lean_inc(x_13);
x_21 = lean_local_ctx_mk_let_decl(x_16, x_13, x_1, x_2, x_3);
x_22 = l_Lean_mkFVar(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_23 = l_Lean_Elab_Term_isClass_x3f(x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; uint8_t x_26; 
lean_dec(x_19);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = !lean_is_exclusive(x_7);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_7, 1);
lean_dec(x_27);
lean_ctor_set(x_7, 1, x_21);
x_28 = lean_apply_8(x_4, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_7, 0);
x_30 = lean_ctor_get(x_7, 2);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_7);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_21);
lean_ctor_set(x_31, 2, x_30);
x_32 = lean_apply_8(x_4, x_22, x_5, x_6, x_31, x_8, x_9, x_10, x_25);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_23, 1);
lean_inc(x_33);
lean_dec(x_23);
x_34 = lean_ctor_get(x_24, 0);
lean_inc(x_34);
lean_dec(x_24);
x_35 = !lean_is_exclusive(x_7);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_7, 2);
lean_dec(x_36);
x_37 = lean_ctor_get(x_7, 1);
lean_dec(x_37);
lean_inc(x_22);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_34);
lean_ctor_set(x_38, 1, x_22);
x_39 = lean_array_push(x_19, x_38);
lean_ctor_set(x_7, 2, x_39);
lean_ctor_set(x_7, 1, x_21);
x_40 = lean_apply_8(x_4, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_33);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_7, 0);
lean_inc(x_41);
lean_dec(x_7);
lean_inc(x_22);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_34);
lean_ctor_set(x_42, 1, x_22);
x_43 = lean_array_push(x_19, x_42);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_21);
lean_ctor_set(x_44, 2, x_43);
x_45 = lean_apply_8(x_4, x_22, x_5, x_6, x_44, x_8, x_9, x_10, x_33);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_46 = !lean_is_exclusive(x_23);
if (x_46 == 0)
{
return x_23;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_23, 0);
x_48 = lean_ctor_get(x_23, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_23);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_16);
lean_dec(x_13);
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
x_50 = !lean_is_exclusive(x_18);
if (x_50 == 0)
{
return x_18;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_18, 0);
x_52 = lean_ctor_get(x_18, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_18);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_13);
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
x_54 = !lean_is_exclusive(x_15);
if (x_54 == 0)
{
return x_15;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_15, 0);
x_56 = lean_ctor_get(x_15, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_15);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
lean_object* l_Lean_Elab_Term_withLetDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withLetDecl___rarg), 11, 0);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("type mismatch");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_34; lean_object* x_35; 
if (lean_obj_tag(x_5) == 0)
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_65; 
x_65 = l_Lean_MessageData_Inhabited___closed__1;
x_13 = x_65;
goto block_33;
}
else
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_2);
lean_dec(x_1);
x_66 = lean_ctor_get(x_4, 0);
lean_inc(x_66);
lean_dec(x_4);
x_67 = l_Lean_MessageData_Inhabited___closed__1;
x_34 = x_67;
x_35 = x_66;
goto block_64;
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_5, 0);
x_69 = l_Lean_MessageData_ofList___closed__3;
lean_inc(x_68);
x_70 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
if (lean_obj_tag(x_4) == 0)
{
x_13 = x_70;
goto block_33;
}
else
{
lean_object* x_71; 
lean_dec(x_2);
lean_dec(x_1);
x_71 = lean_ctor_get(x_4, 0);
lean_inc(x_71);
lean_dec(x_4);
x_34 = x_70;
x_35 = x_71;
goto block_64;
}
}
block_33:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_3);
x_15 = l_Lean_indentExpr(x_14);
x_16 = l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__3;
x_17 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_MessageData_ofList___closed__3;
x_19 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_KernelException_toMessageData___closed__12;
x_21 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_2);
x_23 = l_Lean_indentExpr(x_22);
x_24 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_18);
x_26 = l_Lean_KernelException_toMessageData___closed__15;
x_27 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_28, 0, x_1);
x_29 = l_Lean_indentExpr(x_28);
x_30 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_13);
x_32 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_31, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_32;
}
block_64:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_37 = lean_ctor_get(x_36, 2);
lean_inc(x_37);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_38 = lean_apply_7(x_37, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_42 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_41, x_6, x_7, x_8, x_9, x_10, x_11, x_40);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_44 = l_Lean_Meta_throwAppTypeMismatch___rarg(x_35, x_3, x_34, x_8, x_9, x_10, x_11, x_43);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_39, x_6, x_7, x_8, x_9, x_10, x_11, x_46);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
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
else
{
uint8_t x_52; 
lean_dec(x_45);
x_52 = !lean_is_exclusive(x_47);
if (x_52 == 0)
{
return x_47;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_47, 0);
x_54 = lean_ctor_get(x_47, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_47);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_39);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_56 = !lean_is_exclusive(x_42);
if (x_56 == 0)
{
return x_42;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_42, 0);
x_58 = lean_ctor_get(x_42, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_42);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_60 = !lean_is_exclusive(x_38);
if (x_60 == 0)
{
return x_38;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_38, 0);
x_62 = lean_ctor_get(x_38, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_38);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_throwTypeMismatchError(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_throwTypeMismatchError___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_withoutMacroStackAtErr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_2);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; 
x_10 = 0;
lean_ctor_set_uint8(x_2, sizeof(void*)*8 + 2, x_10);
x_11 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
x_15 = lean_ctor_get(x_2, 3);
x_16 = lean_ctor_get(x_2, 4);
x_17 = lean_ctor_get(x_2, 5);
x_18 = lean_ctor_get(x_2, 6);
x_19 = lean_ctor_get(x_2, 7);
x_20 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_21 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_22 = 0;
x_23 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_23, 0, x_12);
lean_ctor_set(x_23, 1, x_13);
lean_ctor_set(x_23, 2, x_14);
lean_ctor_set(x_23, 3, x_15);
lean_ctor_set(x_23, 4, x_16);
lean_ctor_set(x_23, 5, x_17);
lean_ctor_set(x_23, 6, x_18);
lean_ctor_set(x_23, 7, x_19);
lean_ctor_set_uint8(x_23, sizeof(void*)*8, x_20);
lean_ctor_set_uint8(x_23, sizeof(void*)*8 + 1, x_21);
lean_ctor_set_uint8(x_23, sizeof(void*)*8 + 2, x_22);
x_24 = lean_apply_7(x_1, x_23, x_3, x_4, x_5, x_6, x_7, x_8);
return x_24;
}
}
}
lean_object* l_Lean_Elab_Term_withoutMacroStackAtErr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutMacroStackAtErr___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Lean_Expr_hasMVar(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_12 = lean_apply_7(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_16 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_16);
if (x_27 == 0)
{
return x_16;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_16, 0);
x_29 = lean_ctor_get(x_16, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_16);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_12);
if (x_31 == 0)
{
return x_12;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_12, 0);
x_33 = lean_ctor_get(x_12, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_12);
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
x_35 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_36 = lean_ctor_get(x_35, 2);
lean_inc(x_36);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_37 = lean_apply_7(x_36, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_41 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_40, x_2, x_3, x_4, x_5, x_6, x_7, x_39);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_st_ref_take(x_5, x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = !lean_is_exclusive(x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_ctor_get(x_44, 0);
x_48 = l_Lean_MetavarContext_instantiateMVars(x_47, x_1);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
lean_ctor_set(x_44, 0, x_50);
x_51 = lean_st_ref_set(x_5, x_44, x_45);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_38, x_2, x_3, x_4, x_5, x_6, x_7, x_52);
if (lean_obj_tag(x_53) == 0)
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_53, 0);
lean_dec(x_55);
lean_ctor_set(x_53, 0, x_49);
return x_53;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_dec(x_53);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_49);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
else
{
uint8_t x_58; 
lean_dec(x_49);
x_58 = !lean_is_exclusive(x_53);
if (x_58 == 0)
{
return x_53;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_53, 0);
x_60 = lean_ctor_get(x_53, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_53);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_62 = lean_ctor_get(x_44, 0);
x_63 = lean_ctor_get(x_44, 1);
x_64 = lean_ctor_get(x_44, 2);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_44);
x_65 = l_Lean_MetavarContext_instantiateMVars(x_62, x_1);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_63);
lean_ctor_set(x_68, 2, x_64);
x_69 = lean_st_ref_set(x_5, x_68, x_45);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_38, x_2, x_3, x_4, x_5, x_6, x_7, x_70);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_73 = x_71;
} else {
 lean_dec_ref(x_71);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_66);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_66);
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
uint8_t x_79; 
lean_dec(x_38);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_41);
if (x_79 == 0)
{
return x_41;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_41, 0);
x_81 = lean_ctor_get(x_41, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_41);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_83 = !lean_is_exclusive(x_37);
if (x_83 == 0)
{
return x_37;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_37, 0);
x_85 = lean_ctor_get(x_37, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_37);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
}
}
lean_object* l_Lean_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_take(x_6, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_19, 0);
x_23 = l_Lean_MetavarContext_assignExpr(x_22, x_1, x_2);
lean_ctor_set(x_19, 0, x_23);
x_24 = lean_st_ref_set(x_6, x_19, x_20);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_25);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_26, 0, x_29);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_26);
if (x_33 == 0)
{
return x_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_26, 0);
x_35 = lean_ctor_get(x_26, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_26);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_37 = lean_ctor_get(x_19, 0);
x_38 = lean_ctor_get(x_19, 1);
x_39 = lean_ctor_get(x_19, 2);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_19);
x_40 = l_Lean_MetavarContext_assignExpr(x_37, x_1, x_2);
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
lean_ctor_set(x_41, 2, x_39);
x_42 = lean_st_ref_set(x_6, x_41, x_20);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_46 = x_44;
} else {
 lean_dec_ref(x_44);
 x_46 = lean_box(0);
}
x_47 = lean_box(0);
if (lean_is_scalar(x_46)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_46;
}
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_45);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_44, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_44, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_51 = x_44;
} else {
 lean_dec_ref(x_44);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(1, 2, 0);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_16);
if (x_53 == 0)
{
return x_16;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_16, 0);
x_55 = lean_ctor_get(x_16, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_16);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_12);
if (x_57 == 0)
{
return x_12;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_12, 0);
x_59 = lean_ctor_get(x_12, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_12);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to synthesize instance");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("synthesized type class instance is not definitionally equal to expression ");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inferred by typing rules, synthesized");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__6;
x_2 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__9;
x_3 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inferred");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__11;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__12;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_Lean_Elab_Term_getMVarDecl(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_13 = l_Lean_instantiateMVars___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_14);
x_16 = l_Lean_Elab_Term_trySynthInstance(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
switch (lean_obj_tag(x_17)) {
case 0:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_1);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_14);
x_20 = l_Lean_indentExpr(x_19);
x_21 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3;
x_22 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
return x_23;
}
case 1:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_dec(x_16);
x_25 = lean_ctor_get(x_17, 0);
lean_inc(x_25);
lean_dec(x_17);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_26 = l_Lean_Elab_Term_isExprMVarAssigned(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = l_Lean_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(x_1, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_29);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
x_33 = 1;
x_34 = lean_box(x_33);
lean_ctor_set(x_30, 0, x_34);
return x_30;
}
else
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_30, 1);
lean_inc(x_35);
lean_dec(x_30);
x_36 = 1;
x_37 = lean_box(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_30);
if (x_39 == 0)
{
return x_30;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_30, 0);
x_41 = lean_ctor_get(x_30, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_30);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_26, 1);
lean_inc(x_43);
lean_dec(x_26);
x_44 = l_Lean_mkMVar(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_45 = l_Lean_instantiateMVars___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(x_44, x_2, x_3, x_4, x_5, x_6, x_7, x_43);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_25);
lean_inc(x_46);
x_48 = l_Lean_Elab_Term_isDefEq(x_46, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_unbox(x_49);
lean_dec(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_dec(x_48);
x_52 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_52, 0, x_25);
x_53 = l_Lean_indentExpr(x_52);
x_54 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__10;
x_55 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = l_Lean_MessageData_ofList___closed__3;
x_57 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__13;
x_59 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_60, 0, x_46);
x_61 = l_Lean_indentExpr(x_60);
x_62 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
x_63 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_62, x_2, x_3, x_4, x_5, x_6, x_7, x_51);
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
return x_63;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_63, 0);
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_63);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
else
{
uint8_t x_68; 
lean_dec(x_46);
lean_dec(x_25);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_68 = !lean_is_exclusive(x_48);
if (x_68 == 0)
{
lean_object* x_69; uint8_t x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_48, 0);
lean_dec(x_69);
x_70 = 1;
x_71 = lean_box(x_70);
lean_ctor_set(x_48, 0, x_71);
return x_48;
}
else
{
lean_object* x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_48, 1);
lean_inc(x_72);
lean_dec(x_48);
x_73 = 1;
x_74 = lean_box(x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_46);
lean_dec(x_25);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_76 = !lean_is_exclusive(x_48);
if (x_76 == 0)
{
return x_48;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_48, 0);
x_78 = lean_ctor_get(x_48, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_48);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_25);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_80 = !lean_is_exclusive(x_45);
if (x_80 == 0)
{
return x_45;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_45, 0);
x_82 = lean_ctor_get(x_45, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_45);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_25);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_84 = !lean_is_exclusive(x_26);
if (x_84 == 0)
{
return x_26;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_26, 0);
x_86 = lean_ctor_get(x_26, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_26);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
default: 
{
uint8_t x_88; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_88 = !lean_is_exclusive(x_16);
if (x_88 == 0)
{
lean_object* x_89; uint8_t x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_16, 0);
lean_dec(x_89);
x_90 = 0;
x_91 = lean_box(x_90);
lean_ctor_set(x_16, 0, x_91);
return x_16;
}
else
{
lean_object* x_92; uint8_t x_93; lean_object* x_94; lean_object* x_95; 
x_92 = lean_ctor_get(x_16, 1);
lean_inc(x_92);
lean_dec(x_16);
x_93 = 0;
x_94 = lean_box(x_93);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_92);
return x_95;
}
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_16);
if (x_96 == 0)
{
return x_16;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_16, 0);
x_98 = lean_ctor_get(x_16, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_16);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_13);
if (x_100 == 0)
{
return x_13;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_13, 0);
x_102 = lean_ctor_get(x_13, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_13);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_9);
if (x_104 == 0)
{
return x_9;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_9, 0);
x_106 = lean_ctor_get(x_9, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_9);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_tryCoe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("CoeT");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_tryCoe___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_tryCoe___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_tryCoe___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("coe");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_tryCoe___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_tryCoe___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_tryCoe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_12 = l_Lean_Elab_Term_isDefEq(x_1, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_16 = l_Lean_Elab_Term_getLevel(x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
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
lean_inc(x_1);
x_19 = l_Lean_Elab_Term_getLevel(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_Elab_Term_tryCoe___closed__2;
lean_inc(x_24);
x_26 = l_Lean_mkConst(x_25, x_24);
x_27 = l_Lean_Parser_declareBuiltinParser___closed__3;
lean_inc(x_2);
x_28 = lean_array_push(x_27, x_2);
lean_inc(x_3);
x_29 = lean_array_push(x_28, x_3);
lean_inc(x_1);
x_30 = lean_array_push(x_29, x_1);
x_31 = lean_unsigned_to_nat(0u);
x_32 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_30, x_30, x_31, x_26);
lean_dec(x_30);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = 1;
x_35 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_36 = l_Lean_Elab_Term_mkFreshExprMVar(x_33, x_34, x_35, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_Elab_Term_tryCoe___closed__4;
x_40 = l_Lean_mkConst(x_39, x_24);
x_41 = l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
lean_inc(x_2);
x_42 = lean_array_push(x_41, x_2);
lean_inc(x_1);
x_43 = lean_array_push(x_42, x_1);
lean_inc(x_3);
x_44 = lean_array_push(x_43, x_3);
lean_inc(x_37);
x_45 = lean_array_push(x_44, x_37);
x_46 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_45, x_45, x_31, x_40);
lean_dec(x_45);
x_47 = l_Lean_Expr_mvarId_x21(x_37);
lean_dec(x_37);
x_48 = lean_ctor_get(x_5, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_5, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_5, 2);
lean_inc(x_50);
x_51 = lean_ctor_get(x_5, 3);
lean_inc(x_51);
x_52 = lean_ctor_get(x_5, 4);
lean_inc(x_52);
x_53 = lean_ctor_get(x_5, 5);
lean_inc(x_53);
x_54 = lean_ctor_get(x_5, 6);
lean_inc(x_54);
x_55 = lean_ctor_get(x_5, 7);
lean_inc(x_55);
x_56 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_57 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
x_58 = 0;
x_59 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_59, 0, x_48);
lean_ctor_set(x_59, 1, x_49);
lean_ctor_set(x_59, 2, x_50);
lean_ctor_set(x_59, 3, x_51);
lean_ctor_set(x_59, 4, x_52);
lean_ctor_set(x_59, 5, x_53);
lean_ctor_set(x_59, 6, x_54);
lean_ctor_set(x_59, 7, x_55);
lean_ctor_set_uint8(x_59, sizeof(void*)*8, x_56);
lean_ctor_set_uint8(x_59, sizeof(void*)*8 + 1, x_57);
lean_ctor_set_uint8(x_59, sizeof(void*)*8 + 2, x_58);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_59);
lean_inc(x_47);
x_60 = l_Lean_Elab_Term_synthesizeInstMVarCore(x_47, x_59, x_6, x_7, x_8, x_9, x_10, x_38);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; uint8_t x_62; 
lean_dec(x_5);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_unbox(x_61);
lean_dec(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
lean_dec(x_60);
x_64 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_64, 0, x_1);
lean_ctor_set(x_64, 1, x_2);
lean_ctor_set(x_64, 2, x_3);
lean_ctor_set(x_64, 3, x_4);
x_65 = l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef(x_47, x_64, x_59, x_6, x_7, x_8, x_9, x_10, x_63);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_59);
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_65, 0);
lean_dec(x_67);
lean_ctor_set(x_65, 0, x_46);
return x_65;
}
else
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec(x_65);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_46);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
else
{
uint8_t x_70; 
lean_dec(x_59);
lean_dec(x_47);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_60);
if (x_70 == 0)
{
lean_object* x_71; 
x_71 = lean_ctor_get(x_60, 0);
lean_dec(x_71);
lean_ctor_set(x_60, 0, x_46);
return x_60;
}
else
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_60, 1);
lean_inc(x_72);
lean_dec(x_60);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_46);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
else
{
lean_object* x_74; 
lean_dec(x_59);
lean_dec(x_47);
lean_dec(x_46);
x_74 = lean_ctor_get(x_60, 0);
lean_inc(x_74);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = lean_ctor_get(x_60, 1);
lean_inc(x_75);
lean_dec(x_60);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_2, x_3, x_4, x_77, x_5, x_6, x_7, x_8, x_9, x_10, x_75);
lean_dec(x_77);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_74);
x_79 = lean_ctor_get(x_60, 1);
lean_inc(x_79);
lean_dec(x_60);
x_80 = lean_box(0);
x_81 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_2, x_3, x_4, x_80, x_5, x_6, x_7, x_8, x_9, x_10, x_79);
return x_81;
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_24);
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
x_82 = !lean_is_exclusive(x_36);
if (x_82 == 0)
{
return x_36;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_36, 0);
x_84 = lean_ctor_get(x_36, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_36);
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
lean_dec(x_17);
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
x_86 = !lean_is_exclusive(x_19);
if (x_86 == 0)
{
return x_19;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_19, 0);
x_88 = lean_ctor_get(x_19, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_19);
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
x_90 = !lean_is_exclusive(x_16);
if (x_90 == 0)
{
return x_16;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_16, 0);
x_92 = lean_ctor_get(x_16, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_16);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
else
{
uint8_t x_94; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_94 = !lean_is_exclusive(x_12);
if (x_94 == 0)
{
lean_object* x_95; 
x_95 = lean_ctor_get(x_12, 0);
lean_dec(x_95);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
else
{
lean_object* x_96; lean_object* x_97; 
x_96 = lean_ctor_get(x_12, 1);
lean_inc(x_96);
lean_dec(x_12);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_3);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
else
{
uint8_t x_98; 
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
x_98 = !lean_is_exclusive(x_12);
if (x_98 == 0)
{
return x_12;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_12, 0);
x_100 = lean_ctor_get(x_12, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_12);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
}
lean_object* l_Lean_whnf___at___private_Lean_Elab_Term_8__isTypeApp_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_6, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_6, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_6, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_6, 3);
lean_inc(x_20);
x_21 = lean_nat_dec_eq(x_18, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_18, x_22);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set(x_24, 2, x_19);
lean_ctor_set(x_24, 3, x_20);
x_25 = l_Lean_whnfRef;
x_26 = lean_st_ref_get(x_25, x_16);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_4);
x_29 = lean_apply_6(x_27, x_1, x_4, x_5, x_24, x_7, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_31);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set(x_32, 0, x_30);
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_30);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_29, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_29, 1);
lean_inc(x_42);
lean_dec(x_29);
x_43 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_42);
if (lean_obj_tag(x_43) == 0)
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_43, 0);
lean_dec(x_45);
lean_ctor_set_tag(x_43, 1);
lean_ctor_set(x_43, 0, x_41);
return x_43;
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_41);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_41);
x_48 = !lean_is_exclusive(x_43);
if (x_48 == 0)
{
return x_43;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_43, 0);
x_50 = lean_ctor_get(x_43, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_43);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_1);
x_52 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_53 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_52, x_4, x_5, x_6, x_7, x_16);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_55);
if (lean_obj_tag(x_56) == 0)
{
uint8_t x_57; 
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
else
{
uint8_t x_61; 
lean_dec(x_54);
x_61 = !lean_is_exclusive(x_56);
if (x_61 == 0)
{
return x_56;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_56, 0);
x_63 = lean_ctor_get(x_56, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_56);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_15);
if (x_65 == 0)
{
return x_15;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_15, 0);
x_67 = lean_ctor_get(x_15, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_15);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_11);
if (x_69 == 0)
{
return x_11;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_11, 0);
x_71 = lean_ctor_get(x_11, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_11);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
lean_object* l___private_Lean_Elab_Term_8__isTypeApp_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; 
x_12 = 2;
lean_ctor_set_uint8(x_10, 5, x_12);
x_13 = l_Lean_whnf___at___private_Lean_Elab_Term_8__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 5)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_13, 0, x_20);
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_14, 1);
lean_inc(x_23);
lean_dec(x_14);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_21);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_14);
x_27 = !lean_is_exclusive(x_13);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_13, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_13, 0, x_29);
return x_13;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_dec(x_13);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_13);
if (x_33 == 0)
{
return x_13;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_13, 0);
x_35 = lean_ctor_get(x_13, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_13);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; 
x_37 = lean_ctor_get_uint8(x_10, 0);
x_38 = lean_ctor_get_uint8(x_10, 1);
x_39 = lean_ctor_get_uint8(x_10, 2);
x_40 = lean_ctor_get_uint8(x_10, 3);
x_41 = lean_ctor_get_uint8(x_10, 4);
lean_dec(x_10);
x_42 = 2;
x_43 = lean_alloc_ctor(0, 0, 6);
lean_ctor_set_uint8(x_43, 0, x_37);
lean_ctor_set_uint8(x_43, 1, x_38);
lean_ctor_set_uint8(x_43, 2, x_39);
lean_ctor_set_uint8(x_43, 3, x_40);
lean_ctor_set_uint8(x_43, 4, x_41);
lean_ctor_set_uint8(x_43, 5, x_42);
lean_ctor_set(x_4, 0, x_43);
x_44 = l_Lean_whnf___at___private_Lean_Elab_Term_8__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
if (lean_obj_tag(x_45) == 5)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_47 = x_44;
} else {
 lean_dec_ref(x_44);
 x_47 = lean_box(0);
}
x_48 = lean_ctor_get(x_45, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_45, 1);
lean_inc(x_49);
lean_dec(x_45);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
if (lean_is_scalar(x_47)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_47;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_46);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_45);
x_53 = lean_ctor_get(x_44, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_54 = x_44;
} else {
 lean_dec_ref(x_44);
 x_54 = lean_box(0);
}
x_55 = lean_box(0);
if (lean_is_scalar(x_54)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_54;
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_53);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_44, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_44, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_59 = x_44;
} else {
 lean_dec_ref(x_44);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(1, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; uint8_t x_67; uint8_t x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_61 = lean_ctor_get(x_4, 0);
x_62 = lean_ctor_get(x_4, 1);
x_63 = lean_ctor_get(x_4, 2);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_4);
x_64 = lean_ctor_get_uint8(x_61, 0);
x_65 = lean_ctor_get_uint8(x_61, 1);
x_66 = lean_ctor_get_uint8(x_61, 2);
x_67 = lean_ctor_get_uint8(x_61, 3);
x_68 = lean_ctor_get_uint8(x_61, 4);
if (lean_is_exclusive(x_61)) {
 x_69 = x_61;
} else {
 lean_dec_ref(x_61);
 x_69 = lean_box(0);
}
x_70 = 2;
if (lean_is_scalar(x_69)) {
 x_71 = lean_alloc_ctor(0, 0, 6);
} else {
 x_71 = x_69;
}
lean_ctor_set_uint8(x_71, 0, x_64);
lean_ctor_set_uint8(x_71, 1, x_65);
lean_ctor_set_uint8(x_71, 2, x_66);
lean_ctor_set_uint8(x_71, 3, x_67);
lean_ctor_set_uint8(x_71, 4, x_68);
lean_ctor_set_uint8(x_71, 5, x_70);
x_72 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_62);
lean_ctor_set(x_72, 2, x_63);
x_73 = l_Lean_whnf___at___private_Lean_Elab_Term_8__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_72, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
if (lean_obj_tag(x_74) == 5)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
x_77 = lean_ctor_get(x_74, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_74, 1);
lean_inc(x_78);
lean_dec(x_74);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
if (lean_is_scalar(x_76)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_76;
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_75);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_74);
x_82 = lean_ctor_get(x_73, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_83 = x_73;
} else {
 lean_dec_ref(x_73);
 x_83 = lean_box(0);
}
x_84 = lean_box(0);
if (lean_is_scalar(x_83)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_83;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_82);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_73, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_73, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_88 = x_73;
} else {
 lean_dec_ref(x_73);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Term_9__isMonad_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Monad");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_9__isMonad_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Term_9__isMonad_x3f___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_9__isMonad_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_4, 2);
lean_inc(x_11);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = 2;
lean_ctor_set_uint8(x_9, 5, x_13);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_10);
lean_ctor_set(x_14, 2, x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Lean_whnf___at___private_Lean_Elab_Term_8__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_14, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 5)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_18);
x_21 = lean_array_push(x_20, x_18);
x_22 = l___private_Lean_Elab_Term_9__isMonad_x3f___closed__2;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_23 = l_Lean_Elab_Term_mkAppM(x_22, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
lean_dec(x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_Term_trySynthInstance(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 1)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_26, 0);
lean_dec(x_29);
x_30 = lean_ctor_get(x_27, 0);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_18);
lean_ctor_set(x_31, 1, x_19);
lean_ctor_set(x_31, 2, x_30);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_26, 0, x_32);
return x_26;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
lean_dec(x_26);
x_34 = lean_ctor_get(x_27, 0);
lean_inc(x_34);
lean_dec(x_27);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_18);
lean_ctor_set(x_35, 1, x_19);
lean_ctor_set(x_35, 2, x_34);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_27);
lean_dec(x_19);
lean_dec(x_18);
x_38 = !lean_is_exclusive(x_26);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_26, 0);
lean_dec(x_39);
x_40 = lean_box(0);
lean_ctor_set(x_26, 0, x_40);
return x_26;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_26, 1);
lean_inc(x_41);
lean_dec(x_26);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_19);
lean_dec(x_18);
x_44 = !lean_is_exclusive(x_26);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_26, 0);
lean_dec(x_45);
x_46 = lean_box(0);
lean_ctor_set_tag(x_26, 0);
lean_ctor_set(x_26, 0, x_46);
return x_26;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_26, 1);
lean_inc(x_47);
lean_dec(x_26);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_23);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_23, 0);
lean_dec(x_51);
x_52 = lean_box(0);
lean_ctor_set_tag(x_23, 0);
lean_ctor_set(x_23, 0, x_52);
return x_23;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_23, 1);
lean_inc(x_53);
lean_dec(x_23);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = !lean_is_exclusive(x_15);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_15, 0);
lean_dec(x_57);
x_58 = lean_box(0);
lean_ctor_set(x_15, 0, x_58);
return x_15;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_15, 1);
lean_inc(x_59);
lean_dec(x_15);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_62 = !lean_is_exclusive(x_15);
if (x_62 == 0)
{
return x_15;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_15, 0);
x_64 = lean_ctor_get(x_15, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_15);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
uint8_t x_66; uint8_t x_67; uint8_t x_68; uint8_t x_69; uint8_t x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_66 = lean_ctor_get_uint8(x_9, 0);
x_67 = lean_ctor_get_uint8(x_9, 1);
x_68 = lean_ctor_get_uint8(x_9, 2);
x_69 = lean_ctor_get_uint8(x_9, 3);
x_70 = lean_ctor_get_uint8(x_9, 4);
lean_dec(x_9);
x_71 = 2;
x_72 = lean_alloc_ctor(0, 0, 6);
lean_ctor_set_uint8(x_72, 0, x_66);
lean_ctor_set_uint8(x_72, 1, x_67);
lean_ctor_set_uint8(x_72, 2, x_68);
lean_ctor_set_uint8(x_72, 3, x_69);
lean_ctor_set_uint8(x_72, 4, x_70);
lean_ctor_set_uint8(x_72, 5, x_71);
x_73 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_10);
lean_ctor_set(x_73, 2, x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_74 = l_Lean_whnf___at___private_Lean_Elab_Term_8__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_73, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
if (lean_obj_tag(x_75) == 5)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_ctor_get(x_75, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
lean_dec(x_75);
x_79 = l_Lean_mkOptionalNode___closed__2;
lean_inc(x_77);
x_80 = lean_array_push(x_79, x_77);
x_81 = l___private_Lean_Elab_Term_9__isMonad_x3f___closed__2;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_82 = l_Lean_Elab_Term_mkAppM(x_81, x_80, x_2, x_3, x_4, x_5, x_6, x_7, x_76);
lean_dec(x_80);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = l_Lean_Elab_Term_trySynthInstance(x_83, x_2, x_3, x_4, x_5, x_6, x_7, x_84);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
if (lean_obj_tag(x_86) == 1)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_88 = x_85;
} else {
 lean_dec_ref(x_85);
 x_88 = lean_box(0);
}
x_89 = lean_ctor_get(x_86, 0);
lean_inc(x_89);
lean_dec(x_86);
x_90 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_90, 0, x_77);
lean_ctor_set(x_90, 1, x_78);
lean_ctor_set(x_90, 2, x_89);
x_91 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_91, 0, x_90);
if (lean_is_scalar(x_88)) {
 x_92 = lean_alloc_ctor(0, 2, 0);
} else {
 x_92 = x_88;
}
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_87);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_86);
lean_dec(x_78);
lean_dec(x_77);
x_93 = lean_ctor_get(x_85, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_94 = x_85;
} else {
 lean_dec_ref(x_85);
 x_94 = lean_box(0);
}
x_95 = lean_box(0);
if (lean_is_scalar(x_94)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_94;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_93);
return x_96;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_78);
lean_dec(x_77);
x_97 = lean_ctor_get(x_85, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_98 = x_85;
} else {
 lean_dec_ref(x_85);
 x_98 = lean_box(0);
}
x_99 = lean_box(0);
if (lean_is_scalar(x_98)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_98;
 lean_ctor_set_tag(x_100, 0);
}
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_97);
return x_100;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_101 = lean_ctor_get(x_82, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_102 = x_82;
} else {
 lean_dec_ref(x_82);
 x_102 = lean_box(0);
}
x_103 = lean_box(0);
if (lean_is_scalar(x_102)) {
 x_104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_104 = x_102;
 lean_ctor_set_tag(x_104, 0);
}
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_101);
return x_104;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_75);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_105 = lean_ctor_get(x_74, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_106 = x_74;
} else {
 lean_dec_ref(x_74);
 x_106 = lean_box(0);
}
x_107 = lean_box(0);
if (lean_is_scalar(x_106)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_106;
}
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_105);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_109 = lean_ctor_get(x_74, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_74, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_111 = x_74;
} else {
 lean_dec_ref(x_74);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
}
}
lean_object* l_Lean_Elab_Term_synthesizeInst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_Lean_instantiateMVars___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_10);
x_12 = l_Lean_Elab_Term_trySynthInstance(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
if (lean_obj_tag(x_14) == 1)
{
lean_object* x_23; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_ctor_get(x_14, 0);
lean_inc(x_23);
lean_dec(x_14);
lean_ctor_set(x_12, 0, x_23);
return x_12;
}
else
{
lean_object* x_24; 
lean_free_object(x_12);
lean_dec(x_14);
x_24 = lean_box(0);
x_16 = x_24;
goto block_22;
}
block_22:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_16);
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_10);
x_18 = l_Lean_indentExpr(x_17);
x_19 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3;
x_20 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
return x_21;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_12, 0);
x_26 = lean_ctor_get(x_12, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_12);
if (lean_obj_tag(x_25) == 1)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = lean_ctor_get(x_25, 0);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_26);
return x_35;
}
else
{
lean_object* x_36; 
lean_dec(x_25);
x_36 = lean_box(0);
x_27 = x_36;
goto block_33;
}
block_33:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_27);
x_28 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_28, 0, x_10);
x_29 = l_Lean_indentExpr(x_28);
x_30 = l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3;
x_31 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_31, x_2, x_3, x_4, x_5, x_6, x_7, x_26);
return x_32;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_12);
if (x_37 == 0)
{
return x_12;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_12, 0);
x_39 = lean_ctor_get(x_12, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_12);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_9);
if (x_41 == 0)
{
return x_9;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_9, 0);
x_43 = lean_ctor_get(x_9, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_9);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
lean_object* l___private_Lean_Elab_Term_10__tryPureCoe_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Expr_getAppFn___main(x_2);
x_13 = l_Lean_Expr_isMVar(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Expr_getAppFn___main(x_3);
x_15 = l_Lean_Expr_isMVar(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = l_Lean_Elab_Term_tryCoe(x_2, x_3, x_4, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_21 = lean_ctor_get(x_20, 2);
lean_inc(x_21);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_22 = lean_apply_7(x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_26 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_28 = l_Lean_Meta_mkPure(x_1, x_18, x_7, x_8, x_9, x_10, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_31, 0, x_34);
return x_31;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_dec(x_31);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_29);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_29);
x_38 = !lean_is_exclusive(x_31);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_31, 0);
lean_dec(x_39);
lean_ctor_set_tag(x_31, 0);
lean_ctor_set(x_31, 0, x_16);
return x_31;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_31, 1);
lean_inc(x_40);
lean_dec(x_31);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_16);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_28, 1);
lean_inc(x_42);
lean_dec(x_28);
x_43 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_42);
if (lean_obj_tag(x_43) == 0)
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_43, 0);
lean_dec(x_45);
lean_ctor_set(x_43, 0, x_16);
return x_43;
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_16);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_43);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_43, 0);
lean_dec(x_49);
lean_ctor_set_tag(x_43, 0);
lean_ctor_set(x_43, 0, x_16);
return x_43;
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_43, 1);
lean_inc(x_50);
lean_dec(x_43);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_16);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_26);
if (x_52 == 0)
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_26, 0);
lean_dec(x_53);
lean_ctor_set_tag(x_26, 0);
lean_ctor_set(x_26, 0, x_16);
return x_26;
}
else
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_26, 1);
lean_inc(x_54);
lean_dec(x_26);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_16);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_22);
if (x_56 == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_22, 0);
lean_dec(x_57);
lean_ctor_set_tag(x_22, 0);
lean_ctor_set(x_22, 0, x_16);
return x_22;
}
else
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_22, 1);
lean_inc(x_58);
lean_dec(x_22);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_16);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_17);
if (x_60 == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_17, 0);
lean_dec(x_61);
lean_ctor_set_tag(x_17, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_17, 1);
lean_inc(x_62);
lean_dec(x_17);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_16);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; 
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
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_11);
return x_65;
}
}
else
{
lean_object* x_66; lean_object* x_67; 
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
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_11);
return x_67;
}
}
}
lean_object* l_Lean_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_6, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_6, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_6, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_6, 3);
lean_inc(x_20);
x_21 = lean_nat_dec_eq(x_18, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_18, x_22);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set(x_24, 2, x_19);
lean_ctor_set(x_24, 3, x_20);
x_25 = l_Lean_inferTypeRef;
x_26 = lean_st_ref_get(x_25, x_16);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_4);
x_29 = lean_apply_6(x_27, x_1, x_4, x_5, x_24, x_7, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_31);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
lean_ctor_set(x_32, 0, x_30);
return x_32;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_30);
x_37 = !lean_is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_32, 0);
x_39 = lean_ctor_get(x_32, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_32);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_29, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_29, 1);
lean_inc(x_42);
lean_dec(x_29);
x_43 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_42);
if (lean_obj_tag(x_43) == 0)
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_43, 0);
lean_dec(x_45);
lean_ctor_set_tag(x_43, 1);
lean_ctor_set(x_43, 0, x_41);
return x_43;
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_41);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_41);
x_48 = !lean_is_exclusive(x_43);
if (x_48 == 0)
{
return x_43;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_43, 0);
x_50 = lean_ctor_get(x_43, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_43);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_1);
x_52 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_53 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_52, x_4, x_5, x_6, x_7, x_16);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_55);
if (lean_obj_tag(x_56) == 0)
{
uint8_t x_57; 
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
else
{
uint8_t x_61; 
lean_dec(x_54);
x_61 = !lean_is_exclusive(x_56);
if (x_61 == 0)
{
return x_56;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_56, 0);
x_63 = lean_ctor_get(x_56, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_56);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_15);
if (x_65 == 0)
{
return x_15;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_15, 0);
x_67 = lean_ctor_get(x_15, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_15);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_11);
if (x_69 == 0)
{
return x_11;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_11, 0);
x_71 = lean_ctor_get(x_11, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_11);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HasMonadLiftT");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_tryLiftAndCoe___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("liftM");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_tryLiftAndCoe___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("liftCoeM");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_tryLiftAndCoe___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_tryLiftAndCoe(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_12 = l_Lean_instantiateMVars___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_15 = l___private_Lean_Elab_Term_9__isMonad_x3f(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Term_tryCoe(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_19, 2);
lean_inc(x_23);
lean_dec(x_19);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_24 = l_Lean_instantiateMVars___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_13);
lean_inc(x_25);
lean_inc(x_21);
x_27 = l___private_Lean_Elab_Term_10__tryPureCoe_x3f(x_21, x_25, x_13, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_13);
x_30 = l___private_Lean_Elab_Term_8__isTypeApp_x3f(x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Elab_Term_tryCoe(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_32);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_31, 0);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_ctor_get(x_30, 1);
lean_inc(x_35);
lean_dec(x_30);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_21);
lean_inc(x_36);
x_38 = l_Lean_Elab_Term_isDefEq(x_36, x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_35);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_unbox(x_39);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = l_Lean_mkAppStx___closed__9;
lean_inc(x_36);
x_43 = lean_array_push(x_42, x_36);
lean_inc(x_21);
x_44 = lean_array_push(x_43, x_21);
x_45 = l_Lean_Elab_Term_tryLiftAndCoe___closed__2;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_46 = l_Lean_Elab_Term_mkAppM(x_45, x_44, x_5, x_6, x_7, x_8, x_9, x_10, x_41);
lean_dec(x_44);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_49 = l_Lean_Elab_Term_synthesizeInst(x_47, x_5, x_6, x_7, x_8, x_9, x_10, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_37);
x_52 = l_Lean_Elab_Term_getDecLevel(x_37, x_5, x_6, x_7, x_8, x_9, x_10, x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_13);
x_55 = l_Lean_Elab_Term_getDecLevel(x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_54);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_58 = l_Lean_Elab_Term_getDecLevel(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_box(0);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_56);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_53);
lean_ctor_set(x_64, 1, x_63);
x_65 = l_Lean_Elab_Term_tryLiftAndCoe___closed__4;
lean_inc(x_64);
x_66 = l_Lean_mkConst(x_65, x_64);
x_67 = l_Lean_Elab_Term_mkExplicitBinder___closed__5;
lean_inc(x_36);
x_68 = lean_array_push(x_67, x_36);
lean_inc(x_21);
x_69 = lean_array_push(x_68, x_21);
lean_inc(x_50);
x_70 = lean_array_push(x_69, x_50);
lean_inc(x_37);
x_71 = lean_array_push(x_70, x_37);
lean_inc(x_3);
x_72 = lean_array_push(x_71, x_3);
x_73 = lean_unsigned_to_nat(0u);
x_74 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_72, x_72, x_73, x_66);
lean_dec(x_72);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_74);
x_75 = l_Lean_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_74, x_5, x_6, x_7, x_8, x_9, x_10, x_60);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_78 = l_Lean_Elab_Term_isDefEq(x_1, x_76, x_5, x_6, x_7, x_8, x_9, x_10, x_77);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; uint8_t x_80; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_unbox(x_79);
lean_dec(x_79);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
lean_dec(x_74);
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
lean_dec(x_78);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_37);
x_82 = l_Lean_Elab_Term_getLevel(x_37, x_5, x_6, x_7, x_8, x_9, x_10, x_81);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_25);
x_85 = l_Lean_Elab_Term_getLevel(x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_84);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; lean_object* x_100; lean_object* x_101; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_61);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_83);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_Lean_Elab_Term_tryCoe___closed__2;
x_91 = l_Lean_mkConst(x_90, x_89);
x_92 = l_Lean_Parser_declareBuiltinParser___closed__3;
lean_inc(x_37);
x_93 = lean_array_push(x_92, x_37);
x_94 = l_Lean_Meta_commitWhenSome_x3f___at___private_Lean_Meta_ExprDefEq_1__isDefEqEta___spec__2___closed__1;
x_95 = lean_array_push(x_93, x_94);
lean_inc(x_25);
x_96 = lean_array_push(x_95, x_25);
x_97 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_96, x_96, x_73, x_91);
lean_dec(x_96);
x_98 = l___private_Lean_Elab_Term_7__expandCDot___main___closed__3;
x_99 = 0;
lean_inc(x_37);
x_100 = l_Lean_mkForall(x_98, x_99, x_37, x_97);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_101 = l_Lean_Elab_Term_synthesizeInst(x_100, x_5, x_6, x_7, x_8, x_9, x_10, x_87);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = l_Lean_Elab_Term_tryLiftAndCoe___closed__6;
x_105 = l_Lean_mkConst(x_104, x_64);
x_106 = l_Lean_Elab_Term_tryLiftAndCoe___closed__7;
x_107 = lean_array_push(x_106, x_36);
x_108 = lean_array_push(x_107, x_21);
x_109 = lean_array_push(x_108, x_37);
x_110 = lean_array_push(x_109, x_25);
x_111 = lean_array_push(x_110, x_50);
x_112 = lean_array_push(x_111, x_102);
x_113 = lean_array_push(x_112, x_23);
lean_inc(x_3);
x_114 = lean_array_push(x_113, x_3);
x_115 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_114, x_114, x_73, x_105);
lean_dec(x_114);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_115);
x_116 = l_Lean_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_115, x_5, x_6, x_7, x_8, x_9, x_10, x_103);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_119 = l_Lean_Elab_Term_isDefEq(x_1, x_117, x_5, x_6, x_7, x_8, x_9, x_10, x_118);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; uint8_t x_121; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_unbox(x_120);
lean_dec(x_120);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_115);
x_122 = lean_ctor_get(x_119, 1);
lean_inc(x_122);
lean_dec(x_119);
x_123 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_13);
lean_inc(x_1);
x_124 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_123, x_5, x_6, x_7, x_8, x_9, x_10, x_122);
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
lean_dec(x_124);
x_126 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_123, x_5, x_6, x_7, x_8, x_9, x_10, x_125);
return x_126;
}
else
{
uint8_t x_127; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_127 = !lean_is_exclusive(x_119);
if (x_127 == 0)
{
lean_object* x_128; 
x_128 = lean_ctor_get(x_119, 0);
lean_dec(x_128);
lean_ctor_set(x_119, 0, x_115);
return x_119;
}
else
{
lean_object* x_129; lean_object* x_130; 
x_129 = lean_ctor_get(x_119, 1);
lean_inc(x_129);
lean_dec(x_119);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_115);
lean_ctor_set(x_130, 1, x_129);
return x_130;
}
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
lean_dec(x_115);
x_131 = lean_ctor_get(x_119, 1);
lean_inc(x_131);
lean_dec(x_119);
x_132 = lean_box(0);
x_133 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_132, x_5, x_6, x_7, x_8, x_9, x_10, x_131);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_115);
x_134 = lean_ctor_get(x_116, 1);
lean_inc(x_134);
lean_dec(x_116);
x_135 = lean_box(0);
x_136 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_135, x_5, x_6, x_7, x_8, x_9, x_10, x_134);
return x_136;
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_64);
lean_dec(x_50);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
x_137 = lean_ctor_get(x_101, 1);
lean_inc(x_137);
lean_dec(x_101);
x_138 = lean_box(0);
x_139 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_138, x_5, x_6, x_7, x_8, x_9, x_10, x_137);
return x_139;
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_83);
lean_dec(x_64);
lean_dec(x_50);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
x_140 = lean_ctor_get(x_85, 1);
lean_inc(x_140);
lean_dec(x_85);
x_141 = lean_box(0);
x_142 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_141, x_5, x_6, x_7, x_8, x_9, x_10, x_140);
return x_142;
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_64);
lean_dec(x_50);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
x_143 = lean_ctor_get(x_82, 1);
lean_inc(x_143);
lean_dec(x_82);
x_144 = lean_box(0);
x_145 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_144, x_5, x_6, x_7, x_8, x_9, x_10, x_143);
return x_145;
}
}
else
{
uint8_t x_146; 
lean_dec(x_64);
lean_dec(x_50);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_146 = !lean_is_exclusive(x_78);
if (x_146 == 0)
{
lean_object* x_147; 
x_147 = lean_ctor_get(x_78, 0);
lean_dec(x_147);
lean_ctor_set(x_78, 0, x_74);
return x_78;
}
else
{
lean_object* x_148; lean_object* x_149; 
x_148 = lean_ctor_get(x_78, 1);
lean_inc(x_148);
lean_dec(x_78);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_74);
lean_ctor_set(x_149, 1, x_148);
return x_149;
}
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_74);
lean_dec(x_64);
lean_dec(x_50);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
x_150 = lean_ctor_get(x_78, 1);
lean_inc(x_150);
lean_dec(x_78);
x_151 = lean_box(0);
x_152 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_151, x_5, x_6, x_7, x_8, x_9, x_10, x_150);
return x_152;
}
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_74);
lean_dec(x_64);
lean_dec(x_50);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
x_153 = lean_ctor_get(x_75, 1);
lean_inc(x_153);
lean_dec(x_75);
x_154 = lean_box(0);
x_155 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_154, x_5, x_6, x_7, x_8, x_9, x_10, x_153);
return x_155;
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_dec(x_56);
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
x_156 = lean_ctor_get(x_58, 1);
lean_inc(x_156);
lean_dec(x_58);
x_157 = lean_box(0);
x_158 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_157, x_5, x_6, x_7, x_8, x_9, x_10, x_156);
return x_158;
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_dec(x_53);
lean_dec(x_50);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
x_159 = lean_ctor_get(x_55, 1);
lean_inc(x_159);
lean_dec(x_55);
x_160 = lean_box(0);
x_161 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_160, x_5, x_6, x_7, x_8, x_9, x_10, x_159);
return x_161;
}
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
lean_dec(x_50);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
x_162 = lean_ctor_get(x_52, 1);
lean_inc(x_162);
lean_dec(x_52);
x_163 = lean_box(0);
x_164 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_163, x_5, x_6, x_7, x_8, x_9, x_10, x_162);
return x_164;
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
x_165 = lean_ctor_get(x_49, 1);
lean_inc(x_165);
lean_dec(x_49);
x_166 = lean_box(0);
x_167 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_166, x_5, x_6, x_7, x_8, x_9, x_10, x_165);
return x_167;
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
x_168 = lean_ctor_get(x_46, 1);
lean_inc(x_168);
lean_dec(x_46);
x_169 = lean_box(0);
x_170 = l_Lean_Elab_Term_throwTypeMismatchError___rarg(x_1, x_13, x_3, x_4, x_169, x_5, x_6, x_7, x_8, x_9, x_10, x_168);
return x_170;
}
}
else
{
lean_object* x_171; lean_object* x_172; 
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
x_171 = lean_ctor_get(x_38, 1);
lean_inc(x_171);
lean_dec(x_38);
x_172 = l_Lean_Elab_Term_tryCoe(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_171);
return x_172;
}
}
else
{
uint8_t x_173; 
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_173 = !lean_is_exclusive(x_38);
if (x_173 == 0)
{
return x_38;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_38, 0);
x_175 = lean_ctor_get(x_38, 1);
lean_inc(x_175);
lean_inc(x_174);
lean_dec(x_38);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
}
}
}
else
{
uint8_t x_177; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_177 = !lean_is_exclusive(x_30);
if (x_177 == 0)
{
return x_30;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_30, 0);
x_179 = lean_ctor_get(x_30, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_30);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
return x_180;
}
}
}
else
{
uint8_t x_181; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_181 = !lean_is_exclusive(x_27);
if (x_181 == 0)
{
lean_object* x_182; lean_object* x_183; 
x_182 = lean_ctor_get(x_27, 0);
lean_dec(x_182);
x_183 = lean_ctor_get(x_28, 0);
lean_inc(x_183);
lean_dec(x_28);
lean_ctor_set(x_27, 0, x_183);
return x_27;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_27, 1);
lean_inc(x_184);
lean_dec(x_27);
x_185 = lean_ctor_get(x_28, 0);
lean_inc(x_185);
lean_dec(x_28);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
}
}
else
{
uint8_t x_187; 
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_187 = !lean_is_exclusive(x_24);
if (x_187 == 0)
{
return x_24;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_24, 0);
x_189 = lean_ctor_get(x_24, 1);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_24);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_189);
return x_190;
}
}
}
}
else
{
uint8_t x_191; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_191 = !lean_is_exclusive(x_15);
if (x_191 == 0)
{
return x_15;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_192 = lean_ctor_get(x_15, 0);
x_193 = lean_ctor_get(x_15, 1);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_15);
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_192);
lean_ctor_set(x_194, 1, x_193);
return x_194;
}
}
}
else
{
uint8_t x_195; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_195 = !lean_is_exclusive(x_12);
if (x_195 == 0)
{
return x_12;
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_196 = lean_ctor_get(x_12, 0);
x_197 = lean_ctor_get(x_12, 1);
lean_inc(x_197);
lean_inc(x_196);
lean_dec(x_12);
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_196);
lean_ctor_set(x_198, 1, x_197);
return x_198;
}
}
}
}
lean_object* l_Lean_Elab_Term_ensureHasTypeAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_12; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_13);
lean_inc(x_2);
x_14 = l_Lean_Elab_Term_isDefEqNoConstantApprox(x_2, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_Elab_Term_tryLiftAndCoe(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_14, 0);
lean_dec(x_20);
lean_ctor_set(x_14, 0, x_3);
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_dec(x_14);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_3);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_14);
if (x_23 == 0)
{
return x_14;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_14, 0);
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_14);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_box(0);
x_15 = l_Lean_Elab_Term_ensureHasTypeAux(x_1, x_12, x_2, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_logException___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("internal exception: ");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_logException___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_logException___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_logException___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_logException___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_logException(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_6, 3);
x_13 = l_Lean_replaceRef(x_9, x_12);
lean_dec(x_9);
x_14 = l_Lean_replaceRef(x_13, x_12);
lean_dec(x_13);
x_15 = l_Lean_replaceRef(x_14, x_12);
lean_dec(x_12);
lean_dec(x_14);
lean_ctor_set(x_6, 3, x_15);
x_16 = 2;
x_17 = l_Lean_Elab_log___at_Lean_Elab_Term_logTrace___spec__1(x_16, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_6, 0);
x_19 = lean_ctor_get(x_6, 1);
x_20 = lean_ctor_get(x_6, 2);
x_21 = lean_ctor_get(x_6, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_6);
x_22 = l_Lean_replaceRef(x_9, x_21);
lean_dec(x_9);
x_23 = l_Lean_replaceRef(x_22, x_21);
lean_dec(x_22);
x_24 = l_Lean_replaceRef(x_23, x_21);
lean_dec(x_21);
lean_dec(x_23);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_19);
lean_ctor_set(x_25, 2, x_20);
lean_ctor_set(x_25, 3, x_24);
x_26 = 2;
x_27 = l_Lean_Elab_log___at_Lean_Elab_Term_logTrace___spec__1(x_26, x_10, x_2, x_3, x_4, x_5, x_25, x_7, x_8);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
lean_dec(x_1);
x_29 = lean_ctor_get(x_6, 3);
lean_inc(x_29);
x_30 = l_Lean_InternalExceptionId_getName(x_28, x_8);
lean_dec(x_28);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; 
lean_dec(x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_33, 0, x_31);
x_34 = l_Lean_Elab_Term_logException___closed__3;
x_35 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = 2;
x_37 = l_Lean_Elab_log___at_Lean_Elab_Term_logTrace___spec__1(x_36, x_35, x_2, x_3, x_4, x_5, x_6, x_7, x_32);
return x_37;
}
else
{
uint8_t x_38; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_30);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_30, 0);
x_40 = lean_io_error_to_string(x_39);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_29);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_30, 0, x_43);
return x_30;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_44 = lean_ctor_get(x_30, 0);
x_45 = lean_ctor_get(x_30, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_30);
x_46 = lean_io_error_to_string(x_44);
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_29);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_45);
return x_50;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Term_11__exceptionToSorry(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = 0;
x_11 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l_Lean_Elab_Term_mkFreshTypeMVar(x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_13);
x_15 = l_Lean_Elab_Term_getLevel(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Meta_mkSorry___closed__2;
x_22 = l_Lean_mkConst(x_21, x_20);
x_23 = l_Lean_Meta_mkSorry___closed__4;
x_24 = l_Lean_mkAppB(x_22, x_13, x_23);
x_25 = l_Lean_Exception_hasSyntheticSorry(x_1);
if (x_25 == 0)
{
lean_object* x_26; 
lean_free_object(x_15);
x_26 = l_Lean_Elab_Term_logException(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_24);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_24);
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
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
lean_ctor_set(x_15, 0, x_24);
return x_15;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = lean_ctor_get(x_15, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_15);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_Meta_mkSorry___closed__2;
x_40 = l_Lean_mkConst(x_39, x_38);
x_41 = l_Lean_Meta_mkSorry___closed__4;
x_42 = l_Lean_mkAppB(x_40, x_13, x_41);
x_43 = l_Lean_Exception_hasSyntheticSorry(x_1);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = l_Lean_Elab_Term_logException(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_36);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_46 = x_44;
} else {
 lean_dec_ref(x_44);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_42);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_42);
x_48 = lean_ctor_get(x_44, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_44, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_50 = x_44;
} else {
 lean_dec_ref(x_44);
 x_50 = lean_box(0);
}
if (lean_is_scalar(x_50)) {
 x_51 = lean_alloc_ctor(1, 2, 0);
} else {
 x_51 = x_50;
}
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_49);
return x_51;
}
}
else
{
lean_object* x_52; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_42);
lean_ctor_set(x_52, 1, x_36);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_15);
if (x_53 == 0)
{
return x_15;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_15, 0);
x_55 = lean_ctor_get(x_15, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_15);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_12);
if (x_57 == 0)
{
return x_12;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_12, 0);
x_59 = lean_ctor_get(x_12, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_12);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_2, 0);
lean_inc(x_61);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_61);
x_62 = l_Lean_Elab_Term_getLevel(x_61, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_62) == 0)
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_62);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_64 = lean_ctor_get(x_62, 0);
x_65 = lean_ctor_get(x_62, 1);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_66);
x_68 = l_Lean_Meta_mkSorry___closed__2;
x_69 = l_Lean_mkConst(x_68, x_67);
x_70 = l_Lean_Meta_mkSorry___closed__4;
x_71 = l_Lean_mkAppB(x_69, x_61, x_70);
x_72 = l_Lean_Exception_hasSyntheticSorry(x_1);
if (x_72 == 0)
{
lean_object* x_73; 
lean_free_object(x_62);
x_73 = l_Lean_Elab_Term_logException(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_65);
if (lean_obj_tag(x_73) == 0)
{
uint8_t x_74; 
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
lean_object* x_75; 
x_75 = lean_ctor_get(x_73, 0);
lean_dec(x_75);
lean_ctor_set(x_73, 0, x_71);
return x_73;
}
else
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_ctor_get(x_73, 1);
lean_inc(x_76);
lean_dec(x_73);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_71);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
else
{
uint8_t x_78; 
lean_dec(x_71);
x_78 = !lean_is_exclusive(x_73);
if (x_78 == 0)
{
return x_73;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_73, 0);
x_80 = lean_ctor_get(x_73, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_73);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
lean_ctor_set(x_62, 0, x_71);
return x_62;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_82 = lean_ctor_get(x_62, 0);
x_83 = lean_ctor_get(x_62, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_62);
x_84 = lean_box(0);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_Lean_Meta_mkSorry___closed__2;
x_87 = l_Lean_mkConst(x_86, x_85);
x_88 = l_Lean_Meta_mkSorry___closed__4;
x_89 = l_Lean_mkAppB(x_87, x_61, x_88);
x_90 = l_Lean_Exception_hasSyntheticSorry(x_1);
if (x_90 == 0)
{
lean_object* x_91; 
x_91 = l_Lean_Elab_Term_logException(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_83);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_93 = x_91;
} else {
 lean_dec_ref(x_91);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_89);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_89);
x_95 = lean_ctor_get(x_91, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_91, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_97 = x_91;
} else {
 lean_dec_ref(x_91);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(1, 2, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
else
{
lean_object* x_99; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_89);
lean_ctor_set(x_99, 1, x_83);
return x_99;
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_61);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_62);
if (x_100 == 0)
{
return x_62;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_62, 0);
x_102 = lean_ctor_get(x_62, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_62);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
}
}
lean_object* l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwPostpone___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1___rarg), 1, 0);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_tryPostpone(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*8);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1___rarg(x_7);
return x_11;
}
}
}
lean_object* l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwPostpone___at_Lean_Elab_Term_tryPostpone___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_tryPostpone___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_tryPostpone(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_tryPostponeIfMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Expr_getAppFn___main(x_1);
x_10 = l_Lean_Expr_isMVar(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
else
{
lean_object* x_13; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_13 = l_Lean_instantiateMVars___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = l_Lean_Expr_getAppFn___main(x_15);
lean_dec(x_15);
x_18 = l_Lean_Expr_isMVar(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_box(0);
lean_ctor_set(x_13, 0, x_19);
return x_13;
}
else
{
lean_object* x_20; 
lean_free_object(x_13);
x_20 = l_Lean_Elab_Term_tryPostpone(x_2, x_3, x_4, x_5, x_6, x_7, x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_13, 0);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_13);
x_23 = l_Lean_Expr_getAppFn___main(x_21);
lean_dec(x_21);
x_24 = l_Lean_Expr_isMVar(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
else
{
lean_object* x_27; 
x_27 = l_Lean_Elab_Term_tryPostpone(x_2, x_3, x_4, x_5, x_6, x_7, x_22);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_13);
if (x_28 == 0)
{
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_tryPostpone(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_Lean_Elab_Term_tryPostponeIfMVar(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
}
lean_object* _init_l___private_Lean_Elab_Term_12__postponeElabTerm___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
x_2 = l_Lean_Elab_registerPostponeId___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_12__postponeElabTerm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = l___private_Lean_Elab_Term_12__postponeElabTerm___closed__1;
x_12 = l_Lean_checkTraceOption(x_10, x_11);
lean_dec(x_10);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = 2;
x_14 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_15 = l_Lean_Elab_Term_mkFreshExprMVar(x_2, x_13, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Expr_mvarId_x21(x_16);
x_19 = lean_ctor_get(x_3, 6);
lean_inc(x_19);
x_20 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_Lean_Elab_Term_registerSyntheticMVar(x_1, x_18, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_16);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_16);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
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
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_15);
if (x_26 == 0)
{
return x_15;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_15, 0);
x_28 = lean_ctor_get(x_15, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_15);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_inc(x_1);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_1);
x_31 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
x_32 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = l_Lean_MessageData_coeOfOptExpr___closed__1;
x_34 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_35 = l_Lean_Elab_Term_logTrace(x_11, x_34, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = 2;
x_38 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_39 = l_Lean_Elab_Term_mkFreshExprMVar(x_2, x_37, x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_36);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Expr_mvarId_x21(x_40);
x_43 = lean_ctor_get(x_3, 6);
lean_inc(x_43);
x_44 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = l_Lean_Elab_Term_registerSyntheticMVar(x_1, x_42, x_44, x_3, x_4, x_5, x_6, x_7, x_8, x_41);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_45, 0);
lean_dec(x_47);
lean_ctor_set(x_45, 0, x_40);
return x_45;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_dec(x_45);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_40);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
else
{
uint8_t x_50; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_39);
if (x_50 == 0)
{
return x_39;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_39, 0);
x_52 = lean_ctor_get(x_39, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_39);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_35);
if (x_54 == 0)
{
return x_35;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_35, 0);
x_56 = lean_ctor_get(x_35, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_35);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_2, 0);
lean_inc(x_58);
x_59 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_59, 0, x_58);
x_60 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_60, 0, x_32);
lean_ctor_set(x_60, 1, x_59);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_61 = l_Lean_Elab_Term_logTrace(x_11, x_60, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = 2;
x_64 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_65 = l_Lean_Elab_Term_mkFreshExprMVar(x_2, x_63, x_64, x_3, x_4, x_5, x_6, x_7, x_8, x_62);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = l_Lean_Expr_mvarId_x21(x_66);
x_69 = lean_ctor_get(x_3, 6);
lean_inc(x_69);
x_70 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_70, 0, x_69);
x_71 = l_Lean_Elab_Term_registerSyntheticMVar(x_1, x_68, x_70, x_3, x_4, x_5, x_6, x_7, x_8, x_67);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
lean_object* x_73; 
x_73 = lean_ctor_get(x_71, 0);
lean_dec(x_73);
lean_ctor_set(x_71, 0, x_66);
return x_71;
}
else
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_ctor_get(x_71, 1);
lean_inc(x_74);
lean_dec(x_71);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_66);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
else
{
uint8_t x_76; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_76 = !lean_is_exclusive(x_65);
if (x_76 == 0)
{
return x_65;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_65, 0);
x_78 = lean_ctor_get(x_65, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_65);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_80 = !lean_is_exclusive(x_61);
if (x_80 == 0)
{
return x_61;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_61, 0);
x_82 = lean_ctor_get(x_61, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_61);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected syntax");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
lean_dec(x_1);
x_13 = l_Lean_Syntax_prettyPrint(x_2);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = l_Lean_MessageData_ofList___closed__3;
x_16 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__3;
x_20 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_5, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_5, 1);
lean_inc(x_23);
lean_dec(x_5);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_2);
x_24 = lean_apply_9(x_22, x_2, x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_24) == 0)
{
lean_dec(x_23);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_24;
}
else
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_23);
lean_dec(x_2);
lean_dec(x_1);
x_26 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 1);
if (x_26 == 0)
{
uint8_t x_27; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_27 = !lean_is_exclusive(x_24);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_24, 0);
lean_dec(x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_dec(x_24);
x_32 = l___private_Lean_Elab_Term_11__exceptionToSorry(x_25, x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_24);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_24, 1);
x_35 = lean_ctor_get(x_24, 0);
lean_dec(x_35);
x_36 = lean_ctor_get(x_25, 0);
lean_inc(x_36);
x_37 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_38 = lean_nat_dec_eq(x_36, x_37);
if (x_38 == 0)
{
lean_dec(x_23);
if (x_4 == 0)
{
lean_dec(x_36);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_24;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = l_Lean_Elab_postponeExceptionId;
x_40 = lean_nat_dec_eq(x_36, x_39);
lean_dec(x_36);
if (x_40 == 0)
{
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_24;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_free_object(x_24);
lean_dec(x_25);
x_41 = l_Lean_Elab_Term_SavedState_restore(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_34);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l___private_Lean_Elab_Term_12__postponeElabTerm(x_2, x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_36);
lean_free_object(x_24);
lean_dec(x_25);
lean_inc(x_1);
x_44 = l_Lean_Elab_Term_SavedState_restore(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_34);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_5 = x_23;
x_12 = x_45;
goto _start;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_47 = lean_ctor_get(x_24, 1);
lean_inc(x_47);
lean_dec(x_24);
x_48 = lean_ctor_get(x_25, 0);
lean_inc(x_48);
x_49 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_50 = lean_nat_dec_eq(x_48, x_49);
if (x_50 == 0)
{
lean_dec(x_23);
if (x_4 == 0)
{
lean_object* x_51; 
lean_dec(x_48);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_25);
lean_ctor_set(x_51, 1, x_47);
return x_51;
}
else
{
lean_object* x_52; uint8_t x_53; 
x_52 = l_Lean_Elab_postponeExceptionId;
x_53 = lean_nat_dec_eq(x_48, x_52);
lean_dec(x_48);
if (x_53 == 0)
{
lean_object* x_54; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_25);
lean_ctor_set(x_54, 1, x_47);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_25);
x_55 = l_Lean_Elab_Term_SavedState_restore(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_47);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = l___private_Lean_Elab_Term_12__postponeElabTerm(x_2, x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_48);
lean_dec(x_25);
lean_inc(x_1);
x_58 = l_Lean_Elab_Term_SavedState_restore(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_47);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_5 = x_23;
x_12 = x_59;
goto _start;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Term_13__elabUsingElabFnsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l___private_Lean_Elab_Term_13__elabUsingElabFnsAux(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___main___at_Lean_Elab_Term_elabUsingElabFns___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___main___at_Lean_Elab_Term_elabUsingElabFns___spec__3(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Std_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Std_PersistentHashMap_findAtAux___main___at_Lean_Elab_Term_elabUsingElabFns___spec__4(x_20, x_21, lean_box(0), x_22, x_3);
lean_dec(x_21);
lean_dec(x_20);
return x_23;
}
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Name_hash(x_2);
x_5 = l_Std_PersistentHashMap_findAux___main___at_Lean_Elab_Term_elabUsingElabFns___spec__3(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Elab_Term_elabUsingElabFns___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_Std_AssocList_find_x3f___main___at_Lean_Elab_Term_elabUsingElabFns___spec__6(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_SMap_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_Std_PersistentHashMap_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__2(x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_Std_HashMapImp_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__5(x_4, x_2);
lean_dec(x_4);
return x_7;
}
else
{
lean_dec(x_4);
return x_6;
}
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Std_HashMapImp_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__5(x_8, x_2);
lean_dec(x_8);
return x_9;
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabUsingElabFns___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elaboration function for '");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabUsingElabFns___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabUsingElabFns___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabUsingElabFns___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabUsingElabFns___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabUsingElabFns___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' has not been implemented");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabUsingElabFns___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabUsingElabFns___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabUsingElabFns___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabUsingElabFns___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabUsingElabFns(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_11 = l_Lean_Elab_Term_saveAllState___rarg(x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_9, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Term_termElabAttribute;
x_19 = lean_ctor_get(x_18, 2);
lean_inc(x_19);
x_20 = l_Lean_PersistentEnvExtension_getState___rarg(x_19, x_17);
lean_dec(x_17);
lean_dec(x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
lean_inc(x_1);
x_22 = l_Lean_Syntax_getKind(x_1);
x_23 = l_Lean_SMap_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__1(x_21, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_24 = l_System_FilePath_dirName___closed__1;
x_25 = l_Lean_Name_toStringWithSep___main(x_24, x_22);
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = l_Lean_Elab_Term_elabUsingElabFns___closed__3;
x_29 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l_Lean_Elab_Term_elabUsingElabFns___closed__6;
x_31 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_31, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_22);
x_33 = lean_ctor_get(x_23, 0);
lean_inc(x_33);
lean_dec(x_23);
x_34 = l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main(x_12, x_1, x_2, x_3, x_33, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_34;
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___main___at_Lean_Elab_Term_elabUsingElabFns___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___main___at_Lean_Elab_Term_elabUsingElabFns___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___main___at_Lean_Elab_Term_elabUsingElabFns___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___main___at_Lean_Elab_Term_elabUsingElabFns___spec__3(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_AssocList_find_x3f___main___at_Lean_Elab_Term_elabUsingElabFns___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___main___at_Lean_Elab_Term_elabUsingElabFns___spec__6(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_SMap_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_SMap_find_x3f___at_Lean_Elab_Term_elabUsingElabFns___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabUsingElabFns___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Elab_Term_elabUsingElabFns(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_StateRefT_x27_get___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_1, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
return x_7;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_7, 3);
lean_inc(x_10);
x_11 = l_Lean_replaceRef(x_1, x_10);
lean_dec(x_10);
x_12 = lean_ctor_get(x_3, 6);
lean_inc(x_12);
lean_inc(x_12);
x_13 = l_Lean_Elab_getBetterRef(x_11, x_12);
lean_dec(x_11);
x_14 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
x_15 = l___private_Lean_Elab_Term_5__addContext_x27(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_13);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = l_Lean_Elab_addMacroStack(x_2, x_12);
x_28 = l___private_Lean_Elab_Term_5__addContext_x27(x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_13);
lean_ctor_set(x_31, 1, x_30);
lean_ctor_set_tag(x_28, 1);
lean_ctor_set(x_28, 0, x_31);
return x_28;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_28);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_13);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_13);
x_36 = !lean_is_exclusive(x_28);
if (x_36 == 0)
{
return x_28;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_28, 0);
x_38 = lean_ctor_get(x_28, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_28);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__3___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__3___rarg), 1, 0);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 4);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_take(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 4);
lean_dec(x_13);
lean_ctor_set(x_10, 4, x_1);
x_14 = lean_st_ref_set(x_3, x_10, x_11);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
x_23 = lean_ctor_get(x_10, 2);
x_24 = lean_ctor_get(x_10, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_25 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_25, 0, x_21);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_23);
lean_ctor_set(x_25, 3, x_24);
lean_ctor_set(x_25, 4, x_1);
x_26 = lean_st_ref_set(x_3, x_25, x_11);
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
x_29 = lean_box(0);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__3___rarg(x_8);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__1;
x_2 = lean_alloc_closure((void*)(l_ReaderT_lift___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_StateRefT_x27_get___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__1___boxed), 6, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__3;
x_2 = lean_alloc_closure((void*)(l_ReaderT_lift___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__2___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__4;
x_2 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__5;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg), 9, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__4___boxed), 6, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__7;
x_2 = lean_alloc_closure((void*)(l_ReaderT_lift___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__5___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__8;
x_2 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__9;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg), 9, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__6___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__8;
x_2 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__11;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_monadLog___spec__2___rarg), 9, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__3___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__7___boxed), 10, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__8___boxed), 8, 0);
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_1 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__2;
x_2 = l_Lean_Elab_Term_monadQuotation___closed__1;
x_3 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__6;
x_4 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__13;
x_5 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__10;
x_6 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__12;
x_7 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__14;
x_8 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__15;
x_9 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_2);
lean_ctor_set(x_9, 2, x_3);
lean_ctor_set(x_9, 3, x_4);
lean_ctor_set(x_9, 4, x_5);
lean_ctor_set(x_9, 5, x_6);
lean_ctor_set(x_9, 6, x_7);
lean_ctor_set(x_9, 7, x_8);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__16;
return x_1;
}
}
lean_object* l_StateRefT_x27_get___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_StateRefT_x27_get___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___lambda__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
uint8_t l___private_Lean_Elab_Term_14__isExplicit(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Parser_Term_explicit___elambda__1___closed__2;
lean_inc(x_1);
x_3 = l_Lean_Syntax_isOfKind(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Syntax_getArgs(x_1);
lean_dec(x_1);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Term_14__isExplicit___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Term_14__isExplicit(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l___private_Lean_Elab_Term_15__isExplicitApp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
lean_inc(x_1);
x_2 = l_Lean_Syntax_getKind(x_1);
x_3 = l_Lean_mkAppStx___closed__8;
x_4 = lean_name_eq(x_2, x_3);
lean_dec(x_2);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
lean_dec(x_1);
x_8 = l___private_Lean_Elab_Term_14__isExplicit(x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_Term_15__isExplicitApp___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Term_15__isExplicitApp(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_16__isLambdaWithImplicit___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
lean_dec(x_2);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
lean_inc(x_2);
x_10 = lean_name_mk_string(x_2, x_9);
lean_inc(x_8);
x_11 = l_Lean_Syntax_isOfKind(x_8, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
lean_inc(x_2);
x_13 = lean_name_mk_string(x_2, x_12);
x_14 = l_Lean_Syntax_isOfKind(x_8, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_5 = x_16;
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
return x_14;
}
}
else
{
uint8_t x_18; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
x_18 = 1;
return x_18;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_16__isLambdaWithImplicit___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
lean_dec(x_2);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
lean_inc(x_2);
x_10 = lean_name_mk_string(x_2, x_9);
lean_inc(x_8);
x_11 = l_Lean_Syntax_isOfKind(x_8, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = l_Lean_Parser_Term_instBinder___elambda__1___closed__1;
lean_inc(x_2);
x_13 = lean_name_mk_string(x_2, x_12);
x_14 = l_Lean_Syntax_isOfKind(x_8, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_5, x_15);
lean_dec(x_5);
x_5 = x_16;
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
return x_14;
}
}
else
{
uint8_t x_18; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
x_18 = 1;
return x_18;
}
}
}
}
uint8_t l___private_Lean_Elab_Term_16__isLambdaWithImplicit(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
lean_inc(x_1);
x_3 = l_Lean_Syntax_isOfKind(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_Syntax_getArgs(x_1);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(4u);
x_8 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_1);
x_9 = 0;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Syntax_getArgs(x_11);
lean_dec(x_11);
x_13 = lean_array_get_size(x_12);
x_14 = l_Lean_mkAppStx___closed__6;
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_16__isLambdaWithImplicit___spec__2(x_1, x_14, x_12, x_13, x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_1);
return x_16;
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_16__isLambdaWithImplicit___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_16__isLambdaWithImplicit___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_16__isLambdaWithImplicit___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Lean_Elab_Term_16__isLambdaWithImplicit___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Term_16__isLambdaWithImplicit___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Term_16__isLambdaWithImplicit(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_dropTermParens___main(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_20; uint8_t x_21; 
x_20 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__2;
lean_inc(x_1);
x_21 = l_Lean_Syntax_isOfKind(x_1, x_20);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = 0;
x_2 = x_22;
goto block_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = l_Lean_Syntax_getArgs(x_1);
x_24 = lean_array_get_size(x_23);
lean_dec(x_23);
x_25 = lean_unsigned_to_nat(3u);
x_26 = lean_nat_dec_eq(x_24, x_25);
lean_dec(x_24);
x_2 = x_26;
goto block_19;
}
block_19:
{
if (x_2 == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = l_Lean_Syntax_getArg(x_1, x_3);
x_5 = l_Lean_nullKind___closed__2;
lean_inc(x_4);
x_6 = l_Lean_Syntax_isOfKind(x_4, x_5);
if (x_6 == 0)
{
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = l_Lean_Syntax_getArgs(x_4);
x_8 = lean_array_get_size(x_7);
lean_dec(x_7);
x_9 = lean_unsigned_to_nat(2u);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_4, x_11);
x_13 = l_Lean_Syntax_getArg(x_4, x_3);
lean_dec(x_4);
lean_inc(x_13);
x_14 = l_Lean_Syntax_isOfKind(x_13, x_5);
if (x_14 == 0)
{
lean_dec(x_13);
lean_dec(x_12);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = l_Lean_Syntax_getArgs(x_13);
lean_dec(x_13);
x_16 = lean_array_get_size(x_15);
lean_dec(x_15);
x_17 = lean_nat_dec_eq(x_16, x_11);
lean_dec(x_16);
if (x_17 == 0)
{
lean_dec(x_12);
return x_1;
}
else
{
lean_dec(x_1);
x_1 = x_12;
goto _start;
}
}
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_dropTermParens(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_dropTermParens___main(x_1);
return x_2;
}
}
uint8_t l_Lean_Elab_Term_blockImplicitLambda(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Elab_Term_dropTermParens___main(x_1);
lean_inc(x_2);
x_3 = l___private_Lean_Elab_Term_14__isExplicit(x_2);
if (x_3 == 0)
{
uint8_t x_4; 
lean_inc(x_2);
x_4 = l___private_Lean_Elab_Term_15__isExplicitApp(x_2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = l___private_Lean_Elab_Term_16__isLambdaWithImplicit(x_2);
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_2);
x_6 = 1;
return x_6;
}
}
else
{
uint8_t x_7; 
lean_dec(x_2);
x_7 = 1;
return x_7;
}
}
}
lean_object* l_Lean_Elab_Term_blockImplicitLambda___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_blockImplicitLambda(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_whnfForall___at_Lean_Elab_Term_useImplicitLambda_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_1);
x_9 = l_Lean_whnf___at___private_Lean_Elab_Term_8__isTypeApp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Lean_Expr_isForall(x_11);
if (x_12 == 0)
{
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_1);
return x_9;
}
else
{
lean_dec(x_1);
return x_9;
}
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = l_Lean_Expr_isForall(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_14);
return x_17;
}
}
}
else
{
uint8_t x_18; 
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
return x_9;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_9);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Elab_Term_useImplicitLambda_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Lean_Elab_Term_blockImplicitLambda(x_1);
if (x_10 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = l_Lean_whnfForall___at_Lean_Elab_Term_useImplicitLambda_x3f___spec__1(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 7)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; uint64_t x_18; uint8_t x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
x_18 = lean_ctor_get_uint64(x_15, sizeof(void*)*3);
x_19 = (uint8_t)((x_18 << 24) >> 61);
x_20 = l_Lean_BinderInfo_isExplicit(x_19);
if (x_20 == 0)
{
lean_ctor_set(x_2, 0, x_15);
lean_ctor_set(x_14, 0, x_2);
return x_14;
}
else
{
lean_object* x_21; 
lean_dec(x_15);
lean_free_object(x_2);
x_21 = lean_box(0);
lean_ctor_set(x_14, 0, x_21);
return x_14;
}
}
else
{
lean_object* x_22; uint64_t x_23; uint8_t x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_ctor_get_uint64(x_15, sizeof(void*)*3);
x_24 = (uint8_t)((x_23 << 24) >> 61);
x_25 = l_Lean_BinderInfo_isExplicit(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
lean_ctor_set(x_2, 0, x_15);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_2);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_15);
lean_free_object(x_2);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_22);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_15);
lean_free_object(x_2);
x_29 = !lean_is_exclusive(x_14);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_14, 0);
lean_dec(x_30);
x_31 = lean_box(0);
lean_ctor_set(x_14, 0, x_31);
return x_14;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_dec(x_14);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_free_object(x_2);
x_35 = !lean_is_exclusive(x_14);
if (x_35 == 0)
{
return x_14;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_14, 0);
x_37 = lean_ctor_get(x_14, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_14);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_2, 0);
lean_inc(x_39);
lean_dec(x_2);
x_40 = l_Lean_whnfForall___at_Lean_Elab_Term_useImplicitLambda_x3f___spec__1(x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
if (lean_obj_tag(x_41) == 7)
{
lean_object* x_42; lean_object* x_43; uint64_t x_44; uint8_t x_45; uint8_t x_46; 
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_43 = x_40;
} else {
 lean_dec_ref(x_40);
 x_43 = lean_box(0);
}
x_44 = lean_ctor_get_uint64(x_41, sizeof(void*)*3);
x_45 = (uint8_t)((x_44 << 24) >> 61);
x_46 = l_Lean_BinderInfo_isExplicit(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_41);
if (lean_is_scalar(x_43)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_43;
}
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_42);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_41);
x_49 = lean_box(0);
if (lean_is_scalar(x_43)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_43;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_42);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_41);
x_51 = lean_ctor_get(x_40, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_52 = x_40;
} else {
 lean_dec_ref(x_40);
 x_52 = lean_box(0);
}
x_53 = lean_box(0);
if (lean_is_scalar(x_52)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_52;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_51);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_40, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_40, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_57 = x_40;
} else {
 lean_dec_ref(x_40);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_9);
return x_60;
}
}
}
lean_object* l_Lean_mkLambdaFVars___at_Lean_Elab_Term_elabImplicitLambdaAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Array_isEmpty___rarg(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_13 = lean_apply_7(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_28; lean_object* x_29; lean_object* x_40; lean_object* x_41; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_40 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_41 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_40, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; uint8_t x_56; lean_object* x_57; 
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_Lean_getMCtx___at_Lean_getMVarDecl___spec__1___rarg(x_6, x_7, x_8, x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_st_ref_get(x_8, x_45);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_getLCtx___at_Lean_mkFreshExprMVar___spec__1(x_5, x_6, x_7, x_8, x_48);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Std_HashMap_inhabited___closed__1;
x_54 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_54, 0, x_44);
lean_ctor_set(x_54, 1, x_49);
lean_ctor_set(x_54, 2, x_53);
x_55 = 1;
x_56 = 0;
x_57 = l_Lean_MetavarContext_MkBinding_mkBinding(x_55, x_51, x_1, x_2, x_56, x_56, x_54);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_ctor_get(x_58, 0);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_ctor_get(x_59, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
x_63 = lean_st_ref_take(x_8, x_52);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = !lean_is_exclusive(x_64);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_67 = lean_ctor_get(x_64, 1);
lean_dec(x_67);
lean_ctor_set(x_64, 1, x_62);
x_68 = lean_st_ref_set(x_8, x_64, x_65);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = l_Lean_setMCtx___at___private_Lean_Meta_Basic_3__liftMkBindingM___spec__1(x_61, x_5, x_6, x_7, x_8, x_69);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_16 = x_60;
x_17 = x_71;
goto block_27;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_72 = lean_ctor_get(x_64, 0);
x_73 = lean_ctor_get(x_64, 2);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_64);
x_74 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_62);
lean_ctor_set(x_74, 2, x_73);
x_75 = lean_st_ref_set(x_8, x_74, x_65);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = l_Lean_setMCtx___at___private_Lean_Meta_Basic_3__liftMkBindingM___spec__1(x_61, x_5, x_6, x_7, x_8, x_76);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_16 = x_60;
x_17 = x_78;
goto block_27;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_79 = lean_ctor_get(x_57, 1);
lean_inc(x_79);
lean_dec(x_57);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = l_Lean_setMCtx___at___private_Lean_Meta_Basic_3__liftMkBindingM___spec__1(x_80, x_5, x_6, x_7, x_8, x_52);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = lean_st_ref_take(x_8, x_83);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = !lean_is_exclusive(x_85);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_88 = lean_ctor_get(x_85, 1);
lean_dec(x_88);
lean_ctor_set(x_85, 1, x_81);
x_89 = lean_st_ref_set(x_8, x_85, x_86);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
lean_dec(x_89);
x_91 = l___private_Lean_Meta_Basic_3__liftMkBindingM___rarg___closed__3;
x_92 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_91, x_5, x_6, x_7, x_8, x_90);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_28 = x_93;
x_29 = x_94;
goto block_39;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_95 = lean_ctor_get(x_85, 0);
x_96 = lean_ctor_get(x_85, 2);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_85);
x_97 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_81);
lean_ctor_set(x_97, 2, x_96);
x_98 = lean_st_ref_set(x_8, x_97, x_86);
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
lean_dec(x_98);
x_100 = l___private_Lean_Meta_Basic_3__liftMkBindingM___rarg___closed__3;
x_101 = l_Lean_throwError___at_Lean_mkWHNFRef___spec__1___rarg(x_100, x_5, x_6, x_7, x_8, x_99);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_28 = x_102;
x_29 = x_103;
goto block_39;
}
}
}
else
{
uint8_t x_104; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_41);
if (x_104 == 0)
{
return x_41;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_41, 0);
x_106 = lean_ctor_get(x_41, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_41);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
block_27:
{
lean_object* x_18; 
x_18 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_16);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_16);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
block_39:
{
lean_object* x_30; 
x_30 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
lean_ctor_set_tag(x_30, 1);
lean_ctor_set(x_30, 0, x_28);
return x_30;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_28);
x_35 = !lean_is_exclusive(x_30);
if (x_35 == 0)
{
return x_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_30, 0);
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_30);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
else
{
uint8_t x_108; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_108 = !lean_is_exclusive(x_13);
if (x_108 == 0)
{
return x_13;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_13, 0);
x_110 = lean_ctor_get(x_13, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_13);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_1);
x_112 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_113 = lean_ctor_get(x_112, 2);
lean_inc(x_113);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_114 = lean_apply_7(x_113, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_117 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_118 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_117, x_3, x_4, x_5, x_6, x_7, x_8, x_116);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; 
x_119 = lean_ctor_get(x_118, 1);
lean_inc(x_119);
lean_dec(x_118);
x_120 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_115, x_3, x_4, x_5, x_6, x_7, x_8, x_119);
if (lean_obj_tag(x_120) == 0)
{
uint8_t x_121; 
x_121 = !lean_is_exclusive(x_120);
if (x_121 == 0)
{
lean_object* x_122; 
x_122 = lean_ctor_get(x_120, 0);
lean_dec(x_122);
lean_ctor_set(x_120, 0, x_2);
return x_120;
}
else
{
lean_object* x_123; lean_object* x_124; 
x_123 = lean_ctor_get(x_120, 1);
lean_inc(x_123);
lean_dec(x_120);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_2);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
else
{
uint8_t x_125; 
lean_dec(x_2);
x_125 = !lean_is_exclusive(x_120);
if (x_125 == 0)
{
return x_120;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_120, 0);
x_127 = lean_ctor_get(x_120, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_120);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_127);
return x_128;
}
}
}
else
{
uint8_t x_129; 
lean_dec(x_115);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_129 = !lean_is_exclusive(x_118);
if (x_129 == 0)
{
return x_118;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_118, 0);
x_131 = lean_ctor_get(x_118, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_118);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
return x_132;
}
}
}
else
{
uint8_t x_133; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_133 = !lean_is_exclusive(x_114);
if (x_133 == 0)
{
return x_114;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_114, 0);
x_135 = lean_ctor_get(x_114, 1);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_114);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
return x_136;
}
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabImplicitLambdaAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("implicitForall");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabImplicitLambdaAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
x_2 = l_Lean_Elab_Term_elabImplicitLambdaAux___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabImplicitLambdaAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Elab_Term_elabUsingElabFns(x_1, x_12, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
x_16 = l_Lean_mkLambdaFVars___at_Lean_Elab_Term_elabImplicitLambdaAux___spec__1(x_4, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
x_20 = lean_ctor_get(x_9, 0);
lean_inc(x_20);
x_21 = l_Lean_Elab_Term_elabImplicitLambdaAux___closed__2;
x_22 = l_Lean_checkTraceOption(x_20, x_21);
lean_dec(x_20);
if (x_22 == 0)
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_free_object(x_16);
lean_inc(x_18);
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_18);
x_24 = l_Lean_Elab_Term_logTrace(x_21, x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_18);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_18);
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
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_16, 0);
x_34 = lean_ctor_get(x_16, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_16);
x_35 = lean_ctor_get(x_9, 0);
lean_inc(x_35);
x_36 = l_Lean_Elab_Term_elabImplicitLambdaAux___closed__2;
x_37 = l_Lean_checkTraceOption(x_35, x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_34);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; 
lean_inc(x_33);
x_39 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_39, 0, x_33);
x_40 = l_Lean_Elab_Term_logTrace(x_36, x_39, x_5, x_6, x_7, x_8, x_9, x_10, x_34);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_42 = x_40;
} else {
 lean_dec_ref(x_40);
 x_42 = lean_box(0);
}
if (lean_is_scalar(x_42)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_42;
}
lean_ctor_set(x_43, 0, x_33);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_33);
x_44 = lean_ctor_get(x_40, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_40, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_46 = x_40;
} else {
 lean_dec_ref(x_40);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(1, 2, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_48 = !lean_is_exclusive(x_16);
if (x_48 == 0)
{
return x_16;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_16, 0);
x_50 = lean_ctor_get(x_16, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_16);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_52 = !lean_is_exclusive(x_13);
if (x_52 == 0)
{
return x_13;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_13, 0);
x_54 = lean_ctor_get(x_13, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_13);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabImplicitLambdaAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Elab_Term_elabImplicitLambdaAux(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_elabImplicitLambda___main___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_expr_instantiate1(x_1, x_5);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_14 = l_Lean_whnfForall___at_Lean_Elab_Term_useImplicitLambda_x3f___spec__1(x_13, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_array_push(x_2, x_5);
x_18 = l_Lean_Elab_Term_elabImplicitLambda___main(x_3, x_4, x_15, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_16);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabImplicitLambda___main(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_3) == 7)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint64_t x_15; uint8_t x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_3, 2);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_3, sizeof(void*)*3);
x_16 = (uint8_t)((x_15 << 24) >> 61);
x_17 = l_Lean_BinderInfo_isExplicit(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_3);
x_18 = lean_st_ref_take(x_6, x_11);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_19, 4);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_22, x_23);
lean_ctor_set(x_19, 4, x_24);
x_25 = lean_st_ref_set(x_6, x_19, x_20);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = !lean_is_exclusive(x_5);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_28 = lean_ctor_get(x_5, 7);
lean_dec(x_28);
lean_ctor_set(x_5, 7, x_22);
x_29 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_26);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_addMacroScope(x_30, x_12, x_33);
x_36 = lean_box(x_2);
x_37 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabImplicitLambda___main___lambda__1___boxed), 12, 4);
lean_closure_set(x_37, 0, x_14);
lean_closure_set(x_37, 1, x_4);
lean_closure_set(x_37, 2, x_1);
lean_closure_set(x_37, 3, x_36);
x_38 = l_Lean_Elab_Term_withLocalDecl___rarg(x_35, x_16, x_13, x_37, x_5, x_6, x_7, x_8, x_9, x_10, x_34);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_39 = lean_ctor_get(x_5, 0);
x_40 = lean_ctor_get(x_5, 1);
x_41 = lean_ctor_get(x_5, 2);
x_42 = lean_ctor_get(x_5, 3);
x_43 = lean_ctor_get(x_5, 4);
x_44 = lean_ctor_get(x_5, 5);
x_45 = lean_ctor_get(x_5, 6);
x_46 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_47 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
x_48 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 2);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_5);
x_49 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_49, 0, x_39);
lean_ctor_set(x_49, 1, x_40);
lean_ctor_set(x_49, 2, x_41);
lean_ctor_set(x_49, 3, x_42);
lean_ctor_set(x_49, 4, x_43);
lean_ctor_set(x_49, 5, x_44);
lean_ctor_set(x_49, 6, x_45);
lean_ctor_set(x_49, 7, x_22);
lean_ctor_set_uint8(x_49, sizeof(void*)*8, x_46);
lean_ctor_set_uint8(x_49, sizeof(void*)*8 + 1, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*8 + 2, x_48);
x_50 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_26);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_Elab_Term_getCurrMacroScope(x_49, x_6, x_7, x_8, x_9, x_10, x_52);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Lean_addMacroScope(x_51, x_12, x_54);
x_57 = lean_box(x_2);
x_58 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabImplicitLambda___main___lambda__1___boxed), 12, 4);
lean_closure_set(x_58, 0, x_14);
lean_closure_set(x_58, 1, x_4);
lean_closure_set(x_58, 2, x_1);
lean_closure_set(x_58, 3, x_57);
x_59 = l_Lean_Elab_Term_withLocalDecl___rarg(x_56, x_16, x_13, x_58, x_49, x_6, x_7, x_8, x_9, x_10, x_55);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; uint8_t x_78; uint8_t x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_60 = lean_ctor_get(x_19, 0);
x_61 = lean_ctor_get(x_19, 1);
x_62 = lean_ctor_get(x_19, 2);
x_63 = lean_ctor_get(x_19, 3);
x_64 = lean_ctor_get(x_19, 4);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_19);
x_65 = lean_unsigned_to_nat(1u);
x_66 = lean_nat_add(x_64, x_65);
x_67 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_67, 0, x_60);
lean_ctor_set(x_67, 1, x_61);
lean_ctor_set(x_67, 2, x_62);
lean_ctor_set(x_67, 3, x_63);
lean_ctor_set(x_67, 4, x_66);
x_68 = lean_st_ref_set(x_6, x_67, x_20);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = lean_ctor_get(x_5, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_5, 1);
lean_inc(x_71);
x_72 = lean_ctor_get(x_5, 2);
lean_inc(x_72);
x_73 = lean_ctor_get(x_5, 3);
lean_inc(x_73);
x_74 = lean_ctor_get(x_5, 4);
lean_inc(x_74);
x_75 = lean_ctor_get(x_5, 5);
lean_inc(x_75);
x_76 = lean_ctor_get(x_5, 6);
lean_inc(x_76);
x_77 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_78 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
x_79 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 2);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 lean_ctor_release(x_5, 6);
 lean_ctor_release(x_5, 7);
 x_80 = x_5;
} else {
 lean_dec_ref(x_5);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(0, 8, 3);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_70);
lean_ctor_set(x_81, 1, x_71);
lean_ctor_set(x_81, 2, x_72);
lean_ctor_set(x_81, 3, x_73);
lean_ctor_set(x_81, 4, x_74);
lean_ctor_set(x_81, 5, x_75);
lean_ctor_set(x_81, 6, x_76);
lean_ctor_set(x_81, 7, x_64);
lean_ctor_set_uint8(x_81, sizeof(void*)*8, x_77);
lean_ctor_set_uint8(x_81, sizeof(void*)*8 + 1, x_78);
lean_ctor_set_uint8(x_81, sizeof(void*)*8 + 2, x_79);
x_82 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_69);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = l_Lean_Elab_Term_getCurrMacroScope(x_81, x_6, x_7, x_8, x_9, x_10, x_84);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_Lean_addMacroScope(x_83, x_12, x_86);
x_89 = lean_box(x_2);
x_90 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabImplicitLambda___main___lambda__1___boxed), 12, 4);
lean_closure_set(x_90, 0, x_14);
lean_closure_set(x_90, 1, x_4);
lean_closure_set(x_90, 2, x_1);
lean_closure_set(x_90, 3, x_89);
x_91 = l_Lean_Elab_Term_withLocalDecl___rarg(x_88, x_16, x_13, x_90, x_81, x_6, x_7, x_8, x_9, x_10, x_87);
return x_91;
}
}
else
{
lean_object* x_92; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_92 = l_Lean_Elab_Term_elabImplicitLambdaAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_92;
}
}
else
{
lean_object* x_93; 
x_93 = l_Lean_Elab_Term_elabImplicitLambdaAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_93;
}
}
}
lean_object* l_Lean_Elab_Term_elabImplicitLambda___main___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l_Lean_Elab_Term_elabImplicitLambda___main___lambda__1(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_elabImplicitLambda___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Elab_Term_elabImplicitLambda___main(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_elabImplicitLambda(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_elabImplicitLambda___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_elabImplicitLambda___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Elab_Term_elabImplicitLambda(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__1___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__1___rarg), 1, 0);
return x_7;
}
}
lean_object* _init_l_Lean_Elab_Term_elabTermAux___main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_MessageData_coeOfOptExpr___closed__1;
x_2 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__8;
x_3 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabTermAux___main(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_st_ref_take(x_6, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_13, 4);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_16, x_17);
lean_ctor_set(x_13, 4, x_18);
x_19 = lean_st_ref_set(x_6, x_13, x_14);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = !lean_is_exclusive(x_5);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_22 = lean_ctor_get(x_5, 0);
x_23 = lean_ctor_get(x_5, 1);
x_24 = lean_ctor_get(x_5, 2);
x_25 = lean_ctor_get(x_5, 3);
x_26 = lean_ctor_get(x_5, 4);
x_27 = lean_ctor_get(x_5, 5);
x_28 = lean_ctor_get(x_5, 6);
x_29 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_30 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
x_31 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 2);
x_32 = lean_ctor_get(x_5, 7);
lean_dec(x_32);
lean_inc(x_16);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_ctor_set(x_5, 7, x_16);
x_33 = lean_ctor_get(x_9, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_9, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_9, 2);
lean_inc(x_35);
x_36 = lean_ctor_get(x_9, 3);
lean_inc(x_36);
x_37 = lean_nat_dec_eq(x_34, x_35);
if (x_37 == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_9);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_65; lean_object* x_66; lean_object* x_139; uint8_t x_140; 
x_39 = lean_ctor_get(x_9, 3);
lean_dec(x_39);
x_40 = lean_ctor_get(x_9, 2);
lean_dec(x_40);
x_41 = lean_ctor_get(x_9, 1);
lean_dec(x_41);
x_42 = lean_ctor_get(x_9, 0);
lean_dec(x_42);
x_43 = lean_nat_add(x_34, x_17);
lean_dec(x_34);
lean_inc(x_35);
lean_inc(x_43);
lean_inc(x_33);
lean_ctor_set(x_9, 1, x_43);
x_139 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__3;
x_140 = l_Lean_checkTraceOption(x_33, x_139);
lean_dec(x_33);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_141 = lean_st_ref_get(x_10, x_20);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
lean_dec(x_141);
x_144 = lean_ctor_get(x_142, 0);
lean_inc(x_144);
lean_dec(x_142);
x_65 = x_144;
x_66 = x_143;
goto block_138;
}
else
{
lean_object* x_145; 
lean_inc(x_4);
x_145 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_145, 0, x_4);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = l_Lean_Elab_Term_elabTermAux___main___closed__1;
x_147 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_145);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_148 = l_Lean_Elab_Term_logTrace(x_139, x_147, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_149 = lean_ctor_get(x_148, 1);
lean_inc(x_149);
lean_dec(x_148);
x_150 = lean_st_ref_get(x_10, x_149);
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
lean_dec(x_150);
x_153 = lean_ctor_get(x_151, 0);
lean_inc(x_153);
lean_dec(x_151);
x_65 = x_153;
x_66 = x_152;
goto block_138;
}
else
{
uint8_t x_154; 
lean_dec(x_9);
lean_dec(x_43);
lean_dec(x_35);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_154 = !lean_is_exclusive(x_148);
if (x_154 == 0)
{
return x_148;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_148, 0);
x_156 = lean_ctor_get(x_148, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_148);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
return x_157;
}
}
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_158 = lean_ctor_get(x_1, 0);
lean_inc(x_158);
x_159 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_159, 0, x_158);
x_160 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__8;
x_161 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
x_162 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_145);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_163 = l_Lean_Elab_Term_logTrace(x_139, x_162, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_164 = lean_ctor_get(x_163, 1);
lean_inc(x_164);
lean_dec(x_163);
x_165 = lean_st_ref_get(x_10, x_164);
x_166 = lean_ctor_get(x_165, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_165, 1);
lean_inc(x_167);
lean_dec(x_165);
x_168 = lean_ctor_get(x_166, 0);
lean_inc(x_168);
lean_dec(x_166);
x_65 = x_168;
x_66 = x_167;
goto block_138;
}
else
{
uint8_t x_169; 
lean_dec(x_9);
lean_dec(x_43);
lean_dec(x_35);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_169 = !lean_is_exclusive(x_163);
if (x_169 == 0)
{
return x_163;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_163, 0);
x_171 = lean_ctor_get(x_163, 1);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_163);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
return x_172;
}
}
}
}
block_64:
{
if (lean_obj_tag(x_44) == 0)
{
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
if (x_3 == 0)
{
lean_object* x_46; 
x_46 = l_Lean_Elab_Term_elabUsingElabFns(x_4, x_1, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_45);
return x_46;
}
else
{
lean_object* x_47; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_4);
x_47 = l_Lean_Elab_Term_useImplicitLambda_x3f(x_4, x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_Elab_Term_elabUsingElabFns(x_4, x_1, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_49);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_1);
x_51 = lean_ctor_get(x_47, 1);
lean_inc(x_51);
lean_dec(x_47);
x_52 = lean_ctor_get(x_48, 0);
lean_inc(x_52);
lean_dec(x_48);
x_53 = l_Array_empty___closed__1;
x_54 = l_Lean_Elab_Term_elabImplicitLambda___main(x_4, x_2, x_52, x_53, x_5, x_6, x_7, x_8, x_9, x_10, x_51);
return x_54;
}
}
else
{
uint8_t x_55; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_47);
if (x_55 == 0)
{
return x_47;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_47, 0);
x_57 = lean_ctor_get(x_47, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_47);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_5);
x_59 = lean_ctor_get(x_44, 0);
lean_inc(x_59);
lean_dec(x_44);
lean_inc(x_59);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_4);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_28);
x_62 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_62, 0, x_22);
lean_ctor_set(x_62, 1, x_23);
lean_ctor_set(x_62, 2, x_24);
lean_ctor_set(x_62, 3, x_25);
lean_ctor_set(x_62, 4, x_26);
lean_ctor_set(x_62, 5, x_27);
lean_ctor_set(x_62, 6, x_61);
lean_ctor_set(x_62, 7, x_16);
lean_ctor_set_uint8(x_62, sizeof(void*)*8, x_29);
lean_ctor_set_uint8(x_62, sizeof(void*)*8 + 1, x_30);
lean_ctor_set_uint8(x_62, sizeof(void*)*8 + 2, x_31);
x_4 = x_59;
x_5 = x_62;
x_11 = x_45;
goto _start;
}
}
block_138:
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_67 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_st_ref_get(x_10, x_69);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_ctor_get(x_71, 0);
lean_inc(x_73);
lean_dec(x_71);
x_74 = lean_st_ref_get(x_6, x_72);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_ctor_get(x_75, 4);
lean_inc(x_77);
lean_dec(x_75);
x_78 = lean_environment_main_module(x_73);
x_79 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_68);
lean_ctor_set(x_79, 2, x_43);
lean_ctor_set(x_79, 3, x_35);
lean_inc(x_4);
x_80 = l_Lean_Elab_getMacros(x_65, x_4, x_79, x_77);
lean_dec(x_65);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_st_ref_take(x_6, x_76);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = !lean_is_exclusive(x_84);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_87 = lean_ctor_get(x_84, 4);
lean_dec(x_87);
lean_ctor_set(x_84, 4, x_82);
x_88 = lean_st_ref_set(x_6, x_84, x_85);
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_81);
x_44 = x_90;
x_45 = x_89;
goto block_64;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_91 = lean_ctor_get(x_84, 0);
x_92 = lean_ctor_get(x_84, 1);
x_93 = lean_ctor_get(x_84, 2);
x_94 = lean_ctor_get(x_84, 3);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_84);
x_95 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_95, 0, x_91);
lean_ctor_set(x_95, 1, x_92);
lean_ctor_set(x_95, 2, x_93);
lean_ctor_set(x_95, 3, x_94);
lean_ctor_set(x_95, 4, x_82);
x_96 = lean_st_ref_set(x_6, x_95, x_85);
x_97 = lean_ctor_get(x_96, 1);
lean_inc(x_97);
lean_dec(x_96);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_81);
x_44 = x_98;
x_45 = x_97;
goto block_64;
}
}
else
{
lean_object* x_99; 
x_99 = lean_ctor_get(x_80, 0);
lean_inc(x_99);
lean_dec(x_80);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_102 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_103 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_103, 0, x_102);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_104 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_100, x_103, x_5, x_6, x_7, x_8, x_9, x_10, x_76);
lean_dec(x_100);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
if (lean_obj_tag(x_105) == 0)
{
uint8_t x_106; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_106 = !lean_is_exclusive(x_104);
if (x_106 == 0)
{
lean_object* x_107; 
x_107 = lean_ctor_get(x_104, 0);
lean_dec(x_107);
return x_104;
}
else
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_104, 1);
lean_inc(x_108);
lean_dec(x_104);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_105);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
else
{
uint8_t x_110; 
x_110 = !lean_is_exclusive(x_104);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_111 = lean_ctor_get(x_104, 1);
x_112 = lean_ctor_get(x_104, 0);
lean_dec(x_112);
x_113 = lean_ctor_get(x_105, 0);
lean_inc(x_113);
x_114 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_115 = lean_nat_dec_eq(x_114, x_113);
lean_dec(x_113);
if (x_115 == 0)
{
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_104;
}
else
{
lean_object* x_116; 
lean_free_object(x_104);
lean_dec(x_105);
x_116 = lean_box(0);
x_44 = x_116;
x_45 = x_111;
goto block_64;
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_117 = lean_ctor_get(x_104, 1);
lean_inc(x_117);
lean_dec(x_104);
x_118 = lean_ctor_get(x_105, 0);
lean_inc(x_118);
x_119 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_120 = lean_nat_dec_eq(x_119, x_118);
lean_dec(x_118);
if (x_120 == 0)
{
lean_object* x_121; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_105);
lean_ctor_set(x_121, 1, x_117);
return x_121;
}
else
{
lean_object* x_122; 
lean_dec(x_105);
x_122 = lean_box(0);
x_44 = x_122;
x_45 = x_117;
goto block_64;
}
}
}
}
else
{
lean_object* x_123; uint8_t x_124; 
x_123 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__1___rarg(x_76);
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_125 = lean_ctor_get(x_123, 0);
x_126 = lean_ctor_get(x_123, 1);
x_127 = lean_ctor_get(x_125, 0);
lean_inc(x_127);
x_128 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_129 = lean_nat_dec_eq(x_128, x_127);
lean_dec(x_127);
if (x_129 == 0)
{
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_123;
}
else
{
lean_object* x_130; 
lean_free_object(x_123);
lean_dec(x_125);
x_130 = lean_box(0);
x_44 = x_130;
x_45 = x_126;
goto block_64;
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; 
x_131 = lean_ctor_get(x_123, 0);
x_132 = lean_ctor_get(x_123, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_123);
x_133 = lean_ctor_get(x_131, 0);
lean_inc(x_133);
x_134 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_135 = lean_nat_dec_eq(x_134, x_133);
lean_dec(x_133);
if (x_135 == 0)
{
lean_object* x_136; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_131);
lean_ctor_set(x_136, 1, x_132);
return x_136;
}
else
{
lean_object* x_137; 
lean_dec(x_131);
x_137 = lean_box(0);
x_44 = x_137;
x_45 = x_132;
goto block_64;
}
}
}
}
}
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_196; lean_object* x_197; lean_object* x_253; uint8_t x_254; 
lean_dec(x_9);
x_173 = lean_nat_add(x_34, x_17);
lean_dec(x_34);
lean_inc(x_35);
lean_inc(x_173);
lean_inc(x_33);
x_174 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_174, 0, x_33);
lean_ctor_set(x_174, 1, x_173);
lean_ctor_set(x_174, 2, x_35);
lean_ctor_set(x_174, 3, x_36);
x_253 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__3;
x_254 = l_Lean_checkTraceOption(x_33, x_253);
lean_dec(x_33);
if (x_254 == 0)
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_255 = lean_st_ref_get(x_10, x_20);
x_256 = lean_ctor_get(x_255, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_255, 1);
lean_inc(x_257);
lean_dec(x_255);
x_258 = lean_ctor_get(x_256, 0);
lean_inc(x_258);
lean_dec(x_256);
x_196 = x_258;
x_197 = x_257;
goto block_252;
}
else
{
lean_object* x_259; 
lean_inc(x_4);
x_259 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_259, 0, x_4);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_260 = l_Lean_Elab_Term_elabTermAux___main___closed__1;
x_261 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_259);
lean_inc(x_10);
lean_inc(x_174);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_262 = l_Lean_Elab_Term_logTrace(x_253, x_261, x_5, x_6, x_7, x_8, x_174, x_10, x_20);
if (lean_obj_tag(x_262) == 0)
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
x_263 = lean_ctor_get(x_262, 1);
lean_inc(x_263);
lean_dec(x_262);
x_264 = lean_st_ref_get(x_10, x_263);
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
lean_dec(x_264);
x_267 = lean_ctor_get(x_265, 0);
lean_inc(x_267);
lean_dec(x_265);
x_196 = x_267;
x_197 = x_266;
goto block_252;
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
lean_dec(x_174);
lean_dec(x_173);
lean_dec(x_35);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_268 = lean_ctor_get(x_262, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_262, 1);
lean_inc(x_269);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 lean_ctor_release(x_262, 1);
 x_270 = x_262;
} else {
 lean_dec_ref(x_262);
 x_270 = lean_box(0);
}
if (lean_is_scalar(x_270)) {
 x_271 = lean_alloc_ctor(1, 2, 0);
} else {
 x_271 = x_270;
}
lean_ctor_set(x_271, 0, x_268);
lean_ctor_set(x_271, 1, x_269);
return x_271;
}
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_272 = lean_ctor_get(x_1, 0);
lean_inc(x_272);
x_273 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_273, 0, x_272);
x_274 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__8;
x_275 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_275, 0, x_273);
lean_ctor_set(x_275, 1, x_274);
x_276 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_276, 0, x_275);
lean_ctor_set(x_276, 1, x_259);
lean_inc(x_10);
lean_inc(x_174);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_277 = l_Lean_Elab_Term_logTrace(x_253, x_276, x_5, x_6, x_7, x_8, x_174, x_10, x_20);
if (lean_obj_tag(x_277) == 0)
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_278 = lean_ctor_get(x_277, 1);
lean_inc(x_278);
lean_dec(x_277);
x_279 = lean_st_ref_get(x_10, x_278);
x_280 = lean_ctor_get(x_279, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_279, 1);
lean_inc(x_281);
lean_dec(x_279);
x_282 = lean_ctor_get(x_280, 0);
lean_inc(x_282);
lean_dec(x_280);
x_196 = x_282;
x_197 = x_281;
goto block_252;
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; 
lean_dec(x_174);
lean_dec(x_173);
lean_dec(x_35);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_283 = lean_ctor_get(x_277, 0);
lean_inc(x_283);
x_284 = lean_ctor_get(x_277, 1);
lean_inc(x_284);
if (lean_is_exclusive(x_277)) {
 lean_ctor_release(x_277, 0);
 lean_ctor_release(x_277, 1);
 x_285 = x_277;
} else {
 lean_dec_ref(x_277);
 x_285 = lean_box(0);
}
if (lean_is_scalar(x_285)) {
 x_286 = lean_alloc_ctor(1, 2, 0);
} else {
 x_286 = x_285;
}
lean_ctor_set(x_286, 0, x_283);
lean_ctor_set(x_286, 1, x_284);
return x_286;
}
}
}
block_195:
{
if (lean_obj_tag(x_175) == 0)
{
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
if (x_3 == 0)
{
lean_object* x_177; 
x_177 = l_Lean_Elab_Term_elabUsingElabFns(x_4, x_1, x_2, x_5, x_6, x_7, x_8, x_174, x_10, x_176);
return x_177;
}
else
{
lean_object* x_178; 
lean_inc(x_10);
lean_inc(x_174);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
lean_inc(x_4);
x_178 = l_Lean_Elab_Term_useImplicitLambda_x3f(x_4, x_1, x_5, x_6, x_7, x_8, x_174, x_10, x_176);
if (lean_obj_tag(x_178) == 0)
{
lean_object* x_179; 
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; lean_object* x_181; 
x_180 = lean_ctor_get(x_178, 1);
lean_inc(x_180);
lean_dec(x_178);
x_181 = l_Lean_Elab_Term_elabUsingElabFns(x_4, x_1, x_2, x_5, x_6, x_7, x_8, x_174, x_10, x_180);
return x_181;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_1);
x_182 = lean_ctor_get(x_178, 1);
lean_inc(x_182);
lean_dec(x_178);
x_183 = lean_ctor_get(x_179, 0);
lean_inc(x_183);
lean_dec(x_179);
x_184 = l_Array_empty___closed__1;
x_185 = l_Lean_Elab_Term_elabImplicitLambda___main(x_4, x_2, x_183, x_184, x_5, x_6, x_7, x_8, x_174, x_10, x_182);
return x_185;
}
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
lean_dec(x_174);
lean_dec(x_5);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_186 = lean_ctor_get(x_178, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_178, 1);
lean_inc(x_187);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 lean_ctor_release(x_178, 1);
 x_188 = x_178;
} else {
 lean_dec_ref(x_178);
 x_188 = lean_box(0);
}
if (lean_is_scalar(x_188)) {
 x_189 = lean_alloc_ctor(1, 2, 0);
} else {
 x_189 = x_188;
}
lean_ctor_set(x_189, 0, x_186);
lean_ctor_set(x_189, 1, x_187);
return x_189;
}
}
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
lean_dec(x_5);
x_190 = lean_ctor_get(x_175, 0);
lean_inc(x_190);
lean_dec(x_175);
lean_inc(x_190);
x_191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_191, 0, x_4);
lean_ctor_set(x_191, 1, x_190);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_28);
x_193 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_193, 0, x_22);
lean_ctor_set(x_193, 1, x_23);
lean_ctor_set(x_193, 2, x_24);
lean_ctor_set(x_193, 3, x_25);
lean_ctor_set(x_193, 4, x_26);
lean_ctor_set(x_193, 5, x_27);
lean_ctor_set(x_193, 6, x_192);
lean_ctor_set(x_193, 7, x_16);
lean_ctor_set_uint8(x_193, sizeof(void*)*8, x_29);
lean_ctor_set_uint8(x_193, sizeof(void*)*8 + 1, x_30);
lean_ctor_set_uint8(x_193, sizeof(void*)*8 + 2, x_31);
x_4 = x_190;
x_5 = x_193;
x_9 = x_174;
x_11 = x_176;
goto _start;
}
}
block_252:
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_198 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_174, x_10, x_197);
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
lean_dec(x_198);
x_201 = lean_st_ref_get(x_10, x_200);
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_201, 1);
lean_inc(x_203);
lean_dec(x_201);
x_204 = lean_ctor_get(x_202, 0);
lean_inc(x_204);
lean_dec(x_202);
x_205 = lean_st_ref_get(x_6, x_203);
x_206 = lean_ctor_get(x_205, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_205, 1);
lean_inc(x_207);
lean_dec(x_205);
x_208 = lean_ctor_get(x_206, 4);
lean_inc(x_208);
lean_dec(x_206);
x_209 = lean_environment_main_module(x_204);
x_210 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_199);
lean_ctor_set(x_210, 2, x_173);
lean_ctor_set(x_210, 3, x_35);
lean_inc(x_4);
x_211 = l_Lean_Elab_getMacros(x_196, x_4, x_210, x_208);
lean_dec(x_196);
if (lean_obj_tag(x_211) == 0)
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
lean_dec(x_211);
x_214 = lean_st_ref_take(x_6, x_207);
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_217 = lean_ctor_get(x_215, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_215, 1);
lean_inc(x_218);
x_219 = lean_ctor_get(x_215, 2);
lean_inc(x_219);
x_220 = lean_ctor_get(x_215, 3);
lean_inc(x_220);
if (lean_is_exclusive(x_215)) {
 lean_ctor_release(x_215, 0);
 lean_ctor_release(x_215, 1);
 lean_ctor_release(x_215, 2);
 lean_ctor_release(x_215, 3);
 lean_ctor_release(x_215, 4);
 x_221 = x_215;
} else {
 lean_dec_ref(x_215);
 x_221 = lean_box(0);
}
if (lean_is_scalar(x_221)) {
 x_222 = lean_alloc_ctor(0, 5, 0);
} else {
 x_222 = x_221;
}
lean_ctor_set(x_222, 0, x_217);
lean_ctor_set(x_222, 1, x_218);
lean_ctor_set(x_222, 2, x_219);
lean_ctor_set(x_222, 3, x_220);
lean_ctor_set(x_222, 4, x_213);
x_223 = lean_st_ref_set(x_6, x_222, x_216);
x_224 = lean_ctor_get(x_223, 1);
lean_inc(x_224);
lean_dec(x_223);
x_225 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_225, 0, x_212);
x_175 = x_225;
x_176 = x_224;
goto block_195;
}
else
{
lean_object* x_226; 
x_226 = lean_ctor_get(x_211, 0);
lean_inc(x_226);
lean_dec(x_211);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_227 = lean_ctor_get(x_226, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_226, 1);
lean_inc(x_228);
lean_dec(x_226);
x_229 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_229, 0, x_228);
x_230 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_230, 0, x_229);
lean_inc(x_10);
lean_inc(x_174);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_231 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_227, x_230, x_5, x_6, x_7, x_8, x_174, x_10, x_207);
lean_dec(x_227);
x_232 = lean_ctor_get(x_231, 0);
lean_inc(x_232);
if (lean_obj_tag(x_232) == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
lean_dec(x_174);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_233 = lean_ctor_get(x_231, 1);
lean_inc(x_233);
if (lean_is_exclusive(x_231)) {
 lean_ctor_release(x_231, 0);
 lean_ctor_release(x_231, 1);
 x_234 = x_231;
} else {
 lean_dec_ref(x_231);
 x_234 = lean_box(0);
}
if (lean_is_scalar(x_234)) {
 x_235 = lean_alloc_ctor(1, 2, 0);
} else {
 x_235 = x_234;
}
lean_ctor_set(x_235, 0, x_232);
lean_ctor_set(x_235, 1, x_233);
return x_235;
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; uint8_t x_240; 
x_236 = lean_ctor_get(x_231, 1);
lean_inc(x_236);
if (lean_is_exclusive(x_231)) {
 lean_ctor_release(x_231, 0);
 lean_ctor_release(x_231, 1);
 x_237 = x_231;
} else {
 lean_dec_ref(x_231);
 x_237 = lean_box(0);
}
x_238 = lean_ctor_get(x_232, 0);
lean_inc(x_238);
x_239 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_240 = lean_nat_dec_eq(x_239, x_238);
lean_dec(x_238);
if (x_240 == 0)
{
lean_object* x_241; 
lean_dec(x_174);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
if (lean_is_scalar(x_237)) {
 x_241 = lean_alloc_ctor(1, 2, 0);
} else {
 x_241 = x_237;
}
lean_ctor_set(x_241, 0, x_232);
lean_ctor_set(x_241, 1, x_236);
return x_241;
}
else
{
lean_object* x_242; 
lean_dec(x_237);
lean_dec(x_232);
x_242 = lean_box(0);
x_175 = x_242;
x_176 = x_236;
goto block_195;
}
}
}
else
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; uint8_t x_249; 
x_243 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__1___rarg(x_207);
x_244 = lean_ctor_get(x_243, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_243, 1);
lean_inc(x_245);
if (lean_is_exclusive(x_243)) {
 lean_ctor_release(x_243, 0);
 lean_ctor_release(x_243, 1);
 x_246 = x_243;
} else {
 lean_dec_ref(x_243);
 x_246 = lean_box(0);
}
x_247 = lean_ctor_get(x_244, 0);
lean_inc(x_247);
x_248 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_249 = lean_nat_dec_eq(x_248, x_247);
lean_dec(x_247);
if (x_249 == 0)
{
lean_object* x_250; 
lean_dec(x_174);
lean_dec(x_5);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
if (lean_is_scalar(x_246)) {
 x_250 = lean_alloc_ctor(1, 2, 0);
} else {
 x_250 = x_246;
}
lean_ctor_set(x_250, 0, x_244);
lean_ctor_set(x_250, 1, x_245);
return x_250;
}
else
{
lean_object* x_251; 
lean_dec(x_246);
lean_dec(x_244);
x_251 = lean_box(0);
x_175 = x_251;
x_176 = x_245;
goto block_195;
}
}
}
}
}
}
else
{
lean_object* x_287; lean_object* x_288; uint8_t x_289; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_4);
lean_dec(x_1);
x_287 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_288 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_287, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
x_289 = !lean_is_exclusive(x_288);
if (x_289 == 0)
{
return x_288;
}
else
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; 
x_290 = lean_ctor_get(x_288, 0);
x_291 = lean_ctor_get(x_288, 1);
lean_inc(x_291);
lean_inc(x_290);
lean_dec(x_288);
x_292 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_292, 0, x_290);
lean_ctor_set(x_292, 1, x_291);
return x_292;
}
}
}
else
{
lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; uint8_t x_300; uint8_t x_301; uint8_t x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; uint8_t x_308; 
x_293 = lean_ctor_get(x_5, 0);
x_294 = lean_ctor_get(x_5, 1);
x_295 = lean_ctor_get(x_5, 2);
x_296 = lean_ctor_get(x_5, 3);
x_297 = lean_ctor_get(x_5, 4);
x_298 = lean_ctor_get(x_5, 5);
x_299 = lean_ctor_get(x_5, 6);
x_300 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_301 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
x_302 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 2);
lean_inc(x_299);
lean_inc(x_298);
lean_inc(x_297);
lean_inc(x_296);
lean_inc(x_295);
lean_inc(x_294);
lean_inc(x_293);
lean_dec(x_5);
lean_inc(x_16);
lean_inc(x_299);
lean_inc(x_298);
lean_inc(x_297);
lean_inc(x_296);
lean_inc(x_295);
lean_inc(x_294);
lean_inc(x_293);
x_303 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_303, 0, x_293);
lean_ctor_set(x_303, 1, x_294);
lean_ctor_set(x_303, 2, x_295);
lean_ctor_set(x_303, 3, x_296);
lean_ctor_set(x_303, 4, x_297);
lean_ctor_set(x_303, 5, x_298);
lean_ctor_set(x_303, 6, x_299);
lean_ctor_set(x_303, 7, x_16);
lean_ctor_set_uint8(x_303, sizeof(void*)*8, x_300);
lean_ctor_set_uint8(x_303, sizeof(void*)*8 + 1, x_301);
lean_ctor_set_uint8(x_303, sizeof(void*)*8 + 2, x_302);
x_304 = lean_ctor_get(x_9, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_9, 1);
lean_inc(x_305);
x_306 = lean_ctor_get(x_9, 2);
lean_inc(x_306);
x_307 = lean_ctor_get(x_9, 3);
lean_inc(x_307);
x_308 = lean_nat_dec_eq(x_305, x_306);
if (x_308 == 0)
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_333; lean_object* x_334; lean_object* x_390; uint8_t x_391; 
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 lean_ctor_release(x_9, 2);
 lean_ctor_release(x_9, 3);
 x_309 = x_9;
} else {
 lean_dec_ref(x_9);
 x_309 = lean_box(0);
}
x_310 = lean_nat_add(x_305, x_17);
lean_dec(x_305);
lean_inc(x_306);
lean_inc(x_310);
lean_inc(x_304);
if (lean_is_scalar(x_309)) {
 x_311 = lean_alloc_ctor(0, 4, 0);
} else {
 x_311 = x_309;
}
lean_ctor_set(x_311, 0, x_304);
lean_ctor_set(x_311, 1, x_310);
lean_ctor_set(x_311, 2, x_306);
lean_ctor_set(x_311, 3, x_307);
x_390 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__3;
x_391 = l_Lean_checkTraceOption(x_304, x_390);
lean_dec(x_304);
if (x_391 == 0)
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_392 = lean_st_ref_get(x_10, x_20);
x_393 = lean_ctor_get(x_392, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_392, 1);
lean_inc(x_394);
lean_dec(x_392);
x_395 = lean_ctor_get(x_393, 0);
lean_inc(x_395);
lean_dec(x_393);
x_333 = x_395;
x_334 = x_394;
goto block_389;
}
else
{
lean_object* x_396; 
lean_inc(x_4);
x_396 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_396, 0, x_4);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; 
x_397 = l_Lean_Elab_Term_elabTermAux___main___closed__1;
x_398 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_398, 0, x_397);
lean_ctor_set(x_398, 1, x_396);
lean_inc(x_10);
lean_inc(x_311);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_303);
x_399 = l_Lean_Elab_Term_logTrace(x_390, x_398, x_303, x_6, x_7, x_8, x_311, x_10, x_20);
if (lean_obj_tag(x_399) == 0)
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; 
x_400 = lean_ctor_get(x_399, 1);
lean_inc(x_400);
lean_dec(x_399);
x_401 = lean_st_ref_get(x_10, x_400);
x_402 = lean_ctor_get(x_401, 0);
lean_inc(x_402);
x_403 = lean_ctor_get(x_401, 1);
lean_inc(x_403);
lean_dec(x_401);
x_404 = lean_ctor_get(x_402, 0);
lean_inc(x_404);
lean_dec(x_402);
x_333 = x_404;
x_334 = x_403;
goto block_389;
}
else
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; 
lean_dec(x_311);
lean_dec(x_310);
lean_dec(x_306);
lean_dec(x_303);
lean_dec(x_299);
lean_dec(x_298);
lean_dec(x_297);
lean_dec(x_296);
lean_dec(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_405 = lean_ctor_get(x_399, 0);
lean_inc(x_405);
x_406 = lean_ctor_get(x_399, 1);
lean_inc(x_406);
if (lean_is_exclusive(x_399)) {
 lean_ctor_release(x_399, 0);
 lean_ctor_release(x_399, 1);
 x_407 = x_399;
} else {
 lean_dec_ref(x_399);
 x_407 = lean_box(0);
}
if (lean_is_scalar(x_407)) {
 x_408 = lean_alloc_ctor(1, 2, 0);
} else {
 x_408 = x_407;
}
lean_ctor_set(x_408, 0, x_405);
lean_ctor_set(x_408, 1, x_406);
return x_408;
}
}
else
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; 
x_409 = lean_ctor_get(x_1, 0);
lean_inc(x_409);
x_410 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_410, 0, x_409);
x_411 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__8;
x_412 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_412, 0, x_410);
lean_ctor_set(x_412, 1, x_411);
x_413 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_413, 0, x_412);
lean_ctor_set(x_413, 1, x_396);
lean_inc(x_10);
lean_inc(x_311);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_303);
x_414 = l_Lean_Elab_Term_logTrace(x_390, x_413, x_303, x_6, x_7, x_8, x_311, x_10, x_20);
if (lean_obj_tag(x_414) == 0)
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; 
x_415 = lean_ctor_get(x_414, 1);
lean_inc(x_415);
lean_dec(x_414);
x_416 = lean_st_ref_get(x_10, x_415);
x_417 = lean_ctor_get(x_416, 0);
lean_inc(x_417);
x_418 = lean_ctor_get(x_416, 1);
lean_inc(x_418);
lean_dec(x_416);
x_419 = lean_ctor_get(x_417, 0);
lean_inc(x_419);
lean_dec(x_417);
x_333 = x_419;
x_334 = x_418;
goto block_389;
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; 
lean_dec(x_311);
lean_dec(x_310);
lean_dec(x_306);
lean_dec(x_303);
lean_dec(x_299);
lean_dec(x_298);
lean_dec(x_297);
lean_dec(x_296);
lean_dec(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_420 = lean_ctor_get(x_414, 0);
lean_inc(x_420);
x_421 = lean_ctor_get(x_414, 1);
lean_inc(x_421);
if (lean_is_exclusive(x_414)) {
 lean_ctor_release(x_414, 0);
 lean_ctor_release(x_414, 1);
 x_422 = x_414;
} else {
 lean_dec_ref(x_414);
 x_422 = lean_box(0);
}
if (lean_is_scalar(x_422)) {
 x_423 = lean_alloc_ctor(1, 2, 0);
} else {
 x_423 = x_422;
}
lean_ctor_set(x_423, 0, x_420);
lean_ctor_set(x_423, 1, x_421);
return x_423;
}
}
}
block_332:
{
if (lean_obj_tag(x_312) == 0)
{
lean_dec(x_299);
lean_dec(x_298);
lean_dec(x_297);
lean_dec(x_296);
lean_dec(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_16);
if (x_3 == 0)
{
lean_object* x_314; 
x_314 = l_Lean_Elab_Term_elabUsingElabFns(x_4, x_1, x_2, x_303, x_6, x_7, x_8, x_311, x_10, x_313);
return x_314;
}
else
{
lean_object* x_315; 
lean_inc(x_10);
lean_inc(x_311);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_303);
lean_inc(x_1);
lean_inc(x_4);
x_315 = l_Lean_Elab_Term_useImplicitLambda_x3f(x_4, x_1, x_303, x_6, x_7, x_8, x_311, x_10, x_313);
if (lean_obj_tag(x_315) == 0)
{
lean_object* x_316; 
x_316 = lean_ctor_get(x_315, 0);
lean_inc(x_316);
if (lean_obj_tag(x_316) == 0)
{
lean_object* x_317; lean_object* x_318; 
x_317 = lean_ctor_get(x_315, 1);
lean_inc(x_317);
lean_dec(x_315);
x_318 = l_Lean_Elab_Term_elabUsingElabFns(x_4, x_1, x_2, x_303, x_6, x_7, x_8, x_311, x_10, x_317);
return x_318;
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; 
lean_dec(x_1);
x_319 = lean_ctor_get(x_315, 1);
lean_inc(x_319);
lean_dec(x_315);
x_320 = lean_ctor_get(x_316, 0);
lean_inc(x_320);
lean_dec(x_316);
x_321 = l_Array_empty___closed__1;
x_322 = l_Lean_Elab_Term_elabImplicitLambda___main(x_4, x_2, x_320, x_321, x_303, x_6, x_7, x_8, x_311, x_10, x_319);
return x_322;
}
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; 
lean_dec(x_311);
lean_dec(x_303);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_323 = lean_ctor_get(x_315, 0);
lean_inc(x_323);
x_324 = lean_ctor_get(x_315, 1);
lean_inc(x_324);
if (lean_is_exclusive(x_315)) {
 lean_ctor_release(x_315, 0);
 lean_ctor_release(x_315, 1);
 x_325 = x_315;
} else {
 lean_dec_ref(x_315);
 x_325 = lean_box(0);
}
if (lean_is_scalar(x_325)) {
 x_326 = lean_alloc_ctor(1, 2, 0);
} else {
 x_326 = x_325;
}
lean_ctor_set(x_326, 0, x_323);
lean_ctor_set(x_326, 1, x_324);
return x_326;
}
}
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; 
lean_dec(x_303);
x_327 = lean_ctor_get(x_312, 0);
lean_inc(x_327);
lean_dec(x_312);
lean_inc(x_327);
x_328 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_328, 0, x_4);
lean_ctor_set(x_328, 1, x_327);
x_329 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_329, 0, x_328);
lean_ctor_set(x_329, 1, x_299);
x_330 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_330, 0, x_293);
lean_ctor_set(x_330, 1, x_294);
lean_ctor_set(x_330, 2, x_295);
lean_ctor_set(x_330, 3, x_296);
lean_ctor_set(x_330, 4, x_297);
lean_ctor_set(x_330, 5, x_298);
lean_ctor_set(x_330, 6, x_329);
lean_ctor_set(x_330, 7, x_16);
lean_ctor_set_uint8(x_330, sizeof(void*)*8, x_300);
lean_ctor_set_uint8(x_330, sizeof(void*)*8 + 1, x_301);
lean_ctor_set_uint8(x_330, sizeof(void*)*8 + 2, x_302);
x_4 = x_327;
x_5 = x_330;
x_9 = x_311;
x_11 = x_313;
goto _start;
}
}
block_389:
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_335 = l_Lean_Elab_Term_getCurrMacroScope(x_303, x_6, x_7, x_8, x_311, x_10, x_334);
x_336 = lean_ctor_get(x_335, 0);
lean_inc(x_336);
x_337 = lean_ctor_get(x_335, 1);
lean_inc(x_337);
lean_dec(x_335);
x_338 = lean_st_ref_get(x_10, x_337);
x_339 = lean_ctor_get(x_338, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_338, 1);
lean_inc(x_340);
lean_dec(x_338);
x_341 = lean_ctor_get(x_339, 0);
lean_inc(x_341);
lean_dec(x_339);
x_342 = lean_st_ref_get(x_6, x_340);
x_343 = lean_ctor_get(x_342, 0);
lean_inc(x_343);
x_344 = lean_ctor_get(x_342, 1);
lean_inc(x_344);
lean_dec(x_342);
x_345 = lean_ctor_get(x_343, 4);
lean_inc(x_345);
lean_dec(x_343);
x_346 = lean_environment_main_module(x_341);
x_347 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_347, 0, x_346);
lean_ctor_set(x_347, 1, x_336);
lean_ctor_set(x_347, 2, x_310);
lean_ctor_set(x_347, 3, x_306);
lean_inc(x_4);
x_348 = l_Lean_Elab_getMacros(x_333, x_4, x_347, x_345);
lean_dec(x_333);
if (lean_obj_tag(x_348) == 0)
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; 
x_349 = lean_ctor_get(x_348, 0);
lean_inc(x_349);
x_350 = lean_ctor_get(x_348, 1);
lean_inc(x_350);
lean_dec(x_348);
x_351 = lean_st_ref_take(x_6, x_344);
x_352 = lean_ctor_get(x_351, 0);
lean_inc(x_352);
x_353 = lean_ctor_get(x_351, 1);
lean_inc(x_353);
lean_dec(x_351);
x_354 = lean_ctor_get(x_352, 0);
lean_inc(x_354);
x_355 = lean_ctor_get(x_352, 1);
lean_inc(x_355);
x_356 = lean_ctor_get(x_352, 2);
lean_inc(x_356);
x_357 = lean_ctor_get(x_352, 3);
lean_inc(x_357);
if (lean_is_exclusive(x_352)) {
 lean_ctor_release(x_352, 0);
 lean_ctor_release(x_352, 1);
 lean_ctor_release(x_352, 2);
 lean_ctor_release(x_352, 3);
 lean_ctor_release(x_352, 4);
 x_358 = x_352;
} else {
 lean_dec_ref(x_352);
 x_358 = lean_box(0);
}
if (lean_is_scalar(x_358)) {
 x_359 = lean_alloc_ctor(0, 5, 0);
} else {
 x_359 = x_358;
}
lean_ctor_set(x_359, 0, x_354);
lean_ctor_set(x_359, 1, x_355);
lean_ctor_set(x_359, 2, x_356);
lean_ctor_set(x_359, 3, x_357);
lean_ctor_set(x_359, 4, x_350);
x_360 = lean_st_ref_set(x_6, x_359, x_353);
x_361 = lean_ctor_get(x_360, 1);
lean_inc(x_361);
lean_dec(x_360);
x_362 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_362, 0, x_349);
x_312 = x_362;
x_313 = x_361;
goto block_332;
}
else
{
lean_object* x_363; 
x_363 = lean_ctor_get(x_348, 0);
lean_inc(x_363);
lean_dec(x_348);
if (lean_obj_tag(x_363) == 0)
{
lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; 
x_364 = lean_ctor_get(x_363, 0);
lean_inc(x_364);
x_365 = lean_ctor_get(x_363, 1);
lean_inc(x_365);
lean_dec(x_363);
x_366 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_366, 0, x_365);
x_367 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_367, 0, x_366);
lean_inc(x_10);
lean_inc(x_311);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_303);
x_368 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_364, x_367, x_303, x_6, x_7, x_8, x_311, x_10, x_344);
lean_dec(x_364);
x_369 = lean_ctor_get(x_368, 0);
lean_inc(x_369);
if (lean_obj_tag(x_369) == 0)
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; 
lean_dec(x_311);
lean_dec(x_303);
lean_dec(x_299);
lean_dec(x_298);
lean_dec(x_297);
lean_dec(x_296);
lean_dec(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_370 = lean_ctor_get(x_368, 1);
lean_inc(x_370);
if (lean_is_exclusive(x_368)) {
 lean_ctor_release(x_368, 0);
 lean_ctor_release(x_368, 1);
 x_371 = x_368;
} else {
 lean_dec_ref(x_368);
 x_371 = lean_box(0);
}
if (lean_is_scalar(x_371)) {
 x_372 = lean_alloc_ctor(1, 2, 0);
} else {
 x_372 = x_371;
}
lean_ctor_set(x_372, 0, x_369);
lean_ctor_set(x_372, 1, x_370);
return x_372;
}
else
{
lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; uint8_t x_377; 
x_373 = lean_ctor_get(x_368, 1);
lean_inc(x_373);
if (lean_is_exclusive(x_368)) {
 lean_ctor_release(x_368, 0);
 lean_ctor_release(x_368, 1);
 x_374 = x_368;
} else {
 lean_dec_ref(x_368);
 x_374 = lean_box(0);
}
x_375 = lean_ctor_get(x_369, 0);
lean_inc(x_375);
x_376 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_377 = lean_nat_dec_eq(x_376, x_375);
lean_dec(x_375);
if (x_377 == 0)
{
lean_object* x_378; 
lean_dec(x_311);
lean_dec(x_303);
lean_dec(x_299);
lean_dec(x_298);
lean_dec(x_297);
lean_dec(x_296);
lean_dec(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
if (lean_is_scalar(x_374)) {
 x_378 = lean_alloc_ctor(1, 2, 0);
} else {
 x_378 = x_374;
}
lean_ctor_set(x_378, 0, x_369);
lean_ctor_set(x_378, 1, x_373);
return x_378;
}
else
{
lean_object* x_379; 
lean_dec(x_374);
lean_dec(x_369);
x_379 = lean_box(0);
x_312 = x_379;
x_313 = x_373;
goto block_332;
}
}
}
else
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; uint8_t x_386; 
x_380 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__1___rarg(x_344);
x_381 = lean_ctor_get(x_380, 0);
lean_inc(x_381);
x_382 = lean_ctor_get(x_380, 1);
lean_inc(x_382);
if (lean_is_exclusive(x_380)) {
 lean_ctor_release(x_380, 0);
 lean_ctor_release(x_380, 1);
 x_383 = x_380;
} else {
 lean_dec_ref(x_380);
 x_383 = lean_box(0);
}
x_384 = lean_ctor_get(x_381, 0);
lean_inc(x_384);
x_385 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_386 = lean_nat_dec_eq(x_385, x_384);
lean_dec(x_384);
if (x_386 == 0)
{
lean_object* x_387; 
lean_dec(x_311);
lean_dec(x_303);
lean_dec(x_299);
lean_dec(x_298);
lean_dec(x_297);
lean_dec(x_296);
lean_dec(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
if (lean_is_scalar(x_383)) {
 x_387 = lean_alloc_ctor(1, 2, 0);
} else {
 x_387 = x_383;
}
lean_ctor_set(x_387, 0, x_381);
lean_ctor_set(x_387, 1, x_382);
return x_387;
}
else
{
lean_object* x_388; 
lean_dec(x_383);
lean_dec(x_381);
x_388 = lean_box(0);
x_312 = x_388;
x_313 = x_382;
goto block_332;
}
}
}
}
}
else
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; 
lean_dec(x_307);
lean_dec(x_306);
lean_dec(x_305);
lean_dec(x_304);
lean_dec(x_299);
lean_dec(x_298);
lean_dec(x_297);
lean_dec(x_296);
lean_dec(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_16);
lean_dec(x_4);
lean_dec(x_1);
x_424 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_425 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_424, x_303, x_6, x_7, x_8, x_9, x_10, x_20);
x_426 = lean_ctor_get(x_425, 0);
lean_inc(x_426);
x_427 = lean_ctor_get(x_425, 1);
lean_inc(x_427);
if (lean_is_exclusive(x_425)) {
 lean_ctor_release(x_425, 0);
 lean_ctor_release(x_425, 1);
 x_428 = x_425;
} else {
 lean_dec_ref(x_425);
 x_428 = lean_box(0);
}
if (lean_is_scalar(x_428)) {
 x_429 = lean_alloc_ctor(1, 2, 0);
} else {
 x_429 = x_428;
}
lean_ctor_set(x_429, 0, x_426);
lean_ctor_set(x_429, 1, x_427);
return x_429;
}
}
}
else
{
lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; uint8_t x_447; uint8_t x_448; uint8_t x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; uint8_t x_456; 
x_430 = lean_ctor_get(x_13, 0);
x_431 = lean_ctor_get(x_13, 1);
x_432 = lean_ctor_get(x_13, 2);
x_433 = lean_ctor_get(x_13, 3);
x_434 = lean_ctor_get(x_13, 4);
lean_inc(x_434);
lean_inc(x_433);
lean_inc(x_432);
lean_inc(x_431);
lean_inc(x_430);
lean_dec(x_13);
x_435 = lean_unsigned_to_nat(1u);
x_436 = lean_nat_add(x_434, x_435);
x_437 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_437, 0, x_430);
lean_ctor_set(x_437, 1, x_431);
lean_ctor_set(x_437, 2, x_432);
lean_ctor_set(x_437, 3, x_433);
lean_ctor_set(x_437, 4, x_436);
x_438 = lean_st_ref_set(x_6, x_437, x_14);
x_439 = lean_ctor_get(x_438, 1);
lean_inc(x_439);
lean_dec(x_438);
x_440 = lean_ctor_get(x_5, 0);
lean_inc(x_440);
x_441 = lean_ctor_get(x_5, 1);
lean_inc(x_441);
x_442 = lean_ctor_get(x_5, 2);
lean_inc(x_442);
x_443 = lean_ctor_get(x_5, 3);
lean_inc(x_443);
x_444 = lean_ctor_get(x_5, 4);
lean_inc(x_444);
x_445 = lean_ctor_get(x_5, 5);
lean_inc(x_445);
x_446 = lean_ctor_get(x_5, 6);
lean_inc(x_446);
x_447 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_448 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
x_449 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 2);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 lean_ctor_release(x_5, 6);
 lean_ctor_release(x_5, 7);
 x_450 = x_5;
} else {
 lean_dec_ref(x_5);
 x_450 = lean_box(0);
}
lean_inc(x_434);
lean_inc(x_446);
lean_inc(x_445);
lean_inc(x_444);
lean_inc(x_443);
lean_inc(x_442);
lean_inc(x_441);
lean_inc(x_440);
if (lean_is_scalar(x_450)) {
 x_451 = lean_alloc_ctor(0, 8, 3);
} else {
 x_451 = x_450;
}
lean_ctor_set(x_451, 0, x_440);
lean_ctor_set(x_451, 1, x_441);
lean_ctor_set(x_451, 2, x_442);
lean_ctor_set(x_451, 3, x_443);
lean_ctor_set(x_451, 4, x_444);
lean_ctor_set(x_451, 5, x_445);
lean_ctor_set(x_451, 6, x_446);
lean_ctor_set(x_451, 7, x_434);
lean_ctor_set_uint8(x_451, sizeof(void*)*8, x_447);
lean_ctor_set_uint8(x_451, sizeof(void*)*8 + 1, x_448);
lean_ctor_set_uint8(x_451, sizeof(void*)*8 + 2, x_449);
x_452 = lean_ctor_get(x_9, 0);
lean_inc(x_452);
x_453 = lean_ctor_get(x_9, 1);
lean_inc(x_453);
x_454 = lean_ctor_get(x_9, 2);
lean_inc(x_454);
x_455 = lean_ctor_get(x_9, 3);
lean_inc(x_455);
x_456 = lean_nat_dec_eq(x_453, x_454);
if (x_456 == 0)
{
lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_481; lean_object* x_482; lean_object* x_538; uint8_t x_539; 
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 lean_ctor_release(x_9, 2);
 lean_ctor_release(x_9, 3);
 x_457 = x_9;
} else {
 lean_dec_ref(x_9);
 x_457 = lean_box(0);
}
x_458 = lean_nat_add(x_453, x_435);
lean_dec(x_453);
lean_inc(x_454);
lean_inc(x_458);
lean_inc(x_452);
if (lean_is_scalar(x_457)) {
 x_459 = lean_alloc_ctor(0, 4, 0);
} else {
 x_459 = x_457;
}
lean_ctor_set(x_459, 0, x_452);
lean_ctor_set(x_459, 1, x_458);
lean_ctor_set(x_459, 2, x_454);
lean_ctor_set(x_459, 3, x_455);
x_538 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__3;
x_539 = l_Lean_checkTraceOption(x_452, x_538);
lean_dec(x_452);
if (x_539 == 0)
{
lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; 
x_540 = lean_st_ref_get(x_10, x_439);
x_541 = lean_ctor_get(x_540, 0);
lean_inc(x_541);
x_542 = lean_ctor_get(x_540, 1);
lean_inc(x_542);
lean_dec(x_540);
x_543 = lean_ctor_get(x_541, 0);
lean_inc(x_543);
lean_dec(x_541);
x_481 = x_543;
x_482 = x_542;
goto block_537;
}
else
{
lean_object* x_544; 
lean_inc(x_4);
x_544 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_544, 0, x_4);
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; 
x_545 = l_Lean_Elab_Term_elabTermAux___main___closed__1;
x_546 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_546, 0, x_545);
lean_ctor_set(x_546, 1, x_544);
lean_inc(x_10);
lean_inc(x_459);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_451);
x_547 = l_Lean_Elab_Term_logTrace(x_538, x_546, x_451, x_6, x_7, x_8, x_459, x_10, x_439);
if (lean_obj_tag(x_547) == 0)
{
lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; 
x_548 = lean_ctor_get(x_547, 1);
lean_inc(x_548);
lean_dec(x_547);
x_549 = lean_st_ref_get(x_10, x_548);
x_550 = lean_ctor_get(x_549, 0);
lean_inc(x_550);
x_551 = lean_ctor_get(x_549, 1);
lean_inc(x_551);
lean_dec(x_549);
x_552 = lean_ctor_get(x_550, 0);
lean_inc(x_552);
lean_dec(x_550);
x_481 = x_552;
x_482 = x_551;
goto block_537;
}
else
{
lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; 
lean_dec(x_459);
lean_dec(x_458);
lean_dec(x_454);
lean_dec(x_451);
lean_dec(x_446);
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_442);
lean_dec(x_441);
lean_dec(x_440);
lean_dec(x_434);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_553 = lean_ctor_get(x_547, 0);
lean_inc(x_553);
x_554 = lean_ctor_get(x_547, 1);
lean_inc(x_554);
if (lean_is_exclusive(x_547)) {
 lean_ctor_release(x_547, 0);
 lean_ctor_release(x_547, 1);
 x_555 = x_547;
} else {
 lean_dec_ref(x_547);
 x_555 = lean_box(0);
}
if (lean_is_scalar(x_555)) {
 x_556 = lean_alloc_ctor(1, 2, 0);
} else {
 x_556 = x_555;
}
lean_ctor_set(x_556, 0, x_553);
lean_ctor_set(x_556, 1, x_554);
return x_556;
}
}
else
{
lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; 
x_557 = lean_ctor_get(x_1, 0);
lean_inc(x_557);
x_558 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_558, 0, x_557);
x_559 = l_Lean_Meta_SynthInstance_getInstances___lambda__1___closed__8;
x_560 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_560, 0, x_558);
lean_ctor_set(x_560, 1, x_559);
x_561 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_561, 0, x_560);
lean_ctor_set(x_561, 1, x_544);
lean_inc(x_10);
lean_inc(x_459);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_451);
x_562 = l_Lean_Elab_Term_logTrace(x_538, x_561, x_451, x_6, x_7, x_8, x_459, x_10, x_439);
if (lean_obj_tag(x_562) == 0)
{
lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; 
x_563 = lean_ctor_get(x_562, 1);
lean_inc(x_563);
lean_dec(x_562);
x_564 = lean_st_ref_get(x_10, x_563);
x_565 = lean_ctor_get(x_564, 0);
lean_inc(x_565);
x_566 = lean_ctor_get(x_564, 1);
lean_inc(x_566);
lean_dec(x_564);
x_567 = lean_ctor_get(x_565, 0);
lean_inc(x_567);
lean_dec(x_565);
x_481 = x_567;
x_482 = x_566;
goto block_537;
}
else
{
lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; 
lean_dec(x_459);
lean_dec(x_458);
lean_dec(x_454);
lean_dec(x_451);
lean_dec(x_446);
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_442);
lean_dec(x_441);
lean_dec(x_440);
lean_dec(x_434);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_568 = lean_ctor_get(x_562, 0);
lean_inc(x_568);
x_569 = lean_ctor_get(x_562, 1);
lean_inc(x_569);
if (lean_is_exclusive(x_562)) {
 lean_ctor_release(x_562, 0);
 lean_ctor_release(x_562, 1);
 x_570 = x_562;
} else {
 lean_dec_ref(x_562);
 x_570 = lean_box(0);
}
if (lean_is_scalar(x_570)) {
 x_571 = lean_alloc_ctor(1, 2, 0);
} else {
 x_571 = x_570;
}
lean_ctor_set(x_571, 0, x_568);
lean_ctor_set(x_571, 1, x_569);
return x_571;
}
}
}
block_480:
{
if (lean_obj_tag(x_460) == 0)
{
lean_dec(x_446);
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_442);
lean_dec(x_441);
lean_dec(x_440);
lean_dec(x_434);
if (x_3 == 0)
{
lean_object* x_462; 
x_462 = l_Lean_Elab_Term_elabUsingElabFns(x_4, x_1, x_2, x_451, x_6, x_7, x_8, x_459, x_10, x_461);
return x_462;
}
else
{
lean_object* x_463; 
lean_inc(x_10);
lean_inc(x_459);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_451);
lean_inc(x_1);
lean_inc(x_4);
x_463 = l_Lean_Elab_Term_useImplicitLambda_x3f(x_4, x_1, x_451, x_6, x_7, x_8, x_459, x_10, x_461);
if (lean_obj_tag(x_463) == 0)
{
lean_object* x_464; 
x_464 = lean_ctor_get(x_463, 0);
lean_inc(x_464);
if (lean_obj_tag(x_464) == 0)
{
lean_object* x_465; lean_object* x_466; 
x_465 = lean_ctor_get(x_463, 1);
lean_inc(x_465);
lean_dec(x_463);
x_466 = l_Lean_Elab_Term_elabUsingElabFns(x_4, x_1, x_2, x_451, x_6, x_7, x_8, x_459, x_10, x_465);
return x_466;
}
else
{
lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; 
lean_dec(x_1);
x_467 = lean_ctor_get(x_463, 1);
lean_inc(x_467);
lean_dec(x_463);
x_468 = lean_ctor_get(x_464, 0);
lean_inc(x_468);
lean_dec(x_464);
x_469 = l_Array_empty___closed__1;
x_470 = l_Lean_Elab_Term_elabImplicitLambda___main(x_4, x_2, x_468, x_469, x_451, x_6, x_7, x_8, x_459, x_10, x_467);
return x_470;
}
}
else
{
lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; 
lean_dec(x_459);
lean_dec(x_451);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_471 = lean_ctor_get(x_463, 0);
lean_inc(x_471);
x_472 = lean_ctor_get(x_463, 1);
lean_inc(x_472);
if (lean_is_exclusive(x_463)) {
 lean_ctor_release(x_463, 0);
 lean_ctor_release(x_463, 1);
 x_473 = x_463;
} else {
 lean_dec_ref(x_463);
 x_473 = lean_box(0);
}
if (lean_is_scalar(x_473)) {
 x_474 = lean_alloc_ctor(1, 2, 0);
} else {
 x_474 = x_473;
}
lean_ctor_set(x_474, 0, x_471);
lean_ctor_set(x_474, 1, x_472);
return x_474;
}
}
}
else
{
lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; 
lean_dec(x_451);
x_475 = lean_ctor_get(x_460, 0);
lean_inc(x_475);
lean_dec(x_460);
lean_inc(x_475);
x_476 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_476, 0, x_4);
lean_ctor_set(x_476, 1, x_475);
x_477 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_477, 0, x_476);
lean_ctor_set(x_477, 1, x_446);
x_478 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_478, 0, x_440);
lean_ctor_set(x_478, 1, x_441);
lean_ctor_set(x_478, 2, x_442);
lean_ctor_set(x_478, 3, x_443);
lean_ctor_set(x_478, 4, x_444);
lean_ctor_set(x_478, 5, x_445);
lean_ctor_set(x_478, 6, x_477);
lean_ctor_set(x_478, 7, x_434);
lean_ctor_set_uint8(x_478, sizeof(void*)*8, x_447);
lean_ctor_set_uint8(x_478, sizeof(void*)*8 + 1, x_448);
lean_ctor_set_uint8(x_478, sizeof(void*)*8 + 2, x_449);
x_4 = x_475;
x_5 = x_478;
x_9 = x_459;
x_11 = x_461;
goto _start;
}
}
block_537:
{
lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; 
x_483 = l_Lean_Elab_Term_getCurrMacroScope(x_451, x_6, x_7, x_8, x_459, x_10, x_482);
x_484 = lean_ctor_get(x_483, 0);
lean_inc(x_484);
x_485 = lean_ctor_get(x_483, 1);
lean_inc(x_485);
lean_dec(x_483);
x_486 = lean_st_ref_get(x_10, x_485);
x_487 = lean_ctor_get(x_486, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_486, 1);
lean_inc(x_488);
lean_dec(x_486);
x_489 = lean_ctor_get(x_487, 0);
lean_inc(x_489);
lean_dec(x_487);
x_490 = lean_st_ref_get(x_6, x_488);
x_491 = lean_ctor_get(x_490, 0);
lean_inc(x_491);
x_492 = lean_ctor_get(x_490, 1);
lean_inc(x_492);
lean_dec(x_490);
x_493 = lean_ctor_get(x_491, 4);
lean_inc(x_493);
lean_dec(x_491);
x_494 = lean_environment_main_module(x_489);
x_495 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_495, 0, x_494);
lean_ctor_set(x_495, 1, x_484);
lean_ctor_set(x_495, 2, x_458);
lean_ctor_set(x_495, 3, x_454);
lean_inc(x_4);
x_496 = l_Lean_Elab_getMacros(x_481, x_4, x_495, x_493);
lean_dec(x_481);
if (lean_obj_tag(x_496) == 0)
{
lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; 
x_497 = lean_ctor_get(x_496, 0);
lean_inc(x_497);
x_498 = lean_ctor_get(x_496, 1);
lean_inc(x_498);
lean_dec(x_496);
x_499 = lean_st_ref_take(x_6, x_492);
x_500 = lean_ctor_get(x_499, 0);
lean_inc(x_500);
x_501 = lean_ctor_get(x_499, 1);
lean_inc(x_501);
lean_dec(x_499);
x_502 = lean_ctor_get(x_500, 0);
lean_inc(x_502);
x_503 = lean_ctor_get(x_500, 1);
lean_inc(x_503);
x_504 = lean_ctor_get(x_500, 2);
lean_inc(x_504);
x_505 = lean_ctor_get(x_500, 3);
lean_inc(x_505);
if (lean_is_exclusive(x_500)) {
 lean_ctor_release(x_500, 0);
 lean_ctor_release(x_500, 1);
 lean_ctor_release(x_500, 2);
 lean_ctor_release(x_500, 3);
 lean_ctor_release(x_500, 4);
 x_506 = x_500;
} else {
 lean_dec_ref(x_500);
 x_506 = lean_box(0);
}
if (lean_is_scalar(x_506)) {
 x_507 = lean_alloc_ctor(0, 5, 0);
} else {
 x_507 = x_506;
}
lean_ctor_set(x_507, 0, x_502);
lean_ctor_set(x_507, 1, x_503);
lean_ctor_set(x_507, 2, x_504);
lean_ctor_set(x_507, 3, x_505);
lean_ctor_set(x_507, 4, x_498);
x_508 = lean_st_ref_set(x_6, x_507, x_501);
x_509 = lean_ctor_get(x_508, 1);
lean_inc(x_509);
lean_dec(x_508);
x_510 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_510, 0, x_497);
x_460 = x_510;
x_461 = x_509;
goto block_480;
}
else
{
lean_object* x_511; 
x_511 = lean_ctor_get(x_496, 0);
lean_inc(x_511);
lean_dec(x_496);
if (lean_obj_tag(x_511) == 0)
{
lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; 
x_512 = lean_ctor_get(x_511, 0);
lean_inc(x_512);
x_513 = lean_ctor_get(x_511, 1);
lean_inc(x_513);
lean_dec(x_511);
x_514 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_514, 0, x_513);
x_515 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_515, 0, x_514);
lean_inc(x_10);
lean_inc(x_459);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_451);
x_516 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___spec__2___rarg(x_512, x_515, x_451, x_6, x_7, x_8, x_459, x_10, x_492);
lean_dec(x_512);
x_517 = lean_ctor_get(x_516, 0);
lean_inc(x_517);
if (lean_obj_tag(x_517) == 0)
{
lean_object* x_518; lean_object* x_519; lean_object* x_520; 
lean_dec(x_459);
lean_dec(x_451);
lean_dec(x_446);
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_442);
lean_dec(x_441);
lean_dec(x_440);
lean_dec(x_434);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_518 = lean_ctor_get(x_516, 1);
lean_inc(x_518);
if (lean_is_exclusive(x_516)) {
 lean_ctor_release(x_516, 0);
 lean_ctor_release(x_516, 1);
 x_519 = x_516;
} else {
 lean_dec_ref(x_516);
 x_519 = lean_box(0);
}
if (lean_is_scalar(x_519)) {
 x_520 = lean_alloc_ctor(1, 2, 0);
} else {
 x_520 = x_519;
}
lean_ctor_set(x_520, 0, x_517);
lean_ctor_set(x_520, 1, x_518);
return x_520;
}
else
{
lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; uint8_t x_525; 
x_521 = lean_ctor_get(x_516, 1);
lean_inc(x_521);
if (lean_is_exclusive(x_516)) {
 lean_ctor_release(x_516, 0);
 lean_ctor_release(x_516, 1);
 x_522 = x_516;
} else {
 lean_dec_ref(x_516);
 x_522 = lean_box(0);
}
x_523 = lean_ctor_get(x_517, 0);
lean_inc(x_523);
x_524 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_525 = lean_nat_dec_eq(x_524, x_523);
lean_dec(x_523);
if (x_525 == 0)
{
lean_object* x_526; 
lean_dec(x_459);
lean_dec(x_451);
lean_dec(x_446);
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_442);
lean_dec(x_441);
lean_dec(x_440);
lean_dec(x_434);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
if (lean_is_scalar(x_522)) {
 x_526 = lean_alloc_ctor(1, 2, 0);
} else {
 x_526 = x_522;
}
lean_ctor_set(x_526, 0, x_517);
lean_ctor_set(x_526, 1, x_521);
return x_526;
}
else
{
lean_object* x_527; 
lean_dec(x_522);
lean_dec(x_517);
x_527 = lean_box(0);
x_460 = x_527;
x_461 = x_521;
goto block_480;
}
}
}
else
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; uint8_t x_534; 
x_528 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__1___rarg(x_492);
x_529 = lean_ctor_get(x_528, 0);
lean_inc(x_529);
x_530 = lean_ctor_get(x_528, 1);
lean_inc(x_530);
if (lean_is_exclusive(x_528)) {
 lean_ctor_release(x_528, 0);
 lean_ctor_release(x_528, 1);
 x_531 = x_528;
} else {
 lean_dec_ref(x_528);
 x_531 = lean_box(0);
}
x_532 = lean_ctor_get(x_529, 0);
lean_inc(x_532);
x_533 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_534 = lean_nat_dec_eq(x_533, x_532);
lean_dec(x_532);
if (x_534 == 0)
{
lean_object* x_535; 
lean_dec(x_459);
lean_dec(x_451);
lean_dec(x_446);
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_442);
lean_dec(x_441);
lean_dec(x_440);
lean_dec(x_434);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
if (lean_is_scalar(x_531)) {
 x_535 = lean_alloc_ctor(1, 2, 0);
} else {
 x_535 = x_531;
}
lean_ctor_set(x_535, 0, x_529);
lean_ctor_set(x_535, 1, x_530);
return x_535;
}
else
{
lean_object* x_536; 
lean_dec(x_531);
lean_dec(x_529);
x_536 = lean_box(0);
x_460 = x_536;
x_461 = x_530;
goto block_480;
}
}
}
}
}
else
{
lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; 
lean_dec(x_455);
lean_dec(x_454);
lean_dec(x_453);
lean_dec(x_452);
lean_dec(x_446);
lean_dec(x_445);
lean_dec(x_444);
lean_dec(x_443);
lean_dec(x_442);
lean_dec(x_441);
lean_dec(x_440);
lean_dec(x_434);
lean_dec(x_4);
lean_dec(x_1);
x_572 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_573 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_572, x_451, x_6, x_7, x_8, x_9, x_10, x_439);
x_574 = lean_ctor_get(x_573, 0);
lean_inc(x_574);
x_575 = lean_ctor_get(x_573, 1);
lean_inc(x_575);
if (lean_is_exclusive(x_573)) {
 lean_ctor_release(x_573, 0);
 lean_ctor_release(x_573, 1);
 x_576 = x_573;
} else {
 lean_dec_ref(x_573);
 x_576 = lean_box(0);
}
if (lean_is_scalar(x_576)) {
 x_577 = lean_alloc_ctor(1, 2, 0);
} else {
 x_577 = x_576;
}
lean_ctor_set(x_577, 0, x_574);
lean_ctor_set(x_577, 1, x_575);
return x_577;
}
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabTermAux___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_elabTermAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l_Lean_Elab_Term_elabTermAux___main(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_elabTermAux(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_elabTermAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_elabTermAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l_Lean_Elab_Term_elabTermAux(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_elabTerm(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_8, 3);
x_13 = l_Lean_replaceRef(x_1, x_12);
x_14 = l_Lean_replaceRef(x_13, x_12);
lean_dec(x_13);
x_15 = l_Lean_replaceRef(x_14, x_12);
lean_dec(x_12);
lean_dec(x_14);
lean_ctor_set(x_8, 3, x_15);
x_16 = 1;
x_17 = l_Lean_Elab_Term_elabTermAux___main(x_2, x_3, x_16, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_8, 0);
x_19 = lean_ctor_get(x_8, 1);
x_20 = lean_ctor_get(x_8, 2);
x_21 = lean_ctor_get(x_8, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_8);
x_22 = l_Lean_replaceRef(x_1, x_21);
x_23 = l_Lean_replaceRef(x_22, x_21);
lean_dec(x_22);
x_24 = l_Lean_replaceRef(x_23, x_21);
lean_dec(x_21);
lean_dec(x_23);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_19);
lean_ctor_set(x_25, 2, x_20);
lean_ctor_set(x_25, 3, x_24);
x_26 = 1;
x_27 = l_Lean_Elab_Term_elabTermAux___main(x_2, x_3, x_26, x_1, x_4, x_5, x_6, x_7, x_25, x_9, x_10);
return x_27;
}
}
}
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_7, 3);
x_16 = l_Lean_replaceRef(x_1, x_15);
lean_dec(x_1);
x_17 = l_Lean_replaceRef(x_16, x_15);
lean_dec(x_16);
x_18 = l_Lean_replaceRef(x_17, x_15);
lean_dec(x_15);
lean_dec(x_17);
lean_ctor_set(x_7, 3, x_18);
x_19 = l_Lean_Elab_Term_ensureHasType(x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
x_22 = lean_ctor_get(x_7, 2);
x_23 = lean_ctor_get(x_7, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_24 = l_Lean_replaceRef(x_1, x_23);
lean_dec(x_1);
x_25 = l_Lean_replaceRef(x_24, x_23);
lean_dec(x_24);
x_26 = l_Lean_replaceRef(x_25, x_23);
lean_dec(x_23);
lean_dec(x_25);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_21);
lean_ctor_set(x_27, 2, x_22);
lean_ctor_set(x_27, 3, x_26);
x_28 = l_Lean_Elab_Term_ensureHasType(x_2, x_12, x_3, x_4, x_5, x_6, x_27, x_8, x_13);
return x_28;
}
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
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_11);
if (x_29 == 0)
{
return x_11;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_11, 0);
x_31 = lean_ctor_get(x_11, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_11);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabTermWithoutImplicitLambdas(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 0;
x_12 = l_Lean_Elab_Term_elabTermAux___main(x_2, x_3, x_11, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_elabTermWithoutImplicitLambdas___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Elab_Term_elabTermWithoutImplicitLambdas(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_adaptExpander(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_11 = lean_apply_8(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_4);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_4, 6);
lean_inc(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_12);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_4, 6, x_17);
x_18 = 1;
x_19 = l_Lean_Elab_Term_elabTerm(x_12, x_3, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_ctor_get(x_4, 1);
x_22 = lean_ctor_get(x_4, 2);
x_23 = lean_ctor_get(x_4, 3);
x_24 = lean_ctor_get(x_4, 4);
x_25 = lean_ctor_get(x_4, 5);
x_26 = lean_ctor_get(x_4, 6);
x_27 = lean_ctor_get(x_4, 7);
x_28 = lean_ctor_get_uint8(x_4, sizeof(void*)*8);
x_29 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 1);
x_30 = lean_ctor_get_uint8(x_4, sizeof(void*)*8 + 2);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_4);
lean_inc(x_12);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_2);
lean_ctor_set(x_31, 1, x_12);
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
x_35 = l_Lean_Elab_Term_elabTerm(x_12, x_3, x_34, x_33, x_5, x_6, x_7, x_8, x_9, x_13);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_11);
if (x_36 == 0)
{
return x_11;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_11, 0);
x_38 = lean_ctor_get(x_11, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_11);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* l_Lean_Elab_Term_withLCtx___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_6, 2);
lean_dec(x_12);
x_13 = lean_ctor_get(x_6, 1);
lean_dec(x_13);
lean_ctor_set(x_6, 2, x_2);
lean_ctor_set(x_6, 1, x_1);
x_14 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_1);
lean_ctor_set(x_16, 2, x_2);
x_17 = lean_apply_7(x_3, x_4, x_5, x_16, x_7, x_8, x_9, x_10);
return x_17;
}
}
}
lean_object* l_Lean_Elab_Term_withLCtx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withLCtx___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_saveAndResetSynthInstanceCache___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_saveAndResetSynthInstanceCache(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_Elab_Term_saveAndResetSynthInstanceCache___rarg___boxed), 4, 0);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_saveAndResetSynthInstanceCache___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_saveAndResetSynthInstanceCache___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_saveAndResetSynthInstanceCache___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_saveAndResetSynthInstanceCache(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_resetSynthInstanceCache___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_1, x_2, x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
x_8 = lean_box(0);
lean_ctor_set(x_5, 0, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
}
lean_object* l_Lean_Elab_Term_resetSynthInstanceCache(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_Elab_Term_resetSynthInstanceCache___rarg___boxed), 4, 0);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_resetSynthInstanceCache___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_resetSynthInstanceCache___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_resetSynthInstanceCache___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_resetSynthInstanceCache(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_restoreSynthInstanceCache(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_restoreSynthInstanceCache(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_restoreSynthInstanceCache___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_restoreSynthInstanceCache(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_resettingSynthInstanceCache___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Meta_restoreSynthInstanceCache(x_10, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
lean_ctor_set(x_15, 0, x_13);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_12, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_dec(x_12);
x_22 = l_Lean_Meta_restoreSynthInstanceCache(x_10, x_4, x_5, x_6, x_7, x_21);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set_tag(x_22, 1);
lean_ctor_set(x_22, 0, x_20);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_Elab_Term_resettingSynthInstanceCache(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_resettingSynthInstanceCache___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_resettingSynthInstanceCacheWhen___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (x_1 == 0)
{
lean_object* x_10; 
x_10 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_6, x_7, x_8, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Meta_restoreSynthInstanceCache(x_12, x_5, x_6, x_7, x_8, x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_14, 1);
lean_inc(x_23);
lean_dec(x_14);
x_24 = l_Lean_Meta_restoreSynthInstanceCache(x_12, x_5, x_6, x_7, x_8, x_23);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
}
}
}
lean_object* l_Lean_Elab_Term_resettingSynthInstanceCacheWhen(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_resettingSynthInstanceCacheWhen___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_resettingSynthInstanceCacheWhen___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Elab_Term_resettingSynthInstanceCacheWhen___rarg(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
uint8_t l_Array_isEqvAux___main___at_Lean_Elab_Term_withLocalContext___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_6);
x_9 = 1;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_fget(x_4, x_6);
x_11 = lean_array_fget(x_5, x_6);
x_12 = l_Lean_LocalInstance_beq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_6);
x_13 = 0;
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_6, x_14);
lean_dec(x_6);
x_3 = lean_box(0);
x_6 = x_15;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_Term_withLocalContext___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_11 = l_Lean_getLocalInstances___at_Lean_Elab_Term_withLocalDecl___spec__2(x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_array_get_size(x_2);
x_15 = lean_array_get_size(x_12);
x_16 = lean_nat_dec_eq(x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_17 = !lean_is_exclusive(x_6);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_6, 2);
lean_dec(x_18);
x_19 = lean_ctor_get(x_6, 1);
lean_dec(x_19);
lean_inc(x_2);
lean_ctor_set(x_6, 2, x_2);
lean_ctor_set(x_6, 1, x_1);
if (x_16 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_12);
lean_dec(x_2);
x_20 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_7, x_8, x_9, x_13);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_23 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Meta_restoreSynthInstanceCache(x_21, x_6, x_7, x_8, x_9, x_25);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_24);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_23, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_23, 1);
lean_inc(x_32);
lean_dec(x_23);
x_33 = l_Lean_Meta_restoreSynthInstanceCache(x_21, x_6, x_7, x_8, x_9, x_32);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
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
}
else
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Array_isEqvAux___main___at_Lean_Elab_Term_withLocalContext___spec__1(x_2, x_12, lean_box(0), x_2, x_12, x_38);
lean_dec(x_12);
lean_dec(x_2);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_7, x_8, x_9, x_13);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_43 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_Meta_restoreSynthInstanceCache(x_41, x_6, x_7, x_8, x_9, x_45);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_46, 0);
lean_dec(x_48);
lean_ctor_set(x_46, 0, x_44);
return x_46;
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_dec(x_46);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_44);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_51 = lean_ctor_get(x_43, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_43, 1);
lean_inc(x_52);
lean_dec(x_43);
x_53 = l_Lean_Meta_restoreSynthInstanceCache(x_41, x_6, x_7, x_8, x_9, x_52);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_53, 0);
lean_dec(x_55);
lean_ctor_set_tag(x_53, 1);
lean_ctor_set(x_53, 0, x_51);
return x_53;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_dec(x_53);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_51);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; 
x_58 = lean_apply_7(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_58;
}
}
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_6, 0);
lean_inc(x_59);
lean_dec(x_6);
lean_inc(x_2);
x_60 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_1);
lean_ctor_set(x_60, 2, x_2);
if (x_16 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_12);
lean_dec(x_2);
x_61 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_7, x_8, x_9, x_13);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_60);
x_64 = lean_apply_7(x_3, x_4, x_5, x_60, x_7, x_8, x_9, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = l_Lean_Meta_restoreSynthInstanceCache(x_62, x_60, x_7, x_8, x_9, x_66);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_60);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_65);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_71 = lean_ctor_get(x_64, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_64, 1);
lean_inc(x_72);
lean_dec(x_64);
x_73 = l_Lean_Meta_restoreSynthInstanceCache(x_62, x_60, x_7, x_8, x_9, x_72);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_60);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_75 = x_73;
} else {
 lean_dec_ref(x_73);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_75;
 lean_ctor_set_tag(x_76, 1);
}
lean_ctor_set(x_76, 0, x_71);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
else
{
lean_object* x_77; uint8_t x_78; 
x_77 = lean_unsigned_to_nat(0u);
x_78 = l_Array_isEqvAux___main___at_Lean_Elab_Term_withLocalContext___spec__1(x_2, x_12, lean_box(0), x_2, x_12, x_77);
lean_dec(x_12);
lean_dec(x_2);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_7, x_8, x_9, x_13);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_60);
x_82 = lean_apply_7(x_3, x_4, x_5, x_60, x_7, x_8, x_9, x_81);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = l_Lean_Meta_restoreSynthInstanceCache(x_80, x_60, x_7, x_8, x_9, x_84);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_60);
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_87 = x_85;
} else {
 lean_dec_ref(x_85);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_83);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_89 = lean_ctor_get(x_82, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_82, 1);
lean_inc(x_90);
lean_dec(x_82);
x_91 = l_Lean_Meta_restoreSynthInstanceCache(x_80, x_60, x_7, x_8, x_9, x_90);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_60);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_93 = x_91;
} else {
 lean_dec_ref(x_91);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
 lean_ctor_set_tag(x_94, 1);
}
lean_ctor_set(x_94, 0, x_89);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
else
{
lean_object* x_95; 
x_95 = lean_apply_7(x_3, x_4, x_5, x_60, x_7, x_8, x_9, x_13);
return x_95;
}
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_11);
if (x_96 == 0)
{
return x_11;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_11, 0);
x_98 = lean_ctor_get(x_11, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_11);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
}
lean_object* l_Lean_Elab_Term_withLocalContext(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withLocalContext___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Array_isEqvAux___main___at_Lean_Elab_Term_withLocalContext___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Array_isEqvAux___main___at_Lean_Elab_Term_withLocalContext___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
uint8_t l_Array_isEqvAux___main___at_Lean_Elab_Term_withMVarContext___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_6);
x_9 = 1;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_fget(x_4, x_6);
x_11 = lean_array_fget(x_5, x_6);
x_12 = l_Lean_LocalInstance_beq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_6);
x_13 = 0;
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_6, x_14);
lean_dec(x_6);
x_3 = lean_box(0);
x_6 = x_15;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_Term_withMVarContext___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = l_Lean_Elab_Term_getMVarDecl(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l_Lean_getLocalInstances___at_Lean_Elab_Term_withLocalDecl___spec__2(x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_11, 4);
lean_inc(x_17);
x_18 = lean_array_get_size(x_14);
x_19 = lean_array_get_size(x_17);
x_20 = lean_nat_dec_eq(x_18, x_19);
lean_dec(x_19);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_5);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_5, 2);
lean_dec(x_22);
x_23 = lean_ctor_get(x_5, 1);
lean_dec(x_23);
lean_inc(x_17);
lean_ctor_set(x_5, 2, x_17);
lean_ctor_set(x_5, 1, x_16);
if (x_20 == 0)
{
lean_object* x_24; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
x_24 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
return x_24;
}
else
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Array_isEqvAux___main___at_Lean_Elab_Term_withMVarContext___spec__1(x_11, x_14, lean_box(0), x_14, x_17, x_25);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_6, x_7, x_8, x_15);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_31 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Meta_restoreSynthInstanceCache(x_29, x_5, x_6, x_7, x_8, x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_32);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_32);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_39 = lean_ctor_get(x_31, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_31, 1);
lean_inc(x_40);
lean_dec(x_31);
x_41 = l_Lean_Meta_restoreSynthInstanceCache(x_29, x_5, x_6, x_7, x_8, x_40);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
lean_ctor_set_tag(x_41, 1);
lean_ctor_set(x_41, 0, x_39);
return x_41;
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_dec(x_41);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_39);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_5, 0);
lean_inc(x_46);
lean_dec(x_5);
lean_inc(x_17);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_16);
lean_ctor_set(x_47, 2, x_17);
if (x_20 == 0)
{
lean_object* x_48; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
x_48 = lean_apply_7(x_2, x_3, x_4, x_47, x_6, x_7, x_8, x_15);
return x_48;
}
else
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_unsigned_to_nat(0u);
x_50 = l_Array_isEqvAux___main___at_Lean_Elab_Term_withMVarContext___spec__1(x_11, x_14, lean_box(0), x_14, x_17, x_49);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_11);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_apply_7(x_2, x_3, x_4, x_47, x_6, x_7, x_8, x_15);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_52 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_6, x_7, x_8, x_15);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_47);
x_55 = lean_apply_7(x_2, x_3, x_4, x_47, x_6, x_7, x_8, x_54);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = l_Lean_Meta_restoreSynthInstanceCache(x_53, x_47, x_6, x_7, x_8, x_57);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_47);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_60 = x_58;
} else {
 lean_dec_ref(x_58);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_56);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_62 = lean_ctor_get(x_55, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_55, 1);
lean_inc(x_63);
lean_dec(x_55);
x_64 = l_Lean_Meta_restoreSynthInstanceCache(x_53, x_47, x_6, x_7, x_8, x_63);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_47);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_66 = x_64;
} else {
 lean_dec_ref(x_64);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(1, 2, 0);
} else {
 x_67 = x_66;
 lean_ctor_set_tag(x_67, 1);
}
lean_ctor_set(x_67, 0, x_62);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_68 = !lean_is_exclusive(x_13);
if (x_68 == 0)
{
return x_13;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_13, 0);
x_70 = lean_ctor_get(x_13, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_13);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_72 = !lean_is_exclusive(x_10);
if (x_72 == 0)
{
return x_10;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_10, 0);
x_74 = lean_ctor_get(x_10, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_10);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
}
lean_object* l_Lean_Elab_Term_withMVarContext(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withMVarContext___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Array_isEqvAux___main___at_Lean_Elab_Term_withMVarContext___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Array_isEqvAux___main___at_Lean_Elab_Term_withMVarContext___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_withMVarContext___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_withMVarContext___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_mkInstMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_1);
x_10 = 1;
x_11 = lean_box(0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_12 = l_Lean_Elab_Term_mkFreshExprMVar(x_9, x_10, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Expr_mvarId_x21(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_15);
x_16 = l_Lean_Elab_Term_synthesizeInstMVarCore(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_box(0);
x_21 = l_Lean_Elab_Term_registerSyntheticMVarWithCurrRef(x_15, x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_13);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_13);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_16);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_16, 0);
lean_dec(x_27);
lean_ctor_set(x_16, 0, x_13);
return x_16;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_dec(x_16);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_13);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_16);
if (x_30 == 0)
{
return x_16;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_16, 0);
x_32 = lean_ctor_get(x_16, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_16);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_12);
if (x_34 == 0)
{
return x_12;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_12, 0);
x_36 = lean_ctor_get(x_12, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_12);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("CoeSort");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Term_17__tryCoeSort___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("type expected");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_17__tryCoeSort___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_17__tryCoeSort___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Term_17__tryCoeSort___closed__5;
x_2 = l_Lean_MessageData_ofList___closed__3;
x_3 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("coeSort");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Term_17__tryCoeSort___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_17__tryCoeSort(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = 0;
x_11 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l_Lean_Elab_Term_mkFreshTypeMVar(x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_15 = l_Lean_Elab_Term_getLevel(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_13);
x_18 = l_Lean_Elab_Term_getLevel(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_16);
lean_ctor_set(x_23, 1, x_22);
x_24 = l___private_Lean_Elab_Term_17__tryCoeSort___closed__2;
lean_inc(x_23);
x_25 = l_Lean_mkConst(x_24, x_23);
x_26 = l_Lean_mkAppStx___closed__9;
lean_inc(x_1);
x_27 = lean_array_push(x_26, x_1);
lean_inc(x_13);
x_28 = lean_array_push(x_27, x_13);
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_28, x_28, x_29, x_25);
lean_dec(x_28);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_33 = l_Lean_Elab_Term_mkFreshExprMVar(x_31, x_32, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_Expr_mvarId_x21(x_34);
x_46 = lean_ctor_get(x_3, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_3, 1);
lean_inc(x_47);
x_48 = lean_ctor_get(x_3, 2);
lean_inc(x_48);
x_49 = lean_ctor_get(x_3, 3);
lean_inc(x_49);
x_50 = lean_ctor_get(x_3, 4);
lean_inc(x_50);
x_51 = lean_ctor_get(x_3, 5);
lean_inc(x_51);
x_52 = lean_ctor_get(x_3, 6);
lean_inc(x_52);
x_53 = lean_ctor_get(x_3, 7);
lean_inc(x_53);
x_54 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_55 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_56 = 0;
x_57 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_57, 0, x_46);
lean_ctor_set(x_57, 1, x_47);
lean_ctor_set(x_57, 2, x_48);
lean_ctor_set(x_57, 3, x_49);
lean_ctor_set(x_57, 4, x_50);
lean_ctor_set(x_57, 5, x_51);
lean_ctor_set(x_57, 6, x_52);
lean_ctor_set(x_57, 7, x_53);
lean_ctor_set_uint8(x_57, sizeof(void*)*8, x_54);
lean_ctor_set_uint8(x_57, sizeof(void*)*8 + 1, x_55);
lean_ctor_set_uint8(x_57, sizeof(void*)*8 + 2, x_56);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_57);
x_58 = l_Lean_Elab_Term_synthesizeInstMVarCore(x_36, x_57, x_4, x_5, x_6, x_7, x_8, x_35);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; uint8_t x_60; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_unbox(x_59);
lean_dec(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_34);
lean_dec(x_23);
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
x_61 = lean_ctor_get(x_58, 1);
lean_inc(x_61);
lean_dec(x_58);
x_62 = l___private_Lean_Elab_Term_17__tryCoeSort___closed__5;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_63 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_62, x_57, x_4, x_5, x_6, x_7, x_8, x_61);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_37 = x_64;
x_38 = x_65;
goto block_45;
}
else
{
uint8_t x_66; 
lean_dec(x_57);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_66 = !lean_is_exclusive(x_58);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_67 = lean_ctor_get(x_58, 0);
lean_dec(x_67);
x_68 = l___private_Lean_Elab_Term_17__tryCoeSort___closed__8;
x_69 = l_Lean_mkConst(x_68, x_23);
x_70 = l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
x_71 = lean_array_push(x_70, x_1);
x_72 = lean_array_push(x_71, x_13);
x_73 = lean_array_push(x_72, x_2);
x_74 = lean_array_push(x_73, x_34);
x_75 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_74, x_74, x_29, x_69);
lean_dec(x_74);
lean_ctor_set(x_58, 0, x_75);
return x_58;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_76 = lean_ctor_get(x_58, 1);
lean_inc(x_76);
lean_dec(x_58);
x_77 = l___private_Lean_Elab_Term_17__tryCoeSort___closed__8;
x_78 = l_Lean_mkConst(x_77, x_23);
x_79 = l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
x_80 = lean_array_push(x_79, x_1);
x_81 = lean_array_push(x_80, x_13);
x_82 = lean_array_push(x_81, x_2);
x_83 = lean_array_push(x_82, x_34);
x_84 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_83, x_83, x_29, x_78);
lean_dec(x_83);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_76);
return x_85;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; 
lean_dec(x_57);
lean_dec(x_34);
lean_dec(x_23);
lean_dec(x_13);
lean_dec(x_2);
lean_dec(x_1);
x_86 = lean_ctor_get(x_58, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_58, 1);
lean_inc(x_87);
lean_dec(x_58);
x_37 = x_86;
x_38 = x_87;
goto block_45;
}
block_45:
{
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l___private_Lean_Elab_Term_17__tryCoeSort___closed__6;
x_41 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_41, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_37);
x_43 = l___private_Lean_Elab_Term_17__tryCoeSort___closed__5;
x_44 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_43, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
return x_44;
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_23);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_88 = !lean_is_exclusive(x_33);
if (x_88 == 0)
{
return x_33;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_33, 0);
x_90 = lean_ctor_get(x_33, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_33);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
uint8_t x_92; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_92 = !lean_is_exclusive(x_18);
if (x_92 == 0)
{
return x_18;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_18, 0);
x_94 = lean_ctor_get(x_18, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_18);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_15);
if (x_96 == 0)
{
return x_15;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_15, 0);
x_98 = lean_ctor_get(x_15, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_15);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_100 = !lean_is_exclusive(x_12);
if (x_100 == 0)
{
return x_12;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_12, 0);
x_102 = lean_ctor_get(x_12, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_12);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
}
lean_object* l_Lean_isType___at_Lean_Elab_Term_ensureType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
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
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_17 = l_Lean_Meta_isType___at_Lean_isType___spec__1(x_1, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_18);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_20, 0);
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_20);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_dec(x_17);
x_31 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set_tag(x_31, 1);
lean_ctor_set(x_31, 0, x_29);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_29);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
return x_15;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_11);
if (x_44 == 0)
{
return x_11;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_11, 0);
x_46 = lean_ctor_get(x_11, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_11);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Lean_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1;
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = lean_apply_7(x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_TraceState_Inhabited___closed__1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1(x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_mkFreshId___at_Lean_mkFreshExprMVarAt___spec__1___rarg(x_6, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_st_ref_take(x_4, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_20, 0);
lean_inc(x_17);
x_24 = l_Lean_MetavarContext_addLevelMVarDecl(x_23, x_17);
lean_ctor_set(x_20, 0, x_24);
x_25 = lean_st_ref_set(x_4, x_20, x_21);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Lean_mkLevelMVar(x_17);
x_28 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_26);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_27);
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_37 = lean_ctor_get(x_20, 0);
x_38 = lean_ctor_get(x_20, 1);
x_39 = lean_ctor_get(x_20, 2);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_20);
lean_inc(x_17);
x_40 = l_Lean_MetavarContext_addLevelMVarDecl(x_37, x_17);
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
lean_ctor_set(x_41, 2, x_39);
x_42 = lean_st_ref_set(x_4, x_41, x_21);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_mkLevelMVar(x_17);
x_45 = l___private_Lean_Elab_Term_4__liftMetaMFinalizer(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_43);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
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
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_44);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_44);
x_49 = lean_ctor_get(x_45, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_51 = x_45;
} else {
 lean_dec_ref(x_45);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(1, 2, 0);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_14);
if (x_53 == 0)
{
return x_14;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_14, 0);
x_55 = lean_ctor_get(x_14, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_14);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_10);
if (x_57 == 0)
{
return x_10;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_10, 0);
x_59 = lean_ctor_get(x_10, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_10);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
lean_object* l_Lean_Elab_Term_ensureType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
x_9 = l_Lean_isType___at_Lean_Elab_Term_ensureType___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_13 = l_Lean_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_16 = l_Lean_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_mkSort(x_17);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_14);
x_20 = l_Lean_Elab_Term_isDefEq(x_14, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = l___private_Lean_Elab_Term_17__tryCoeSort(x_14, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_20, 0);
lean_dec(x_26);
lean_ctor_set(x_20, 0, x_1);
return x_20;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_20);
if (x_29 == 0)
{
return x_20;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_20, 0);
x_31 = lean_ctor_get(x_20, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_20);
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
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_16);
if (x_33 == 0)
{
return x_16;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_16, 0);
x_35 = lean_ctor_get(x_16, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_16);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_13);
if (x_37 == 0)
{
return x_13;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_13, 0);
x_39 = lean_ctor_get(x_13, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_13);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_9);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_9, 0);
lean_dec(x_42);
lean_ctor_set(x_9, 0, x_1);
return x_9;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_9, 1);
lean_inc(x_43);
lean_dec(x_9);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_1);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_9);
if (x_45 == 0)
{
return x_9;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_9, 0);
x_47 = lean_ctor_get(x_9, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_9);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_Lean_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_mkSort(x_10);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_Lean_Elab_Term_elabTerm(x_1, x_13, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = !lean_is_exclusive(x_6);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_6, 3);
x_20 = l_Lean_replaceRef(x_1, x_19);
lean_dec(x_1);
x_21 = l_Lean_replaceRef(x_20, x_19);
lean_dec(x_20);
x_22 = l_Lean_replaceRef(x_21, x_19);
lean_dec(x_19);
lean_dec(x_21);
lean_ctor_set(x_6, 3, x_22);
x_23 = l_Lean_Elab_Term_ensureType(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_24 = lean_ctor_get(x_6, 0);
x_25 = lean_ctor_get(x_6, 1);
x_26 = lean_ctor_get(x_6, 2);
x_27 = lean_ctor_get(x_6, 3);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_6);
x_28 = l_Lean_replaceRef(x_1, x_27);
lean_dec(x_1);
x_29 = l_Lean_replaceRef(x_28, x_27);
lean_dec(x_28);
x_30 = l_Lean_replaceRef(x_29, x_27);
lean_dec(x_27);
lean_dec(x_29);
x_31 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_31, 0, x_24);
lean_ctor_set(x_31, 1, x_25);
lean_ctor_set(x_31, 2, x_26);
lean_ctor_set(x_31, 3, x_30);
x_32 = l_Lean_Elab_Term_ensureType(x_16, x_2, x_3, x_4, x_5, x_31, x_7, x_17);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_15);
if (x_33 == 0)
{
return x_15;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_15, 0);
x_35 = lean_ctor_get(x_15, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_15);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_9);
if (x_37 == 0)
{
return x_9;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_9, 0);
x_39 = lean_ctor_get(x_9, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_9);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l___private_Lean_Elab_Term_18__mkAuxNameAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_3);
lean_inc(x_2);
x_4 = l_Lean_Name_appendIndexAfter(x_2, x_3);
lean_inc(x_1);
x_5 = l_Lean_Environment_contains(x_1, x_4);
if (x_5 == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_3, x_6);
lean_dec(x_3);
x_3 = x_7;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_Term_18__mkAuxNameAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_Term_18__mkAuxNameAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_mkAuxName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("auxiliary declaration cannot be created when declaration name is not available");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkAuxName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_mkAuxName___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkAuxName___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_mkAuxName___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_mkAuxName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Elab_Term_mkAuxName___closed__3;
x_13 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
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
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Name_append___main(x_16, x_1);
lean_dec(x_16);
x_19 = lean_unsigned_to_nat(1u);
x_20 = l___private_Lean_Elab_Term_18__mkAuxNameAux___main(x_17, x_18, x_19);
lean_ctor_set(x_9, 0, x_20);
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_23 = lean_ctor_get(x_10, 0);
lean_inc(x_23);
lean_dec(x_10);
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
lean_dec(x_21);
x_25 = l_Lean_Name_append___main(x_23, x_1);
lean_dec(x_23);
x_26 = lean_unsigned_to_nat(1u);
x_27 = l___private_Lean_Elab_Term_18__mkAuxNameAux___main(x_24, x_25, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_22);
return x_28;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabProp___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Expr_getAppArgs___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabProp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabProp___rarg), 1, 0);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabProp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_elabProp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabProp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabProp___boxed), 8, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabProp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_prop___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Term_19__elabOptLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Lean_Syntax_isNone(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Elab_Term_elabLevel(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Lean_levelZero;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
return x_14;
}
}
}
lean_object* l___private_Lean_Elab_Term_19__elabOptLevel___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Term_19__elabOptLevel(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabSort(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l___private_Lean_Elab_Term_19__elabOptLevel(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_mkSort(x_14);
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
x_18 = l_Lean_mkSort(x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
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
lean_object* l_Lean_Elab_Term_elabSort___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabSort(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabSort___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabSort___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabSort(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_sort___elambda__1___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_elabSort___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabTypeStx(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l___private_Lean_Elab_Term_19__elabOptLevel(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_mkLevelSucc(x_14);
x_16 = l_Lean_mkSort(x_15);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = l_Lean_mkLevelSucc(x_17);
x_20 = l_Lean_mkSort(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabTypeStx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabTypeStx(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTypeStx___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabTypeStx(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_type___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabHole___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_box(0);
x_11 = l_Lean_Elab_Term_mkFreshExprMVar(x_1, x_9, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_elabHole(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabHole___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabHole___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_elabHole(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabHole___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabHole___boxed), 1, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabHole(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_mkHole___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabHole___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabNamedHole(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getIdAt(x_1, x_10);
x_12 = 2;
x_13 = l_Lean_Elab_Term_mkFreshExprMVar(x_2, x_12, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_elabNamedHole___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabNamedHole(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNamedHole___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabNamedHole___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabNamedHole(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_namedHole___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabNamedHole___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTacticMVar___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("main");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkTacticMVar___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_mkTacticMVar___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_mkTacticMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_1);
x_11 = 2;
x_12 = l_Lean_Elab_Term_mkTacticMVar___closed__2;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l_Lean_Elab_Term_mkFreshExprMVar(x_10, x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Expr_mvarId_x21(x_14);
lean_inc(x_2);
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_2);
x_18 = l_Lean_Elab_Term_registerSyntheticMVar(x_2, x_16, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_14);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_14);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_13);
if (x_23 == 0)
{
return x_13;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabTacticBlock___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid tactic block, expected type has not been provided");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabTacticBlock___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabTacticBlock___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabTacticBlock___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabTacticBlock___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabTacticBlock(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_Term_elabTacticBlock___closed__3;
x_11 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = l_Lean_Elab_Term_mkTacticMVar(x_12, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_15;
}
}
}
lean_object* l_Lean_Elab_Term_elabTacticBlock___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabTacticBlock(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabTacticBlock___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTacticBlock___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabTacticBlock(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_tacticBlock___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabTacticBlock___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_elabByTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'by' tactic, expected type has not been provided");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabByTactic___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabByTactic___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabByTactic___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabByTactic___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabByTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_Term_elabByTactic___closed__3;
x_11 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = l_Lean_Elab_Term_mkTacticMVar(x_12, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_15;
}
}
}
lean_object* l_Lean_Elab_Term_elabByTactic___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabByTactic(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabByTactic___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabByTactic(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_byTactic___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Prod.mk");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_prodToExpr___rarg___lambda__1___closed__4;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__4;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_2);
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
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_2, x_9);
lean_dec(x_2);
x_11 = l_Lean_Syntax_inhabited;
x_12 = lean_array_get(x_11, x_1, x_10);
x_13 = lean_ctor_get(x_4, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = l_Lean_prodToExpr___rarg___lambda__1___closed__4;
x_16 = l_Lean_addMacroScope(x_14, x_15, x_13);
x_17 = l_Lean_SourceInfo_inhabited___closed__1;
x_18 = l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__3;
x_19 = l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__5;
x_20 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_16);
lean_ctor_set(x_20, 3, x_19);
x_21 = l_Array_empty___closed__1;
x_22 = lean_array_push(x_21, x_20);
x_23 = lean_array_push(x_21, x_12);
x_24 = lean_array_push(x_23, x_3);
x_25 = l_Lean_nullKind___closed__2;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_array_push(x_22, x_26);
x_28 = l_Lean_mkAppStx___closed__8;
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_2 = x_10;
x_3 = x_29;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Term_20__mkPairsAux___main(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Term_20__mkPairsAux___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Term_20__mkPairsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Term_20__mkPairsAux(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_mkPairs(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_4, x_5);
lean_dec(x_4);
x_7 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_1);
x_8 = l___private_Lean_Elab_Term_20__mkPairsAux___main(x_1, x_6, x_7, x_2, x_3);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_mkPairs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_mkPairs(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___rarg), 1, 0);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Term_21__elabCDot(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
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
x_53 = l_Lean_Elab_Term_expandCDot_x3f(x_1, x_52, x_48);
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
goto block_37;
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
goto block_37;
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
block_37:
{
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_12; lean_object* x_13; 
x_12 = 1;
x_13 = l_Lean_Elab_Term_elabTerm(x_1, x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = !lean_is_exclusive(x_3);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_3, 6);
lean_inc(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_14);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_3, 6, x_18);
x_19 = 1;
x_20 = l_Lean_Elab_Term_elabTerm(x_14, x_2, x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; 
x_21 = lean_ctor_get(x_3, 0);
x_22 = lean_ctor_get(x_3, 1);
x_23 = lean_ctor_get(x_3, 2);
x_24 = lean_ctor_get(x_3, 3);
x_25 = lean_ctor_get(x_3, 4);
x_26 = lean_ctor_get(x_3, 5);
x_27 = lean_ctor_get(x_3, 6);
x_28 = lean_ctor_get(x_3, 7);
x_29 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_30 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_31 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_3);
lean_inc(x_14);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_1);
lean_ctor_set(x_32, 1, x_14);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_27);
x_34 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_34, 0, x_21);
lean_ctor_set(x_34, 1, x_22);
lean_ctor_set(x_34, 2, x_23);
lean_ctor_set(x_34, 3, x_24);
lean_ctor_set(x_34, 4, x_25);
lean_ctor_set(x_34, 5, x_26);
lean_ctor_set(x_34, 6, x_33);
lean_ctor_set(x_34, 7, x_28);
lean_ctor_set_uint8(x_34, sizeof(void*)*8, x_29);
lean_ctor_set_uint8(x_34, sizeof(void*)*8 + 1, x_30);
lean_ctor_set_uint8(x_34, sizeof(void*)*8 + 2, x_31);
x_35 = 1;
x_36 = l_Lean_Elab_Term_elabTerm(x_14, x_2, x_35, x_34, x_4, x_5, x_6, x_7, x_8, x_11);
return x_36;
}
}
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_21__elabCDot___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_array_push(x_4, x_7);
x_9 = lean_nat_add(x_3, x_1);
lean_dec(x_3);
x_3 = x_9;
x_4 = x_8;
goto _start;
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabParen___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected parentheses notation");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabParen___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabParen___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabParen___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabParen___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabParen(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_35; lean_object* x_153; uint8_t x_154; 
x_153 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__2;
lean_inc(x_1);
x_154 = l_Lean_Syntax_isOfKind(x_1, x_153);
if (x_154 == 0)
{
uint8_t x_155; 
x_155 = 0;
x_35 = x_155;
goto block_152;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_156 = l_Lean_Syntax_getArgs(x_1);
x_157 = lean_array_get_size(x_156);
lean_dec(x_156);
x_158 = lean_unsigned_to_nat(3u);
x_159 = lean_nat_dec_eq(x_157, x_158);
lean_dec(x_157);
x_35 = x_159;
goto block_152;
}
block_34:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_3, 6);
lean_inc(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_10);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
lean_ctor_set(x_3, 6, x_15);
x_16 = 1;
x_17 = l_Lean_Elab_Term_elabTerm(x_10, x_2, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_18 = lean_ctor_get(x_3, 0);
x_19 = lean_ctor_get(x_3, 1);
x_20 = lean_ctor_get(x_3, 2);
x_21 = lean_ctor_get(x_3, 3);
x_22 = lean_ctor_get(x_3, 4);
x_23 = lean_ctor_get(x_3, 5);
x_24 = lean_ctor_get(x_3, 6);
x_25 = lean_ctor_get(x_3, 7);
x_26 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_27 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_28 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_3);
lean_inc(x_10);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_1);
lean_ctor_set(x_29, 1, x_10);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_24);
x_31 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_31, 0, x_18);
lean_ctor_set(x_31, 1, x_19);
lean_ctor_set(x_31, 2, x_20);
lean_ctor_set(x_31, 3, x_21);
lean_ctor_set(x_31, 4, x_22);
lean_ctor_set(x_31, 5, x_23);
lean_ctor_set(x_31, 6, x_30);
lean_ctor_set(x_31, 7, x_25);
lean_ctor_set_uint8(x_31, sizeof(void*)*8, x_26);
lean_ctor_set_uint8(x_31, sizeof(void*)*8 + 1, x_27);
lean_ctor_set_uint8(x_31, sizeof(void*)*8 + 2, x_28);
x_32 = 1;
x_33 = l_Lean_Elab_Term_elabTerm(x_10, x_2, x_32, x_31, x_4, x_5, x_6, x_7, x_8, x_11);
return x_33;
}
}
block_152:
{
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_2);
lean_dec(x_1);
x_36 = l_Lean_Elab_Term_elabParen___closed__3;
x_37 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_36, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_141; uint8_t x_142; 
x_38 = lean_unsigned_to_nat(1u);
x_39 = l_Lean_Syntax_getArg(x_1, x_38);
x_141 = l_Lean_nullKind___closed__2;
lean_inc(x_39);
x_142 = l_Lean_Syntax_isOfKind(x_39, x_141);
if (x_142 == 0)
{
uint8_t x_143; 
x_143 = 0;
x_40 = x_143;
goto block_140;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
x_144 = l_Lean_Syntax_getArgs(x_39);
x_145 = lean_array_get_size(x_144);
lean_dec(x_144);
x_146 = lean_unsigned_to_nat(0u);
x_147 = lean_nat_dec_eq(x_145, x_146);
if (x_147 == 0)
{
lean_object* x_148; uint8_t x_149; 
x_148 = lean_unsigned_to_nat(2u);
x_149 = lean_nat_dec_eq(x_145, x_148);
lean_dec(x_145);
x_40 = x_149;
goto block_140;
}
else
{
lean_object* x_150; lean_object* x_151; 
lean_dec(x_145);
lean_dec(x_39);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_150 = l_Lean_unitToExpr___lambda__1___closed__3;
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_9);
return x_151;
}
}
block_140:
{
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_39);
lean_dec(x_2);
lean_dec(x_1);
x_41 = l_Lean_Elab_Term_elabParen___closed__3;
x_42 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_41, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; uint8_t x_48; 
x_43 = lean_unsigned_to_nat(0u);
x_44 = l_Lean_Syntax_getArg(x_39, x_43);
x_45 = l_Lean_Syntax_getArg(x_39, x_38);
lean_dec(x_39);
x_46 = l_Lean_nullKind___closed__2;
lean_inc(x_45);
x_47 = l_Lean_Syntax_isOfKind(x_45, x_46);
if (x_47 == 0)
{
uint8_t x_136; 
x_136 = 0;
x_48 = x_136;
goto block_135;
}
else
{
lean_object* x_137; lean_object* x_138; uint8_t x_139; 
x_137 = l_Lean_Syntax_getArgs(x_45);
x_138 = lean_array_get_size(x_137);
lean_dec(x_137);
x_139 = lean_nat_dec_eq(x_138, x_38);
lean_dec(x_138);
x_48 = x_139;
goto block_135;
}
block_135:
{
if (x_48 == 0)
{
lean_dec(x_1);
if (x_47 == 0)
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_2);
x_49 = l_Lean_Elab_Term_elabParen___closed__3;
x_50 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_51 = l_Lean_Syntax_getArgs(x_45);
lean_dec(x_45);
x_52 = lean_array_get_size(x_51);
lean_dec(x_51);
x_53 = lean_nat_dec_eq(x_52, x_43);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_44);
lean_dec(x_2);
x_54 = l_Lean_Elab_Term_elabParen___closed__3;
x_55 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_54, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_55;
}
else
{
lean_object* x_56; 
x_56 = l___private_Lean_Elab_Term_21__elabCDot(x_44, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_56;
}
}
}
else
{
lean_object* x_57; uint8_t x_58; uint8_t x_102; lean_object* x_128; uint8_t x_129; 
x_57 = l_Lean_Syntax_getArg(x_45, x_43);
lean_dec(x_45);
x_128 = l_Lean_Parser_Term_typeAscription___elambda__1___closed__2;
lean_inc(x_57);
x_129 = l_Lean_Syntax_isOfKind(x_57, x_128);
if (x_129 == 0)
{
uint8_t x_130; 
x_130 = 0;
x_102 = x_130;
goto block_127;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_131 = l_Lean_Syntax_getArgs(x_57);
x_132 = lean_array_get_size(x_131);
lean_dec(x_131);
x_133 = lean_unsigned_to_nat(2u);
x_134 = lean_nat_dec_eq(x_132, x_133);
lean_dec(x_132);
x_102 = x_134;
goto block_127;
}
block_101:
{
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_57);
lean_dec(x_44);
lean_dec(x_2);
lean_dec(x_1);
x_59 = l_Lean_Elab_Term_elabParen___closed__3;
x_60 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_59, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_61 = l_Lean_Syntax_getArg(x_57, x_38);
lean_dec(x_57);
x_62 = l_Lean_Syntax_getArgs(x_61);
lean_dec(x_61);
x_63 = l_Lean_mkOptionalNode___closed__2;
x_64 = lean_array_push(x_63, x_44);
x_65 = lean_unsigned_to_nat(2u);
x_66 = l_Array_empty___closed__1;
x_67 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_65, x_62, x_43, x_66);
lean_dec(x_62);
x_68 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_67, x_67, x_43, x_64);
lean_dec(x_67);
x_69 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_st_ref_get(x_8, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_ctor_get(x_73, 0);
lean_inc(x_75);
lean_dec(x_73);
x_76 = lean_st_ref_get(x_4, x_74);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_ctor_get(x_77, 4);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_ctor_get(x_7, 1);
lean_inc(x_80);
x_81 = lean_ctor_get(x_7, 2);
lean_inc(x_81);
x_82 = lean_environment_main_module(x_75);
x_83 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_70);
lean_ctor_set(x_83, 2, x_80);
lean_ctor_set(x_83, 3, x_81);
x_84 = l_Lean_Elab_Term_mkPairs(x_68, x_83, x_79);
lean_dec(x_68);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_st_ref_take(x_4, x_78);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = !lean_is_exclusive(x_88);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_88, 4);
lean_dec(x_91);
lean_ctor_set(x_88, 4, x_86);
x_92 = lean_st_ref_set(x_4, x_88, x_89);
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
lean_dec(x_92);
x_10 = x_85;
x_11 = x_93;
goto block_34;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_94 = lean_ctor_get(x_88, 0);
x_95 = lean_ctor_get(x_88, 1);
x_96 = lean_ctor_get(x_88, 2);
x_97 = lean_ctor_get(x_88, 3);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_88);
x_98 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_98, 0, x_94);
lean_ctor_set(x_98, 1, x_95);
lean_ctor_set(x_98, 2, x_96);
lean_ctor_set(x_98, 3, x_97);
lean_ctor_set(x_98, 4, x_86);
x_99 = lean_st_ref_set(x_4, x_98, x_89);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
lean_dec(x_99);
x_10 = x_85;
x_11 = x_100;
goto block_34;
}
}
}
block_127:
{
if (x_102 == 0)
{
lean_object* x_103; uint8_t x_104; 
x_103 = l_Lean_Parser_Term_tupleTail___elambda__1___closed__2;
lean_inc(x_57);
x_104 = l_Lean_Syntax_isOfKind(x_57, x_103);
if (x_104 == 0)
{
uint8_t x_105; 
x_105 = 0;
x_58 = x_105;
goto block_101;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; 
x_106 = l_Lean_Syntax_getArgs(x_57);
x_107 = lean_array_get_size(x_106);
lean_dec(x_106);
x_108 = lean_unsigned_to_nat(2u);
x_109 = lean_nat_dec_eq(x_107, x_108);
lean_dec(x_107);
x_58 = x_109;
goto block_101;
}
}
else
{
lean_object* x_110; lean_object* x_111; 
lean_dec(x_2);
lean_dec(x_1);
x_110 = l_Lean_Syntax_getArg(x_57, x_38);
lean_dec(x_57);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_111 = l_Lean_Elab_Term_elabType(x_110, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec(x_111);
x_114 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_114, 0, x_112);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_114);
x_115 = l___private_Lean_Elab_Term_21__elabCDot(x_44, x_114, x_3, x_4, x_5, x_6, x_7, x_8, x_113);
if (lean_obj_tag(x_115) == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = l_Lean_Elab_Term_ensureHasType(x_114, x_116, x_3, x_4, x_5, x_6, x_7, x_8, x_117);
return x_118;
}
else
{
uint8_t x_119; 
lean_dec(x_114);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_119 = !lean_is_exclusive(x_115);
if (x_119 == 0)
{
return x_115;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_115, 0);
x_121 = lean_ctor_get(x_115, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_115);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
}
else
{
uint8_t x_123; 
lean_dec(x_44);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_123 = !lean_is_exclusive(x_111);
if (x_123 == 0)
{
return x_111;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_111, 0);
x_125 = lean_ctor_get(x_111, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_111);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
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
lean_object* l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabParen___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabParen), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabParen(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___lambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabParen___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandListLit___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_4);
x_11 = lean_array_fget(x_3, x_10);
x_12 = l_Lean_mkAppStx___closed__9;
x_13 = lean_array_push(x_12, x_11);
x_14 = lean_array_push(x_13, x_6);
lean_inc(x_2);
x_15 = l_Lean_mkAppStx(x_2, x_14);
x_4 = x_10;
x_5 = lean_box(0);
x_6 = x_15;
goto _start;
}
else
{
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Term_expandListLit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Lean_listToExpr___rarg___closed__6;
x_11 = l_Lean_mkIdentFrom(x_5, x_10);
lean_dec(x_5);
x_12 = l_Lean_listToExpr___rarg___closed__4;
x_13 = l_Lean_mkIdentFrom(x_9, x_12);
lean_dec(x_9);
x_14 = l_Lean_Syntax_getArgs(x_7);
lean_dec(x_7);
x_15 = l_Array_empty___closed__1;
x_16 = l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1(x_8, x_14, x_4, x_15);
lean_dec(x_14);
x_17 = lean_array_get_size(x_16);
x_18 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandListLit___spec__1(x_1, x_11, x_16, x_17, lean_box(0), x_13);
lean_dec(x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandListLit___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_expandListLit___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_expandListLit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandListLit(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandListLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandListLit___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandListLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Parser_Term_listLit___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandListLit___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected array literal syntax");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("List.toArray");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_expandArrayLit___closed__2;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_expandArrayLit___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Term_expandArrayLit___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_arrayToExpr___rarg___lambda__1___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandArrayLit___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_List_repr___rarg___closed__2;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Term_expandArrayLit___closed__7;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_expandArrayLit___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_SourceInfo_inhabited___closed__1;
x_2 = l_List_repr___rarg___closed__3;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_expandArrayLit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_38; uint8_t x_39; 
x_38 = l_Lean_Parser_Term_arrayLit___elambda__1___closed__2;
lean_inc(x_1);
x_39 = l_Lean_Syntax_isOfKind(x_1, x_38);
if (x_39 == 0)
{
uint8_t x_40; 
x_40 = 0;
x_4 = x_40;
goto block_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = l_Lean_Syntax_getArgs(x_1);
x_42 = lean_array_get_size(x_41);
lean_dec(x_41);
x_43 = lean_unsigned_to_nat(3u);
x_44 = lean_nat_dec_eq(x_42, x_43);
lean_dec(x_42);
x_4 = x_44;
goto block_37;
}
block_37:
{
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_5 = l_Lean_Elab_Term_expandArrayLit___closed__1;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_Syntax_getArgs(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_Lean_arrayToExpr___rarg___lambda__1___closed__2;
x_14 = l_Lean_addMacroScope(x_12, x_13, x_11);
x_15 = l_Lean_SourceInfo_inhabited___closed__1;
x_16 = l_Lean_Elab_Term_expandArrayLit___closed__4;
x_17 = l_Lean_Elab_Term_expandArrayLit___closed__6;
x_18 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_18, 2, x_14);
lean_ctor_set(x_18, 3, x_17);
x_19 = l_Array_empty___closed__1;
x_20 = lean_array_push(x_19, x_18);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Array_iterateMAux___main___at_Array_append___spec__1___rarg(x_10, x_10, x_21, x_19);
lean_dec(x_10);
x_23 = l_Lean_nullKind___closed__2;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_Elab_Term_expandArrayLit___closed__8;
x_26 = lean_array_push(x_25, x_24);
x_27 = l_Lean_Elab_Term_expandArrayLit___closed__9;
x_28 = lean_array_push(x_26, x_27);
x_29 = l_Lean_Parser_Term_listLit___elambda__1___closed__2;
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = lean_array_push(x_19, x_30);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_23);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_array_push(x_20, x_32);
x_34 = l_Lean_mkAppStx___closed__8;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_3);
return x_36;
}
}
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandArrayLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandArrayLit), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_expandArrayLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Parser_Term_arrayLit___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandArrayLit___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Term_22__resolveLocalNameAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_local_ctx_find_from_user_name(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
x_2 = x_5;
x_3 = x_7;
goto _start;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
}
else
{
uint8_t x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_4);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = l_Lean_LocalDecl_toExpr(x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
lean_dec(x_4);
x_15 = l_Lean_LocalDecl_toExpr(x_14);
lean_dec(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
lean_object* l___private_Lean_Elab_Term_22__resolveLocalNameAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_Term_22__resolveLocalNameAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Term_23__resolveLocalName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getLCtx___at_Lean_Elab_Term_getFVarLocalDecl_x21___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_box(0);
x_13 = l___private_Lean_Elab_Term_22__resolveLocalNameAux___main(x_11, x_1, x_12);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_box(0);
x_17 = l___private_Lean_Elab_Term_22__resolveLocalNameAux___main(x_14, x_1, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_9);
if (x_19 == 0)
{
return x_9;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_9, 0);
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_9);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l___private_Lean_Elab_Term_23__resolveLocalName(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = lean_box(0);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
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
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_10, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
lean_ctor_set(x_11, 0, x_23);
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_dec(x_10);
x_25 = lean_ctor_get(x_19, 0);
lean_inc(x_25);
lean_dec(x_19);
lean_ctor_set(x_11, 0, x_25);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_11);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_20);
lean_free_object(x_11);
lean_dec(x_19);
x_27 = !lean_is_exclusive(x_10);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_10, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_10, 0, x_29);
return x_10;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_10, 1);
lean_inc(x_30);
lean_dec(x_10);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_11, 0);
lean_inc(x_33);
lean_dec(x_11);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_10, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_36 = x_10;
} else {
 lean_dec_ref(x_10);
 x_36 = lean_box(0);
}
x_37 = lean_ctor_get(x_33, 0);
lean_inc(x_37);
lean_dec(x_33);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
if (lean_is_scalar(x_36)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_36;
}
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_35);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_34);
lean_dec(x_33);
x_40 = lean_ctor_get(x_10, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_41 = x_10;
} else {
 lean_dec_ref(x_10);
 x_41 = lean_box(0);
}
x_42 = lean_box(0);
if (lean_is_scalar(x_41)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_41;
}
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_40);
return x_43;
}
}
}
}
else
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_10);
if (x_44 == 0)
{
return x_10;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_10, 0);
x_46 = lean_ctor_get(x_10, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_10);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_8);
return x_49;
}
}
}
lean_object* l_Nat_foldMAux___main___at___private_Lean_Elab_Term_24__mkFreshLevelMVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_2, x_13);
lean_dec(x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l_Lean_mkFreshLevelMVar___at_Lean_Elab_Term_ensureType___spec__2(x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_3);
x_2 = x_14;
x_3 = x_18;
x_10 = x_17;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_3);
lean_ctor_set(x_24, 1, x_10);
return x_24;
}
}
}
lean_object* l___private_Lean_Elab_Term_24__mkFreshLevelMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
lean_inc(x_1);
x_10 = l_Nat_foldMAux___main___at___private_Lean_Elab_Term_24__mkFreshLevelMVars___spec__1(x_1, x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Nat_foldMAux___main___at___private_Lean_Elab_Term_24__mkFreshLevelMVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_foldMAux___main___at___private_Lean_Elab_Term_24__mkFreshLevelMVars___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* _init_l_Lean_Elab_Term_mkConst___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("too many explicit universe levels");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_mkConst___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_mkConst___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_mkConst___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_mkConst___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_mkConst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_1);
x_14 = lean_environment_find(x_13, x_1);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_2);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_1);
x_16 = l_Lean_getConstInfo___rarg___lambda__1___closed__3;
x_17 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_getConstInfo___rarg___lambda__1___closed__5;
x_19 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_14, 0);
lean_inc(x_21);
lean_dec(x_14);
x_22 = l_Lean_ConstantInfo_lparams(x_21);
lean_dec(x_21);
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_List_lengthAux___main___rarg(x_22, x_23);
lean_dec(x_22);
x_25 = l_List_lengthAux___main___rarg(x_2, x_23);
x_26 = lean_nat_dec_lt(x_24, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_nat_sub(x_24, x_25);
lean_dec(x_25);
lean_dec(x_24);
x_28 = l___private_Lean_Elab_Term_24__mkFreshLevelMVars(x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = l_List_append___rarg(x_2, x_30);
x_32 = l_Lean_mkConst(x_1, x_31);
lean_ctor_set(x_28, 0, x_32);
return x_28;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_28, 0);
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_28);
x_35 = l_List_append___rarg(x_2, x_33);
x_36 = l_Lean_mkConst(x_1, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_28);
if (x_38 == 0)
{
return x_28;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_28, 0);
x_40 = lean_ctor_get(x_28, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_28);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_1);
x_42 = l_Lean_Elab_Term_mkConst___closed__3;
x_43 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_42, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_43;
}
}
}
}
lean_object* l_List_foldlM___main___at___private_Lean_Elab_Term_25__mkConsts___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_11; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_18 = l_Lean_Elab_Term_mkConst(x_16, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_ctor_set(x_13, 0, x_19);
lean_ctor_set(x_3, 1, x_2);
x_2 = x_3;
x_3 = x_15;
x_10 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
lean_free_object(x_13);
lean_dec(x_17);
lean_free_object(x_3);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_3, 1);
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_29 = l_Lean_Elab_Term_mkConst(x_27, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_28);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_32);
x_2 = x_3;
x_3 = x_26;
x_10 = x_31;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_28);
lean_free_object(x_3);
lean_dec(x_26);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_ctor_get(x_29, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_36 = x_29;
} else {
 lean_dec_ref(x_29);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(1, 2, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_ctor_get(x_3, 0);
x_39 = lean_ctor_get(x_3, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_3);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_42 = x_38;
} else {
 lean_dec_ref(x_38);
 x_42 = lean_box(0);
}
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_43 = l_Lean_Elab_Term_mkConst(x_40, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
if (lean_is_scalar(x_42)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_42;
}
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_41);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_2);
x_2 = x_47;
x_3 = x_39;
x_10 = x_45;
goto _start;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_39);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_49 = lean_ctor_get(x_43, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_43, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_51 = x_43;
} else {
 lean_dec_ref(x_43);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(1, 2, 0);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Term_25__mkConsts(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_box(0);
x_13 = l_List_foldlM___main___at___private_Lean_Elab_Term_25__mkConsts___spec__1(x_2, x_12, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_resolveGlobalName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_getCurrNamespace(x_2, x_3, x_4, x_5, x_6, x_7, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Term_getOpenDecls(x_2, x_3, x_4, x_5, x_6, x_7, x_15);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = l_Lean_Elab_resolveGlobalName(x_12, x_14, x_18, x_1);
lean_dec(x_14);
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
x_22 = l_Lean_Elab_resolveGlobalName(x_12, x_14, x_20, x_1);
lean_dec(x_14);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
}
lean_object* l_Lean_Elab_Term_resolveGlobalName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_resolveGlobalName(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown identifier '");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_resolveName___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_resolveName___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of explicit universe parameters, '");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_resolveName___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_resolveName___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is a local");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_resolveName___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_resolveName___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_resolveName___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_resolveName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_11 = l___private_Lean_Elab_Term_23__resolveLocalName(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_List_isEmpty___rarg(x_2);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_1);
x_15 = l___private_Lean_Elab_Term_25__mkConsts(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_2);
lean_inc(x_1);
x_16 = l_Lean_Elab_Term_resolveGlobalName(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_List_isEmpty___rarg(x_17);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_1);
x_20 = l___private_Lean_Elab_Term_25__mkConsts(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_17);
lean_dec(x_3);
x_21 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_18);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_extractMacroScopes(x_1);
x_25 = l_Lean_MacroScopesView_format(x_24, x_22);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = l_Lean_Elab_Term_resolveName___closed__3;
x_28 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Lean_getConstInfo___rarg___lambda__1___closed__5;
x_30 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_30, x_4, x_5, x_6, x_7, x_8, x_9, x_23);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
else
{
lean_object* x_36; uint8_t x_37; 
lean_dec(x_2);
lean_dec(x_1);
x_36 = lean_ctor_get(x_12, 0);
lean_inc(x_36);
lean_dec(x_12);
x_37 = !lean_is_exclusive(x_11);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_38 = lean_ctor_get(x_11, 1);
x_39 = lean_ctor_get(x_11, 0);
lean_dec(x_39);
x_40 = lean_ctor_get(x_36, 0);
lean_inc(x_40);
x_41 = l_List_isEmpty___rarg(x_3);
lean_dec(x_3);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
lean_free_object(x_11);
lean_dec(x_36);
x_42 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_42, 0, x_40);
x_43 = l_Lean_Elab_Term_resolveName___closed__6;
x_44 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_Lean_Elab_Term_resolveName___closed__9;
x_46 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_46, x_4, x_5, x_6, x_7, x_8, x_9, x_38);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
return x_47;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_47, 0);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_47);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_40);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_36);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_11, 0, x_53);
return x_11;
}
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_11, 1);
lean_inc(x_54);
lean_dec(x_11);
x_55 = lean_ctor_get(x_36, 0);
lean_inc(x_55);
x_56 = l_List_isEmpty___rarg(x_3);
lean_dec(x_3);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_36);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_55);
x_58 = l_Lean_Elab_Term_resolveName___closed__6;
x_59 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = l_Lean_Elab_Term_resolveName___closed__9;
x_61 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_61, x_4, x_5, x_6, x_7, x_8, x_9, x_54);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_65 = x_62;
} else {
 lean_dec_ref(x_62);
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
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_55);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_36);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_54);
return x_69;
}
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_11);
if (x_70 == 0)
{
return x_11;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_11, 0);
x_72 = lean_ctor_get(x_11, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_11);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabBadCDot___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid occurrence of `·` notation, it must be surrounded by parentheses (e.g. `(· + 1)`)");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabBadCDot___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabBadCDot___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabBadCDot___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabBadCDot___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabBadCDot___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Elab_Term_elabBadCDot___rarg___closed__3;
x_9 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_8, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabBadCDot(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBadCDot___rarg), 7, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabBadCDot___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_elabBadCDot(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabBadCDot___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBadCDot___boxed), 2, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabBadCDot(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_cdot___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabBadCDot___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_elabStrLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ill-formed syntax");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabStrLit___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabStrLit___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabStrLit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabStrLit___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabStrLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Syntax_isStrLit_x3f(x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Elab_Term_elabStrLit___closed__3;
x_12 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_Lean_mkStrLit(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
}
}
lean_object* l_Lean_Elab_Term_elabStrLit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabStrLit(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabStrLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabStrLit___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabStrLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_strLitKind___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabStrLit___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_Term_elabNumLit___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Literal_type___closed__3;
x_2 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabNumLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_71; lean_object* x_72; 
x_71 = l_Lean_numLitKind;
x_72 = l_Lean_Syntax_isNatLitAux(x_71, x_1);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; 
lean_dec(x_2);
lean_dec(x_1);
x_73 = l_Lean_Elab_Term_elabStrLit___closed__3;
x_74 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_73, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_75 = !lean_is_exclusive(x_74);
if (x_75 == 0)
{
return x_74;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_74, 0);
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_74);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_72, 0);
lean_inc(x_79);
lean_dec(x_72);
x_80 = l_Lean_mkNatLit(x_79);
x_10 = x_80;
x_11 = x_9;
goto block_70;
}
block_70:
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_12 = 1;
x_13 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_14 = l_Lean_Elab_Term_mkFreshTypeMVar(x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_55; lean_object* x_56; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Expr_mvarId_x21(x_15);
x_18 = lean_box(0);
x_55 = l_Lean_Elab_Term_elabNumLit___closed__1;
x_56 = l_Lean_Elab_Term_registerSyntheticMVar(x_1, x_17, x_55, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_19 = x_57;
goto block_54;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_ctor_get(x_2, 0);
lean_inc(x_59);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_15);
x_60 = l_Lean_Elab_Term_isDefEq(x_59, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_58);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_19 = x_61;
goto block_54;
}
else
{
uint8_t x_62; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
return x_60;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_60, 0);
x_64 = lean_ctor_get(x_60, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_60);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
block_54:
{
lean_object* x_20; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_15);
x_20 = l_Lean_Elab_Term_getLevel(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_23 = l_Lean_Elab_Term_decLevel(x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_18);
x_27 = l_Lean_Meta_evalNat___main___closed__7;
lean_inc(x_26);
x_28 = l_Lean_mkConst(x_27, x_26);
lean_inc(x_15);
x_29 = l_Lean_mkApp(x_28, x_15);
x_30 = l_Lean_Elab_Term_mkInstMVar(x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_25);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = l_Lean_Meta_evalNat___main___closed__8;
x_34 = l_Lean_mkConst(x_33, x_26);
x_35 = l_Lean_mkApp3(x_34, x_15, x_32, x_10);
lean_ctor_set(x_30, 0, x_35);
return x_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_30, 0);
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_30);
x_38 = l_Lean_Meta_evalNat___main___closed__8;
x_39 = l_Lean_mkConst(x_38, x_26);
x_40 = l_Lean_mkApp3(x_39, x_15, x_36, x_10);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_37);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_dec(x_26);
lean_dec(x_15);
lean_dec(x_10);
x_42 = !lean_is_exclusive(x_30);
if (x_42 == 0)
{
return x_30;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_30, 0);
x_44 = lean_ctor_get(x_30, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_30);
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
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_23);
if (x_46 == 0)
{
return x_23;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_23, 0);
x_48 = lean_ctor_get(x_23, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_23);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_50 = !lean_is_exclusive(x_20);
if (x_50 == 0)
{
return x_20;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_20, 0);
x_52 = lean_ctor_get(x_20, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_20);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_14);
if (x_66 == 0)
{
return x_14;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_14, 0);
x_68 = lean_ctor_get(x_14, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_14);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNumLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabNumLit), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabNumLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_numLitKind___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabNumLit___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabCharLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Syntax_isCharLit_x3f(x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Elab_Term_elabStrLit___closed__3;
x_12 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; uint32_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_unbox_uint32(x_13);
lean_dec(x_13);
x_15 = lean_uint32_to_nat(x_14);
x_16 = l_Lean_mkNatLit(x_15);
x_17 = l_Lean_charToExpr___lambda__1___closed__1;
x_18 = l_Lean_mkApp(x_17, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_9);
return x_19;
}
}
}
lean_object* l_Lean_Elab_Term_elabCharLit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabCharLit(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabCharLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabCharLit___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabCharLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_charLitKind___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabCharLit___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabQuotedName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Syntax_isNameLit_x3f(x_11);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Elab_Term_elabStrLit___closed__3;
x_14 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
x_16 = l_Lean_Name_toExprAux___main(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_9);
return x_17;
}
}
}
lean_object* l_Lean_Elab_Term_elabQuotedName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabQuotedName(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabQuotedName___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabQuotedName(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Parser_Term_quotedName___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l___private_Lean_Elab_Term_26__mkSomeContext___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("<TermElabM>");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Term_26__mkSomeContext___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l___private_Lean_Elab_Term_26__mkSomeContext___closed__1;
x_4 = l_Lean_FileMap_Inhabited___closed__1;
x_5 = lean_box(0);
x_6 = l_Lean_firstFrontendMacroScope;
x_7 = 1;
x_8 = lean_alloc_ctor(0, 8, 3);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_1);
lean_ctor_set(x_8, 4, x_2);
lean_ctor_set(x_8, 5, x_2);
lean_ctor_set(x_8, 6, x_2);
lean_ctor_set(x_8, 7, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*8, x_7);
lean_ctor_set_uint8(x_8, sizeof(void*)*8 + 1, x_7);
lean_ctor_set_uint8(x_8, sizeof(void*)*8 + 2, x_7);
return x_8;
}
}
lean_object* _init_l___private_Lean_Elab_Term_26__mkSomeContext() {
_start:
{
lean_object* x_1; 
x_1 = l___private_Lean_Elab_Term_26__mkSomeContext___closed__2;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_TermElabM_run___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_st_mk_ref(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_10);
x_12 = lean_apply_7(x_1, x_2, x_10, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_10, x_14);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_10);
x_23 = !lean_is_exclusive(x_12);
if (x_23 == 0)
{
return x_12;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_Elab_Term_TermElabM_run(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_TermElabM_run___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_TermElabM_run_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_st_mk_ref(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_10);
x_12 = lean_apply_7(x_1, x_2, x_10, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_10, x_14);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
lean_ctor_set(x_15, 0, x_13);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_10);
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
lean_object* l_Lean_Elab_Term_TermElabM_run_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_TermElabM_run_x27___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_TermElabM_toIO___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_9 = lean_st_mk_ref(x_3, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_st_mk_ref(x_5, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_mk_ref(x_7, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_10);
lean_inc(x_13);
lean_inc(x_16);
x_18 = lean_apply_7(x_1, x_6, x_16, x_4, x_13, x_2, x_10, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_st_ref_get(x_16, x_20);
lean_dec(x_16);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_st_ref_get(x_13, x_23);
lean_dec(x_13);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_st_ref_get(x_10, x_26);
lean_dec(x_10);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_22);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_27, 0, x_32);
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_25);
lean_ctor_set(x_35, 1, x_22);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_19);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_34);
return x_38;
}
}
else
{
lean_object* x_39; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_10);
x_39 = lean_ctor_get(x_18, 0);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_18);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_41 = lean_ctor_get(x_18, 0);
lean_dec(x_41);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_box(0);
x_44 = l_Lean_MessageData_formatAux___main(x_43, x_42);
x_45 = l_Lean_Options_empty;
x_46 = l_Lean_Format_pretty(x_44, x_45);
x_47 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_18, 0, x_47);
return x_18;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_48 = lean_ctor_get(x_18, 1);
lean_inc(x_48);
lean_dec(x_18);
x_49 = lean_ctor_get(x_39, 1);
lean_inc(x_49);
lean_dec(x_39);
x_50 = lean_box(0);
x_51 = l_Lean_MessageData_formatAux___main(x_50, x_49);
x_52 = l_Lean_Options_empty;
x_53 = l_Lean_Format_pretty(x_51, x_52);
x_54 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_48);
return x_55;
}
}
else
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_18);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_57 = lean_ctor_get(x_18, 0);
lean_dec(x_57);
x_58 = lean_ctor_get(x_39, 0);
lean_inc(x_58);
lean_dec(x_39);
x_59 = l_Nat_repr(x_58);
x_60 = l_Lean_InternalExceptionId_toString___closed__1;
x_61 = lean_string_append(x_60, x_59);
lean_dec(x_59);
x_62 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_18, 0, x_62);
return x_18;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_63 = lean_ctor_get(x_18, 1);
lean_inc(x_63);
lean_dec(x_18);
x_64 = lean_ctor_get(x_39, 0);
lean_inc(x_64);
lean_dec(x_39);
x_65 = l_Nat_repr(x_64);
x_66 = l_Lean_InternalExceptionId_toString___closed__1;
x_67 = lean_string_append(x_66, x_65);
lean_dec(x_65);
x_68 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_63);
return x_69;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_TermElabM_toIO(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_TermElabM_toIO___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_23 = l_Lean_getMaxRecDepth(x_3);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_box(0);
lean_inc(x_3);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_3);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_25);
x_27 = l_Lean_NameGenerator_Inhabited___closed__3;
x_28 = l_Lean_TraceState_Inhabited___closed__1;
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_27);
lean_ctor_set(x_29, 2, x_28);
x_30 = lean_st_mk_ref(x_29, x_6);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Meta_MetaM_run_x27___rarg___closed__3;
x_34 = lean_st_mk_ref(x_33, x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Elab_Term_State_inhabited___closed__1;
x_38 = lean_st_mk_ref(x_37, x_36);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l___private_Lean_Elab_Term_26__mkSomeContext;
x_42 = l_Lean_Meta_hasEval___rarg___closed__2;
lean_inc(x_31);
lean_inc(x_26);
lean_inc(x_35);
lean_inc(x_39);
x_43 = lean_apply_7(x_4, x_41, x_39, x_42, x_35, x_26, x_31, x_40);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_st_ref_get(x_39, x_45);
lean_dec(x_39);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = lean_st_ref_get(x_35, x_47);
lean_dec(x_35);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
x_50 = l_Lean_printTraces___at_Lean_Core_hasEval___spec__1(x_26, x_31, x_49);
lean_dec(x_26);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; 
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_st_ref_get(x_31, x_51);
lean_dec(x_31);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_ctor_get(x_53, 0);
lean_inc(x_55);
lean_dec(x_53);
x_56 = 1;
x_57 = lean_box(x_56);
x_58 = lean_apply_5(x_1, x_55, x_3, x_44, x_57, x_54);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_44);
lean_dec(x_31);
lean_dec(x_3);
lean_dec(x_1);
x_59 = lean_ctor_get(x_50, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_50, 1);
lean_inc(x_60);
lean_dec(x_50);
x_7 = x_59;
x_8 = x_60;
goto block_22;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_39);
lean_dec(x_35);
lean_dec(x_3);
lean_dec(x_1);
x_61 = lean_ctor_get(x_43, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_43, 1);
lean_inc(x_62);
lean_dec(x_43);
x_63 = l_Lean_printTraces___at_Lean_Core_hasEval___spec__1(x_26, x_31, x_62);
lean_dec(x_31);
lean_dec(x_26);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_7 = x_61;
x_8 = x_64;
goto block_22;
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_61);
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
lean_dec(x_63);
x_7 = x_65;
x_8 = x_66;
goto block_22;
}
}
block_22:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_box(0);
x_11 = l_Lean_MessageData_formatAux___main(x_10, x_9);
x_12 = l_Lean_Options_empty;
x_13 = l_Lean_Format_pretty(x_11, x_12);
x_14 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_8);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
lean_dec(x_7);
x_17 = l_Nat_repr(x_16);
x_18 = l_Lean_InternalExceptionId_toString___closed__1;
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_8);
return x_21;
}
}
}
}
lean_object* l_Lean_Elab_Term_MetaHasEval(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_MetaHasEval___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_MetaHasEval___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_5);
lean_dec(x_5);
x_8 = l_Lean_Elab_Term_MetaHasEval___rarg(x_1, x_2, x_3, x_4, x_7, x_6);
return x_8;
}
}
lean_object* _init_l___private_Lean_Elab_Term_27__regTraceClasses___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Util_4__regTraceClasses___closed__1;
x_2 = l_Lean_Elab_Term_tryCoe___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Term_27__regTraceClasses(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Term_12__postponeElabTerm___closed__1;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l___private_Lean_Elab_Term_27__regTraceClasses___closed__1;
x_6 = l_Lean_registerTraceClass(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_Elab_Term_logDbgTrace___closed__1;
x_9 = l_Lean_registerTraceClass(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
x_12 = lean_box(0);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_9);
if (x_16 == 0)
{
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_9, 0);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_9);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_6);
if (x_20 == 0)
{
return x_6;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_6, 0);
x_22 = lean_ctor_get(x_6, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_6);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_3);
if (x_24 == 0)
{
return x_3;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_3, 0);
x_26 = lean_ctor_get(x_3, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_3);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_Sorry(lean_object*);
lean_object* initialize_Lean_Structure(lean_object*);
lean_object* initialize_Lean_Meta_ExprDefEq(lean_object*);
lean_object* initialize_Lean_Meta_AppBuilder(lean_object*);
lean_object* initialize_Lean_Meta_SynthInstance(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Util(lean_object*);
lean_object* initialize_Lean_Hygiene(lean_object*);
lean_object* initialize_Lean_Util_RecDepth(lean_object*);
lean_object* initialize_Lean_Elab_Log(lean_object*);
lean_object* initialize_Lean_Elab_Alias(lean_object*);
lean_object* initialize_Lean_Elab_ResolveName(lean_object*);
lean_object* initialize_Lean_Elab_Level(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Term(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Sorry(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ExprDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Hygiene(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_RecDepth(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Log(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Alias(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ResolveName(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Level(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_State_inhabited___closed__1 = _init_l_Lean_Elab_Term_State_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_State_inhabited___closed__1);
l_Lean_Elab_Term_State_inhabited = _init_l_Lean_Elab_Term_State_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_State_inhabited);
l_Lean_Elab_Term_TermElabM_inhabited___closed__1 = _init_l_Lean_Elab_Term_TermElabM_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_TermElabM_inhabited___closed__1);
l_Lean_Elab_Term_SavedState_inhabited___closed__1 = _init_l_Lean_Elab_Term_SavedState_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_SavedState_inhabited___closed__1);
l_Lean_Elab_Term_SavedState_inhabited___closed__2 = _init_l_Lean_Elab_Term_SavedState_inhabited___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_SavedState_inhabited___closed__2);
l_Lean_Elab_Term_SavedState_inhabited = _init_l_Lean_Elab_Term_SavedState_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_SavedState_inhabited);
l_Lean_Elab_Term_TermElabResult_inhabited___closed__1 = _init_l_Lean_Elab_Term_TermElabResult_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_TermElabResult_inhabited___closed__1);
l_Lean_Elab_Term_TermElabResult_inhabited = _init_l_Lean_Elab_Term_TermElabResult_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_TermElabResult_inhabited);
l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1 = _init_l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1();
lean_mark_persistent(l_Lean_setTraceState___at___private_Lean_Elab_Term_4__liftMetaMFinalizer___spec__1___closed__1);
l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1 = _init_l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_getFVarLocalDecl_x21___closed__1);
l_Lean_Elab_Term_MonadError___closed__1 = _init_l_Lean_Elab_Term_MonadError___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_MonadError___closed__1);
l_Lean_Elab_Term_MonadError___closed__2 = _init_l_Lean_Elab_Term_MonadError___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_MonadError___closed__2);
l_Lean_Elab_Term_MonadError___closed__3 = _init_l_Lean_Elab_Term_MonadError___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_MonadError___closed__3);
l_Lean_Elab_Term_MonadError___closed__4 = _init_l_Lean_Elab_Term_MonadError___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_MonadError___closed__4);
l_Lean_Elab_Term_MonadError___closed__5 = _init_l_Lean_Elab_Term_MonadError___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_MonadError___closed__5);
l_Lean_Elab_Term_MonadError___closed__6 = _init_l_Lean_Elab_Term_MonadError___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_MonadError___closed__6);
l_Lean_Elab_Term_MonadError = _init_l_Lean_Elab_Term_MonadError();
lean_mark_persistent(l_Lean_Elab_Term_MonadError);
l_Lean_Elab_Term_monadLog___closed__1 = _init_l_Lean_Elab_Term_monadLog___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__1);
l_Lean_Elab_Term_monadLog___closed__2 = _init_l_Lean_Elab_Term_monadLog___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__2);
l_Lean_Elab_Term_monadLog___closed__3 = _init_l_Lean_Elab_Term_monadLog___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__3);
l_Lean_Elab_Term_monadLog___closed__4 = _init_l_Lean_Elab_Term_monadLog___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__4);
l_Lean_Elab_Term_monadLog___closed__5 = _init_l_Lean_Elab_Term_monadLog___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__5);
l_Lean_Elab_Term_monadLog___closed__6 = _init_l_Lean_Elab_Term_monadLog___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__6);
l_Lean_Elab_Term_monadLog___closed__7 = _init_l_Lean_Elab_Term_monadLog___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__7);
l_Lean_Elab_Term_monadLog___closed__8 = _init_l_Lean_Elab_Term_monadLog___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__8);
l_Lean_Elab_Term_monadLog___closed__9 = _init_l_Lean_Elab_Term_monadLog___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_monadLog___closed__9);
l_Lean_Elab_Term_monadLog = _init_l_Lean_Elab_Term_monadLog();
lean_mark_persistent(l_Lean_Elab_Term_monadLog);
l_Lean_Elab_Term_monadQuotation___closed__1 = _init_l_Lean_Elab_Term_monadQuotation___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_monadQuotation___closed__1);
l_Lean_Elab_Term_monadQuotation___closed__2 = _init_l_Lean_Elab_Term_monadQuotation___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_monadQuotation___closed__2);
l_Lean_Elab_Term_monadQuotation___closed__3 = _init_l_Lean_Elab_Term_monadQuotation___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_monadQuotation___closed__3);
l_Lean_Elab_Term_monadQuotation___closed__4 = _init_l_Lean_Elab_Term_monadQuotation___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_monadQuotation___closed__4);
l_Lean_Elab_Term_monadQuotation = _init_l_Lean_Elab_Term_monadQuotation();
lean_mark_persistent(l_Lean_Elab_Term_monadQuotation);
l_Lean_Elab_Term_mkTermElabAttribute___closed__1 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__1);
l_Lean_Elab_Term_mkTermElabAttribute___closed__2 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__2);
l_Lean_Elab_Term_mkTermElabAttribute___closed__3 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__3);
l_Lean_Elab_Term_mkTermElabAttribute___closed__4 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__4);
l_Lean_Elab_Term_mkTermElabAttribute___closed__5 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__5);
l_Lean_Elab_Term_mkTermElabAttribute___closed__6 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__6);
l_Lean_Elab_Term_mkTermElabAttribute___closed__7 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__7);
l_Lean_Elab_Term_mkTermElabAttribute___closed__8 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__8);
l_Lean_Elab_Term_mkTermElabAttribute___closed__9 = _init_l_Lean_Elab_Term_mkTermElabAttribute___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_mkTermElabAttribute___closed__9);
l_Std_PersistentHashMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__3 = _init_l_Std_PersistentHashMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__3();
lean_mark_persistent(l_Std_PersistentHashMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__3);
l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1___closed__1 = _init_l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1___closed__1();
lean_mark_persistent(l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1___closed__1);
l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1___closed__2 = _init_l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1___closed__2();
lean_mark_persistent(l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1___closed__2);
l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1 = _init_l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1();
lean_mark_persistent(l_Lean_SMap_empty___at_Lean_Elab_Term_termElabAttribute___spec__1);
l_Lean_Elab_Term_termElabAttribute___closed__1 = _init_l_Lean_Elab_Term_termElabAttribute___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute___closed__1);
l_Lean_Elab_Term_termElabAttribute___closed__2 = _init_l_Lean_Elab_Term_termElabAttribute___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute___closed__2);
l_Lean_Elab_Term_termElabAttribute___closed__3 = _init_l_Lean_Elab_Term_termElabAttribute___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute___closed__3);
l_Lean_Elab_Term_termElabAttribute___closed__4 = _init_l_Lean_Elab_Term_termElabAttribute___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute___closed__4);
l_Lean_Elab_Term_termElabAttribute___closed__5 = _init_l_Lean_Elab_Term_termElabAttribute___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute___closed__5);
res = l_Lean_Elab_Term_mkTermElabAttribute(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Term_termElabAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Term_termElabAttribute);
lean_dec_ref(res);
l_Lean_Elab_Term_logDbgTrace___closed__1 = _init_l_Lean_Elab_Term_logDbgTrace___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_logDbgTrace___closed__1);
l_Lean_Elab_Term_throwErrorIfErrors___closed__1 = _init_l_Lean_Elab_Term_throwErrorIfErrors___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_throwErrorIfErrors___closed__1);
l_Lean_Elab_Term_throwErrorIfErrors___closed__2 = _init_l_Lean_Elab_Term_throwErrorIfErrors___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_throwErrorIfErrors___closed__2);
l_Lean_Elab_Term_throwErrorIfErrors___closed__3 = _init_l_Lean_Elab_Term_throwErrorIfErrors___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_throwErrorIfErrors___closed__3);
l_Lean_Elab_Term_dbgTrace___rarg___closed__1 = _init_l_Lean_Elab_Term_dbgTrace___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_dbgTrace___rarg___closed__1);
l_Lean_Elab_Term_mkExplicitBinder___closed__1 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__1);
l_Lean_Elab_Term_mkExplicitBinder___closed__2 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__2);
l_Lean_Elab_Term_mkExplicitBinder___closed__3 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__3);
l_Lean_Elab_Term_mkExplicitBinder___closed__4 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__4);
l_Lean_Elab_Term_mkExplicitBinder___closed__5 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__5);
l_Lean_Elab_Term_mkExplicitBinder___closed__6 = _init_l_Lean_Elab_Term_mkExplicitBinder___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_mkExplicitBinder___closed__6);
l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__1 = _init_l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__1);
l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__2 = _init_l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkFreshAnonymousName___rarg___closed__2);
l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__1 = _init_l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__1);
l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__2 = _init_l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkFreshInstanceName___rarg___closed__2);
l___private_Lean_Elab_Term_7__expandCDot___main___closed__1 = _init_l___private_Lean_Elab_Term_7__expandCDot___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_7__expandCDot___main___closed__1);
l___private_Lean_Elab_Term_7__expandCDot___main___closed__2 = _init_l___private_Lean_Elab_Term_7__expandCDot___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_7__expandCDot___main___closed__2);
l___private_Lean_Elab_Term_7__expandCDot___main___closed__3 = _init_l___private_Lean_Elab_Term_7__expandCDot___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Term_7__expandCDot___main___closed__3);
l_Lean_Elab_Term_expandCDot_x3f___closed__1 = _init_l_Lean_Elab_Term_expandCDot_x3f___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandCDot_x3f___closed__1);
l_Lean_Elab_Term_expandCDot_x3f___closed__2 = _init_l_Lean_Elab_Term_expandCDot_x3f___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandCDot_x3f___closed__2);
l_Lean_Elab_Term_expandCDot_x3f___closed__3 = _init_l_Lean_Elab_Term_expandCDot_x3f___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandCDot_x3f___closed__3);
l_Lean_Elab_Term_expandCDot_x3f___closed__4 = _init_l_Lean_Elab_Term_expandCDot_x3f___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandCDot_x3f___closed__4);
l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__1 = _init_l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__1);
l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__2 = _init_l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__2);
l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__3 = _init_l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_throwTypeMismatchError___rarg___closed__3);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__1 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__1);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__2 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__2);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__3);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__4 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__4);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__5 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__5);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__6 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__6);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__7 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__7);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__8 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__8);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__9 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__9);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__10 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__10);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__11 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__11);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__12 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__12);
l_Lean_Elab_Term_synthesizeInstMVarCore___closed__13 = _init_l_Lean_Elab_Term_synthesizeInstMVarCore___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_synthesizeInstMVarCore___closed__13);
l_Lean_Elab_Term_tryCoe___closed__1 = _init_l_Lean_Elab_Term_tryCoe___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_tryCoe___closed__1);
l_Lean_Elab_Term_tryCoe___closed__2 = _init_l_Lean_Elab_Term_tryCoe___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_tryCoe___closed__2);
l_Lean_Elab_Term_tryCoe___closed__3 = _init_l_Lean_Elab_Term_tryCoe___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_tryCoe___closed__3);
l_Lean_Elab_Term_tryCoe___closed__4 = _init_l_Lean_Elab_Term_tryCoe___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_tryCoe___closed__4);
l___private_Lean_Elab_Term_9__isMonad_x3f___closed__1 = _init_l___private_Lean_Elab_Term_9__isMonad_x3f___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_9__isMonad_x3f___closed__1);
l___private_Lean_Elab_Term_9__isMonad_x3f___closed__2 = _init_l___private_Lean_Elab_Term_9__isMonad_x3f___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_9__isMonad_x3f___closed__2);
l_Lean_Elab_Term_tryLiftAndCoe___closed__1 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__1);
l_Lean_Elab_Term_tryLiftAndCoe___closed__2 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__2);
l_Lean_Elab_Term_tryLiftAndCoe___closed__3 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__3);
l_Lean_Elab_Term_tryLiftAndCoe___closed__4 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__4);
l_Lean_Elab_Term_tryLiftAndCoe___closed__5 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__5);
l_Lean_Elab_Term_tryLiftAndCoe___closed__6 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__6);
l_Lean_Elab_Term_tryLiftAndCoe___closed__7 = _init_l_Lean_Elab_Term_tryLiftAndCoe___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_tryLiftAndCoe___closed__7);
l_Lean_Elab_Term_logException___closed__1 = _init_l_Lean_Elab_Term_logException___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_logException___closed__1);
l_Lean_Elab_Term_logException___closed__2 = _init_l_Lean_Elab_Term_logException___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_logException___closed__2);
l_Lean_Elab_Term_logException___closed__3 = _init_l_Lean_Elab_Term_logException___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_logException___closed__3);
l___private_Lean_Elab_Term_12__postponeElabTerm___closed__1 = _init_l___private_Lean_Elab_Term_12__postponeElabTerm___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_12__postponeElabTerm___closed__1);
l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__1 = _init_l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__1);
l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__2 = _init_l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__2);
l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__3 = _init_l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Term_13__elabUsingElabFnsAux___main___closed__3);
l_Lean_Elab_Term_elabUsingElabFns___closed__1 = _init_l_Lean_Elab_Term_elabUsingElabFns___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabUsingElabFns___closed__1);
l_Lean_Elab_Term_elabUsingElabFns___closed__2 = _init_l_Lean_Elab_Term_elabUsingElabFns___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabUsingElabFns___closed__2);
l_Lean_Elab_Term_elabUsingElabFns___closed__3 = _init_l_Lean_Elab_Term_elabUsingElabFns___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabUsingElabFns___closed__3);
l_Lean_Elab_Term_elabUsingElabFns___closed__4 = _init_l_Lean_Elab_Term_elabUsingElabFns___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_elabUsingElabFns___closed__4);
l_Lean_Elab_Term_elabUsingElabFns___closed__5 = _init_l_Lean_Elab_Term_elabUsingElabFns___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_elabUsingElabFns___closed__5);
l_Lean_Elab_Term_elabUsingElabFns___closed__6 = _init_l_Lean_Elab_Term_elabUsingElabFns___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_elabUsingElabFns___closed__6);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__1 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__1);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__2 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__2);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__3 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__3);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__4 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__4);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__5 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__5);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__6 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__6);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__7 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__7);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__8 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__8);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__9 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__9);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__10 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__10);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__11 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__11);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__12 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__12);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__13 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__13);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__14 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__14();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__14);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__15 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__15();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__15);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__16 = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__16();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter___closed__16);
l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter = _init_l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter();
lean_mark_persistent(l_Lean_Elab_Term_Lean_Elab_MonadMacroAdapter);
l_Lean_Elab_Term_elabImplicitLambdaAux___closed__1 = _init_l_Lean_Elab_Term_elabImplicitLambdaAux___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabImplicitLambdaAux___closed__1);
l_Lean_Elab_Term_elabImplicitLambdaAux___closed__2 = _init_l_Lean_Elab_Term_elabImplicitLambdaAux___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabImplicitLambdaAux___closed__2);
l_Lean_Elab_Term_elabTermAux___main___closed__1 = _init_l_Lean_Elab_Term_elabTermAux___main___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabTermAux___main___closed__1);
l___private_Lean_Elab_Term_17__tryCoeSort___closed__1 = _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_17__tryCoeSort___closed__1);
l___private_Lean_Elab_Term_17__tryCoeSort___closed__2 = _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_17__tryCoeSort___closed__2);
l___private_Lean_Elab_Term_17__tryCoeSort___closed__3 = _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Term_17__tryCoeSort___closed__3);
l___private_Lean_Elab_Term_17__tryCoeSort___closed__4 = _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Term_17__tryCoeSort___closed__4);
l___private_Lean_Elab_Term_17__tryCoeSort___closed__5 = _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Term_17__tryCoeSort___closed__5);
l___private_Lean_Elab_Term_17__tryCoeSort___closed__6 = _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Term_17__tryCoeSort___closed__6);
l___private_Lean_Elab_Term_17__tryCoeSort___closed__7 = _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Term_17__tryCoeSort___closed__7);
l___private_Lean_Elab_Term_17__tryCoeSort___closed__8 = _init_l___private_Lean_Elab_Term_17__tryCoeSort___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Term_17__tryCoeSort___closed__8);
l_Lean_Elab_Term_mkAuxName___closed__1 = _init_l_Lean_Elab_Term_mkAuxName___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkAuxName___closed__1);
l_Lean_Elab_Term_mkAuxName___closed__2 = _init_l_Lean_Elab_Term_mkAuxName___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkAuxName___closed__2);
l_Lean_Elab_Term_mkAuxName___closed__3 = _init_l_Lean_Elab_Term_mkAuxName___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_mkAuxName___closed__3);
l___regBuiltin_Lean_Elab_Term_elabProp___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabProp___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabProp___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabProp(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabSort___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabSort___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabSort___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabSort(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabTypeStx___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabTypeStx(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabHole___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabHole___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabHole___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabHole(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabNamedHole___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabNamedHole___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNamedHole___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabNamedHole(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_mkTacticMVar___closed__1 = _init_l_Lean_Elab_Term_mkTacticMVar___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkTacticMVar___closed__1);
l_Lean_Elab_Term_mkTacticMVar___closed__2 = _init_l_Lean_Elab_Term_mkTacticMVar___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkTacticMVar___closed__2);
l_Lean_Elab_Term_elabTacticBlock___closed__1 = _init_l_Lean_Elab_Term_elabTacticBlock___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabTacticBlock___closed__1);
l_Lean_Elab_Term_elabTacticBlock___closed__2 = _init_l_Lean_Elab_Term_elabTacticBlock___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabTacticBlock___closed__2);
l_Lean_Elab_Term_elabTacticBlock___closed__3 = _init_l_Lean_Elab_Term_elabTacticBlock___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabTacticBlock___closed__3);
l___regBuiltin_Lean_Elab_Term_elabTacticBlock___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabTacticBlock___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabTacticBlock___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabTacticBlock(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabByTactic___closed__1 = _init_l_Lean_Elab_Term_elabByTactic___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabByTactic___closed__1);
l_Lean_Elab_Term_elabByTactic___closed__2 = _init_l_Lean_Elab_Term_elabByTactic___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabByTactic___closed__2);
l_Lean_Elab_Term_elabByTactic___closed__3 = _init_l_Lean_Elab_Term_elabByTactic___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabByTactic___closed__3);
l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabByTactic___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabByTactic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__1 = _init_l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__1);
l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__2 = _init_l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__2);
l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__3 = _init_l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__3);
l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__4 = _init_l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__4);
l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__5 = _init_l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Term_20__mkPairsAux___main___closed__5);
l_Lean_Elab_Term_elabParen___closed__1 = _init_l_Lean_Elab_Term_elabParen___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabParen___closed__1);
l_Lean_Elab_Term_elabParen___closed__2 = _init_l_Lean_Elab_Term_elabParen___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabParen___closed__2);
l_Lean_Elab_Term_elabParen___closed__3 = _init_l_Lean_Elab_Term_elabParen___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabParen___closed__3);
l___regBuiltin_Lean_Elab_Term_elabParen___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabParen___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabParen___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabParen(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandListLit___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandListLit___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandListLit___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandListLit(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandArrayLit___closed__1 = _init_l_Lean_Elab_Term_expandArrayLit___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__1);
l_Lean_Elab_Term_expandArrayLit___closed__2 = _init_l_Lean_Elab_Term_expandArrayLit___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__2);
l_Lean_Elab_Term_expandArrayLit___closed__3 = _init_l_Lean_Elab_Term_expandArrayLit___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__3);
l_Lean_Elab_Term_expandArrayLit___closed__4 = _init_l_Lean_Elab_Term_expandArrayLit___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__4);
l_Lean_Elab_Term_expandArrayLit___closed__5 = _init_l_Lean_Elab_Term_expandArrayLit___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__5);
l_Lean_Elab_Term_expandArrayLit___closed__6 = _init_l_Lean_Elab_Term_expandArrayLit___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__6);
l_Lean_Elab_Term_expandArrayLit___closed__7 = _init_l_Lean_Elab_Term_expandArrayLit___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__7);
l_Lean_Elab_Term_expandArrayLit___closed__8 = _init_l_Lean_Elab_Term_expandArrayLit___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__8);
l_Lean_Elab_Term_expandArrayLit___closed__9 = _init_l_Lean_Elab_Term_expandArrayLit___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_expandArrayLit___closed__9);
l___regBuiltin_Lean_Elab_Term_expandArrayLit___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandArrayLit___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandArrayLit___closed__1);
res = l___regBuiltin_Lean_Elab_Term_expandArrayLit(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_mkConst___closed__1 = _init_l_Lean_Elab_Term_mkConst___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkConst___closed__1);
l_Lean_Elab_Term_mkConst___closed__2 = _init_l_Lean_Elab_Term_mkConst___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkConst___closed__2);
l_Lean_Elab_Term_mkConst___closed__3 = _init_l_Lean_Elab_Term_mkConst___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_mkConst___closed__3);
l_Lean_Elab_Term_resolveName___closed__1 = _init_l_Lean_Elab_Term_resolveName___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__1);
l_Lean_Elab_Term_resolveName___closed__2 = _init_l_Lean_Elab_Term_resolveName___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__2);
l_Lean_Elab_Term_resolveName___closed__3 = _init_l_Lean_Elab_Term_resolveName___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__3);
l_Lean_Elab_Term_resolveName___closed__4 = _init_l_Lean_Elab_Term_resolveName___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__4);
l_Lean_Elab_Term_resolveName___closed__5 = _init_l_Lean_Elab_Term_resolveName___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__5);
l_Lean_Elab_Term_resolveName___closed__6 = _init_l_Lean_Elab_Term_resolveName___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__6);
l_Lean_Elab_Term_resolveName___closed__7 = _init_l_Lean_Elab_Term_resolveName___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__7);
l_Lean_Elab_Term_resolveName___closed__8 = _init_l_Lean_Elab_Term_resolveName___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__8);
l_Lean_Elab_Term_resolveName___closed__9 = _init_l_Lean_Elab_Term_resolveName___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_resolveName___closed__9);
l_Lean_Elab_Term_elabBadCDot___rarg___closed__1 = _init_l_Lean_Elab_Term_elabBadCDot___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabBadCDot___rarg___closed__1);
l_Lean_Elab_Term_elabBadCDot___rarg___closed__2 = _init_l_Lean_Elab_Term_elabBadCDot___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabBadCDot___rarg___closed__2);
l_Lean_Elab_Term_elabBadCDot___rarg___closed__3 = _init_l_Lean_Elab_Term_elabBadCDot___rarg___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabBadCDot___rarg___closed__3);
l___regBuiltin_Lean_Elab_Term_elabBadCDot___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabBadCDot___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabBadCDot___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabBadCDot(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabStrLit___closed__1 = _init_l_Lean_Elab_Term_elabStrLit___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabStrLit___closed__1);
l_Lean_Elab_Term_elabStrLit___closed__2 = _init_l_Lean_Elab_Term_elabStrLit___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabStrLit___closed__2);
l_Lean_Elab_Term_elabStrLit___closed__3 = _init_l_Lean_Elab_Term_elabStrLit___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabStrLit___closed__3);
l___regBuiltin_Lean_Elab_Term_elabStrLit___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabStrLit___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabStrLit___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabStrLit(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabNumLit___closed__1 = _init_l_Lean_Elab_Term_elabNumLit___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabNumLit___closed__1);
l___regBuiltin_Lean_Elab_Term_elabNumLit___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabNumLit___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNumLit___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabNumLit(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabCharLit___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabCharLit___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabCharLit___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabCharLit(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabQuotedName(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Term_26__mkSomeContext___closed__1 = _init_l___private_Lean_Elab_Term_26__mkSomeContext___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_26__mkSomeContext___closed__1);
l___private_Lean_Elab_Term_26__mkSomeContext___closed__2 = _init_l___private_Lean_Elab_Term_26__mkSomeContext___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Term_26__mkSomeContext___closed__2);
l___private_Lean_Elab_Term_26__mkSomeContext = _init_l___private_Lean_Elab_Term_26__mkSomeContext();
lean_mark_persistent(l___private_Lean_Elab_Term_26__mkSomeContext);
l___private_Lean_Elab_Term_27__regTraceClasses___closed__1 = _init_l___private_Lean_Elab_Term_27__regTraceClasses___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Term_27__regTraceClasses___closed__1);
res = l___private_Lean_Elab_Term_27__regTraceClasses(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
