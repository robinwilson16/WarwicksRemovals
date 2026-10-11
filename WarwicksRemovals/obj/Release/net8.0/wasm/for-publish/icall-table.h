#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
193,
202,
203,
204,
205,
206,
207,
208,
209,
210,
213,
214,
305,
306,
307,
331,
332,
333,
344,
345,
346,
347,
442,
443,
444,
447,
478,
479,
481,
483,
485,
487,
492,
500,
501,
502,
503,
504,
505,
506,
507,
508,
588,
589,
654,
660,
663,
665,
670,
671,
673,
674,
678,
679,
681,
683,
684,
687,
688,
689,
692,
694,
697,
699,
701,
710,
769,
771,
773,
783,
784,
785,
786,
788,
795,
796,
797,
798,
799,
807,
808,
809,
813,
814,
816,
818,
1008,
1164,
1165,
6750,
6751,
6753,
6754,
6755,
6756,
6757,
6759,
6761,
6763,
6771,
6773,
6778,
6780,
6782,
6784,
6835,
6836,
6838,
6839,
6840,
6841,
6842,
6844,
6846,
7718,
7722,
7724,
7725,
7726,
7727,
7933,
7934,
7935,
7936,
7952,
7953,
7954,
7956,
7998,
8057,
8059,
8068,
8069,
8070,
8071,
8445,
8449,
8450,
8476,
8493,
8500,
8507,
8518,
8521,
8541,
8612,
8614,
8623,
8625,
8626,
8633,
8647,
8667,
8668,
8676,
8678,
8685,
8686,
8689,
8691,
8696,
8702,
8703,
8710,
8712,
8724,
8727,
8728,
8729,
8740,
8749,
8755,
8756,
8757,
8759,
8760,
8777,
8779,
8793,
8810,
8837,
8866,
8867,
9288,
9371,
9372,
9520,
9521,
9525,
9528,
9592,
9954,
9955,
10171,
10181,
10957,
10978,
10980,
10982,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 193,
ves_icall_System_Array_InternalCreate,
// token 202,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 203,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 204,
ves_icall_System_Array_CanChangePrimitive,
// token 205,
ves_icall_System_Array_FastCopy,
// token 206,
ves_icall_System_Array_GetLengthInternal_raw,
// token 207,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 208,
ves_icall_System_Array_GetGenericValue_icall,
// token 209,
ves_icall_System_Array_GetValueImpl_raw,
// token 210,
ves_icall_System_Array_SetGenericValue_icall,
// token 213,
ves_icall_System_Array_SetValueImpl_raw,
// token 214,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 305,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 306,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 307,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 331,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 332,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 333,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 344,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 345,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 346,
ves_icall_System_Enum_InternalGetCorElementType,
// token 347,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 442,
ves_icall_System_Environment_get_ProcessorCount,
// token 443,
ves_icall_System_Environment_get_TickCount,
// token 444,
ves_icall_System_Environment_get_TickCount64,
// token 447,
ves_icall_System_Environment_FailFast_raw,
// token 478,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 479,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 481,
ves_icall_System_GC_SuppressFinalize_raw,
// token 483,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 485,
ves_icall_System_GC_GetGCMemoryInfo,
// token 487,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 492,
ves_icall_System_Object_MemberwiseClone_raw,
// token 500,
ves_icall_System_Math_Ceiling,
// token 501,
ves_icall_System_Math_Cos,
// token 502,
ves_icall_System_Math_Floor,
// token 503,
ves_icall_System_Math_Log10,
// token 504,
ves_icall_System_Math_Pow,
// token 505,
ves_icall_System_Math_Sin,
// token 506,
ves_icall_System_Math_Sqrt,
// token 507,
ves_icall_System_Math_Tan,
// token 508,
ves_icall_System_Math_ModF,
// token 588,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 589,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 654,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 660,
ves_icall_RuntimeType_make_array_type_raw,
// token 663,
ves_icall_RuntimeType_make_byref_type_raw,
// token 665,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 670,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 671,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 673,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 674,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 678,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 679,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 681,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 683,
ves_icall_System_RuntimeType_getFullName_raw,
// token 684,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 687,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 688,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 689,
ves_icall_RuntimeType_GetFields_native_raw,
// token 692,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 694,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 697,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 699,
ves_icall_RuntimeType_GetName_raw,
// token 701,
ves_icall_RuntimeType_GetNamespace_raw,
// token 710,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 769,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 771,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 773,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 783,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 784,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 785,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 786,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 788,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 795,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 796,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 797,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 798,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 799,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 807,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 808,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 809,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 813,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 814,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 816,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 818,
ves_icall_System_String_FastAllocateString_raw,
// token 1008,
ves_icall_System_Type_internal_from_handle_raw,
// token 1164,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1165,
ves_icall_System_ValueType_Equals_raw,
// token 6750,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6751,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6753,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6754,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6755,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6756,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6757,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6759,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6761,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6763,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6771,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6773,
mono_monitor_exit_icall_raw,
// token 6778,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6780,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6782,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6784,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6835,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6836,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6838,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6839,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6840,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6841,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6842,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6844,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6846,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7718,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7722,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7724,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7725,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7726,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7727,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7933,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7934,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7935,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7936,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7952,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7953,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7954,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7956,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7998,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8057,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8059,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8068,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8069,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8070,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8071,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8445,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8449,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8450,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8476,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8493,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8500,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8507,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8518,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8521,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8541,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8612,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8614,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8623,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8625,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8626,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8633,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8647,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8667,
ves_icall_reflection_get_token_raw,
// token 8668,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8676,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8678,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8685,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8686,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8689,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8691,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8696,
ves_icall_reflection_get_token_raw,
// token 8702,
ves_icall_get_method_info_raw,
// token 8703,
ves_icall_get_method_attributes,
// token 8710,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8712,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8724,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8727,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8728,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8729,
ves_icall_reflection_get_token_raw,
// token 8740,
ves_icall_InternalInvoke_raw,
// token 8749,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8755,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8756,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8757,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8759,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8760,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8777,
ves_icall_InvokeClassConstructor_raw,
// token 8779,
ves_icall_InternalInvoke_raw,
// token 8793,
ves_icall_reflection_get_token_raw,
// token 8810,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8837,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8866,
ves_icall_reflection_get_token_raw,
// token 8867,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9288,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9371,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9372,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9520,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9521,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9525,
ves_icall_ModuleBuilder_getToken_raw,
// token 9528,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9592,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9954,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9955,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10171,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10181,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10957,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10978,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10980,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10982,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
