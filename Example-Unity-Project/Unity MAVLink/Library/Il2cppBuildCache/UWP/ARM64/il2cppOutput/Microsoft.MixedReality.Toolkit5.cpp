#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.Type>
struct Action_1_t87684BD53C55B58E136F9DA7668485600A621945;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`1<System.Byte[]>
struct Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>>
struct Func_2_t86F762D7B0D76C3247426D1E9E4BA4D03E767556;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<UnityEngine.Vector2,System.Single>
struct Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0;
// System.Func`2<UnityEngine.Vector3,System.Single>
struct Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5;
// System.Collections.Generic.ICollection`1<UnityEngine.Transform>
struct ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t3445FF707A7D74618AD07E0096C2546E98EE61CD;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
struct IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct TaskFactory_1_tEBE8A88BB46F024A616B9CC47D67D49659ADD9F3;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t37BA727B262CBDE6B7C6031D8C6C19F51EEAAB2D;
// Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6;
// Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2;
// Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2
struct U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF;
// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData
struct MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F;
// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData
struct QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8
struct U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC;
// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4
struct U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52;
// Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t15053B549DB317B354855AB2FEF6564CA7FA1354;
// Microsoft.MixedReality.Toolkit.VectorExtensions/<>c
struct U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t87684BD53C55B58E136F9DA7668485600A621945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t37BA727B262CBDE6B7C6031D8C6C19F51EEAAB2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral641255E7CDC790311725CCB47DB63D989117D244;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79_m1E3A64B8A68AB3BBF703FCCAB619660E1C65C6CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255_m49AF10B65E8BC24E40783A781488D559C707EDBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572_m3C42C73F36E84D0E1E4B47722A1F4ED500604D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mDB12953D9D24E17B8127313A3DEF4EF67B03D8AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m73D574CBFAEB187B87E1529D6F14FEFA7DD54A57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m0ECF4EBE91318BD5C3FD82B14310562FE7FDFF4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mFACC5ED8BF2D63B9E6B12BD0E4BA1CF22BCB9844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mFF9B44AE2392281885869337E0410AB5C9DC9257_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mFA73D53368B699D5DB79AFD8DC76F11FC919CBF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisString_t_m2018F06E322D96664FD8AD3B0DD79E562D201963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerator_Reset_m4ED212571A24812CFFB85FFACEDCFED03C765647_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_Reset_m8715515D66C47B612826CBB2A39DF9B1A24D6F4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_IEnumerator_Reset_mA9C55B8B92E7FA92713E153C0A10B9C64806D134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__1_m34FE1974EA9EFEFBC2D68493418922705BDFA02C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_cctorU3Eb__1_mB8E428FEBF9863A6647B8DE9E694EF65C91A5DD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CPutAsyncU3Eb__0_mC0A69AEA80C7C6F143463FA51287ED1FBC3FC037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CPutAsyncU3Eb__0_m0719B74CCE4E88F872959307239A29B37E8545F5_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____items_1)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get__items_1() const { return ____items_1; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_StaticFields, ____emptyArray_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____array_0)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__array_0() const { return ____array_0; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t37BA727B262CBDE6B7C6031D8C6C19F51EEAAB2D  : public RuntimeObject
{
public:
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c__DisplayClass2_0::byteArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteArray_0;

public:
	inline static int32_t get_offset_of_byteArray_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t37BA727B262CBDE6B7C6031D8C6C19F51EEAAB2D, ___byteArray_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteArray_0() const { return ___byteArray_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteArray_0() { return &___byteArray_0; }
	inline void set_byteArray_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteArray_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass7_0::webRequest
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webRequest_0;

public:
	inline static int32_t get_offset_of_webRequest_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6, ___webRequest_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_webRequest_0() const { return ___webRequest_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_webRequest_0() { return &___webRequest_0; }
	inline void set_webRequest_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___webRequest_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webRequest_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass8_0::webRequest
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webRequest_0;

public:
	inline static int32_t get_offset_of_webRequest_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2, ___webRequest_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_webRequest_0() const { return ___webRequest_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_webRequest_0() { return &___webRequest_0; }
	inline void set_webRequest_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___webRequest_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webRequest_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2
struct U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>2__current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<i>5__2
	int32_t ___U3CiU3E5__2_3;
	// UnityEngine.GameObject[] Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>7__wrap2
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___U3CU3E7__wrap2_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF, ___U3CU3E2__current_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF, ___U3CU3E7__wrap2_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___U3CU3E7__wrap2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_5() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF, ___U3CU3E7__wrap3_5)); }
	inline int32_t get_U3CU3E7__wrap3_5() const { return ___U3CU3E7__wrap3_5; }
	inline int32_t* get_address_of_U3CU3E7__wrap3_5() { return &___U3CU3E7__wrap3_5; }
	inline void set_U3CU3E7__wrap3_5(int32_t value)
	{
		___U3CU3E7__wrap3_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData
struct MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.Int32[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<Indices>k__BackingField
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CIndicesU3Ek__BackingField_1;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<Vertices>k__BackingField
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CVerticesU3Ek__BackingField_2;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<UVs>k__BackingField
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___U3CUVsU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<GameObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGameObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIndicesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F, ___U3CIndicesU3Ek__BackingField_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CIndicesU3Ek__BackingField_1() const { return ___U3CIndicesU3Ek__BackingField_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CIndicesU3Ek__BackingField_1() { return &___U3CIndicesU3Ek__BackingField_1; }
	inline void set_U3CIndicesU3Ek__BackingField_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CIndicesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIndicesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVerticesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F, ___U3CVerticesU3Ek__BackingField_2)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CVerticesU3Ek__BackingField_2() const { return ___U3CVerticesU3Ek__BackingField_2; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CVerticesU3Ek__BackingField_2() { return &___U3CVerticesU3Ek__BackingField_2; }
	inline void set_U3CVerticesU3Ek__BackingField_2(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CVerticesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVerticesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUVsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F, ___U3CUVsU3Ek__BackingField_3)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_U3CUVsU3Ek__BackingField_3() const { return ___U3CUVsU3Ek__BackingField_3; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_U3CUVsU3Ek__BackingField_3() { return &___U3CUVsU3Ek__BackingField_3; }
	inline void set_U3CUVsU3Ek__BackingField_3(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___U3CUVsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUVsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F, ___U3CGameObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGameObjectU3Ek__BackingField_4() const { return ___U3CGameObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGameObjectU3Ek__BackingField_4() { return &___U3CGameObjectU3Ek__BackingField_4; }
	inline void set_U3CGameObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGameObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8
struct U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>2__current
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::includeSelf
	bool ___includeSelf_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::startTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___startTransform_5;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>3__startTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E3__startTransform_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<transform>5__2
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtransformU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC, ___U3CU3E2__current_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_includeSelf_3() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC, ___includeSelf_3)); }
	inline bool get_includeSelf_3() const { return ___includeSelf_3; }
	inline bool* get_address_of_includeSelf_3() { return &___includeSelf_3; }
	inline void set_includeSelf_3(bool value)
	{
		___includeSelf_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__includeSelf_4() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC, ___U3CU3E3__includeSelf_4)); }
	inline bool get_U3CU3E3__includeSelf_4() const { return ___U3CU3E3__includeSelf_4; }
	inline bool* get_address_of_U3CU3E3__includeSelf_4() { return &___U3CU3E3__includeSelf_4; }
	inline void set_U3CU3E3__includeSelf_4(bool value)
	{
		___U3CU3E3__includeSelf_4 = value;
	}

	inline static int32_t get_offset_of_startTransform_5() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC, ___startTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_startTransform_5() const { return ___startTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_startTransform_5() { return &___startTransform_5; }
	inline void set_startTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___startTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__startTransform_6() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC, ___U3CU3E3__startTransform_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E3__startTransform_6() const { return ___U3CU3E3__startTransform_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E3__startTransform_6() { return &___U3CU3E3__startTransform_6; }
	inline void set_U3CU3E3__startTransform_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E3__startTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__startTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransformU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC, ___U3CtransformU3E5__2_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtransformU3E5__2_7() const { return ___U3CtransformU3E5__2_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtransformU3E5__2_7() { return &___U3CtransformU3E5__2_7; }
	inline void set_U3CtransformU3E5__2_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtransformU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransformU3E5__2_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4
struct U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>2__current
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::root
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___root_3;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__root
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E3__root_4;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::ignore
	RuntimeObject* ___ignore_5;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__ignore
	RuntimeObject* ___U3CU3E3__ignore_6;
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<transformQueue>5__2
	Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * ___U3CtransformQueueU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52, ___U3CU3E2__current_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_root_3() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52, ___root_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_root_3() const { return ___root_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_root_3() { return &___root_3; }
	inline void set_root_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___root_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_4() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52, ___U3CU3E3__root_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E3__root_4() const { return ___U3CU3E3__root_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E3__root_4() { return &___U3CU3E3__root_4; }
	inline void set_U3CU3E3__root_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E3__root_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__root_4), (void*)value);
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52, ___ignore_5)); }
	inline RuntimeObject* get_ignore_5() const { return ___ignore_5; }
	inline RuntimeObject** get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(RuntimeObject* value)
	{
		___ignore_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ignore_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__ignore_6() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52, ___U3CU3E3__ignore_6)); }
	inline RuntimeObject* get_U3CU3E3__ignore_6() const { return ___U3CU3E3__ignore_6; }
	inline RuntimeObject** get_address_of_U3CU3E3__ignore_6() { return &___U3CU3E3__ignore_6; }
	inline void set_U3CU3E3__ignore_6(RuntimeObject* value)
	{
		___U3CU3E3__ignore_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__ignore_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransformQueueU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52, ___U3CtransformQueueU3E5__2_7)); }
	inline Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * get_U3CtransformQueueU3E5__2_7() const { return ___U3CtransformQueueU3E5__2_7; }
	inline Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 ** get_address_of_U3CtransformQueueU3E5__2_7() { return &___U3CtransformQueueU3E5__2_7; }
	inline void set_U3CtransformQueueU3E5__2_7(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * value)
	{
		___U3CtransformQueueU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransformQueueU3E5__2_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t15053B549DB317B354855AB2FEF6564CA7FA1354  : public RuntimeObject
{
public:
	// System.Type Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::rootType
	Type_t * ___rootType_0;
	// System.Collections.Generic.List`1<System.Type> Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::results
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * ___results_1;
	// System.Action`1<System.Type> Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::<>9__1
	Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * ___U3CU3E9__1_2;

public:
	inline static int32_t get_offset_of_rootType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t15053B549DB317B354855AB2FEF6564CA7FA1354, ___rootType_0)); }
	inline Type_t * get_rootType_0() const { return ___rootType_0; }
	inline Type_t ** get_address_of_rootType_0() { return &___rootType_0; }
	inline void set_rootType_0(Type_t * value)
	{
		___rootType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootType_0), (void*)value);
	}

	inline static int32_t get_offset_of_results_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t15053B549DB317B354855AB2FEF6564CA7FA1354, ___results_1)); }
	inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * get_results_1() const { return ___results_1; }
	inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 ** get_address_of_results_1() { return &___results_1; }
	inline void set_results_1(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * value)
	{
		___results_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___results_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t15053B549DB317B354855AB2FEF6564CA7FA1354, ___U3CU3E9__1_2)); }
	inline Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * get_U3CU3E9__1_2() const { return ___U3CU3E9__1_2; }
	inline Action_1_t87684BD53C55B58E136F9DA7668485600A621945 ** get_address_of_U3CU3E9__1_2() { return &___U3CU3E9__1_2; }
	inline void set_U3CU3E9__1_2(Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * value)
	{
		___U3CU3E9__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.VectorExtensions/<>c
struct U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.VectorExtensions/<>c Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9
	U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Vector2,System.Single> Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9__12_0
	Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * ___U3CU3E9__12_0_1;
	// System.Func`2<UnityEngine.Vector3,System.Single> Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9__13_0
	Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * ___U3CU3E9__13_0_2;
	// System.Func`2<UnityEngine.Vector2,System.Single> Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9__14_0
	Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * ___U3CU3E9__14_0_3;
	// System.Func`2<UnityEngine.Vector3,System.Single> Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9__15_0
	Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * ___U3CU3E9__15_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF_StaticFields, ___U3CU3E9__13_0_2)); }
	inline Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * get_U3CU3E9__13_0_2() const { return ___U3CU3E9__13_0_2; }
	inline Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 ** get_address_of_U3CU3E9__13_0_2() { return &___U3CU3E9__13_0_2; }
	inline void set_U3CU3E9__13_0_2(Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * value)
	{
		___U3CU3E9__13_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF_StaticFields, ___U3CU3E9__14_0_3)); }
	inline Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * get_U3CU3E9__14_0_3() const { return ___U3CU3E9__14_0_3; }
	inline Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 ** get_address_of_U3CU3E9__14_0_3() { return &___U3CU3E9__14_0_3; }
	inline void set_U3CU3E9__14_0_3(Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * value)
	{
		___U3CU3E9__14_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF_StaticFields, ___U3CU3E9__15_0_4)); }
	inline Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * get_U3CU3E9__15_0_4() const { return ___U3CU3E9__15_0_4; }
	inline Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 ** get_address_of_U3CU3E9__15_0_4() { return &___U3CU3E9__15_0_4; }
	inline void set_U3CU3E9__15_0_4(Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * value)
	{
		___U3CU3E9__15_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_4), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>
struct ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Nullable`1<System.Int64>
struct Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B, ___m_task_0)); }
	inline Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9 
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Response::<Successful>k__BackingField
	bool ___U3CSuccessfulU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Response::responseBody
	String_t* ___responseBody_1;
	// System.Func`1<System.String> Microsoft.MixedReality.Toolkit.Utilities.Response::responseBodyAction
	Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___responseBodyAction_2;
	// System.Threading.Tasks.Task`1<System.String> Microsoft.MixedReality.Toolkit.Utilities.Response::responseBodyTask
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___responseBodyTask_3;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.Response::responseData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___responseData_4;
	// System.Func`1<System.Byte[]> Microsoft.MixedReality.Toolkit.Utilities.Response::responseDataAction
	Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * ___responseDataAction_5;
	// System.Int64 Microsoft.MixedReality.Toolkit.Utilities.Response::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSuccessfulU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9, ___U3CSuccessfulU3Ek__BackingField_0)); }
	inline bool get_U3CSuccessfulU3Ek__BackingField_0() const { return ___U3CSuccessfulU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CSuccessfulU3Ek__BackingField_0() { return &___U3CSuccessfulU3Ek__BackingField_0; }
	inline void set_U3CSuccessfulU3Ek__BackingField_0(bool value)
	{
		___U3CSuccessfulU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_responseBody_1() { return static_cast<int32_t>(offsetof(Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9, ___responseBody_1)); }
	inline String_t* get_responseBody_1() const { return ___responseBody_1; }
	inline String_t** get_address_of_responseBody_1() { return &___responseBody_1; }
	inline void set_responseBody_1(String_t* value)
	{
		___responseBody_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBody_1), (void*)value);
	}

	inline static int32_t get_offset_of_responseBodyAction_2() { return static_cast<int32_t>(offsetof(Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9, ___responseBodyAction_2)); }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * get_responseBodyAction_2() const { return ___responseBodyAction_2; }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 ** get_address_of_responseBodyAction_2() { return &___responseBodyAction_2; }
	inline void set_responseBodyAction_2(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * value)
	{
		___responseBodyAction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBodyAction_2), (void*)value);
	}

	inline static int32_t get_offset_of_responseBodyTask_3() { return static_cast<int32_t>(offsetof(Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9, ___responseBodyTask_3)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_responseBodyTask_3() const { return ___responseBodyTask_3; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_responseBodyTask_3() { return &___responseBodyTask_3; }
	inline void set_responseBodyTask_3(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___responseBodyTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBodyTask_3), (void*)value);
	}

	inline static int32_t get_offset_of_responseData_4() { return static_cast<int32_t>(offsetof(Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9, ___responseData_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_responseData_4() const { return ___responseData_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_responseData_4() { return &___responseData_4; }
	inline void set_responseData_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___responseData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseData_4), (void*)value);
	}

	inline static int32_t get_offset_of_responseDataAction_5() { return static_cast<int32_t>(offsetof(Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9, ___responseDataAction_5)); }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * get_responseDataAction_5() const { return ___responseDataAction_5; }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 ** get_address_of_responseDataAction_5() { return &___responseDataAction_5; }
	inline void set_responseDataAction_5(Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * value)
	{
		___responseDataAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseDataAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseCodeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9, ___U3CResponseCodeU3Ek__BackingField_6)); }
	inline int64_t get_U3CResponseCodeU3Ek__BackingField_6() const { return ___U3CResponseCodeU3Ek__BackingField_6; }
	inline int64_t* get_address_of_U3CResponseCodeU3Ek__BackingField_6() { return &___U3CResponseCodeU3Ek__BackingField_6; }
	inline void set_U3CResponseCodeU3Ek__BackingField_6(int64_t value)
	{
		___U3CResponseCodeU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9_marshaled_pinvoke
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	char* ___responseBody_1;
	Il2CppMethodPointer ___responseBodyAction_2;
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___responseBodyTask_3;
	Il2CppSafeArray/*NONE*/* ___responseData_4;
	Il2CppMethodPointer ___responseDataAction_5;
	int64_t ___U3CResponseCodeU3Ek__BackingField_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9_marshaled_com
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	Il2CppChar* ___responseBody_1;
	Il2CppMethodPointer ___responseBodyAction_2;
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___responseBodyTask_3;
	Il2CppSafeArray/*NONE*/* ___responseData_4;
	Il2CppMethodPointer ___responseDataAction_5;
	int64_t ___U3CResponseCodeU3Ek__BackingField_6;
};

// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A, ___m_task_2)); }
	inline Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_task_2)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>
struct ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3 
{
public:
	// System.Boolean System.Threading.Tasks.ParallelLoopResult::m_completed
	bool ___m_completed_0;
	// System.Nullable`1<System.Int64> System.Threading.Tasks.ParallelLoopResult::m_lowestBreakIteration
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___m_lowestBreakIteration_1;

public:
	inline static int32_t get_offset_of_m_completed_0() { return static_cast<int32_t>(offsetof(ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3, ___m_completed_0)); }
	inline bool get_m_completed_0() const { return ___m_completed_0; }
	inline bool* get_address_of_m_completed_0() { return &___m_completed_0; }
	inline void set_m_completed_0(bool value)
	{
		___m_completed_0 = value;
	}

	inline static int32_t get_offset_of_m_lowestBreakIteration_1() { return static_cast<int32_t>(offsetof(ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3, ___m_lowestBreakIteration_1)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_m_lowestBreakIteration_1() const { return ___m_lowestBreakIteration_1; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_m_lowestBreakIteration_1() { return &___m_lowestBreakIteration_1; }
	inline void set_m_lowestBreakIteration_1(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___m_lowestBreakIteration_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3_marshaled_pinvoke
{
	int32_t ___m_completed_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___m_lowestBreakIteration_1;
};
// Native definition for COM marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3_marshaled_com
{
	int32_t ___m_completed_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___m_lowestBreakIteration_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData
struct QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::<Extents>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CExtentsU3Ek__BackingField_1;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::<OcclusionMask>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3COcclusionMaskU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::<GameObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGameObjectU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CExtentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0, ___U3CExtentsU3Ek__BackingField_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CExtentsU3Ek__BackingField_1() const { return ___U3CExtentsU3Ek__BackingField_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CExtentsU3Ek__BackingField_1() { return &___U3CExtentsU3Ek__BackingField_1; }
	inline void set_U3CExtentsU3Ek__BackingField_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CExtentsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3COcclusionMaskU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0, ___U3COcclusionMaskU3Ek__BackingField_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3COcclusionMaskU3Ek__BackingField_2() const { return ___U3COcclusionMaskU3Ek__BackingField_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3COcclusionMaskU3Ek__BackingField_2() { return &___U3COcclusionMaskU3Ek__BackingField_2; }
	inline void set_U3COcclusionMaskU3Ek__BackingField_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3COcclusionMaskU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COcclusionMaskU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0, ___U3CGameObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGameObjectU3Ek__BackingField_3() const { return ___U3CGameObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGameObjectU3Ek__BackingField_3() { return &___U3CGameObjectU3Ek__BackingField_3; }
	inline void set_U3CGameObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGameObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_3), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF, ___m_result_40)); }
	inline Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  get_m_result_40() const { return ___m_result_40; }
	inline Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseBodyAction_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseBodyTask_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseData_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseDataAction_5), (void*)NULL);
		#endif
	}
};

struct Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tEBE8A88BB46F024A616B9CC47D67D49659ADD9F3 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t86F762D7B0D76C3247426D1E9E4BA4D03E767556 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tEBE8A88BB46F024A616B9CC47D67D49659ADD9F3 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tEBE8A88BB46F024A616B9CC47D67D49659ADD9F3 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tEBE8A88BB46F024A616B9CC47D67D49659ADD9F3 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t86F762D7B0D76C3247426D1E9E4BA4D03E767556 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t86F762D7B0D76C3247426D1E9E4BA4D03E767556 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t86F762D7B0D76C3247426D1E9E4BA4D03E767556 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7
struct U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::<>t__builder
	AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::query
	String_t* ___query_2;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::jsonData
	String_t* ___jsonData_3;
	// System.Threading.CancellationToken Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::timeout
	int32_t ___timeout_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::headers
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::readResponseData
	bool ___readResponseData_7;
	// UnityEngine.Networking.CertificateHandler Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::certificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___certificateHandler_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::disposeCertificateHandlerOnDispose
	bool ___disposeCertificateHandlerOnDispose_9;
	// Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass7_0 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::<>8__1
	U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 * ___U3CU3E8__1_10;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::<>u__1
	TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  ___U3CU3Eu__1_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_query_2() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255, ___query_2)); }
	inline String_t* get_query_2() const { return ___query_2; }
	inline String_t** get_address_of_query_2() { return &___query_2; }
	inline void set_query_2(String_t* value)
	{
		___query_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___query_2), (void*)value);
	}

	inline static int32_t get_offset_of_jsonData_3() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255, ___jsonData_3)); }
	inline String_t* get_jsonData_3() const { return ___jsonData_3; }
	inline String_t** get_address_of_jsonData_3() { return &___jsonData_3; }
	inline void set_jsonData_3(String_t* value)
	{
		___jsonData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jsonData_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_timeout_5() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255, ___timeout_5)); }
	inline int32_t get_timeout_5() const { return ___timeout_5; }
	inline int32_t* get_address_of_timeout_5() { return &___timeout_5; }
	inline void set_timeout_5(int32_t value)
	{
		___timeout_5 = value;
	}

	inline static int32_t get_offset_of_headers_6() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255, ___headers_6)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_headers_6() const { return ___headers_6; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_headers_6() { return &___headers_6; }
	inline void set_headers_6(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___headers_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_6), (void*)value);
	}

	inline static int32_t get_offset_of_readResponseData_7() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255, ___readResponseData_7)); }
	inline bool get_readResponseData_7() const { return ___readResponseData_7; }
	inline bool* get_address_of_readResponseData_7() { return &___readResponseData_7; }
	inline void set_readResponseData_7(bool value)
	{
		___readResponseData_7 = value;
	}

	inline static int32_t get_offset_of_certificateHandler_8() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255, ___certificateHandler_8)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_certificateHandler_8() const { return ___certificateHandler_8; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_certificateHandler_8() { return &___certificateHandler_8; }
	inline void set_certificateHandler_8(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___certificateHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certificateHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_disposeCertificateHandlerOnDispose_9() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255, ___disposeCertificateHandlerOnDispose_9)); }
	inline bool get_disposeCertificateHandlerOnDispose_9() const { return ___disposeCertificateHandlerOnDispose_9; }
	inline bool* get_address_of_disposeCertificateHandlerOnDispose_9() { return &___disposeCertificateHandlerOnDispose_9; }
	inline void set_disposeCertificateHandlerOnDispose_9(bool value)
	{
		___disposeCertificateHandlerOnDispose_9 = value;
	}

	inline static int32_t get_offset_of_U3CU3E8__1_10() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255, ___U3CU3E8__1_10)); }
	inline U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 * get_U3CU3E8__1_10() const { return ___U3CU3E8__1_10; }
	inline U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 ** get_address_of_U3CU3E8__1_10() { return &___U3CU3E8__1_10; }
	inline void set_U3CU3E8__1_10(U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 * value)
	{
		___U3CU3E8__1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_11() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255, ___U3CU3Eu__1_11)); }
	inline TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  get_U3CU3Eu__1_11() const { return ___U3CU3Eu__1_11; }
	inline TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B * get_address_of_U3CU3Eu__1_11() { return &___U3CU3Eu__1_11; }
	inline void set_U3CU3Eu__1_11(TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  value)
	{
		___U3CU3Eu__1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_11))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8
struct U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::query
	String_t* ___query_2;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::bodyData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bodyData_3;
	// System.Threading.CancellationToken Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::timeout
	int32_t ___timeout_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::headers
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::readResponseData
	bool ___readResponseData_7;
	// UnityEngine.Networking.CertificateHandler Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::certificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___certificateHandler_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::disposeCertificateHandlerOnDispose
	bool ___disposeCertificateHandlerOnDispose_9;
	// Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass8_0 Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::<>8__1
	U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 * ___U3CU3E8__1_10;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::<>u__1
	TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  ___U3CU3Eu__1_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_query_2() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572, ___query_2)); }
	inline String_t* get_query_2() const { return ___query_2; }
	inline String_t** get_address_of_query_2() { return &___query_2; }
	inline void set_query_2(String_t* value)
	{
		___query_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___query_2), (void*)value);
	}

	inline static int32_t get_offset_of_bodyData_3() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572, ___bodyData_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bodyData_3() const { return ___bodyData_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bodyData_3() { return &___bodyData_3; }
	inline void set_bodyData_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bodyData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyData_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572, ___cancellationToken_4)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_4))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_timeout_5() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572, ___timeout_5)); }
	inline int32_t get_timeout_5() const { return ___timeout_5; }
	inline int32_t* get_address_of_timeout_5() { return &___timeout_5; }
	inline void set_timeout_5(int32_t value)
	{
		___timeout_5 = value;
	}

	inline static int32_t get_offset_of_headers_6() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572, ___headers_6)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_headers_6() const { return ___headers_6; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_headers_6() { return &___headers_6; }
	inline void set_headers_6(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___headers_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_6), (void*)value);
	}

	inline static int32_t get_offset_of_readResponseData_7() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572, ___readResponseData_7)); }
	inline bool get_readResponseData_7() const { return ___readResponseData_7; }
	inline bool* get_address_of_readResponseData_7() { return &___readResponseData_7; }
	inline void set_readResponseData_7(bool value)
	{
		___readResponseData_7 = value;
	}

	inline static int32_t get_offset_of_certificateHandler_8() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572, ___certificateHandler_8)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_certificateHandler_8() const { return ___certificateHandler_8; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_certificateHandler_8() { return &___certificateHandler_8; }
	inline void set_certificateHandler_8(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___certificateHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certificateHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_disposeCertificateHandlerOnDispose_9() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572, ___disposeCertificateHandlerOnDispose_9)); }
	inline bool get_disposeCertificateHandlerOnDispose_9() const { return ___disposeCertificateHandlerOnDispose_9; }
	inline bool* get_address_of_disposeCertificateHandlerOnDispose_9() { return &___disposeCertificateHandlerOnDispose_9; }
	inline void set_disposeCertificateHandlerOnDispose_9(bool value)
	{
		___disposeCertificateHandlerOnDispose_9 = value;
	}

	inline static int32_t get_offset_of_U3CU3E8__1_10() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572, ___U3CU3E8__1_10)); }
	inline U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 * get_U3CU3E8__1_10() const { return ___U3CU3E8__1_10; }
	inline U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 ** get_address_of_U3CU3E8__1_10() { return &___U3CU3E8__1_10; }
	inline void set_U3CU3E8__1_10(U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 * value)
	{
		___U3CU3E8__1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_11() { return static_cast<int32_t>(offsetof(U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572, ___U3CU3Eu__1_11)); }
	inline TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  get_U3CU3Eu__1_11() const { return ___U3CU3Eu__1_11; }
	inline TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B * get_address_of_U3CU3Eu__1_11() { return &___U3CU3Eu__1_11; }
	inline void set_U3CU3Eu__1_11(TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  value)
	{
		___U3CU3Eu__1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_11))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d
struct U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::<>t__builder
	AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  ___U3CU3Et__builder_1;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::byteArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteArray_2;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::<>u__1
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_byteArray_2() { return static_cast<int32_t>(offsetof(U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79, ___byteArray_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteArray_2() const { return ___byteArray_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteArray_2() { return &___byteArray_2; }
	inline void set_byteArray_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteArray_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79, ___U3CU3Eu__1_3)); }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<System.Type>
struct Action_1_t87684BD53C55B58E136F9DA7668485600A621945  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  Task_1_GetAwaiter_mFA73D53368B699D5DB79AFD8DC76F11FC919CBF6_gshared (Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mFF9B44AE2392281885869337E0410AB5C9DC9257_gshared (TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255_m49AF10B65E8BC24E40783A781488D559C707EDBF_gshared (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * __this, TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B * ___awaiter0, U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  TaskAwaiter_1_GetResult_mFACC5ED8BF2D63B9E6B12BD0E4BA1CF22BCB9844_gshared (TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mDB12953D9D24E17B8127313A3DEF4EF67B03D8AA_gshared (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m73D574CBFAEB187B87E1529D6F14FEFA7DD54A57_gshared (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * __this, Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m0ECF4EBE91318BD5C3FD82B14310562FE7FDFF4C_gshared (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572_m3C42C73F36E84D0E1E4B47722A1F4ED500604D22_gshared (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * __this, TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B * ___awaiter0, U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.ParallelLoopResult System.Threading.Tasks.Parallel::ForEach<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Action`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  Parallel_ForEach_TisRuntimeObject_m6AC482A667FC3B700BAE052C1F6F4948484F596F_gshared (RuntimeObject* ___source0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___body1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_Run_TisRuntimeObject_mAEE714420C7F5AAD768588A76399EB67779E8729_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___function0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18  Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79_mB1455E08D0A9E7CF0E7FC3F8F6CF86F9B8432559_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m0979FCFED92E2FBC54E6875A962D89AE88E619C5 (U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Put_mA91C5DE79F2D9D04541E48CB218B5CE9CBD02E5F (String_t* ___uri0, String_t* ___bodyData1, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  CancellationToken_Register_m6C186260806A5918D17E0B3A5AF2520D8AFF0787 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response> Microsoft.MixedReality.Toolkit.Utilities.Rest::ProcessRequestAsync(UnityEngine.Networking.UnityWebRequest,System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean,UnityEngine.Networking.CertificateHandler,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * Rest_ProcessRequestAsync_m28F602CB8609C64A9B4BC46D64A1A914812418B2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___webRequest0, int32_t ___timeout1, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___headers2, bool ___readResponseData3, CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___certificateHandler4, bool ___disposeCertificateHandlerOnDispose5, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetAwaiter()
inline TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  Task_1_GetAwaiter_mFA73D53368B699D5DB79AFD8DC76F11FC919CBF6 (Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  (*) (Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF *, const RuntimeMethod*))Task_1_GetAwaiter_mFA73D53368B699D5DB79AFD8DC76F11FC919CBF6_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mFF9B44AE2392281885869337E0410AB5C9DC9257 (TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mFF9B44AE2392281885869337E0410AB5C9DC9257_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255_m49AF10B65E8BC24E40783A781488D559C707EDBF (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * __this, TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B * ___awaiter0, U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *, TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B *, U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255_m49AF10B65E8BC24E40783A781488D559C707EDBF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::GetResult()
inline Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  TaskAwaiter_1_GetResult_mFACC5ED8BF2D63B9E6B12BD0E4BA1CF22BCB9844 (TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B * __this, const RuntimeMethod* method)
{
	return ((  Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  (*) (TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B *, const RuntimeMethod*))TaskAwaiter_1_GetResult_mFACC5ED8BF2D63B9E6B12BD0E4BA1CF22BCB9844_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mDB12953D9D24E17B8127313A3DEF4EF67B03D8AA (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mDB12953D9D24E17B8127313A3DEF4EF67B03D8AA_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m73D574CBFAEB187B87E1529D6F14FEFA7DD54A57 (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * __this, Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *, Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9 , const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m73D574CBFAEB187B87E1529D6F14FEFA7DD54A57_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__7_MoveNext_mF1F25C79B91225486F4D20B257F7128DAE36EC42 (U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m0ECF4EBE91318BD5C3FD82B14310562FE7FDFF4C (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m0ECF4EBE91318BD5C3FD82B14310562FE7FDFF4C_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__7_SetStateMachine_mBF753AF8E484DFC14DFE54D0B1DBF31C8F7B5A3B (U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m8A3586C91D222BC0C64188A520D41AFE041C5B4A (U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Put_mA2C337337953404F65F36D8F59747F566E3266A4 (String_t* ___uri0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bodyData1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Utilities.Response>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Utilities.Response>,Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572_m3C42C73F36E84D0E1E4B47722A1F4ED500604D22 (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * __this, TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B * ___awaiter0, U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *, TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B *, U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572_m3C42C73F36E84D0E1E4B47722A1F4ED500604D22_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__8_MoveNext_mF01325F93DD8E186CA2C78239A16F0C54DC78935 (U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__8_SetStateMachine_m50A71EF0B9B1CF79FF0EEC307B8689D25CD39FA0 (U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F (int32_t ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* Scene_GetRootGameObjects_m03603677EECB3F9BC0497D98A1E59B5A11988956 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneManager_get_sceneCount_m57B8EB790D8B6673BA840442B4F125121CC5456E (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRootGameObjectsInLoadedScenesU3Ed__2__ctor_mF5472839A0D64D96F7BAFDF09C9945417167CB0C (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_Generic_IEnumerableU3CUnityEngine_GameObjectU3E_GetEnumerator_m637F290881CA44B5D43483CDEC8FA4534F5CE338 (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__8__ctor_m6364F05CE54D5CAF8F0C159B7303EB437C13B927 (U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__8_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mC280ECC6F096C90BB2E684B993EB099349EE4807 (U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::.ctor()
inline void Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::Enqueue(!0)
inline void Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.Transform>::Dequeue()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812 (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Transform>::get_Count()
inline int32_t Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_inline (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4__ctor_mA5F902F4E16B3D8505E1EB00EB7924811B46DF17 (U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mBA2210D42349F55E548D50F7410843FCA3DD24F9 (U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Type> Microsoft.MixedReality.Toolkit.AssemblyExtensions::GetLoadableTypes(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssemblyExtensions_GetLoadableTypes_mB5C08372040BA90ABCC930A2CAD2E75CFA13736C (Assembly_t * ___this0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Type>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5 (Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t87684BD53C55B58E136F9DA7668485600A621945 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.ParallelLoopResult System.Threading.Tasks.Parallel::ForEach<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Action`1<!!0>)
inline ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B (RuntimeObject* ___source0, Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * ___body1, const RuntimeMethod* method)
{
	return ((  ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  (*) (RuntimeObject*, Action_1_t87684BD53C55B58E136F9DA7668485600A621945 *, const RuntimeMethod*))Parallel_ForEach_TisRuntimeObject_m6AC482A667FC3B700BAE052C1F6F4948484F596F_gshared)(___source0, ___body1, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F (Type_t * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Type>::Add(!0)
inline void List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * __this, Type_t * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *, Type_t *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m06F3E81AE2C493EE8F85DB266C22632FE303FE55 (U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mFB087C92C6B08254A268D9847C6503D3FA605D27 (U3CU3Ec__DisplayClass2_0_t37BA727B262CBDE6B7C6031D8C6C19F51EEAAB2D * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<System.String>(System.Func`1<!!0>)
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * Task_Run_TisString_t_m2018F06E322D96664FD8AD3B0DD79E562D201963 (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *, const RuntimeMethod*))Task_Run_TisRuntimeObject_mAEE714420C7F5AAD768588A76399EB67779E8729_gshared)(___function0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.String>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>::GetAwaiter()
inline ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_inline (ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  (*) (ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3 (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>,Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79_m1E3A64B8A68AB3BBF703FCCAB619660E1C65C6CB (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * ___awaiter0, U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *, U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79_mB1455E08D0A9E7CF0E7FC3F8F6CF86F9B8432559_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>::GetResult()
inline String_t* ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587 (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CU2DcctorU3Eb__2_0U3Ed_MoveNext_m8EA56BC0C6666D2CC526666D0EB947D7A9EC3C56 (U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CU2DcctorU3Eb__2_0U3Ed_SetStateMachine_m92056E211A3536E8DED485E792F47E3BA1B63728 (U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__7_MoveNext_mF1F25C79B91225486F4D20B257F7128DAE36EC42 (U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255_m49AF10B65E8BC24E40783A781488D559C707EDBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m73D574CBFAEB187B87E1529D6F14FEFA7DD54A57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mFACC5ED8BF2D63B9E6B12BD0E4BA1CF22BCB9844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mFF9B44AE2392281885869337E0410AB5C9DC9257_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mFA73D53368B699D5DB79AFD8DC76F11FC919CBF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CPutAsyncU3Eb__0_mC0A69AEA80C7C6F143463FA51287ED1FBC3FC037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0031;
			}
		}

IL_000a:
		{
			U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 * L_2 = (U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass7_0__ctor_m0979FCFED92E2FBC54E6875A962D89AE88E619C5(L_2, /*hidden argument*/NULL);
			__this->set_U3CU3E8__1_10(L_2);
			// using (var webRequest = UnityWebRequest.Put(query, jsonData))
			U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 * L_3 = __this->get_U3CU3E8__1_10();
			String_t* L_4 = __this->get_query_2();
			String_t* L_5 = __this->get_jsonData_3();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6;
			L_6 = UnityWebRequest_Put_mA91C5DE79F2D9D04541E48CB218B5CE9CBD02E5F(L_4, L_5, /*hidden argument*/NULL);
			NullCheck(L_3);
			L_3->set_webRequest_0(L_6);
		}

IL_0031:
		{
		}

IL_0032:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_00cc;
				}
			}

IL_0038:
			{
				// cancellationToken.Register(() =>
				// {
				//     webRequest.Abort();
				// });
				CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_8 = __this->get_address_of_cancellationToken_4();
				U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 * L_9 = __this->get_U3CU3E8__1_10();
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
				Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_0_U3CPutAsyncU3Eb__0_mC0A69AEA80C7C6F143463FA51287ED1FBC3FC037_RuntimeMethod_var), /*hidden argument*/NULL);
				CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_11;
				L_11 = CancellationToken_Register_m6C186260806A5918D17E0B3A5AF2520D8AFF0787((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_8, L_10, /*hidden argument*/NULL);
				// webRequest.SetRequestHeader("Content-Type", "application/json");
				U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 * L_12 = __this->get_U3CU3E8__1_10();
				NullCheck(L_12);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = L_12->get_webRequest_0();
				NullCheck(L_13);
				UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_13, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
				// return await ProcessRequestAsync(webRequest, timeout, headers, readResponseData, certificateHandler, disposeCertificateHandlerOnDispose);
				U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 * L_14 = __this->get_U3CU3E8__1_10();
				NullCheck(L_14);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15 = L_14->get_webRequest_0();
				int32_t L_16 = __this->get_timeout_5();
				Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_17 = __this->get_headers_6();
				bool L_18 = __this->get_readResponseData_7();
				CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_19 = __this->get_certificateHandler_8();
				bool L_20 = __this->get_disposeCertificateHandlerOnDispose_9();
				Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * L_21;
				L_21 = Rest_ProcessRequestAsync_m28F602CB8609C64A9B4BC46D64A1A914812418B2(L_15, L_16, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
				NullCheck(L_21);
				TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  L_22;
				L_22 = Task_1_GetAwaiter_mFA73D53368B699D5DB79AFD8DC76F11FC919CBF6(L_21, /*hidden argument*/Task_1_GetAwaiter_mFA73D53368B699D5DB79AFD8DC76F11FC919CBF6_RuntimeMethod_var);
				V_2 = L_22;
				bool L_23;
				L_23 = TaskAwaiter_1_get_IsCompleted_mFF9B44AE2392281885869337E0410AB5C9DC9257((TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mFF9B44AE2392281885869337E0410AB5C9DC9257_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_00e8;
				}
			}

IL_00ac:
			{
				int32_t L_24 = 0;
				V_0 = L_24;
				__this->set_U3CU3E1__state_0(L_24);
				TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  L_25 = V_2;
				__this->set_U3CU3Eu__1_11(L_25);
				AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * L_26 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255_m49AF10B65E8BC24E40783A781488D559C707EDBF((AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *)L_26, (TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B *)(&V_2), (U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255_m49AF10B65E8BC24E40783A781488D559C707EDBF_RuntimeMethod_var);
				IL2CPP_LEAVE(0x13F, FINALLY_00f2);
			}

IL_00cc:
			{
				TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  L_27 = __this->get_U3CU3Eu__1_11();
				V_2 = L_27;
				TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B * L_28 = __this->get_address_of_U3CU3Eu__1_11();
				il2cpp_codegen_initobj(L_28, sizeof(TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B ));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->set_U3CU3E1__state_0(L_29);
			}

IL_00e8:
			{
				Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  L_30;
				L_30 = TaskAwaiter_1_GetResult_mFACC5ED8BF2D63B9E6B12BD0E4BA1CF22BCB9844((TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_mFACC5ED8BF2D63B9E6B12BD0E4BA1CF22BCB9844_RuntimeMethod_var);
				V_1 = L_30;
				IL2CPP_LEAVE(0x12B, FINALLY_00f2);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00f2;
		}

FINALLY_00f2:
		{ // begin finally (depth: 2)
			{
				int32_t L_31 = V_0;
				if ((((int32_t)L_31) >= ((int32_t)0)))
				{
					goto IL_0113;
				}
			}

IL_00f6:
			{
				U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 * L_32 = __this->get_U3CU3E8__1_10();
				NullCheck(L_32);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_33 = L_32->get_webRequest_0();
				if (!L_33)
				{
					goto IL_0113;
				}
			}

IL_0103:
			{
				U3CU3Ec__DisplayClass7_0_t93EDC986B01D32F45A5A0D629FCC09EE0E5D67D6 * L_34 = __this->get_U3CU3E8__1_10();
				NullCheck(L_34);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_35 = L_34->get_webRequest_0();
				NullCheck(L_35);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_35);
			}

IL_0113:
			{
				IL2CPP_END_FINALLY(242)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(242)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x13F, IL_013f)
			IL2CPP_JUMP_TBL(0x12B, IL_012b)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0114;
		}
		throw e;
	}

CATCH_0114:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * L_36 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_37 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mDB12953D9D24E17B8127313A3DEF4EF67B03D8AA((AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *)L_36, L_37, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mDB12953D9D24E17B8127313A3DEF4EF67B03D8AA_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_013f;
	} // end catch (depth: 1)

IL_012b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * L_38 = __this->get_address_of_U3CU3Et__builder_1();
		Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  L_39 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m73D574CBFAEB187B87E1529D6F14FEFA7DD54A57((AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *)L_38, L_39, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m73D574CBFAEB187B87E1529D6F14FEFA7DD54A57_RuntimeMethod_var);
	}

IL_013f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPutAsyncU3Ed__7_MoveNext_mF1F25C79B91225486F4D20B257F7128DAE36EC42_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 * _thisAdjusted = reinterpret_cast<U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 *>(__this + _offset);
	U3CPutAsyncU3Ed__7_MoveNext_mF1F25C79B91225486F4D20B257F7128DAE36EC42(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__7_SetStateMachine_mBF753AF8E484DFC14DFE54D0B1DBF31C8F7B5A3B (U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0ECF4EBE91318BD5C3FD82B14310562FE7FDFF4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0ECF4EBE91318BD5C3FD82B14310562FE7FDFF4C((AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m0ECF4EBE91318BD5C3FD82B14310562FE7FDFF4C_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPutAsyncU3Ed__7_SetStateMachine_mBF753AF8E484DFC14DFE54D0B1DBF31C8F7B5A3B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 * _thisAdjusted = reinterpret_cast<U3CPutAsyncU3Ed__7_t6FD8B6E447AD92FBF544B9E75A2ED40418720255 *>(__this + _offset);
	U3CPutAsyncU3Ed__7_SetStateMachine_mBF753AF8E484DFC14DFE54D0B1DBF31C8F7B5A3B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__8_MoveNext_mF01325F93DD8E186CA2C78239A16F0C54DC78935 (U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572_m3C42C73F36E84D0E1E4B47722A1F4ED500604D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m73D574CBFAEB187B87E1529D6F14FEFA7DD54A57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mFACC5ED8BF2D63B9E6B12BD0E4BA1CF22BCB9844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mFF9B44AE2392281885869337E0410AB5C9DC9257_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mFA73D53368B699D5DB79AFD8DC76F11FC919CBF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CPutAsyncU3Eb__0_m0719B74CCE4E88F872959307239A29B37E8545F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral641255E7CDC790311725CCB47DB63D989117D244);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0031;
			}
		}

IL_000a:
		{
			U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 * L_2 = (U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass8_0__ctor_m8A3586C91D222BC0C64188A520D41AFE041C5B4A(L_2, /*hidden argument*/NULL);
			__this->set_U3CU3E8__1_10(L_2);
			// using (var webRequest = UnityWebRequest.Put(query, bodyData))
			U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 * L_3 = __this->get_U3CU3E8__1_10();
			String_t* L_4 = __this->get_query_2();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_bodyData_3();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6;
			L_6 = UnityWebRequest_Put_mA2C337337953404F65F36D8F59747F566E3266A4(L_4, L_5, /*hidden argument*/NULL);
			NullCheck(L_3);
			L_3->set_webRequest_0(L_6);
		}

IL_0031:
		{
		}

IL_0032:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_00cc;
				}
			}

IL_0038:
			{
				// cancellationToken.Register(() =>
				// {
				//     webRequest.Abort();
				// });
				CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_8 = __this->get_address_of_cancellationToken_4();
				U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 * L_9 = __this->get_U3CU3E8__1_10();
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
				Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CPutAsyncU3Eb__0_m0719B74CCE4E88F872959307239A29B37E8545F5_RuntimeMethod_var), /*hidden argument*/NULL);
				CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_11;
				L_11 = CancellationToken_Register_m6C186260806A5918D17E0B3A5AF2520D8AFF0787((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_8, L_10, /*hidden argument*/NULL);
				// webRequest.SetRequestHeader("Content-Type", "application/octet-stream");
				U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 * L_12 = __this->get_U3CU3E8__1_10();
				NullCheck(L_12);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = L_12->get_webRequest_0();
				NullCheck(L_13);
				UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_13, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral641255E7CDC790311725CCB47DB63D989117D244, /*hidden argument*/NULL);
				// return await ProcessRequestAsync(webRequest, timeout, headers, readResponseData, certificateHandler, disposeCertificateHandlerOnDispose);
				U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 * L_14 = __this->get_U3CU3E8__1_10();
				NullCheck(L_14);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15 = L_14->get_webRequest_0();
				int32_t L_16 = __this->get_timeout_5();
				Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_17 = __this->get_headers_6();
				bool L_18 = __this->get_readResponseData_7();
				CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * L_19 = __this->get_certificateHandler_8();
				bool L_20 = __this->get_disposeCertificateHandlerOnDispose_9();
				Task_1_t19D908AD6980418625A5FF40B84D5176BBABAADF * L_21;
				L_21 = Rest_ProcessRequestAsync_m28F602CB8609C64A9B4BC46D64A1A914812418B2(L_15, L_16, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
				NullCheck(L_21);
				TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  L_22;
				L_22 = Task_1_GetAwaiter_mFA73D53368B699D5DB79AFD8DC76F11FC919CBF6(L_21, /*hidden argument*/Task_1_GetAwaiter_mFA73D53368B699D5DB79AFD8DC76F11FC919CBF6_RuntimeMethod_var);
				V_2 = L_22;
				bool L_23;
				L_23 = TaskAwaiter_1_get_IsCompleted_mFF9B44AE2392281885869337E0410AB5C9DC9257((TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mFF9B44AE2392281885869337E0410AB5C9DC9257_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_00e8;
				}
			}

IL_00ac:
			{
				int32_t L_24 = 0;
				V_0 = L_24;
				__this->set_U3CU3E1__state_0(L_24);
				TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  L_25 = V_2;
				__this->set_U3CU3Eu__1_11(L_25);
				AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * L_26 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572_m3C42C73F36E84D0E1E4B47722A1F4ED500604D22((AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *)L_26, (TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B *)(&V_2), (U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B_TisU3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572_m3C42C73F36E84D0E1E4B47722A1F4ED500604D22_RuntimeMethod_var);
				IL2CPP_LEAVE(0x13F, FINALLY_00f2);
			}

IL_00cc:
			{
				TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B  L_27 = __this->get_U3CU3Eu__1_11();
				V_2 = L_27;
				TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B * L_28 = __this->get_address_of_U3CU3Eu__1_11();
				il2cpp_codegen_initobj(L_28, sizeof(TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B ));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->set_U3CU3E1__state_0(L_29);
			}

IL_00e8:
			{
				Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  L_30;
				L_30 = TaskAwaiter_1_GetResult_mFACC5ED8BF2D63B9E6B12BD0E4BA1CF22BCB9844((TaskAwaiter_1_t78CF6C186E1D6042F83EC6F6DC5CAE5DDD38893B *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_mFACC5ED8BF2D63B9E6B12BD0E4BA1CF22BCB9844_RuntimeMethod_var);
				V_1 = L_30;
				IL2CPP_LEAVE(0x12B, FINALLY_00f2);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00f2;
		}

FINALLY_00f2:
		{ // begin finally (depth: 2)
			{
				int32_t L_31 = V_0;
				if ((((int32_t)L_31) >= ((int32_t)0)))
				{
					goto IL_0113;
				}
			}

IL_00f6:
			{
				U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 * L_32 = __this->get_U3CU3E8__1_10();
				NullCheck(L_32);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_33 = L_32->get_webRequest_0();
				if (!L_33)
				{
					goto IL_0113;
				}
			}

IL_0103:
			{
				U3CU3Ec__DisplayClass8_0_tD1F251119A82793D64521B28D6C86718BEF683E2 * L_34 = __this->get_U3CU3E8__1_10();
				NullCheck(L_34);
				UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_35 = L_34->get_webRequest_0();
				NullCheck(L_35);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_35);
			}

IL_0113:
			{
				IL2CPP_END_FINALLY(242)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(242)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x13F, IL_013f)
			IL2CPP_JUMP_TBL(0x12B, IL_012b)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0114;
		}
		throw e;
	}

CATCH_0114:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * L_36 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_37 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mDB12953D9D24E17B8127313A3DEF4EF67B03D8AA((AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *)L_36, L_37, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mDB12953D9D24E17B8127313A3DEF4EF67B03D8AA_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_013f;
	} // end catch (depth: 1)

IL_012b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * L_38 = __this->get_address_of_U3CU3Et__builder_1();
		Response_t357CBEC66B94D437500B9357C3F5D4D6A8720AA9  L_39 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m73D574CBFAEB187B87E1529D6F14FEFA7DD54A57((AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *)L_38, L_39, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m73D574CBFAEB187B87E1529D6F14FEFA7DD54A57_RuntimeMethod_var);
	}

IL_013f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPutAsyncU3Ed__8_MoveNext_mF01325F93DD8E186CA2C78239A16F0C54DC78935_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 * _thisAdjusted = reinterpret_cast<U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 *>(__this + _offset);
	U3CPutAsyncU3Ed__8_MoveNext_mF01325F93DD8E186CA2C78239A16F0C54DC78935(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Rest/<PutAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutAsyncU3Ed__8_SetStateMachine_m50A71EF0B9B1CF79FF0EEC307B8689D25CD39FA0 (U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m0ECF4EBE91318BD5C3FD82B14310562FE7FDFF4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m0ECF4EBE91318BD5C3FD82B14310562FE7FDFF4C((AsyncTaskMethodBuilder_1_t475EBF8E2757427417ECE6F0B02F86CC2097009A *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m0ECF4EBE91318BD5C3FD82B14310562FE7FDFF4C_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPutAsyncU3Ed__8_SetStateMachine_m50A71EF0B9B1CF79FF0EEC307B8689D25CD39FA0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 * _thisAdjusted = reinterpret_cast<U3CPutAsyncU3Ed__8_t11C2DFF86A098894E78EE894F56A8367F5DBE572 *>(__this + _offset);
	U3CPutAsyncU3Ed__8_SetStateMachine_m50A71EF0B9B1CF79FF0EEC307B8689D25CD39FA0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRootGameObjectsInLoadedScenesU3Ed__2__ctor_mF5472839A0D64D96F7BAFDF09C9945417167CB0C (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_IDisposable_Dispose_mD22033A3E33DAA95C19A911CC953918FD74E3A33 (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRootGameObjectsInLoadedScenesU3Ed__2_MoveNext_m6772F4EF1E0A8943CE76E212DA7DC92FB89A85F9 (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_006c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < SceneManager.sceneCount; i++)
		__this->set_U3CiU3E5__2_3(0);
		goto IL_00a8;
	}

IL_0023:
	{
		// Scene loadedScene = SceneManager.GetSceneAt(i);
		int32_t L_3 = __this->get_U3CiU3E5__2_3();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_4;
		L_4 = SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (!loadedScene.isLoaded)
		bool L_5;
		L_5 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0098;
		}
	}
	{
		// foreach (GameObject rootGameObject in loadedScene.GetRootGameObjects())
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6;
		L_6 = Scene_GetRootGameObjects_m03603677EECB3F9BC0497D98A1E59B5A11988956((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		__this->set_U3CU3E7__wrap2_4(L_6);
		__this->set_U3CU3E7__wrap3_5(0);
		goto IL_0081;
	}

IL_004e:
	{
		// foreach (GameObject rootGameObject in loadedScene.GetRootGameObjects())
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_U3CU3E7__wrap2_4();
		int32_t L_8 = __this->get_U3CU3E7__wrap3_5();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// yield return rootGameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_2;
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006c:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_12 = __this->get_U3CU3E7__wrap3_5();
		__this->set_U3CU3E7__wrap3_5(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
	}

IL_0081:
	{
		// foreach (GameObject rootGameObject in loadedScene.GetRootGameObjects())
		int32_t L_13 = __this->get_U3CU3E7__wrap3_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_U3CU3E7__wrap2_4();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		__this->set_U3CU3E7__wrap2_4((GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)NULL);
	}

IL_0098:
	{
		// for (int i = 0; i < SceneManager.sceneCount; i++)
		int32_t L_15 = __this->get_U3CiU3E5__2_3();
		V_3 = L_15;
		int32_t L_16 = V_3;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
	}

IL_00a8:
	{
		// for (int i = 0; i < SceneManager.sceneCount; i++)
		int32_t L_17 = __this->get_U3CiU3E5__2_3();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = SceneManager_get_sceneCount_m57B8EB790D8B6673BA840442B4F125121CC5456E(/*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0023;
		}
	}
	{
		// yield break;
		return (bool)0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_Generic_IEnumeratorU3CUnityEngine_GameObjectU3E_get_Current_m6A0FEF072C7C5868728E96BBB14991EA9187EB5E (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * __this, const RuntimeMethod* method)
{
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_IEnumerator_Reset_mA9C55B8B92E7FA92713E153C0A10B9C64806D134 (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_IEnumerator_Reset_mA9C55B8B92E7FA92713E153C0A10B9C64806D134_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_IEnumerator_get_Current_mDF6A284F0D3667570E840B681B888E7AE5342506 (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * __this, const RuntimeMethod* method)
{
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_Generic_IEnumerableU3CUnityEngine_GameObjectU3E_GetEnumerator_m637F290881CA44B5D43483CDEC8FA4534F5CE338 (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * L_3 = (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF *)il2cpp_codegen_object_new(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF_il2cpp_TypeInfo_var);
		U3CGetRootGameObjectsInLoadedScenesU3Ed__2__ctor_mF5472839A0D64D96F7BAFDF09C9945417167CB0C(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_IEnumerable_GetEnumerator_m6E95C5D40141DDB044FD912F081EFBBCC65A39AB (U3CGetRootGameObjectsInLoadedScenesU3Ed__2_tD2DF6AADE1C6FDF239FB4719ED1DC75A2BCFF9FF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetRootGameObjectsInLoadedScenesU3Ed__2_System_Collections_Generic_IEnumerableU3CUnityEngine_GameObjectU3E_GetEnumerator_m637F290881CA44B5D43483CDEC8FA4534F5CE338(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshData_get_Id_m654F613984EA0B705F638923C3567B579C9E62A5 (MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_Id_mE4E1B759066A50297EAA02C03E82111B8404C7F0 (MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_Indices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* MeshData_get_Indices_m8D6B76C96687CFDBAEAAC8A3C6EFD08361ABC8C7 (MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F * __this, const RuntimeMethod* method)
{
	{
		// public int[] Indices { get; set; }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_U3CIndicesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_Indices(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_Indices_mB025626A6AD89630971B298938F67426E0BB8560 (MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// public int[] Indices { get; set; }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_U3CIndicesU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* MeshData_get_Vertices_mBF61B835425293FE7E85340EBC4E94A9B80E180C (MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3[] Vertices { get; set; }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_U3CVerticesU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_Vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_Vertices_m7B042F2848D9066DC4F30BBD5BE86C7BDE20A805 (MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3[] Vertices { get; set; }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___value0;
		__this->set_U3CVerticesU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_UVs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* MeshData_get_UVs_mFF9F25F998A3CD6D03AA773A2C311D2CA80E4BBE (MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F * __this, const RuntimeMethod* method)
{
	{
		// public Vector2[] UVs { get; set; }
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = __this->get_U3CUVsU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_UVs(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_UVs_m888F58270661FD692B4EBA9BB033867514C42E72 (MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2[] UVs { get; set; }
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = ___value0;
		__this->set_U3CUVsU3Ek__BackingField_3(L_0);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_GameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * MeshData_get_GameObject_m68B52208A664B84C9CCD750D654DD6E359FC4747 (MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CGameObjectU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_GameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_GameObject_m77965860A7B86CFF81D1665F3235E102ADE5924D (MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CGameObjectU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData__ctor_m63223840385AF41B8E5952D263074A75449BFF95 (MeshData_tDF3B98D8FF2FB3B6A76C692BC37044033F3AA55F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuadData_get_Id_m427CC086FAE148D4017B5BFBAADE2C869235DB54 (QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0 * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData_set_Id_m9E9805CE693BF1CB246034AE0B7AB779A25FD7E5 (QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::get_Extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  QuadData_get_Extents_m3BF4539ADBE1F47510D45AE918A60D8D3A187F88 (QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Extents { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CExtentsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::set_Extents(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData_set_Extents_m6A3704805013E15325CB363D0397081F9FC9F5E1 (QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 Extents { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CExtentsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Byte[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::get_OcclusionMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* QuadData_get_OcclusionMask_m72620B7F00AD7A9A09B6B6F550AE2783ABA1B05D (QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0 * __this, const RuntimeMethod* method)
{
	{
		// public byte[] OcclusionMask { get; set; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_U3COcclusionMaskU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::set_OcclusionMask(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData_set_OcclusionMask_mD1F1A282AEAE31EFFC194ED013B5F39C0A87DDC4 (QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		// public byte[] OcclusionMask { get; set; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3COcclusionMaskU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::get_GameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * QuadData_get_GameObject_m6E1EB63AAFBC5EA4AC69F276F148F0215BA3CF98 (QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CGameObjectU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::set_GameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData_set_GameObject_m17079C72B923E272F0B6C36F9B60A15BD4F5986B (QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CGameObjectU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData__ctor_m55CA82551EE7DDFD5ABD59ACBD644A9080040E5C (QuadData_t5A89D526D4617AD643DF67C9C3D54100F2277FA0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__8__ctor_m6364F05CE54D5CAF8F0C159B7303EB437C13B927 (U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__8_System_IDisposable_Dispose_m3390F6B1F3BFE643BBA1F0ECC6DDC0CFF614C188 (U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateAncestorsU3Ed__8_MoveNext_mA25571463020300947E6AB109E665A487428C80C (U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!includeSelf)
		bool L_3 = __this->get_includeSelf_3();
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// startTransform = startTransform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_startTransform_5();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_4, /*hidden argument*/NULL);
		__this->set_startTransform_5(L_5);
	}

IL_0030:
	{
		// for (Transform transform = startTransform; transform != null; transform = transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_startTransform_5();
		__this->set_U3CtransformU3E5__2_7(L_6);
		goto IL_006b;
	}

IL_003e:
	{
		// yield return transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_U3CtransformU3E5__2_7();
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (Transform transform = startTransform; transform != null; transform = transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_U3CtransformU3E5__2_7();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		__this->set_U3CtransformU3E5__2_7(L_9);
	}

IL_006b:
	{
		// for (Transform transform = startTransform; transform != null; transform = transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_U3CtransformU3E5__2_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_003e;
		}
	}
	{
		__this->set_U3CtransformU3E5__2_7((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// }
		return (bool)0;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * U3CEnumerateAncestorsU3Ed__8_System_Collections_Generic_IEnumeratorU3CUnityEngine_TransformU3E_get_Current_mB7F87608992C8CF1893EDC28A781C6B5E21C2950 (U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerator_Reset_m4ED212571A24812CFFB85FFACEDCFED03C765647 (U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerator_Reset_m4ED212571A24812CFFB85FFACEDCFED03C765647_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerator_get_Current_m214D9A7BD20894E0F5BC8EFD6B0DA874B32CB73E (U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__8_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mC280ECC6F096C90BB2E684B993EB099349EE4807 (U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * L_3 = (U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC *)il2cpp_codegen_object_new(U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC_il2cpp_TypeInfo_var);
		U3CEnumerateAncestorsU3Ed__8__ctor_m6364F05CE54D5CAF8F0C159B7303EB437C13B927(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_U3CU3E3__startTransform_6();
		NullCheck(L_4);
		L_4->set_startTransform_5(L_5);
		U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * L_6 = V_0;
		bool L_7 = __this->get_U3CU3E3__includeSelf_4();
		NullCheck(L_6);
		L_6->set_includeSelf_3(L_7);
		U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerable_GetEnumerator_mEFD5277233EF7A6C5BF0E8B1295657BCB48508B9 (U3CEnumerateAncestorsU3Ed__8_tC86C05C48F4008B65C3732C0BC0EDB584CF7DDCC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateAncestorsU3Ed__8_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mC280ECC6F096C90BB2E684B993EB099349EE4807(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4__ctor_mA5F902F4E16B3D8505E1EB00EB7924811B46DF17 (U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4_System_IDisposable_Dispose_m2E96EBF233BAE5CB80C6D1E37D5A838752250A5E (U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateHierarchyCoreU3Ed__4_MoveNext_mB548CE9FB3979219D90600AE1059D22801E5F721 (U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_008a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var transformQueue = new Queue<Transform>();
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_3 = (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *)il2cpp_codegen_object_new(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177_il2cpp_TypeInfo_var);
		Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B(L_3, /*hidden argument*/Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B_RuntimeMethod_var);
		__this->set_U3CtransformQueueU3E5__2_7(L_3);
		// transformQueue.Enqueue(root);
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_4 = __this->get_U3CtransformQueueU3E5__2_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_root_3();
		NullCheck(L_4);
		Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB(L_4, L_5, /*hidden argument*/Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var);
		goto IL_0091;
	}

IL_0035:
	{
		// var parentTransform = transformQueue.Dequeue();
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_6 = __this->get_U3CtransformQueueU3E5__2_7();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812(L_6, /*hidden argument*/Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812_RuntimeMethod_var);
		V_1 = L_7;
		// if (!parentTransform || ignore.Contains(parentTransform)) { continue; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_10 = __this->get_ignore_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = InterfaceFuncInvoker1< bool, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Transform>::Contains(!0) */, ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var, L_10, L_11);
		if (L_12)
		{
			goto IL_0091;
		}
	}
	{
		// for (var i = 0; i < parentTransform.childCount; i++)
		V_2 = 0;
		goto IL_0071;
	}

IL_005b:
	{
		// transformQueue.Enqueue(parentTransform.GetChild(i));
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_13 = __this->get_U3CtransformQueueU3E5__2_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB(L_13, L_16, /*hidden argument*/Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var);
		// for (var i = 0; i < parentTransform.childCount; i++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0071:
	{
		// for (var i = 0; i < parentTransform.childCount; i++)
		int32_t L_18 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_005b;
		}
	}
	{
		// yield return parentTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = V_1;
		__this->set_U3CU3E2__current_1(L_21);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0091:
	{
		// while (transformQueue.Count > 0)
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_22 = __this->get_U3CtransformQueueU3E5__2_7();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_inline(L_22, /*hidden argument*/Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_RuntimeMethod_var);
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumeratorU3CUnityEngine_TransformU3E_get_Current_m032A9A3EA01475A4DE9F9EE38C459C4481130817 (U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_Reset_m8715515D66C47B612826CBB2A39DF9B1A24D6F4D (U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_Reset_m8715515D66C47B612826CBB2A39DF9B1A24D6F4D_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_get_Current_m1A4FDB701778E57A8FEE5E6E1C81DD2E4D0C1443 (U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mBA2210D42349F55E548D50F7410843FCA3DD24F9 (U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * L_3 = (U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 *)il2cpp_codegen_object_new(U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52_il2cpp_TypeInfo_var);
		U3CEnumerateHierarchyCoreU3Ed__4__ctor_mA5F902F4E16B3D8505E1EB00EB7924811B46DF17(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_U3CU3E3__root_4();
		NullCheck(L_4);
		L_4->set_root_3(L_5);
		U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * L_6 = V_0;
		RuntimeObject* L_7 = __this->get_U3CU3E3__ignore_6();
		NullCheck(L_6);
		L_6->set_ignore_5(L_7);
		U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerable_GetEnumerator_m60DEAF240D3335B0B8252F396E1356DB6599B74C (U3CEnumerateHierarchyCoreU3Ed__4_t0E4DF3D992461658A0EFE2B73CC0A9E218FD5B52 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mBA2210D42349F55E548D50F7410843FCA3DD24F9(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m1F851A9D2B74A90A8E101AF436ED4F2C8548928A (U3CU3Ec__DisplayClass0_0_t15053B549DB317B354855AB2FEF6564CA7FA1354 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::<GetAllSubClassesOf>b__0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__0_m816DC79BC94FD91BF55E5055DD90F38AFA4159D4 (U3CU3Ec__DisplayClass0_0_t15053B549DB317B354855AB2FEF6564CA7FA1354 * __this, Assembly_t * ___assembly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t87684BD53C55B58E136F9DA7668485600A621945_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__1_m34FE1974EA9EFEFBC2D68493418922705BDFA02C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * V_0 = NULL;
	Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		// Parallel.ForEach(assembly.GetLoadableTypes(), (type) =>
		// {
		//     if (type != null && type.IsClass && !type.IsAbstract && type.IsSubclassOf(rootType))
		//     {
		//         results.Add(type);
		//     }
		// });
		Assembly_t * L_0 = ___assembly0;
		RuntimeObject* L_1;
		L_1 = AssemblyExtensions_GetLoadableTypes_mB5C08372040BA90ABCC930A2CAD2E75CFA13736C(L_0, /*hidden argument*/NULL);
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_2 = __this->get_U3CU3E9__1_2();
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_4 = (Action_1_t87684BD53C55B58E136F9DA7668485600A621945 *)il2cpp_codegen_object_new(Action_1_t87684BD53C55B58E136F9DA7668485600A621945_il2cpp_TypeInfo_var);
		Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5(L_4, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__1_m34FE1974EA9EFEFBC2D68493418922705BDFA02C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5_RuntimeMethod_var);
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_5 = L_4;
		V_0 = L_5;
		__this->set_U3CU3E9__1_2(L_5);
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_6 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var);
		ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  L_7;
		L_7 = Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B(G_B2_1, G_B2_0, /*hidden argument*/Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::<GetAllSubClassesOf>b__1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__1_m34FE1974EA9EFEFBC2D68493418922705BDFA02C (U3CU3Ec__DisplayClass0_0_t15053B549DB317B354855AB2FEF6564CA7FA1354 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type != null && type.IsClass && !type.IsAbstract && type.IsSubclassOf(rootType))
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_6 = ___type0;
		Type_t * L_7 = __this->get_rootType_0();
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtFuncInvoker1< bool, Type_t * >::Invoke(110 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_6, L_7);
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		// results.Add(type);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_9 = __this->get_results_1();
		Type_t * L_10 = ___type0;
		NullCheck(L_9);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_9, L_10, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
	}

IL_0033:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m248F41615603DDC934B7CBFB776DEBFEF42E1B0D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF * L_0 = (U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF *)il2cpp_codegen_object_new(U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m06F3E81AE2C493EE8F85DB266C22632FE303FE55(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m06F3E81AE2C493EE8F85DB266C22632FE303FE55 (U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<Median>b__12_0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMedianU3Eb__12_0_m11E4547DCFA9D7EA045886E82356EC65B409BEE9 (U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	{
		// return count == 0 ? Vector2.zero : enumerable.OrderBy(v => v.sqrMagnitude).ElementAt(count / 2);
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___v0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<Median>b__13_0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMedianU3Eb__13_0_m69116C3EAA812EBCD118C234C8142329FB401375 (U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	{
		// return count == 0 ? Vector3.zero : enumerable.OrderBy(v => v.sqrMagnitude).ElementAt(count / 2);
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___v0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<Median>b__14_0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMedianU3Eb__14_0_m38CAFC7C7E229FBC53F8DD1AE7D7F51B3FA02A12 (U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	{
		// return count == 0 ? Vector2.zero : vectors.OrderBy(v => v.sqrMagnitude).ElementAt(count / 2);
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___v0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<Median>b__15_0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMedianU3Eb__15_0_m11C84D02C55BB754B67F331ED1DC14D1D79B03A9 (U3CU3Ec_t10362B0EE663B1E38812DA631340E44F1F1E73BF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	{
		// return count == 0 ? Vector3.zero : vectors.OrderBy(v => v.sqrMagnitude).ElementAt(count / 2);
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___v0), /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CU2DcctorU3Eb__2_0U3Ed_MoveNext_m8EA56BC0C6666D2CC526666D0EB947D7A9EC3C56 (U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79_m1E3A64B8A68AB3BBF703FCCAB619660E1C65C6CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisString_t_m2018F06E322D96664FD8AD3B0DD79E562D201963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_cctorU3Eb__1_mB8E428FEBF9863A6647B8DE9E694EF65C91A5DD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t37BA727B262CBDE6B7C6031D8C6C19F51EEAAB2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0063;
			}
		}

IL_000a:
		{
			U3CU3Ec__DisplayClass2_0_t37BA727B262CBDE6B7C6031D8C6C19F51EEAAB2D * L_2 = (U3CU3Ec__DisplayClass2_0_t37BA727B262CBDE6B7C6031D8C6C19F51EEAAB2D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t37BA727B262CBDE6B7C6031D8C6C19F51EEAAB2D_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass2_0__ctor_mFB087C92C6B08254A268D9847C6503D3FA605D27(L_2, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass2_0_t37BA727B262CBDE6B7C6031D8C6C19F51EEAAB2D * L_3 = L_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_byteArray_2();
			NullCheck(L_3);
			L_3->set_byteArray_0(L_4);
			// public static Func<byte[], Task<string>> BytesToString = async (byteArray) => await Task.Run(() =>
			//      System.Text.Encoding.Default.GetString(byteArray)).ConfigureAwait(false);
			Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * L_5 = (Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 *)il2cpp_codegen_object_new(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1_il2cpp_TypeInfo_var);
			Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA(L_5, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3C_cctorU3Eb__1_mB8E428FEBF9863A6647B8DE9E694EF65C91A5DD9_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m1653D26304F4ECBD7FCAC8091780D7D716B4B8EA_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_6;
			L_6 = Task_Run_TisString_t_m2018F06E322D96664FD8AD3B0DD79E562D201963(L_5, /*hidden argument*/Task_Run_TisString_t_m2018F06E322D96664FD8AD3B0DD79E562D201963_RuntimeMethod_var);
			NullCheck(L_6);
			ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43  L_7;
			L_7 = Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A(L_6, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m1603C4297A5227176D363F7D98265F623A10B56A_RuntimeMethod_var);
			V_3 = L_7;
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_8;
			L_8 = ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_inline((ConfiguredTaskAwaitable_1_t5187B0D22EB9286C2D2DB61816ED263257895F43 *)(&V_3), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m556536A13414E77F9D9857C0F5F470C565F8FA9A_RuntimeMethod_var);
			V_2 = L_8;
			bool L_9;
			L_9 = ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3((ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_2), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mF9077071B003CA388B31091E2FF04BF418D963A3_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_11 = V_2;
			__this->set_U3CU3Eu__1_3(L_11);
			AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79_m1E3A64B8A68AB3BBF703FCCAB619660E1C65C6CB((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_12, (ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_2), (U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2_TisU3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79_m1E3A64B8A68AB3BBF703FCCAB619660E1C65C6CB_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0063:
		{
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2  L_13 = __this->get_U3CU3Eu__1_3();
			V_2 = L_13;
			ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 * L_14 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_14, sizeof(ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_007f:
		{
			String_t* L_16;
			L_16 = ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587((ConfiguredTaskAwaiter_tE975B3CC2ECACB7D8423BF4FFA4D48C13BD189C2 *)(&V_2), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_mC12D339B008AF19FE7D513C8C0A58C17CFF0E587_RuntimeMethod_var);
			V_1 = L_16;
			goto IL_00a2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0089;
		}
		throw e;
	}

CATCH_0089:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_17, L_18, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	} // end catch (depth: 1)

IL_00a2:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		String_t* L_20 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_19, L_20, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CU2DcctorU3Eb__2_0U3Ed_MoveNext_m8EA56BC0C6666D2CC526666D0EB947D7A9EC3C56_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 * _thisAdjusted = reinterpret_cast<U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 *>(__this + _offset);
	U3CU3CU2DcctorU3Eb__2_0U3Ed_MoveNext_m8EA56BC0C6666D2CC526666D0EB947D7A9EC3C56(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ResponseUtils/<>c/<<-cctor>b__2_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CU2DcctorU3Eb__2_0U3Ed_SetStateMachine_m92056E211A3536E8DED485E792F47E3BA1B63728 (U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CU2DcctorU3Eb__2_0U3Ed_SetStateMachine_m92056E211A3536E8DED485E792F47E3BA1B63728_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 * _thisAdjusted = reinterpret_cast<U3CU3CU2DcctorU3Eb__2_0U3Ed_tF4E1F5A4E3C6A6B7E29F6A32C5EA460D779DDF79 *>(__this + _offset);
	U3CU3CU2DcctorU3Eb__2_0U3Ed_SetStateMachine_m92056E211A3536E8DED485E792F47E3BA1B63728(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  L_0 = (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )L_0;
	}
}
