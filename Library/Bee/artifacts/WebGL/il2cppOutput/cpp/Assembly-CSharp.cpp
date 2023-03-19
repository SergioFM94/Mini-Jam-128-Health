#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<ThreadContainer>
struct Action_1_tE9AA238C01F17523FB6B98326EFDA5A0F01A2E74;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// Zenject.ConcreteIdBinderGeneric`1<System.Object>
struct ConcreteIdBinderGeneric_1_t331F0C0730FB73428CD2695E1978E86BD36FC4B6;
// Zenject.ConcreteIdBinderGeneric`1<PauseManager>
struct ConcreteIdBinderGeneric_1_tCB8F89D3B8C37DC7056657A3E498CDC523FF4D70;
// Zenject.ConcreteIdBinderGeneric`1<UnityEngine.Rigidbody2D>
struct ConcreteIdBinderGeneric_1_t35F05F61545AB29B0B195DBD29293F0639FC0183;
// Zenject.ConcreteIdBinderGeneric`1<ThreadedCoroutine>
struct ConcreteIdBinderGeneric_1_tA943D942FA7194F1FE476366F5AA70A13829C206;
// System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.DiContainer/ProviderInfo>>
struct Dictionary_2_t988ECB582CD41C093FD55A374D496E6CF1652D83;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// Zenject.FromBinderGeneric`1<System.Object>
struct FromBinderGeneric_1_tE0BB7DE31737D73BB037D14A93C8BB763A334584;
// Zenject.FromBinderGeneric`1<PauseManager>
struct FromBinderGeneric_1_t5913C6FE76E9CF91F692FCF20C648A12EDC07C72;
// Zenject.FromBinderGeneric`1<UnityEngine.Rigidbody2D>
struct FromBinderGeneric_1_tA987FBC6FD76809214B9F15806557209118C3F79;
// Zenject.FromBinderGeneric`1<ThreadedCoroutine>
struct FromBinderGeneric_1_t678C0403C485887D83C59ADFD0EFC2D175D4C9C8;
// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D;
// System.Func`2<ThreadContainer,System.Boolean>
struct Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<ThreadContainer>
struct IEnumerable_1_t8746DC114274475878094069780A92B5F7C5C9BE;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<ThreadContainer>
struct IList_1_t80192C23E003F78D66108ACE4DE6E4DF8A6E620D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<Zenject.DiContainer>
struct List_1_tBAB5173AA04562C93B884EBAB822FE5471345CE8;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<Zenject.IBindingFinalizer>
struct List_1_t787076ABDCA9B3A4F32FF152B992D2730EE7CE23;
// System.Collections.Generic.List`1<Zenject.ILazy>
struct List_1_t0C3FEBDA4EC2A8ABA78426FBD80DBD8705FC8467;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<ThreadContainer>
struct List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7;
// System.Collections.Generic.Queue`1<Zenject.IBindingFinalizer>
struct Queue_1_t3E14233FCF507E6137F31676BE8CF810E2E1B726;
// System.Collections.Generic.Stack`1<Zenject.DiContainer/LookupId>
struct Stack_1_t36B44E77205D301E7643CF522922A95A66EDA879;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// ThreadContainer[]
struct ThreadContainerU5BU5D_tF377EBF81800E361F86FC1E408E595D5E845B116;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// Zenject.BindFinalizerWrapper
struct BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920;
// Zenject.BindInfo
struct BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Zenject.Context
struct Context_tC1C23E7580DABAD04E4E86549B17439509D41AEC;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// DelegateCurve
struct DelegateCurve_t542B8CE694494B71C750EC544DDF6137E577D57D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Zenject.DiContainer
struct DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D;
// EaseIn2
struct EaseIn2_t818C44A2C6CA0F4F03836FA46C237A84E34C63BC;
// EaseIn3
struct EaseIn3_t734F9E7D350054B5F1C0D60093E071539A25230C;
// EaseIn4
struct EaseIn4_t1EDA361DBB100F9BF63A7D3FA51ED7E2D6FBCB12;
// EaseInOut2
struct EaseInOut2_t8B90FD1AA2D581B3F2922C9BAE0CF76F34D62D38;
// EaseInOut3
struct EaseInOut3_t71E81F49E9EF8A6057092A502A5CB898CBB5F5E8;
// EaseInOut4
struct EaseInOut4_tF19F0460536D5B34140008CDF4861580474BD2D0;
// EaseOut2
struct EaseOut2_t9DBE87878E811D7FBA2DF035D7E55FBA165D5369;
// EaseOut3
struct EaseOut3_t4BE67FC2B9E8EF0E1ADAE99A45D27146A882BC66;
// EaseOut4
struct EaseOut4_t5296B6B3969E0741270249845A6F9FB431DD02D7;
// EasingCurve
struct EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// ExitGame
struct ExitGame_t7535BD4AC5611EBE2045397500E11C4CF600C05F;
// FollowCamera
struct FollowCamera_tBCF5747A23AA21C34BB73AE89565C9674656E203;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// InteractionFixer
struct InteractionFixer_t3BB4E3C4DD867BFEA5F51073C39C4568F8589A0C;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Zenject.LazyInstanceInjector
struct LazyInstanceInjector_t2AA44260100D467072B2694FC38FFFF8C6C646F7;
// Linear
struct Linear_t68F8866348A581549E5FB634524E5C68FB6DE8AC;
// LoadScene
struct LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335;
// LockCamera
struct LockCamera_t3C884CF53B811778B9213FD1B0B03FB397AD6AAF;
// MasterInstaller
struct MasterInstaller_t5795BFCA56FEB95B83CA51E3FF852C0BCE90A582;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Zenject.MonoInstaller
struct MonoInstaller_tF7394A53721F75A3A34C20082903328321552D20;
// Zenject.MonoInstallerBase
struct MonoInstallerBase_tC9E728244D33DC1422D07ED90DBDA2847A6F7E50;
// MoveLava
struct MoveLava_tFD3DCC042A43705FED0937FF88C2D87E24C33B9E;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OnObjectEnable
struct OnObjectEnable_tC9398193BD440A509EE19B52A1277BE720D49347;
// OpenExternalLink
struct OpenExternalLink_t24502CDAAC720CC2F214B2DE78B4A2DB9EFD8ECD;
// PanelSelector
struct PanelSelector_t9F13823F9788A9B82CB8DA65BDE3B886D5F57070;
// PathStack
struct PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193;
// PauseManager
struct PauseManager_t84975A438A2233D672703B683A1E557962911022;
// PauseableSceneInstaller
struct PauseableSceneInstaller_tA55E2402D51711E3B3D44F0DCB20074B77F51750;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerMove
struct PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Zenject.ScopeArgConditionCopyNonLazyBinder
struct ScopeArgConditionCopyNonLazyBinder_t26365631A16C2AD0B91FBA23A1E699B5A695491A;
// Zenject.ScopeConditionCopyNonLazyBinder
struct ScopeConditionCopyNonLazyBinder_t2FCD45E3866BD0B9A6E9B16B61DB36A9F010E9F8;
// Zenject.SingletonMarkRegistry
struct SingletonMarkRegistry_t31E4D8E5D2D3D1DC2D94CE1ECC9903DF5210A4C8;
// Zenject.SingletonProviderCreator
struct SingletonProviderCreator_t3415DFD4C08FF9090E0E34531F37CD93BA6CBA9A;
// SpawnPlataformas
struct SpawnPlataformas_t709E09C173B9875DA9CF5870CB2CA6B4DF020089;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ThreadContainer
struct ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA;
// ThreadedCoroutine
struct ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// ValueAnimator
struct ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// DelayedCallback/<DelayedCoroutine>d__1
struct U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62;
// DelegateCurve/Curve1
struct Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3;
// DelegateCurve/Curve2
struct Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C;
// PathStack/<>c
struct U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097;
// PlayerMove/<gameOverWait>d__20
struct U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585;
// ThreadedCoroutine/<>c
struct U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A;
// ThreadedCoroutine/<Tick>d__7
struct U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A;
// ThreadedCoroutine/WorkFinished
struct WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B;
// ValueAnimator/<AnimateOverTimeCoroutine>d__4
struct U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D;
// ValueAnimator/<AnimateWithRespectCoroutine>d__5
struct U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F;

IL2CPP_EXTERN_C RuntimeClass* Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseIn2_t818C44A2C6CA0F4F03836FA46C237A84E34C63BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseIn3_t734F9E7D350054B5F1C0D60093E071539A25230C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseIn4_t1EDA361DBB100F9BF63A7D3FA51ED7E2D6FBCB12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseInOut2_t8B90FD1AA2D581B3F2922C9BAE0CF76F34D62D38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseInOut3_t71E81F49E9EF8A6057092A502A5CB898CBB5F5E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseInOut4_tF19F0460536D5B34140008CDF4861580474BD2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseOut2_t9DBE87878E811D7FBA2DF035D7E55FBA165D5369_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseOut3_t4BE67FC2B9E8EF0E1ADAE99A45D27146A882BC66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseOut4_t5296B6B3969E0741270249845A6F9FB431DD02D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tF6332B0C3B52183FF22027DA49E27631696E4DDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t80192C23E003F78D66108ACE4DE6E4DF8A6E620D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Linear_t68F8866348A581549E5FB634524E5C68FB6DE8AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Order_t6F95A8CCF7535ACACC4C7ECA7F2F0D87FD6AC185_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1;
IL2CPP_EXTERN_C String_t* _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B;
IL2CPP_EXTERN_C String_t* _stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB;
IL2CPP_EXTERN_C String_t* _stringLiteral23794BA5BEB5096CF6459849981BED8B988ACE04;
IL2CPP_EXTERN_C String_t* _stringLiteral240DE0D1450FA3DAC09DE877C3179143D8C7DF1B;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral4EB7D9A08290F6A0D90BC58A15862A0E1AEBFCF5;
IL2CPP_EXTERN_C String_t* _stringLiteral515D8BE55B12C4E8F039A4845D3D27C3CB9855DA;
IL2CPP_EXTERN_C String_t* _stringLiteral553A3E6838585E84CA469D6BE291AF87C23D0137;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB82229C59AEA983BDAABE95130C049B462E89EA1;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA;
IL2CPP_EXTERN_C String_t* _stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07;
IL2CPP_EXTERN_C String_t* _stringLiteralD9BC21D183699107F1B46D82AF035D78EFF08A31;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBDFB2B26374203D0C93616462149EA24C3D6414;
IL2CPP_EXTERN_C String_t* _stringLiteralFDCE3B5C3BE29A81D3B9E7888FA0BD94D8B4B464;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateCurve_GetEasedValue_m1C025B1BC5D3502D8A6F1C6F8ED54D528CF98416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_Bind_TisPauseManager_t84975A438A2233D672703B683A1E557962911022_mED83524292EBA1F1A382E5254497745DAD1BE3F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_Bind_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m34EFCCFAD55580EC6169E510A90B92FAF0923B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_Bind_TisThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB_m4ECADA52B668DF87ADBD8F6AE3991B0063409A7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisString_t_m498656AA08CF7218D7153CF70BC5E1110D19B7F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisString_t_m79D0DCB46163AF537E1588860EEACEB89E5C46D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_m71A92DF5CACD254B4D5C68C7493FAB555B9EF8B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_m18F9A74BC844E1C2C85114E5FA2DBFC5E2A547A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FromBinderGeneric_1_FromComponentSibling_m8D5C9F4E42FBB1F48C432586FEC88887588E569D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FromBinderGeneric_1_FromInstance_m518450FBF622369D5BD13045C9E38681FBBD93B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FromBinderGeneric_1_FromInstance_mFEC8CB4F9C523F93FBC6B617E0A333DB6293C335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBB7674788CFC386AB29FCBB869C9324704007059_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_ToString_m762DAD85C39B2A0ABBC6B7FD5BE22FF69791BB09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathStack_op_Addition_m258EE9A9AEE7D08DA0E7D1DEB7D9FF275C8E31BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadedCoroutine_ThreadFunction_m6139B275486D7DD655AF43BE4DD62F608415E46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateOverTimeCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m5BB405AEAB3E0CDE3A6A8C7B7B129E9AC96C089D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateWithRespectCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m3DFB71B35CD1F85D23E27E34B7DFC4DFE4AF7856_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedCoroutineU3Ed__1_System_Collections_IEnumerator_Reset_m86D144FD72C3A68BA71886A577F25F1438C20470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTickU3Ed__7_System_Collections_IEnumerator_Reset_m8ADC15C2101D2C8234B40F98C815F59D97BEAA59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFromPathStringU3Eb__8_0_m786D632346883AC63DF7C99325DD259966D0ED55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTickU3Eb__7_0_m107A0E6D59D15582502382C65FEBD27017B96A7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CgameOverWaitU3Ed__20_System_Collections_IEnumerator_Reset_m0B23CF78E18807F9F01AB6F28C5B9703E8ACAFEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2Extensions_AsScalarOf_m839694F62712ACACF24BEA025B0AD66AD627329F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<ThreadContainer>
struct List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ThreadContainerU5BU5D_tF377EBF81800E361F86FC1E408E595D5E845B116* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ThreadContainerU5BU5D_tF377EBF81800E361F86FC1E408E595D5E845B116* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// DelayedCallback
struct DelayedCallback_t466DD44178F205AC44DFDFA7F73EC4E6C3B402E4  : public RuntimeObject
{
};

// Zenject.DiContainer
struct DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.DiContainer/ProviderInfo>> Zenject.DiContainer::_providers
	Dictionary_2_t988ECB582CD41C093FD55A374D496E6CF1652D83* ____providers_0;
	// System.Collections.Generic.List`1<Zenject.DiContainer> Zenject.DiContainer::_parentContainers
	List_1_tBAB5173AA04562C93B884EBAB822FE5471345CE8* ____parentContainers_1;
	// System.Collections.Generic.List`1<Zenject.DiContainer> Zenject.DiContainer::_ancestorContainers
	List_1_tBAB5173AA04562C93B884EBAB822FE5471345CE8* ____ancestorContainers_2;
	// System.Collections.Generic.Stack`1<Zenject.DiContainer/LookupId> Zenject.DiContainer::_resolvesInProgress
	Stack_1_t36B44E77205D301E7643CF522922A95A66EDA879* ____resolvesInProgress_3;
	// Zenject.SingletonProviderCreator Zenject.DiContainer::_singletonProviderCreator
	SingletonProviderCreator_t3415DFD4C08FF9090E0E34531F37CD93BA6CBA9A* ____singletonProviderCreator_4;
	// Zenject.SingletonMarkRegistry Zenject.DiContainer::_singletonMarkRegistry
	SingletonMarkRegistry_t31E4D8E5D2D3D1DC2D94CE1ECC9903DF5210A4C8* ____singletonMarkRegistry_5;
	// Zenject.LazyInstanceInjector Zenject.DiContainer::_lazyInjector
	LazyInstanceInjector_t2AA44260100D467072B2694FC38FFFF8C6C646F7* ____lazyInjector_6;
	// System.Collections.Generic.Queue`1<Zenject.IBindingFinalizer> Zenject.DiContainer::_currentBindings
	Queue_1_t3E14233FCF507E6137F31676BE8CF810E2E1B726* ____currentBindings_7;
	// System.Collections.Generic.List`1<Zenject.IBindingFinalizer> Zenject.DiContainer::_childBindings
	List_1_t787076ABDCA9B3A4F32FF152B992D2730EE7CE23* ____childBindings_8;
	// System.Collections.Generic.List`1<Zenject.ILazy> Zenject.DiContainer::_lateBindingsToValidate
	List_1_t0C3FEBDA4EC2A8ABA78426FBD80DBD8705FC8467* ____lateBindingsToValidate_9;
	// Zenject.Context Zenject.DiContainer::_context
	Context_tC1C23E7580DABAD04E4E86549B17439509D41AEC* ____context_10;
	// System.Boolean Zenject.DiContainer::_isFinalizingBinding
	bool ____isFinalizingBinding_11;
	// System.Boolean Zenject.DiContainer::_isValidating
	bool ____isValidating_12;
	// System.Boolean Zenject.DiContainer::_isInstalling
	bool ____isInstalling_13;
	// System.Boolean Zenject.DiContainer::_hasDisplayedInstallWarning
	bool ____hasDisplayedInstallWarning_14;
	// System.Boolean Zenject.DiContainer::<ShouldCheckForInstallWarning>k__BackingField
	bool ___U3CShouldCheckForInstallWarningU3Ek__BackingField_15;
	// System.Boolean Zenject.DiContainer::<AssertOnNewGameObjects>k__BackingField
	bool ___U3CAssertOnNewGameObjectsU3Ek__BackingField_16;
	// UnityEngine.Transform Zenject.DiContainer::<DefaultParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CDefaultParentU3Ek__BackingField_17;
};

// EasingCurve
struct EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0  : public RuntimeObject
{
};

struct EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields
{
	// EasingCurve EasingCurve::Linear
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___Linear_0;
	// EasingCurve EasingCurve::EaseIn2
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___EaseIn2_1;
	// EasingCurve EasingCurve::EaseOut2
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___EaseOut2_2;
	// EasingCurve EasingCurve::EaseInOut2
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___EaseInOut2_3;
	// EasingCurve EasingCurve::EaseIn3
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___EaseIn3_4;
	// EasingCurve EasingCurve::EaseOut3
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___EaseOut3_5;
	// EasingCurve EasingCurve::EaseInOut3
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___EaseInOut3_6;
	// EasingCurve EasingCurve::EaseIn4
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___EaseIn4_7;
	// EasingCurve EasingCurve::EaseOut4
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___EaseOut4_8;
	// EasingCurve EasingCurve::EaseInOut4
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___EaseInOut4_9;
};

// Zenject.NonLazyBinder
struct NonLazyBinder_t9FD4DEB05CE8E09EE16E5566508D881816228AF0  : public RuntimeObject
{
	// Zenject.BindInfo Zenject.NonLazyBinder::<BindInfo>k__BackingField
	BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* ___U3CBindInfoU3Ek__BackingField_0;
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};

struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
};

// PathStack
struct PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193  : public RuntimeObject
{
	// PathType PathStack::type
	int32_t ___type_0;
	// System.Collections.Generic.IEnumerable`1<System.String> PathStack::tokens
	RuntimeObject* ___tokens_1;
};

// PointService
struct PointService_t9912D3BA48A0AE4E5F54B5A57087E5BC0C7473D1  : public RuntimeObject
{
};

// Rigidbody2DExtensions
struct Rigidbody2DExtensions_t05D17A3AFAE3FB6F3D41B489667D6E3A21586EF6  : public RuntimeObject
{
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Texture2DExtensions
struct Texture2DExtensions_tC6A2A9ED56EC123A8E7B8A4430BCF0D7BE4B0CC1  : public RuntimeObject
{
};

// ThreadContainer
struct ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA  : public RuntimeObject
{
	// System.Int32 ThreadContainer::Id
	int32_t ___Id_0;
	// System.Boolean ThreadContainer::HasFinished
	bool ___HasFinished_1;
	// System.Boolean ThreadContainer::HasError
	bool ___HasError_2;
	// System.Exception ThreadContainer::Error
	Exception_t* ___Error_3;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> ThreadContainer::Results
	RuntimeObject* ___Results_4;
	// System.Boolean ThreadContainer::markedForDeletion
	bool ___markedForDeletion_5;
	// ThreadedCoroutine/WorkFinished ThreadContainer::OnWorkFinished
	WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* ___OnWorkFinished_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Vector2Extensions
struct Vector2Extensions_tE1BF87E5BA8CDEB961D8587A25CF4F707F7FDE5C  : public RuntimeObject
{
};

// Vector3Extensions
struct Vector3Extensions_t94EE54E29B255C1007D37212249CFA6F952C2C26  : public RuntimeObject
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// DelayedCallback/<DelayedCoroutine>d__1
struct U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62  : public RuntimeObject
{
	// System.Int32 DelayedCallback/<DelayedCoroutine>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DelayedCallback/<DelayedCoroutine>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single DelayedCallback/<DelayedCoroutine>d__1::delayMilliseconds
	float ___delayMilliseconds_2;
	// System.Action DelayedCallback/<DelayedCoroutine>d__1::callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback_3;
};

// PathStack/<>c
struct U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097  : public RuntimeObject
{
};

struct U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_StaticFields
{
	// PathStack/<>c PathStack/<>c::<>9
	U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097* ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> PathStack/<>c::<>9__8_0
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__8_0_1;
};

// PlayerMove/<gameOverWait>d__20
struct U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585  : public RuntimeObject
{
	// System.Int32 PlayerMove/<gameOverWait>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerMove/<gameOverWait>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// ThreadedCoroutine/<>c
struct U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A  : public RuntimeObject
{
};

struct U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_StaticFields
{
	// ThreadedCoroutine/<>c ThreadedCoroutine/<>c::<>9
	U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A* ___U3CU3E9_0;
	// System.Func`2<ThreadContainer,System.Boolean> ThreadedCoroutine/<>c::<>9__7_0
	Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE* ___U3CU3E9__7_0_1;
};

// ThreadedCoroutine/<Tick>d__7
struct U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A  : public RuntimeObject
{
	// System.Int32 ThreadedCoroutine/<Tick>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ThreadedCoroutine/<Tick>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ThreadedCoroutine ThreadedCoroutine/<Tick>d__7::<>4__this
	ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* ___U3CU3E4__this_2;
};

// ValueAnimator/<AnimateOverTimeCoroutine>d__4
struct U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D  : public RuntimeObject
{
	// System.Int32 ValueAnimator/<AnimateOverTimeCoroutine>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ValueAnimator/<AnimateOverTimeCoroutine>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single ValueAnimator/<AnimateOverTimeCoroutine>d__4::timeSpanSeconds
	float ___timeSpanSeconds_2;
	// EasingCurve ValueAnimator/<AnimateOverTimeCoroutine>d__4::easingCurve
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___easingCurve_3;
	// System.Single ValueAnimator/<AnimateOverTimeCoroutine>d__4::fromValue
	float ___fromValue_4;
	// System.Single ValueAnimator/<AnimateOverTimeCoroutine>d__4::toValue
	float ___toValue_5;
	// System.Action`1<System.Single> ValueAnimator/<AnimateOverTimeCoroutine>d__4::mutatorFunction
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___mutatorFunction_6;
	// System.Diagnostics.Stopwatch ValueAnimator/<AnimateOverTimeCoroutine>d__4::<stopwatch>5__2
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___U3CstopwatchU3E5__2_7;
	// System.Single ValueAnimator/<AnimateOverTimeCoroutine>d__4::<currentPercentage>5__3
	float ___U3CcurrentPercentageU3E5__3_8;
};

// ValueAnimator/<AnimateWithRespectCoroutine>d__5
struct U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F  : public RuntimeObject
{
	// System.Int32 ValueAnimator/<AnimateWithRespectCoroutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ValueAnimator/<AnimateWithRespectCoroutine>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Func`1<System.Single> ValueAnimator/<AnimateWithRespectCoroutine>d__5::percentageFetcherFunction
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___percentageFetcherFunction_2;
	// EasingCurve ValueAnimator/<AnimateWithRespectCoroutine>d__5::easingCurve
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___easingCurve_3;
	// System.Single ValueAnimator/<AnimateWithRespectCoroutine>d__5::fromValue
	float ___fromValue_4;
	// System.Single ValueAnimator/<AnimateWithRespectCoroutine>d__5::toValue
	float ___toValue_5;
	// System.Action`1<System.Single> ValueAnimator/<AnimateWithRespectCoroutine>d__5::mutatorFunction
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___mutatorFunction_6;
	// System.Single ValueAnimator/<AnimateWithRespectCoroutine>d__5::<currentPercentage>5__2
	float ___U3CcurrentPercentageU3E5__2_7;
};

// System.Nullable`1<System.Char>
struct Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Il2CppChar ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// Zenject.CopyNonLazyBinder
struct CopyNonLazyBinder_tFC46E0570F4E71B325BCBF97763A2804EB9C4D1E  : public NonLazyBinder_t9FD4DEB05CE8E09EE16E5566508D881816228AF0
{
};

// DelegateCurve
struct DelegateCurve_t542B8CE694494B71C750EC544DDF6137E577D57D  : public EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0
{
	// DelegateCurve/Order DelegateCurve::order
	int32_t ___order_10;
	// EasingCurve DelegateCurve::curveA
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA_11;
	// EasingCurve DelegateCurve::curveB
	EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB_12;
	// DelegateCurve/Curve1 DelegateCurve::curveFunc1
	Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* ___curveFunc1_13;
	// DelegateCurve/Curve2 DelegateCurve::curveFunc2
	Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* ___curveFunc2_14;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// EaseIn2
struct EaseIn2_t818C44A2C6CA0F4F03836FA46C237A84E34C63BC  : public EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0
{
};

// EaseIn3
struct EaseIn3_t734F9E7D350054B5F1C0D60093E071539A25230C  : public EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0
{
};

// EaseIn4
struct EaseIn4_t1EDA361DBB100F9BF63A7D3FA51ED7E2D6FBCB12  : public EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0
{
};

// EaseInOut2
struct EaseInOut2_t8B90FD1AA2D581B3F2922C9BAE0CF76F34D62D38  : public EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0
{
};

// EaseInOut3
struct EaseInOut3_t71E81F49E9EF8A6057092A502A5CB898CBB5F5E8  : public EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0
{
};

// EaseInOut4
struct EaseInOut4_tF19F0460536D5B34140008CDF4861580474BD2D0  : public EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0
{
};

// EaseOut2
struct EaseOut2_t9DBE87878E811D7FBA2DF035D7E55FBA165D5369  : public EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0
{
};

// EaseOut3
struct EaseOut3_t4BE67FC2B9E8EF0E1ADAE99A45D27146A882BC66  : public EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0
{
};

// EaseOut4
struct EaseOut4_t5296B6B3969E0741270249845A6F9FB431DD02D7  : public EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// Linear
struct Linear_t68F8866348A581549E5FB634524E5C68FB6DE8AC  : public EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// ThreadedCoroutine/ThreadFunctionArgs
struct ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF 
{
	// System.Action`1<ThreadContainer> ThreadedCoroutine/ThreadFunctionArgs::work
	Action_1_tE9AA238C01F17523FB6B98326EFDA5A0F01A2E74* ___work_0;
	// ThreadContainer ThreadedCoroutine/ThreadFunctionArgs::container
	ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___container_1;
};
// Native definition for P/Invoke marshalling of ThreadedCoroutine/ThreadFunctionArgs
struct ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshaled_pinvoke
{
	Il2CppMethodPointer ___work_0;
	ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___container_1;
};
// Native definition for COM marshalling of ThreadedCoroutine/ThreadFunctionArgs
struct ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshaled_com
{
	Il2CppMethodPointer ___work_0;
	ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___container_1;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Vector2>
struct Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_1;
};

// Zenject.ConditionCopyNonLazyBinder
struct ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C  : public CopyNonLazyBinder_tFC46E0570F4E71B325BCBF97763A2804EB9C4D1E
{
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// DrawDebug
struct DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8  : public RuntimeObject
{
};

struct DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_StaticFields
{
	// System.Single DrawDebug::defaultIconSize
	float ___defaultIconSize_0;
	// UnityEngine.Color DrawDebug::defaultIconColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___defaultIconColor_1;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// Zenject.ArgConditionCopyNonLazyBinder
struct ArgConditionCopyNonLazyBinder_t02E8730F99239DEE447A998767E1AA93D54CE726  : public ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Zenject.ScopeConditionCopyNonLazyBinder
struct ScopeConditionCopyNonLazyBinder_t2FCD45E3866BD0B9A6E9B16B61DB36A9F010E9F8  : public ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`1<ThreadContainer>
struct Action_1_tE9AA238C01F17523FB6B98326EFDA5A0F01A2E74  : public MulticastDelegate_t
{
};

// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D  : public MulticastDelegate_t
{
};

// System.Func`2<ThreadContainer,System.Boolean>
struct Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Zenject.ScopeArgConditionCopyNonLazyBinder
struct ScopeArgConditionCopyNonLazyBinder_t26365631A16C2AD0B91FBA23A1E699B5A695491A  : public ArgConditionCopyNonLazyBinder_t02E8730F99239DEE447A998767E1AA93D54CE726
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// DelegateCurve/Curve1
struct Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3  : public MulticastDelegate_t
{
};

// DelegateCurve/Curve2
struct Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C  : public MulticastDelegate_t
{
};

// ThreadedCoroutine/WorkFinished
struct WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Zenject.FromBinder
struct FromBinder_t721B09A903F3C6C11EEB6D3611D576D04B70BC7E  : public ScopeArgConditionCopyNonLazyBinder_t26365631A16C2AD0B91FBA23A1E699B5A695491A
{
	// Zenject.BindFinalizerWrapper Zenject.FromBinder::<FinalizerWrapper>k__BackingField
	BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920* ___U3CFinalizerWrapperU3Ek__BackingField_1;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Zenject.FromBinderGeneric`1<PauseManager>
struct FromBinderGeneric_1_t5913C6FE76E9CF91F692FCF20C648A12EDC07C72  : public FromBinder_t721B09A903F3C6C11EEB6D3611D576D04B70BC7E
{
};

// Zenject.FromBinderGeneric`1<UnityEngine.Rigidbody2D>
struct FromBinderGeneric_1_tA987FBC6FD76809214B9F15806557209118C3F79  : public FromBinder_t721B09A903F3C6C11EEB6D3611D576D04B70BC7E
{
};

// Zenject.FromBinderGeneric`1<ThreadedCoroutine>
struct FromBinderGeneric_1_t678C0403C485887D83C59ADFD0EFC2D175D4C9C8  : public FromBinder_t721B09A903F3C6C11EEB6D3611D576D04B70BC7E
{
};

// ExitGame
struct ExitGame_t7535BD4AC5611EBE2045397500E11C4CF600C05F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FollowCamera
struct FollowCamera_tBCF5747A23AA21C34BB73AE89565C9674656E203  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FollowCamera::jugador
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jugador_4;
	// UnityEngine.GameObject FollowCamera::camara
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___camara_5;
	// System.Single FollowCamera::posicionCamara
	float ___posicionCamara_6;
	// System.Single FollowCamera::posicionY
	float ___posicionY_7;
};

// InteractionFixer
struct InteractionFixer_t3BB4E3C4DD867BFEA5F51073C39C4568F8589A0C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 InteractionFixer::oldMousePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldMousePosition_4;
};

// LoadScene
struct LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LockCamera
struct LockCamera_t3C884CF53B811778B9213FD1B0B03FB397AD6AAF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Zenject.MonoInstallerBase
struct MonoInstallerBase_tC9E728244D33DC1422D07ED90DBDA2847A6F7E50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zenject.DiContainer Zenject.MonoInstallerBase::_container
	DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ____container_4;
};

// MoveLava
struct MoveLava_tFD3DCC042A43705FED0937FF88C2D87E24C33B9E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 MoveLava::tempPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempPos_4;
	// System.Single MoveLava::velocidad
	float ___velocidad_5;
	// UnityEngine.GameObject MoveLava::jugador
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jugador_6;
	// System.Boolean MoveLava::subirNivel
	bool ___subirNivel_7;
};

// OnObjectEnable
struct OnObjectEnable_tC9398193BD440A509EE19B52A1277BE720D49347  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent OnObjectEnable::onEnable
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onEnable_4;
};

// OpenExternalLink
struct OpenExternalLink_t24502CDAAC720CC2F214B2DE78B4A2DB9EFD8ECD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PanelSelector
struct PanelSelector_t9F13823F9788A9B82CB8DA65BDE3B886D5F57070  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] PanelSelector::panels
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___panels_4;
};

// PauseManager
struct PauseManager_t84975A438A2233D672703B683A1E557962911022  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PauseManager::pauseMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenu_4;
	// System.Boolean PauseManager::isGamePaused
	bool ___isGamePaused_5;
};

// PlayerMove
struct PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D PlayerMove::rb2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb2D_4;
	// System.Single PlayerMove::movimientoHorizontal
	float ___movimientoHorizontal_5;
	// System.Single PlayerMove::velocidadDeMovimiento
	float ___velocidadDeMovimiento_6;
	// System.Single PlayerMove::suavizadoDeMovimiento
	float ___suavizadoDeMovimiento_7;
	// UnityEngine.Vector3 PlayerMove::velocidad
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocidad_8;
	// System.Boolean PlayerMove::mirandoDerecha
	bool ___mirandoDerecha_9;
	// System.Single PlayerMove::fuerzaSalto
	float ___fuerzaSalto_10;
	// UnityEngine.LayerMask PlayerMove::queEsSuelo
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___queEsSuelo_11;
	// UnityEngine.Transform PlayerMove::controladorSuelo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___controladorSuelo_12;
	// UnityEngine.Vector3 PlayerMove::dimensionesCaja
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dimensionesCaja_13;
	// System.Boolean PlayerMove::enSuelo
	bool ___enSuelo_14;
	// System.Boolean PlayerMove::salto
	bool ___salto_15;
	// UnityEngine.Animator PlayerMove::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_16;
	// System.Boolean PlayerMove::vivo
	bool ___vivo_17;
};

// SpawnPlataformas
struct SpawnPlataformas_t709E09C173B9875DA9CF5870CB2CA6B4DF020089  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] SpawnPlataformas::plataformas
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___plataformas_4;
	// System.Single SpawnPlataformas::timeSpawn
	float ___timeSpawn_5;
	// System.Single SpawnPlataformas::repeatSpawn
	float ___repeatSpawn_6;
};

// ThreadedCoroutine
struct ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ThreadedCoroutine::tickIntervalSeconds
	float ___tickIntervalSeconds_4;
	// UnityEngine.Coroutine ThreadedCoroutine::coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___coroutine_5;
	// System.Collections.Generic.IList`1<ThreadContainer> ThreadedCoroutine::threadContainers
	RuntimeObject* ___threadContainers_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ValueAnimator
struct ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Zenject.ConcreteBinderGeneric`1<PauseManager>
struct ConcreteBinderGeneric_1_tF3AAAC1BCD1CD409163B03C8CB032788D09E4165  : public FromBinderGeneric_1_t5913C6FE76E9CF91F692FCF20C648A12EDC07C72
{
};

// Zenject.ConcreteBinderGeneric`1<UnityEngine.Rigidbody2D>
struct ConcreteBinderGeneric_1_t2DF2FE538B6DE1AC92ED0F7B6AB0EE40BEBE579F  : public FromBinderGeneric_1_tA987FBC6FD76809214B9F15806557209118C3F79
{
};

// Zenject.ConcreteBinderGeneric`1<ThreadedCoroutine>
struct ConcreteBinderGeneric_1_tB8F4AA0D4DBA8D9E0DF5C2DE539C96A703AAA1CD  : public FromBinderGeneric_1_t678C0403C485887D83C59ADFD0EFC2D175D4C9C8
{
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// Zenject.MonoInstaller
struct MonoInstaller_tF7394A53721F75A3A34C20082903328321552D20  : public MonoInstallerBase_tC9E728244D33DC1422D07ED90DBDA2847A6F7E50
{
};

// Zenject.ConcreteIdBinderGeneric`1<PauseManager>
struct ConcreteIdBinderGeneric_1_tCB8F89D3B8C37DC7056657A3E498CDC523FF4D70  : public ConcreteBinderGeneric_1_tF3AAAC1BCD1CD409163B03C8CB032788D09E4165
{
};

// Zenject.ConcreteIdBinderGeneric`1<UnityEngine.Rigidbody2D>
struct ConcreteIdBinderGeneric_1_t35F05F61545AB29B0B195DBD29293F0639FC0183  : public ConcreteBinderGeneric_1_t2DF2FE538B6DE1AC92ED0F7B6AB0EE40BEBE579F
{
};

// Zenject.ConcreteIdBinderGeneric`1<ThreadedCoroutine>
struct ConcreteIdBinderGeneric_1_tA943D942FA7194F1FE476366F5AA70A13829C206  : public ConcreteBinderGeneric_1_tB8F4AA0D4DBA8D9E0DF5C2DE539C96A703AAA1CD
{
};

// MasterInstaller
struct MasterInstaller_t5795BFCA56FEB95B83CA51E3FF852C0BCE90A582  : public MonoInstaller_tF7394A53721F75A3A34C20082903328321552D20
{
	// ThreadedCoroutine MasterInstaller::singleton_ThreadedCoroutine
	ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* ___singleton_ThreadedCoroutine_5;
};

// PauseableSceneInstaller
struct PauseableSceneInstaller_tA55E2402D51711E3B3D44F0DCB20074B77F51750  : public MonoInstaller_tF7394A53721F75A3A34C20082903328321552D20
{
	// PauseManager PauseableSceneInstaller::singleton_PauseManager
	PauseManager_t84975A438A2233D672703B683A1E557962911022* ___singleton_PauseManager_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* m_Items[1];

	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// Zenject.ConcreteIdBinderGeneric`1<TContract> Zenject.DiContainer::Bind<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConcreteIdBinderGeneric_1_t331F0C0730FB73428CD2695E1978E86BD36FC4B6* DiContainer_Bind_TisRuntimeObject_m371026F62BD3C435FF24E3C8694EC57B25AA5EC9_gshared (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* __this, const RuntimeMethod* method) ;
// Zenject.ScopeConditionCopyNonLazyBinder Zenject.FromBinderGeneric`1<System.Object>::FromInstance(TContract)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScopeConditionCopyNonLazyBinder_t2FCD45E3866BD0B9A6E9B16B61DB36A9F010E9F8* FromBinderGeneric_1_FromInstance_m584A27E77E77DBB80630BF80F9DB89A4A4796D13_gshared (FromBinderGeneric_1_tE0BB7DE31737D73BB037D14A93C8BB763A334584* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// Zenject.ScopeArgConditionCopyNonLazyBinder Zenject.FromBinderGeneric`1<System.Object>::FromComponentSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScopeArgConditionCopyNonLazyBinder_t26365631A16C2AD0B91FBA23A1E699B5A695491A* FromBinderGeneric_1_FromComponentSibling_m56ED92271A9A4EC109A6DD3AA3FD2B0D0460D995_gshared (FromBinderGeneric_1_tE0BB7DE31737D73BB037D14A93C8BB763A334584* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Single>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Color>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_gshared (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Char>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_gshared_inline (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Char>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE_gshared (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Char>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_gshared (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method) ;
// System.String System.Nullable`1<System.Char>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_m762DAD85C39B2A0ABBC6B7FD5BE22FF69791BB09_gshared (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisRuntimeObject_mF7B0A079765A37716D52A158EBD61E57C390CBC9_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector2>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void MoveLava::AumentarVelocidad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveLava_AumentarVelocidad_mB1789BADFEF8E195CF152B4D782DDC86592A7C9C (MoveLava_tFD3DCC042A43705FED0937FF88C2D87E24C33B9E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m504C6CF9A40BD840964AD0495266CD003676289E (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void PlayerMove::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Pause_m3BDE842C891E89D2693147A89966FDE7DFB617C0 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapBox(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Physics2D_OverlapBox_mF4F43BA71C46C138C460ACFA8EB479DE73A5E4A7 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size1, float ___angle2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void PlayerMove::Mover(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Mover_m502590E7ABE3A9BE77E7477103886815C8516F53 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, float ___mover0, bool ___saltar1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void PlayerMove::Girar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Girar_m6053D8B763109058852C7993BDC8499830F92406 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerMove::gameOverWait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMove_gameOverWait_m5646E387605A28FB3383498F4E2E6FFC42469D7C (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void PlayerMove/<gameOverWait>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgameOverWaitU3Ed__20__ctor_m38FF15077FF175B9309307A25C0966CF52F0E209 (U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// Zenject.DiContainer Zenject.MonoInstallerBase::get_Container()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* MonoInstallerBase_get_Container_m4D8FF2EC36D5FD912A9423C164EBF05BE88662B8_inline (MonoInstallerBase_tC9E728244D33DC1422D07ED90DBDA2847A6F7E50* __this, const RuntimeMethod* method) ;
// Zenject.ConcreteIdBinderGeneric`1<TContract> Zenject.DiContainer::Bind<ThreadedCoroutine>()
inline ConcreteIdBinderGeneric_1_tA943D942FA7194F1FE476366F5AA70A13829C206* DiContainer_Bind_TisThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB_m4ECADA52B668DF87ADBD8F6AE3991B0063409A7D (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* __this, const RuntimeMethod* method)
{
	return ((  ConcreteIdBinderGeneric_1_tA943D942FA7194F1FE476366F5AA70A13829C206* (*) (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D*, const RuntimeMethod*))DiContainer_Bind_TisRuntimeObject_m371026F62BD3C435FF24E3C8694EC57B25AA5EC9_gshared)(__this, method);
}
// Zenject.ScopeConditionCopyNonLazyBinder Zenject.FromBinderGeneric`1<ThreadedCoroutine>::FromInstance(TContract)
inline ScopeConditionCopyNonLazyBinder_t2FCD45E3866BD0B9A6E9B16B61DB36A9F010E9F8* FromBinderGeneric_1_FromInstance_mFEC8CB4F9C523F93FBC6B617E0A333DB6293C335 (FromBinderGeneric_1_t678C0403C485887D83C59ADFD0EFC2D175D4C9C8* __this, ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* ___instance0, const RuntimeMethod* method)
{
	return ((  ScopeConditionCopyNonLazyBinder_t2FCD45E3866BD0B9A6E9B16B61DB36A9F010E9F8* (*) (FromBinderGeneric_1_t678C0403C485887D83C59ADFD0EFC2D175D4C9C8*, ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB*, const RuntimeMethod*))FromBinderGeneric_1_FromInstance_m584A27E77E77DBB80630BF80F9DB89A4A4796D13_gshared)(__this, ___instance0, method);
}
// Zenject.ConcreteIdBinderGeneric`1<TContract> Zenject.DiContainer::Bind<UnityEngine.Rigidbody2D>()
inline ConcreteIdBinderGeneric_1_t35F05F61545AB29B0B195DBD29293F0639FC0183* DiContainer_Bind_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m34EFCCFAD55580EC6169E510A90B92FAF0923B25 (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* __this, const RuntimeMethod* method)
{
	return ((  ConcreteIdBinderGeneric_1_t35F05F61545AB29B0B195DBD29293F0639FC0183* (*) (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D*, const RuntimeMethod*))DiContainer_Bind_TisRuntimeObject_m371026F62BD3C435FF24E3C8694EC57B25AA5EC9_gshared)(__this, method);
}
// Zenject.ScopeArgConditionCopyNonLazyBinder Zenject.FromBinderGeneric`1<UnityEngine.Rigidbody2D>::FromComponentSibling()
inline ScopeArgConditionCopyNonLazyBinder_t26365631A16C2AD0B91FBA23A1E699B5A695491A* FromBinderGeneric_1_FromComponentSibling_m8D5C9F4E42FBB1F48C432586FEC88887588E569D (FromBinderGeneric_1_tA987FBC6FD76809214B9F15806557209118C3F79* __this, const RuntimeMethod* method)
{
	return ((  ScopeArgConditionCopyNonLazyBinder_t26365631A16C2AD0B91FBA23A1E699B5A695491A* (*) (FromBinderGeneric_1_tA987FBC6FD76809214B9F15806557209118C3F79*, const RuntimeMethod*))FromBinderGeneric_1_FromComponentSibling_m56ED92271A9A4EC109A6DD3AA3FD2B0D0460D995_gshared)(__this, method);
}
// System.Void Zenject.MonoInstaller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoInstaller__ctor_mC458E797AFAEAA0F9D47DA8F8B77C02811B72FD7 (MonoInstaller_tF7394A53721F75A3A34C20082903328321552D20* __this, const RuntimeMethod* method) ;
// Zenject.ConcreteIdBinderGeneric`1<TContract> Zenject.DiContainer::Bind<PauseManager>()
inline ConcreteIdBinderGeneric_1_tCB8F89D3B8C37DC7056657A3E498CDC523FF4D70* DiContainer_Bind_TisPauseManager_t84975A438A2233D672703B683A1E557962911022_mED83524292EBA1F1A382E5254497745DAD1BE3F3 (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* __this, const RuntimeMethod* method)
{
	return ((  ConcreteIdBinderGeneric_1_tCB8F89D3B8C37DC7056657A3E498CDC523FF4D70* (*) (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D*, const RuntimeMethod*))DiContainer_Bind_TisRuntimeObject_m371026F62BD3C435FF24E3C8694EC57B25AA5EC9_gshared)(__this, method);
}
// Zenject.ScopeConditionCopyNonLazyBinder Zenject.FromBinderGeneric`1<PauseManager>::FromInstance(TContract)
inline ScopeConditionCopyNonLazyBinder_t2FCD45E3866BD0B9A6E9B16B61DB36A9F010E9F8* FromBinderGeneric_1_FromInstance_m518450FBF622369D5BD13045C9E38681FBBD93B4 (FromBinderGeneric_1_t5913C6FE76E9CF91F692FCF20C648A12EDC07C72* __this, PauseManager_t84975A438A2233D672703B683A1E557962911022* ___instance0, const RuntimeMethod* method)
{
	return ((  ScopeConditionCopyNonLazyBinder_t2FCD45E3866BD0B9A6E9B16B61DB36A9F010E9F8* (*) (FromBinderGeneric_1_t5913C6FE76E9CF91F692FCF20C648A12EDC07C72*, PauseManager_t84975A438A2233D672703B683A1E557962911022*, const RuntimeMethod*))FromBinderGeneric_1_FromInstance_m584A27E77E77DBB80630BF80F9DB89A4A4796D13_gshared)(__this, ___instance0, method);
}
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean InteractionFixer::IsSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionFixer_IsSelected_mABDB4E71A427E86F99E03166FDC551005492DDAA (InteractionFixer_t3BB4E3C4DD867BFEA5F51073C39C4568F8589A0C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___buttonName0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_firstSelectedGameObject_m15FB056EE7A99D8DD5891D40A6E3EF18719F0553_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void PauseManager::SetGamePaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseManager_SetGamePaused_m97BFA3EB4CB932F768B92CD7AB8EBE4842256FBD (PauseManager_t84975A438A2233D672703B683A1E557962911022* __this, bool ___isPaused0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ThreadContainer>::.ctor()
inline void List_1__ctor_mBB7674788CFC386AB29FCBB869C9324704007059 (List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.IEnumerator ThreadedCoroutine::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ThreadedCoroutine_Tick_m1B9F3035134507A59EE397CA4B14A5C3E9ECBFFE (ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* __this, const RuntimeMethod* method) ;
// System.Void ThreadedCoroutine::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadedCoroutine_Stop_mD2EFA9738302F8D91F10A09F7A224A73554B0D48 (ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* __this, const RuntimeMethod* method) ;
// System.Void ThreadContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContainer__ctor_m46991E519680777D435ACD0BECE55EFB7DB74A5A (ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_mE534D14C47699D1D37288AE0710B19FC7EC02BAB (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___callBack0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// System.Void ThreadedCoroutine/<Tick>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTickU3Ed__7__ctor_mAB9A9F7CA1049B6ACF83FE8AA49C4A2A9F0C9E34 (U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Action`1<ThreadContainer>::Invoke(T)
inline void Action_1_Invoke_m0A4DCF5FA782BC7A3211CCC87F21721F2281B3B9_inline (Action_1_tE9AA238C01F17523FB6B98326EFDA5A0F01A2E74* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE9AA238C01F17523FB6B98326EFDA5A0F01A2E74*, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// System.Void ThreadedCoroutine/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m39DF028CD8D9E3B132C138D73B6942E7DC5631E2 (U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A* __this, const RuntimeMethod* method) ;
// System.Boolean ThreadContainer::get_MarkedForDeletion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ThreadContainer_get_MarkedForDeletion_mF32B657F2773F25A5B24F0E57A80101A181EE9BF_inline (ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* __this, const RuntimeMethod* method) ;
// System.Void ThreadedCoroutine/WorkFinished::Invoke(ThreadContainer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_inline (WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, const RuntimeMethod* method) ;
// System.Void ThreadContainer::MarkForDeletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContainer_MarkForDeletion_m94D285FA3843E78B1B46EFD190A4868F785547AB (ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Func`2<ThreadContainer,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD4B23D42B1BF0F4E2273FDAE8FC1948C1CDCDD75 (Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<ThreadContainer>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_m18F9A74BC844E1C2C85114E5FA2DBFC5E2A547A2 (RuntimeObject* ___source0, Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<ThreadContainer>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7* Enumerable_ToList_TisThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_m71A92DF5CACD254B4D5C68C7493FAB555B9EF8B3 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.IEnumerator DelayedCallback::DelayedCoroutine(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelayedCallback_DelayedCoroutine_m65930BEE7E885BABE8DE830C3D3B70B6157DC9B9 (float ___delayMilliseconds0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, const RuntimeMethod* method) ;
// System.Void DelayedCallback/<DelayedCoroutine>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__1__ctor_m9029C6C9D2076D9A1C629C8D8D3F4A3747B95480 (U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void EasingCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* __this, const RuntimeMethod* method) ;
// System.Single DelegateCurve/Curve1::Invoke(EasingCurve,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_inline (Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method) ;
// System.Single DelegateCurve/Curve2::Invoke(EasingCurve,EasingCurve,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_inline (Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void Linear::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Linear__ctor_m3B9FA7CE8DFFEF9C6BB0EC234C0F68200DBF5F2B (Linear_t68F8866348A581549E5FB634524E5C68FB6DE8AC* __this, const RuntimeMethod* method) ;
// System.Void EaseIn2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseIn2__ctor_mC30C6F38795B2F3A3A06265FAB1B18BAAD3BF5E0 (EaseIn2_t818C44A2C6CA0F4F03836FA46C237A84E34C63BC* __this, const RuntimeMethod* method) ;
// System.Void EaseOut2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseOut2__ctor_mDADD412C0FC6EB1443C9479688FDFE6B25C3A227 (EaseOut2_t9DBE87878E811D7FBA2DF035D7E55FBA165D5369* __this, const RuntimeMethod* method) ;
// System.Void EaseInOut2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseInOut2__ctor_mE5F2E02F196262A9A91D1B998B330385FEB34D99 (EaseInOut2_t8B90FD1AA2D581B3F2922C9BAE0CF76F34D62D38* __this, const RuntimeMethod* method) ;
// System.Void EaseIn3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseIn3__ctor_mAD5DBC31AAC954DED305F8CC7754537163998BF3 (EaseIn3_t734F9E7D350054B5F1C0D60093E071539A25230C* __this, const RuntimeMethod* method) ;
// System.Void EaseOut3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseOut3__ctor_m68EC02C3DB334009A0C6198BBE05FA87A24F67F7 (EaseOut3_t4BE67FC2B9E8EF0E1ADAE99A45D27146A882BC66* __this, const RuntimeMethod* method) ;
// System.Void EaseInOut3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseInOut3__ctor_m0C3E8C50BEBAF623231E0B4D0F83EDCB11D201F4 (EaseInOut3_t71E81F49E9EF8A6057092A502A5CB898CBB5F5E8* __this, const RuntimeMethod* method) ;
// System.Void EaseIn4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseIn4__ctor_m25E009031930EE623CDBB488678C1A37A6EE0421 (EaseIn4_t1EDA361DBB100F9BF63A7D3FA51ED7E2D6FBCB12* __this, const RuntimeMethod* method) ;
// System.Void EaseOut4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseOut4__ctor_m4DFB9B1BBB15EC43C5069E6BA46E21D4578949A9 (EaseOut4_t5296B6B3969E0741270249845A6F9FB431DD02D7* __this, const RuntimeMethod* method) ;
// System.Void EaseInOut4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseInOut4__ctor_m445058FDA08CE8A734645EBE26EE7918EC530FE6 (EaseInOut4_tF19F0460536D5B34140008CDF4861580474BD2D0* __this, const RuntimeMethod* method) ;
// System.Void ValueAnimator::Animate(System.Single,System.Single,System.Single,System.Action`1<System.Single>,EasingCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueAnimator_Animate_m1964D69FB7B07306703A2E94C8CE24604A9975C7 (ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B* __this, float ___fromValue0, float ___toValue1, float ___timeSpanSeconds2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___mutatorFunction3, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___easingCurve4, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ValueAnimator::AnimateOverTimeCoroutine(System.Single,System.Single,System.Single,System.Action`1<System.Single>,EasingCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueAnimator_AnimateOverTimeCoroutine_m96D7C3510D5D6A780C8E956F59D937DCFD87E6DD (ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B* __this, float ___fromValue0, float ___toValue1, float ___timeSpanSeconds2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___mutatorFunction3, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___easingCurve4, const RuntimeMethod* method) ;
// System.Void ValueAnimator::Animate(System.Single,System.Single,System.Func`1<System.Single>,System.Action`1<System.Single>,EasingCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueAnimator_Animate_m297B932C26C12895CC3DCBD68F62444905F82960 (ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B* __this, float ___fromValue0, float ___toValue1, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___percentageFetcherFunction2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___mutatorFunction3, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___easingCurve4, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ValueAnimator::AnimateWithRespectCoroutine(System.Single,System.Single,System.Func`1<System.Single>,System.Action`1<System.Single>,EasingCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueAnimator_AnimateWithRespectCoroutine_m291A4402081F7FEDE15BE41ABB0016D8DB8D3242 (ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B* __this, float ___fromValue0, float ___toValue1, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___percentageFetcherFunction2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___mutatorFunction3, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___easingCurve4, const RuntimeMethod* method) ;
// System.Void ValueAnimator/<AnimateOverTimeCoroutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateOverTimeCoroutineU3Ed__4__ctor_m2409D11ED81CB3CD79A6385286AD466BC8A341DD (U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ValueAnimator/<AnimateWithRespectCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateWithRespectCoroutineU3Ed__5__ctor_m688815C97F2565851B9BB8411544B82446DB3294 (U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Single EasingCurve::Apply(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingCurve_Apply_mBE44C31AECC613C499C28B16A1593EDA844F5C4A (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* __this, float ___minValue0, float ___maxValue1, float ___percentage2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___obj0, method);
}
// TResult System.Func`1<System.Single>::Invoke()
inline float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, const RuntimeMethod*))Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline)(__this, method);
}
// System.Void DrawDebug::Lines(System.Nullable`1<UnityEngine.Color>,UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDebug_Lines_mB51D609740B61294DA87F6670CC975F744D391EF (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___lineColor0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___lines1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
inline bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Color>::get_Value()
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) ;
// System.Void DrawDebug::Points(System.Single,UnityEngine.Color,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDebug_Points_mB1E98EBCEFBDCC4AB2E5FD90E3495B82C1C5E46C (float ___iconSize0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___iconColor1, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rigidbody2D::get_attachedColliderCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rigidbody2D_get_attachedColliderCount_m3CA3496C4A5740059D36AEB2B64455778E03898C (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rigidbody2D::GetAttachedColliders(UnityEngine.Collider2D[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rigidbody2D_GetAttachedColliders_m8BD4BF172EE5A599BF0E7403AA3D22BCA962717A (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* ___results0, const RuntimeMethod* method) ;
// UnityEngine.Collider2D[] Rigidbody2DExtensions::GetAllColliders(UnityEngine.Rigidbody2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* Rigidbody2DExtensions_GetAllColliders_mCB73A25462B2E73AACDFE41425BBD62431221BE7 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___self0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics2D::IgnoreCollision(UnityEngine.Collider2D,UnityEngine.Collider2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_IgnoreCollision_mA05835421D23AACF69E76082124F4F983B9E2BDD (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider10, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider21, bool ___ignore2, const RuntimeMethod* method) ;
// System.Void Texture2DExtensions::FillRaw(UnityEngine.Texture2D,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DExtensions_FillRaw_m0A12AE57054EFA90786B2921A8026111AD449F85 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___self0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisString_t_m498656AA08CF7218D7153CF70BC5E1110D19B7F0 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared)(___source0, method);
}
// System.Boolean System.Nullable`1<System.Char>::get_HasValue()
inline bool Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_inline (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1*, const RuntimeMethod*))Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Char>::.ctor(T)
inline void Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1*, Il2CppChar, const RuntimeMethod*))Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.Char>::get_Value()
inline Il2CppChar Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6 (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1*, const RuntimeMethod*))Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_gshared)(__this, method);
}
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184 (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A (RuntimeObject* ___source0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Nullable`1<System.Char>::ToString()
inline String_t* Nullable_1_ToString_m762DAD85C39B2A0ABBC6B7FD5BE22FF69791BB09 (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1*, const RuntimeMethod*))Nullable_1_ToString_m762DAD85C39B2A0ABBC6B7FD5BE22FF69791BB09_gshared)(__this, method);
}
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m66D13054C7992322810B0CFC6B46AF11A927C9AA (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Void PathStack::.ctor(PathType,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathStack__ctor_mA9331036F3D4CD07846CD31A394884460C447418 (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, int32_t ___type0, RuntimeObject* ___initialPath1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Reverse_TisString_t_m79D0DCB46163AF537E1588860EEACEB89E5C46D6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisRuntimeObject_mF7B0A079765A37716D52A158EBD61E57C390CBC9_gshared)(___source0, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared)(___source0, ___count1, method);
}
// TSource System.Linq.Enumerable::Last<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline String_t* Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared)(___source0, method);
}
// System.Int32 PathStack::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PathStack_get_Length_m0F09469E1D6CA048D79D508D35A75F47B5B43B9D (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// PathStack PathStack::Push(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* PathStack_Push_m1630D088F87BC8C1DECB2E183C9CCC777207956B (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___newTokens0, const RuntimeMethod* method) ;
// System.Void PathStack/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mABEE1A84856BC4EA732243A0133C616F933A0827 (U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Random::get_insideUnitCircle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Random_get_insideUnitCircle_mB2FE9BAA7DDF7FED2AA53EA4667F864747E20DA2 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 PointService::RandomPoint(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointService_RandomPoint_mA2B30B32894F7AA0D827EF95E8CA638B1F09FE02 (float ___minX0, float ___minY1, float ___maxX2, float ___maxY3, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(T)
inline void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<UnityEngine.Vector2>::get_Value()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared)(__this, method);
}
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapPoint(UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Physics2D_OverlapPoint_mCCA9CD3A57E00F9673E1B93B16A3CEB0D46147D1 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, int32_t ___layerMask1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
inline bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 PointService::RandomPointInRadius(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointService_RandomPointInRadius_mAF59C50C32E8E3491A9B8B17373209B032029414 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, float ___radius1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_m5BF2A59AAEE0B488FB3ECD1D3AF3537FD7789E7F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF (float ___H0, float ___S1, float ___V2, bool ___hdr3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FollowCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCamera_Start_m6A939FEE19956FCB5D04C644E25F2C1E16451EDF (FollowCamera_tBCF5747A23AA21C34BB73AE89565C9674656E203* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FollowCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCamera_Update_m7F27B438BF442E57A4634CC05DCDCF073BA762BA (FollowCamera_tBCF5747A23AA21C34BB73AE89565C9674656E203* __this, const RuntimeMethod* method) 
{
	{
		// posicionY = jugador.transform.position.y;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___jugador_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___y_3;
		__this->___posicionY_7 = L_3;
		// posicionCamara = posicionY;
		float L_4 = __this->___posicionY_7;
		__this->___posicionCamara_6 = L_4;
		// }
		return;
	}
}
// System.Void FollowCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCamera__ctor_m34E276CE6734948A2EF28412E342BB823F8FB69C (FollowCamera_tBCF5747A23AA21C34BB73AE89565C9674656E203* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LockCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockCamera_Start_mD868A06E30FA368770C9985F1F69EF5108A5C135 (LockCamera_t3C884CF53B811778B9213FD1B0B03FB397AD6AAF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LockCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockCamera_Update_mCA529305CB8F39E5052F17CD8B75DB135D92F4DA (LockCamera_t3C884CF53B811778B9213FD1B0B03FB397AD6AAF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LockCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockCamera__ctor_m9F560D4C5F3A69268B8FBEF490E620AC3EC904BB (LockCamera_t3C884CF53B811778B9213FD1B0B03FB397AD6AAF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MoveLava::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveLava_Start_m7E2E90782E99DA783DFFA634F5E3D87A5A8F58D7 (MoveLava_tFD3DCC042A43705FED0937FF88C2D87E24C33B9E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MoveLava::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveLava_Update_mEEB47489DBAE162D68FCCF782F6AEB08223FBC61 (MoveLava_tFD3DCC042A43705FED0937FF88C2D87E24C33B9E* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (Time.timeScale == 1)
		float L_0;
		L_0 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		if ((!(((float)L_0) == ((float)(1.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		// tempPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___tempPos_4 = L_2;
		// for(float i = 0.01f; i < 3f; i++)
		V_0 = (0.00999999978f);
		goto IL_0048;
	}

IL_0025:
	{
		// tempPos.y += 0.01f + velocidad;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___tempPos_4);
		float* L_4 = (&L_3->___y_3);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = __this->___velocidad_5;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_add((0.00999999978f), L_7))));
		// for(float i = 0.01f; i < 3f; i++)
		float L_8 = V_0;
		V_0 = ((float)il2cpp_codegen_add(L_8, (1.0f)));
	}

IL_0048:
	{
		// for(float i = 0.01f; i < 3f; i++)
		float L_9 = V_0;
		if ((((float)L_9) < ((float)(3.0f))))
		{
			goto IL_0025;
		}
	}
	{
		// transform.position = tempPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___tempPos_4;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_11, NULL);
		// AumentarVelocidad();
		MoveLava_AumentarVelocidad_mB1789BADFEF8E195CF152B4D782DDC86592A7C9C(__this, NULL);
		return;
	}

IL_0068:
	{
		// tempPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		__this->___tempPos_4 = L_13;
		// }
		return;
	}
}
// System.Void MoveLava::AumentarVelocidad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveLava_AumentarVelocidad_mB1789BADFEF8E195CF152B4D782DDC86592A7C9C (MoveLava_tFD3DCC042A43705FED0937FF88C2D87E24C33B9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (jugador.transform.position.y >= 150f && subirNivel == true)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___jugador_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___y_3;
		if ((!(((float)L_3) >= ((float)(150.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		bool L_4 = __this->___subirNivel_7;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		// velocidad = velocidad + 0.005f;
		float L_5 = __this->___velocidad_5;
		__this->___velocidad_5 = ((float)il2cpp_codegen_add(L_5, (0.00499999989f)));
		// Debug.Log(velocidad);
		float L_6 = __this->___velocidad_5;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// subirNivel=false;
		__this->___subirNivel_7 = (bool)0;
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void MoveLava::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveLava__ctor_mC883CB91979E72065CE9B771BC7F6B43CFC233E9 (MoveLava_tFD3DCC042A43705FED0937FF88C2D87E24C33B9E* __this, const RuntimeMethod* method) 
{
	{
		// private bool subirNivel = true;
		__this->___subirNivel_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OnObjectEnable::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnObjectEnable_OnEnable_m47B0789B1059CFD121DB1335656C096559907C69 (OnObjectEnable_tC9398193BD440A509EE19B52A1277BE720D49347* __this, const RuntimeMethod* method) 
{
	{
		// if (this.onEnable != null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onEnable_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// this.onEnable.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___onEnable_4;
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void OnObjectEnable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnObjectEnable__ctor_m4D2CC9EF16B1AD7FA61539D600CECE76E907D731 (OnObjectEnable_tC9398193BD440A509EE19B52A1277BE720D49347* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Start_m1ACFD10BF71998671B39878CE4208A1F880BE62E (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb2D_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb2D_4), (void*)L_0);
		// animator = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		__this->___animator_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_16), (void*)L_1);
		// }
		return;
	}
}
// System.Void PlayerMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Update_m2D580181CA2970EE505CEA4D2E722DD2F72F2D29 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240DE0D1450FA3DAC09DE877C3179143D8C7DF1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movimientoHorizontal = Input.GetAxisRaw("Horizontal") * velocidadDeMovimiento;
		float L_0;
		L_0 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_1 = __this->___velocidadDeMovimiento_6;
		__this->___movimientoHorizontal_5 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// if(Input.GetKeyDown("d") || Input.GetKeyDown("a") || Input.GetKeyDown("right") || Input.GetKeyDown("left"))
		bool L_2;
		L_2 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, NULL);
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}

IL_0047:
	{
		// animator.SetTrigger("Caminar");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_16;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_6, _stringLiteral240DE0D1450FA3DAC09DE877C3179143D8C7DF1B, NULL);
		goto IL_0099;
	}

IL_0059:
	{
		// else if(Input.GetKeyUp("d") || Input.GetKeyUp("a") || Input.GetKeyUp("right") || Input.GetKeyUp("left"))
		bool L_7;
		L_7 = Input_GetKeyUp_m504C6CF9A40BD840964AD0495266CD003676289E(_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		if (L_7)
		{
			goto IL_0089;
		}
	}
	{
		bool L_8;
		L_8 = Input_GetKeyUp_m504C6CF9A40BD840964AD0495266CD003676289E(_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, NULL);
		if (L_8)
		{
			goto IL_0089;
		}
	}
	{
		bool L_9;
		L_9 = Input_GetKeyUp_m504C6CF9A40BD840964AD0495266CD003676289E(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		if (L_9)
		{
			goto IL_0089;
		}
	}
	{
		bool L_10;
		L_10 = Input_GetKeyUp_m504C6CF9A40BD840964AD0495266CD003676289E(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		if (!L_10)
		{
			goto IL_0099;
		}
	}

IL_0089:
	{
		// animator.SetTrigger("Idle");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___animator_16;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_11, _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, NULL);
	}

IL_0099:
	{
		// if (Input.GetButtonDown("Jump"))
		bool L_12;
		L_12 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_12)
		{
			goto IL_00ac;
		}
	}
	{
		// salto = true;
		__this->___salto_15 = (bool)1;
	}

IL_00ac:
	{
		// Pause();
		PlayerMove_Pause_m3BDE842C891E89D2693147A89966FDE7DFB617C0(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerMove::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_FixedUpdate_m14B3B72D3E9205DA2A6E0E75EBAFE4A09F93C1F1 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enSuelo = Physics2D.OverlapBox(controladorSuelo.position, dimensionesCaja, 0f, queEsSuelo);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___controladorSuelo_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___dimensionesCaja_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5 = __this->___queEsSuelo_11;
		int32_t L_6;
		L_6 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7;
		L_7 = Physics2D_OverlapBox_mF4F43BA71C46C138C460ACFA8EB479DE73A5E4A7(L_2, L_4, (0.0f), L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		__this->___enSuelo_14 = L_8;
		// Mover(movimientoHorizontal * Time.fixedDeltaTime, salto);
		float L_9 = __this->___movimientoHorizontal_5;
		float L_10;
		L_10 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		bool L_11 = __this->___salto_15;
		PlayerMove_Mover_m502590E7ABE3A9BE77E7477103886815C8516F53(__this, ((float)il2cpp_codegen_multiply(L_9, L_10)), L_11, NULL);
		// salto = false;
		__this->___salto_15 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerMove::Mover(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Mover_m502590E7ABE3A9BE77E7477103886815C8516F53 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, float ___mover0, bool ___saltar1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 velocidadObjetivo = new Vector2(mover,rb2D.velocity.y);
		float L_0 = ___mover0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rb2D_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_1, NULL);
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_0, L_3, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		V_0 = L_5;
		// rb2D.velocity = Vector3.SmoothDamp(rb2D.velocity, velocidadObjetivo, ref velocidad, suavizadoDeMovimiento);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rb2D_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_7 = __this->___rb2D_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___velocidad_8);
		float L_12 = __this->___suavizadoDeMovimiento_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_9, L_10, L_11, L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_13, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_6, L_14, NULL);
		// if(mover > 0 && !mirandoDerecha)
		float L_15 = ___mover0;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_0066;
		}
	}
	{
		bool L_16 = __this->___mirandoDerecha_9;
		if (L_16)
		{
			goto IL_0066;
		}
	}
	{
		// Girar();
		PlayerMove_Girar_m6053D8B763109058852C7993BDC8499830F92406(__this, NULL);
		goto IL_007c;
	}

IL_0066:
	{
		// }else if(mover < 0 && mirandoDerecha)
		float L_17 = ___mover0;
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		bool L_18 = __this->___mirandoDerecha_9;
		if (!L_18)
		{
			goto IL_007c;
		}
	}
	{
		// Girar();
		PlayerMove_Girar_m6053D8B763109058852C7993BDC8499830F92406(__this, NULL);
	}

IL_007c:
	{
		// if(enSuelo && saltar && vivo)
		bool L_19 = __this->___enSuelo_14;
		bool L_20 = ___saltar1;
		if (!((int32_t)((int32_t)L_19&(int32_t)L_20)))
		{
			goto IL_00b0;
		}
	}
	{
		bool L_21 = __this->___vivo_17;
		if (!L_21)
		{
			goto IL_00b0;
		}
	}
	{
		// enSuelo = false;
		__this->___enSuelo_14 = (bool)0;
		// rb2D.AddForce(new Vector2(0f, fuerzaSalto));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_22 = __this->___rb2D_4;
		float L_23 = __this->___fuerzaSalto_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), (0.0f), L_23, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_22, L_24, NULL);
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void PlayerMove::Girar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Girar_m6053D8B763109058852C7993BDC8499830F92406 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// mirandoDerecha = !mirandoDerecha;
		bool L_0 = __this->___mirandoDerecha_9;
		__this->___mirandoDerecha_9 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// Vector3 escala = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		V_0 = L_2;
		// escala.x *= -1;
		float* L_3 = (&(&V_0)->___x_2);
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_multiply(L_5, (-1.0f)));
		// transform.localScale = escala;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void PlayerMove::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_OnTriggerEnter2D_m2B0BB10031772F22670DC0569744593BEC9F01DA (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB82229C59AEA983BDAABE95130C049B462E89EA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Win")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral0E9E34245923A0BB21FDAA5FE52670E5EAD09AF1, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// SceneManager.LoadScene(3);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(3, NULL);
	}

IL_001d:
	{
		// if (collision.gameObject.tag == "Lava")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		String_t* L_6;
		L_6 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral1FFB2A87BE27965A7A3C1878E29809832E7498FB, NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// animator.SetTrigger("Morir");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___animator_16;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_8, _stringLiteralB82229C59AEA983BDAABE95130C049B462E89EA1, NULL);
		// vivo = false;
		__this->___vivo_17 = (bool)0;
		// StartCoroutine(gameOverWait());
		RuntimeObject* L_9;
		L_9 = PlayerMove_gameOverWait_m5646E387605A28FB3383498F4E2E6FFC42469D7C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerMove::gameOverWait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerMove_gameOverWait_m5646E387605A28FB3383498F4E2E6FFC42469D7C (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585* L_0 = (U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585*)il2cpp_codegen_object_new(U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585_il2cpp_TypeInfo_var);
		U3CgameOverWaitU3Ed__20__ctor_m38FF15077FF175B9309307A25C0966CF52F0E209(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void PlayerMove::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove_Pause_m3BDE842C891E89D2693147A89966FDE7DFB617C0 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown("p") || Input.GetKeyDown("escape"))
		bool L_0;
		L_0 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B, NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07, NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}

IL_0018:
	{
		// if (Time.timeScale == 1)
		float L_2;
		L_2 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		if ((!(((float)L_2) == ((float)(1.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		// Time.timeScale = 0;     //que la velocidad del juego sea 0
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		return;
	}

IL_002f:
	{
		// else if (Time.timeScale == 0)
		float L_3;
		L_3 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0045;
		}
	}
	{
		// Time.timeScale = 1;     // que la velocidad del juego regrese a 1
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void PlayerMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMove__ctor_m259C024B72725E14EF78BC65889964013830B7B2 (PlayerMove_t5C7A927946DCC60A38F893BF9FA47FE643DF1EE4* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 velocidad = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___velocidad_8 = L_0;
		// private bool mirandoDerecha = true;
		__this->___mirandoDerecha_9 = (bool)1;
		// private bool vivo = true;
		__this->___vivo_17 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerMove/<gameOverWait>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgameOverWaitU3Ed__20__ctor_m38FF15077FF175B9309307A25C0966CF52F0E209 (U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerMove/<gameOverWait>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgameOverWaitU3Ed__20_System_IDisposable_Dispose_m17B0745FA2F58A412F9FAF87476BCEF1B72471D7 (U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerMove/<gameOverWait>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CgameOverWaitU3Ed__20_MoveNext_m7BD84E05459F498FFBD61984347B7F1E82910288 (U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(2, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerMove/<gameOverWait>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CgameOverWaitU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m041474803AA9732BB55EF4A6CB455CA803F53128 (U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerMove/<gameOverWait>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CgameOverWaitU3Ed__20_System_Collections_IEnumerator_Reset_m0B23CF78E18807F9F01AB6F28C5B9703E8ACAFEF (U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CgameOverWaitU3Ed__20_System_Collections_IEnumerator_Reset_m0B23CF78E18807F9F01AB6F28C5B9703E8ACAFEF_RuntimeMethod_var)));
	}
}
// System.Object PlayerMove/<gameOverWait>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CgameOverWaitU3Ed__20_System_Collections_IEnumerator_get_Current_m86349989BC82ED927DF7740E083D23C96792B77C (U3CgameOverWaitU3Ed__20_tC670F46B7C823EE58C90E1AAF54F7BCC8B84E585* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SpawnPlataformas::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPlataformas_Start_mB0668E8D23628388DDF06B46EABADD733CF95801 (SpawnPlataformas_t709E09C173B9875DA9CF5870CB2CA6B4DF020089* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral553A3E6838585E84CA469D6BE291AF87C23D0137);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("SpawnPlataforms", timeSpawn, repeatSpawn);
		float L_0 = __this->___timeSpawn_5;
		float L_1 = __this->___repeatSpawn_6;
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral553A3E6838585E84CA469D6BE291AF87C23D0137, L_0, L_1, NULL);
		// Debug.Log(plataformas[0].transform.position.y);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___plataformas_4;
		int32_t L_3 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// }
		return;
	}
}
// System.Void SpawnPlataformas::SpawnPlataforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPlataformas_SpawnPlataforms_mC697D2DDEF4FBBF67893B1E6073DD7A7F3532285 (SpawnPlataformas_t709E09C173B9875DA9CF5870CB2CA6B4DF020089* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 spawnPosition = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (0.0f), (0.0f), (0.0f), NULL);
		// var plataforma = Random.Range(0, plataformas.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___plataformas_4;
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_1 = L_1;
		// Debug.Log(plataforma);
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// spawnPosition = new Vector3(plataformas[plataforma].transform.position.x, plataformas[plataforma].transform.position.y,  0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___plataformas_4;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___plataformas_4;
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___y_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_11, L_18, (0.0f), NULL);
		// GameObject objetoPlataforma = Instantiate(plataformas[plataforma], spawnPosition, gameObject.transform.rotation);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___plataformas_4;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_22, L_23, L_26, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SpawnPlataformas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnPlataformas__ctor_m7660330909B1436D423C9C96FE60FE4D1BB35428 (SpawnPlataformas_t709E09C173B9875DA9CF5870CB2CA6B4DF020089* __this, const RuntimeMethod* method) 
{
	{
		// public float timeSpawn = 1;
		__this->___timeSpawn_5 = (1.0f);
		// public float repeatSpawn = 3;
		__this->___repeatSpawn_6 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MasterInstaller::InstallBindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MasterInstaller_InstallBindings_m93FA419229CA3761B5A28C382373FE88810393D0 (MasterInstaller_t5795BFCA56FEB95B83CA51E3FF852C0BCE90A582* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_Bind_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m34EFCCFAD55580EC6169E510A90B92FAF0923B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_Bind_TisThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB_m4ECADA52B668DF87ADBD8F6AE3991B0063409A7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromBinderGeneric_1_FromComponentSibling_m8D5C9F4E42FBB1F48C432586FEC88887588E569D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromBinderGeneric_1_FromInstance_mFEC8CB4F9C523F93FBC6B617E0A333DB6293C335_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Container.Bind<ThreadedCoroutine>().FromInstance(singleton_ThreadedCoroutine);
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_0;
		L_0 = MonoInstallerBase_get_Container_m4D8FF2EC36D5FD912A9423C164EBF05BE88662B8_inline(__this, NULL);
		ConcreteIdBinderGeneric_1_tA943D942FA7194F1FE476366F5AA70A13829C206* L_1;
		L_1 = DiContainer_Bind_TisThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB_m4ECADA52B668DF87ADBD8F6AE3991B0063409A7D(L_0, DiContainer_Bind_TisThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB_m4ECADA52B668DF87ADBD8F6AE3991B0063409A7D_RuntimeMethod_var);
		ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* L_2 = __this->___singleton_ThreadedCoroutine_5;
		ScopeConditionCopyNonLazyBinder_t2FCD45E3866BD0B9A6E9B16B61DB36A9F010E9F8* L_3;
		L_3 = FromBinderGeneric_1_FromInstance_mFEC8CB4F9C523F93FBC6B617E0A333DB6293C335(L_1, L_2, FromBinderGeneric_1_FromInstance_mFEC8CB4F9C523F93FBC6B617E0A333DB6293C335_RuntimeMethod_var);
		// Container.Bind<Rigidbody2D>().FromComponentSibling();
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_4;
		L_4 = MonoInstallerBase_get_Container_m4D8FF2EC36D5FD912A9423C164EBF05BE88662B8_inline(__this, NULL);
		ConcreteIdBinderGeneric_1_t35F05F61545AB29B0B195DBD29293F0639FC0183* L_5;
		L_5 = DiContainer_Bind_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m34EFCCFAD55580EC6169E510A90B92FAF0923B25(L_4, DiContainer_Bind_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m34EFCCFAD55580EC6169E510A90B92FAF0923B25_RuntimeMethod_var);
		ScopeArgConditionCopyNonLazyBinder_t26365631A16C2AD0B91FBA23A1E699B5A695491A* L_6;
		L_6 = FromBinderGeneric_1_FromComponentSibling_m8D5C9F4E42FBB1F48C432586FEC88887588E569D(L_5, FromBinderGeneric_1_FromComponentSibling_m8D5C9F4E42FBB1F48C432586FEC88887588E569D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MasterInstaller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MasterInstaller__ctor_m89164B215F43CED671DB42B3AF4B6579BDA4EE90 (MasterInstaller_t5795BFCA56FEB95B83CA51E3FF852C0BCE90A582* __this, const RuntimeMethod* method) 
{
	{
		MonoInstaller__ctor_mC458E797AFAEAA0F9D47DA8F8B77C02811B72FD7(__this, NULL);
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
// System.Void PauseableSceneInstaller::InstallBindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseableSceneInstaller_InstallBindings_m065C085A3037A97DECCF747F5DD953ED867C0957 (PauseableSceneInstaller_tA55E2402D51711E3B3D44F0DCB20074B77F51750* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_Bind_TisPauseManager_t84975A438A2233D672703B683A1E557962911022_mED83524292EBA1F1A382E5254497745DAD1BE3F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FromBinderGeneric_1_FromInstance_m518450FBF622369D5BD13045C9E38681FBBD93B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Container.Bind<PauseManager>().FromInstance(singleton_PauseManager);
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_0;
		L_0 = MonoInstallerBase_get_Container_m4D8FF2EC36D5FD912A9423C164EBF05BE88662B8_inline(__this, NULL);
		ConcreteIdBinderGeneric_1_tCB8F89D3B8C37DC7056657A3E498CDC523FF4D70* L_1;
		L_1 = DiContainer_Bind_TisPauseManager_t84975A438A2233D672703B683A1E557962911022_mED83524292EBA1F1A382E5254497745DAD1BE3F3(L_0, DiContainer_Bind_TisPauseManager_t84975A438A2233D672703B683A1E557962911022_mED83524292EBA1F1A382E5254497745DAD1BE3F3_RuntimeMethod_var);
		PauseManager_t84975A438A2233D672703B683A1E557962911022* L_2 = __this->___singleton_PauseManager_5;
		ScopeConditionCopyNonLazyBinder_t2FCD45E3866BD0B9A6E9B16B61DB36A9F010E9F8* L_3;
		L_3 = FromBinderGeneric_1_FromInstance_m518450FBF622369D5BD13045C9E38681FBBD93B4(L_1, L_2, FromBinderGeneric_1_FromInstance_m518450FBF622369D5BD13045C9E38681FBBD93B4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PauseableSceneInstaller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseableSceneInstaller__ctor_mD3627551DE90090CCE3F90D0A1CDE1471CB3837C (PauseableSceneInstaller_tA55E2402D51711E3B3D44F0DCB20074B77F51750* __this, const RuntimeMethod* method) 
{
	{
		MonoInstaller__ctor_mC458E797AFAEAA0F9D47DA8F8B77C02811B72FD7(__this, NULL);
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
// System.Void ExitGame::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitGame_Exit_m821180E0BB5C461BC46444855744BB4334DA8073 (ExitGame_t7535BD4AC5611EBE2045397500E11C4CF600C05F* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void ExitGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitGame__ctor_mF031F846CC7DE286155C56931B1D99E3B60E9151 (ExitGame_t7535BD4AC5611EBE2045397500E11C4CF600C05F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void InteractionFixer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionFixer_Update_m7AE45B55D47F38563EEE38AA243EB9065FA5397C (InteractionFixer_t3BB4E3C4DD867BFEA5F51073C39C4568F8589A0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 currentMousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		V_0 = L_0;
		// Vector3 mouseDelta = currentMousePosition - oldMousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___oldMousePosition_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		V_1 = L_3;
		// this.oldMousePosition = currentMousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		__this->___oldMousePosition_4 = L_4;
		// if (!IsSelected() && Input.GetButton("Vertical"))
		bool L_5;
		L_5 = InteractionFixer_IsSelected_mABDB4E71A427E86F99E03166FDC551005492DDAA(__this, NULL);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		bool L_6;
		L_6 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// EventSystem.current.SetSelectedGameObject(EventSystem.current.firstSelectedGameObject);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_7;
		L_7 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_8;
		L_8 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = EventSystem_get_firstSelectedGameObject_m15FB056EE7A99D8DD5891D40A6E3EF18719F0553_inline(L_8, NULL);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_7, L_9, NULL);
	}

IL_0042:
	{
		// if (IsSelected() && mouseDelta.sqrMagnitude > 0.1)
		bool L_10;
		L_10 = InteractionFixer_IsSelected_mABDB4E71A427E86F99E03166FDC551005492DDAA(__this, NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		float L_11;
		L_11 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_1), NULL);
		if ((!(((double)((double)L_11)) > ((double)(0.10000000000000001)))))
		{
			goto IL_0068;
		}
	}
	{
		// EventSystem.current.SetSelectedGameObject(null);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_12;
		L_12 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_12, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Boolean InteractionFixer::IsSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionFixer_IsSelected_mABDB4E71A427E86F99E03166FDC551005492DDAA (InteractionFixer_t3BB4E3C4DD867BFEA5F51073C39C4568F8589A0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return EventSystem.current.currentSelectedGameObject != null;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
// System.Void InteractionFixer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionFixer__ctor_m04D237C5EB4D49B63413E71A481765F8D883044B (InteractionFixer_t3BB4E3C4DD867BFEA5F51073C39C4568F8589A0C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LoadScene::LoadSceneByPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene_LoadSceneByPath_mFB80618C1D0B13E4B9AC2B225604944C7FD0BA81 (LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335* __this, String_t* ___scenePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scenePath);
		String_t* L_0 = ___scenePath0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void LoadScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene__ctor_m560E29BD726E67BB4572A9B8098DD97BEFFF63DD (LoadScene_t13789E834A08B06FF59FCCEA1BA366FC2965E335* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OpenExternalLink::OpenLink(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenExternalLink_OpenLink_mAF98476B31953163F532E08893221FD0B01B9ABB (OpenExternalLink_t24502CDAAC720CC2F214B2DE78B4A2DB9EFD8ECD* __this, String_t* ___link0, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(link);
		String_t* L_0 = ___link0;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_0, NULL);
		// }
		return;
	}
}
// System.Void OpenExternalLink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenExternalLink__ctor_mAD4C3C23061B27E20C23AFF54D28012B409725CA (OpenExternalLink_t24502CDAAC720CC2F214B2DE78B4A2DB9EFD8ECD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PanelSelector::SelectPanel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSelector_SelectPanel_m838447A2E598EF8593C8DD74F42FD50D60FC65D5 (PanelSelector_t9F13823F9788A9B82CB8DA65BDE3B886D5F57070* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectedPanel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject panel in this.panels)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___panels_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (GameObject panel in this.panels)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// panel.SetActive(false);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// foreach (GameObject panel in this.panels)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// selectedPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___selectedPanel0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// EventSystem.current.SetSelectedGameObject(null);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_9;
		L_9 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_9, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// }
		return;
	}
}
// System.Void PanelSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSelector__ctor_mFA400DC1A25A10C46533F088AA294B1DC9B96EB4 (PanelSelector_t9F13823F9788A9B82CB8DA65BDE3B886D5F57070* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PauseManager::SetGamePaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseManager_SetGamePaused_m97BFA3EB4CB932F768B92CD7AB8EBE4842256FBD (PauseManager_t84975A438A2233D672703B683A1E557962911022* __this, bool ___isPaused0, const RuntimeMethod* method) 
{
	{
		// this.isGamePaused = isPaused;
		bool L_0 = ___isPaused0;
		__this->___isGamePaused_5 = L_0;
		// this.pauseMenu.SetActive(isPaused);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pauseMenu_4;
		bool L_2 = ___isPaused0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// if (isPaused)
		bool L_3 = ___isPaused0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		return;
	}

IL_0021:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseManager_Update_m1FA211FE3715C041D19D144F25F5713A772B3A2A (PauseManager_t84975A438A2233D672703B683A1E557962911022* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Cancel"))
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// SetGamePaused(!this.isGamePaused);
		bool L_1 = __this->___isGamePaused_5;
		PauseManager_SetGamePaused_m97BFA3EB4CB932F768B92CD7AB8EBE4842256FBD(__this, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void PauseManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseManager_OnDestroy_m39F82E70A36863775E9DA222163DC0EC553A176D (PauseManager_t84975A438A2233D672703B683A1E557962911022* __this, const RuntimeMethod* method) 
{
	{
		// this.SetGamePaused(false);
		PauseManager_SetGamePaused_m97BFA3EB4CB932F768B92CD7AB8EBE4842256FBD(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean PauseManager::get_IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PauseManager_get_IsPaused_mD8EDECB7179E18C9FE25CB883E3D69F10B87BD6E (PauseManager_t84975A438A2233D672703B683A1E557962911022* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.isGamePaused; }
		bool L_0 = __this->___isGamePaused_5;
		return L_0;
	}
}
// System.Void PauseManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseManager__ctor_m788EE397EDE791BFFD154E39196C6846960C5929 (PauseManager_t84975A438A2233D672703B683A1E557962911022* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ThreadedCoroutine::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadedCoroutine_OnEnable_m90A9EB254C16B276D5C721F977251B2793E0616C (ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBB7674788CFC386AB29FCBB869C9324704007059_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// threadContainers = new List<ThreadContainer>();
		List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7* L_0 = (List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7*)il2cpp_codegen_object_new(List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7_il2cpp_TypeInfo_var);
		List_1__ctor_mBB7674788CFC386AB29FCBB869C9324704007059(L_0, List_1__ctor_mBB7674788CFC386AB29FCBB869C9324704007059_RuntimeMethod_var);
		__this->___threadContainers_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___threadContainers_6), (void*)L_0);
		// coroutine = StartCoroutine(Tick());
		RuntimeObject* L_1;
		L_1 = ThreadedCoroutine_Tick_m1B9F3035134507A59EE397CA4B14A5C3E9ECBFFE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		__this->___coroutine_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coroutine_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void ThreadedCoroutine::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadedCoroutine_OnDisable_mFBEA05CF953D4F8F9E03C253ECE97C935CA3ED13 (ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* __this, const RuntimeMethod* method) 
{
	{
		// Stop();
		ThreadedCoroutine_Stop_mD2EFA9738302F8D91F10A09F7A224A73554B0D48(__this, NULL);
		// }
		return;
	}
}
// System.Void ThreadedCoroutine::AddWork(System.Action`1<ThreadContainer>,ThreadedCoroutine/WorkFinished)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadedCoroutine_AddWork_mEB62D3D7D437B6DDFA817DFBD6AF83020E8FB589 (ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* __this, Action_1_tE9AA238C01F17523FB6B98326EFDA5A0F01A2E74* ___workFunction0, WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* ___onWorkFinished1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tF6332B0C3B52183FF22027DA49E27631696E4DDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadedCoroutine_ThreadFunction_m6139B275486D7DD655AF43BE4DD62F608415E46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ThreadFunctionArgs args = new ThreadFunctionArgs
		// {
		//     work = workFunction,
		//     container = new ThreadContainer
		//     {
		//         OnWorkFinished = onWorkFinished,
		//     },
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF));
		Action_1_tE9AA238C01F17523FB6B98326EFDA5A0F01A2E74* L_0 = ___workFunction0;
		(&V_1)->___work_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___work_0), (void*)L_0);
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_1 = (ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA*)il2cpp_codegen_object_new(ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_il2cpp_TypeInfo_var);
		ThreadContainer__ctor_m46991E519680777D435ACD0BECE55EFB7DB74A5A(L_1, NULL);
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_2 = L_1;
		WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* L_3 = ___onWorkFinished1;
		L_2->___OnWorkFinished_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnWorkFinished_6), (void*)L_3);
		(&V_1)->___container_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___container_1), (void*)L_2);
		ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF L_4 = V_1;
		V_0 = L_4;
		// ThreadPool.QueueUserWorkItem(new WaitCallback(ThreadFunction), args);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_5 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_5, NULL, (intptr_t)((void*)ThreadedCoroutine_ThreadFunction_m6139B275486D7DD655AF43BE4DD62F608415E46E_RuntimeMethod_var), NULL);
		ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF L_6 = V_0;
		ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF L_7 = L_6;
		RuntimeObject* L_8 = Box(ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_il2cpp_TypeInfo_var, &L_7);
		bool L_9;
		L_9 = ThreadPool_QueueUserWorkItem_mE534D14C47699D1D37288AE0710B19FC7EC02BAB(L_5, L_8, NULL);
		// threadContainers.Add(args.container);
		RuntimeObject* L_10 = __this->___threadContainers_6;
		ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF L_11 = V_0;
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_12 = L_11.___container_1;
		InterfaceActionInvoker1< ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<ThreadContainer>::Add(T) */, ICollection_1_tF6332B0C3B52183FF22027DA49E27631696E4DDB_il2cpp_TypeInfo_var, L_10, L_12);
		// }
		return;
	}
}
// System.Collections.IEnumerator ThreadedCoroutine::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ThreadedCoroutine_Tick_m1B9F3035134507A59EE397CA4B14A5C3E9ECBFFE (ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A* L_0 = (U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A*)il2cpp_codegen_object_new(U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A_il2cpp_TypeInfo_var);
		U3CTickU3Ed__7__ctor_mAB9A9F7CA1049B6ACF83FE8AA49C4A2A9F0C9E34(L_0, 0, NULL);
		U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ThreadedCoroutine::ThreadFunction(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadedCoroutine_ThreadFunction_m6139B275486D7DD655AF43BE4DD62F608415E46E (RuntimeObject* ___inputObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// ThreadFunctionArgs args = (ThreadFunctionArgs)inputObject;
		RuntimeObject* L_0 = ___inputObject0;
		V_0 = ((*(ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF*)((ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF*)(ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF*)UnBox(L_0, ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_il2cpp_TypeInfo_var))));
	}
	try
	{// begin try (depth: 1)
		// args.work(args.container);
		ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF L_1 = V_0;
		Action_1_tE9AA238C01F17523FB6B98326EFDA5A0F01A2E74* L_2 = L_1.___work_0;
		ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF L_3 = V_0;
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_4 = L_3.___container_1;
		Action_1_Invoke_m0A4DCF5FA782BC7A3211CCC87F21721F2281B3B9_inline(L_2, L_4, NULL);
		// args.container.HasFinished = true;
		ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF L_5 = V_0;
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_6 = L_5.___container_1;
		L_6->___HasFinished_1 = (bool)1;
		// }
		goto IL_0041;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0026;
		}
		throw e;
	}

CATCH_0026:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// args.container.HasError = true;
		ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF L_7 = V_0;
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_8 = L_7.___container_1;
		L_8->___HasError_2 = (bool)1;
		// args.container.Error = e;
		ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF L_9 = V_0;
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_10 = L_9.___container_1;
		Exception_t* L_11 = V_1;
		L_10->___Error_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___Error_3), (void*)L_11);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0041;
	}// end catch (depth: 1)

IL_0041:
	{
		// }
		return;
	}
}
// System.Void ThreadedCoroutine::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadedCoroutine_Stop_mD2EFA9738302F8D91F10A09F7A224A73554B0D48 (ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* __this, const RuntimeMethod* method) 
{
	{
		// StopCoroutine(coroutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___coroutine_5;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ThreadedCoroutine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadedCoroutine__ctor_m3D7B76450D49CCD46904E6FD1338F2A304869F85 (ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_Multicast(WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* currentDelegate = reinterpret_cast<WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___threadContainer0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenInst(WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___threadContainer0, method);
}
void WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenStatic(WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___threadContainer0, method);
}
void WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenStaticInvoker(WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* >::Invoke(__this->___method_ptr_0, method, NULL, ___threadContainer0);
}
void WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_ClosedStaticInvoker(WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___threadContainer0);
}
void WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenVirtual(WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___threadContainer0);
}
void WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenInterface(WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___threadContainer0);
}
void WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenGenericVirtual(WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___threadContainer0);
}
void WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenGenericInterface(WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___threadContainer0);
}
// System.Void ThreadedCoroutine/WorkFinished::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkFinished__ctor_mC98D256FFFF4E8C98BE8784AF38F2FAFBF22A01B (WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_Multicast;
}
// System.Void ThreadedCoroutine/WorkFinished::Invoke(ThreadContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0 (WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___threadContainer0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ThreadedCoroutine/WorkFinished::BeginInvoke(ThreadContainer,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkFinished_BeginInvoke_mDE40682EA8C0E9D70622F8A7C1DB8D352CB6E88E (WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___threadContainer0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void ThreadedCoroutine/WorkFinished::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkFinished_EndInvoke_mCFACAD5EED19926218132CFD12CE305A1389820B (WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ThreadedCoroutine/ThreadFunctionArgs
IL2CPP_EXTERN_C void ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshal_pinvoke(const ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF& unmarshaled, ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___container_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'container' of type 'ThreadFunctionArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___container_1Exception, NULL);
}
IL2CPP_EXTERN_C void ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshal_pinvoke_back(const ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshaled_pinvoke& marshaled, ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF& unmarshaled)
{
	Exception_t* ___container_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'container' of type 'ThreadFunctionArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___container_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: ThreadedCoroutine/ThreadFunctionArgs
IL2CPP_EXTERN_C void ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshal_pinvoke_cleanup(ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ThreadedCoroutine/ThreadFunctionArgs
IL2CPP_EXTERN_C void ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshal_com(const ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF& unmarshaled, ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshaled_com& marshaled)
{
	Exception_t* ___container_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'container' of type 'ThreadFunctionArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___container_1Exception, NULL);
}
IL2CPP_EXTERN_C void ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshal_com_back(const ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshaled_com& marshaled, ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF& unmarshaled)
{
	Exception_t* ___container_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'container' of type 'ThreadFunctionArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___container_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: ThreadedCoroutine/ThreadFunctionArgs
IL2CPP_EXTERN_C void ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshal_com_cleanup(ThreadFunctionArgs_tC16BF3D3095B33EB88E2C290C24C4425B9092DFF_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ThreadedCoroutine/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8BF9898D827D3952B91DE01512F316A16D0FEBAB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A* L_0 = (U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A*)il2cpp_codegen_object_new(U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m39DF028CD8D9E3B132C138D73B6942E7DC5631E2(L_0, NULL);
		((U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ThreadedCoroutine/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m39DF028CD8D9E3B132C138D73B6942E7DC5631E2 (U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ThreadedCoroutine/<>c::<Tick>b__7_0(ThreadContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CTickU3Eb__7_0_m107A0E6D59D15582502382C65FEBD27017B96A7E (U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___container0, const RuntimeMethod* method) 
{
	{
		// threadContainers = threadContainers.Where((ThreadContainer container) => !container.MarkedForDeletion).ToList();
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_0 = ___container0;
		bool L_1;
		L_1 = ThreadContainer_get_MarkedForDeletion_mF32B657F2773F25A5B24F0E57A80101A181EE9BF_inline(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void ThreadedCoroutine/<Tick>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTickU3Ed__7__ctor_mAB9A9F7CA1049B6ACF83FE8AA49C4A2A9F0C9E34 (U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ThreadedCoroutine/<Tick>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTickU3Ed__7_System_IDisposable_Dispose_mB234E1C98B6CDEE9228A9DCEF5CC3C91A9E1A7A2 (U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ThreadedCoroutine/<Tick>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTickU3Ed__7_MoveNext_m12CE695DAF072BA11B2A4AE747EDAD82EEF208BE (U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_m71A92DF5CACD254B4D5C68C7493FAB555B9EF8B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_m18F9A74BC844E1C2C85114E5FA2DBFC5E2A547A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tF6332B0C3B52183FF22027DA49E27631696E4DDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t80192C23E003F78D66108ACE4DE6E4DF8A6E620D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTickU3Eb__7_0_m107A0E6D59D15582502382C65FEBD27017B96A7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* V_4 = NULL;
	int32_t V_5 = 0;
	Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE* G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* G_B16_2 = NULL;
	Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE* G_B15_0 = NULL;
	RuntimeObject* G_B15_1 = NULL;
	ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* G_B15_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00f0;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// bool haveAnyContainersFinished = false;
		V_2 = (bool)0;
	}

IL_0023:
	{
		// haveAnyContainersFinished = false;
		V_2 = (bool)0;
		// int numContainers = threadContainers.Count;
		ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* L_4 = V_1;
		RuntimeObject* L_5 = L_4->___threadContainers_6;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<ThreadContainer>::get_Count() */, ICollection_1_tF6332B0C3B52183FF22027DA49E27631696E4DDB_il2cpp_TypeInfo_var, L_5);
		V_3 = L_6;
		// for (int containerIndex = 0; containerIndex < numContainers; containerIndex++)
		V_5 = 0;
		goto IL_0099;
	}

IL_0036:
	{
		// threadContainer = threadContainers[containerIndex];
		ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* L_7 = V_1;
		RuntimeObject* L_8 = L_7->___threadContainers_6;
		int32_t L_9 = V_5;
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_10;
		L_10 = InterfaceFuncInvoker1< ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ThreadContainer>::get_Item(System.Int32) */, IList_1_t80192C23E003F78D66108ACE4DE6E4DF8A6E620D_il2cpp_TypeInfo_var, L_8, L_9);
		V_4 = L_10;
		// if (threadContainer.HasFinished)
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_11 = V_4;
		bool L_12 = L_11->___HasFinished_1;
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		// if (threadContainer.OnWorkFinished != null)
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_13 = V_4;
		WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* L_14 = L_13->___OnWorkFinished_6;
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		// threadContainer.OnWorkFinished(threadContainer);
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_15 = V_4;
		WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* L_16 = L_15->___OnWorkFinished_6;
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_17 = V_4;
		WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_inline(L_16, L_17, NULL);
	}

IL_0065:
	{
		// threadContainer.MarkForDeletion();
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_18 = V_4;
		ThreadContainer_MarkForDeletion_m94D285FA3843E78B1B46EFD190A4868F785547AB(L_18, NULL);
		// haveAnyContainersFinished = true;
		V_2 = (bool)1;
		goto IL_0093;
	}

IL_0070:
	{
		// else if (threadContainer.HasError)
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_19 = V_4;
		bool L_20 = L_19->___HasError_2;
		if (!L_20)
		{
			goto IL_0093;
		}
	}
	{
		// Debug.LogError(threadContainer.Error.ToString());
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_21 = V_4;
		Exception_t* L_22 = L_21->___Error_3;
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_23, NULL);
		// threadContainer.MarkForDeletion();
		ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* L_24 = V_4;
		ThreadContainer_MarkForDeletion_m94D285FA3843E78B1B46EFD190A4868F785547AB(L_24, NULL);
		// haveAnyContainersFinished = true;
		V_2 = (bool)1;
	}

IL_0093:
	{
		// for (int containerIndex = 0; containerIndex < numContainers; containerIndex++)
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0099:
	{
		// for (int containerIndex = 0; containerIndex < numContainers; containerIndex++)
		int32_t L_26 = V_5;
		int32_t L_27 = V_3;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0036;
		}
	}
	{
		// if (haveAnyContainersFinished)
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_00d6;
		}
	}
	{
		// threadContainers = threadContainers.Where((ThreadContainer container) => !container.MarkedForDeletion).ToList();
		ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* L_29 = V_1;
		ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* L_30 = V_1;
		RuntimeObject* L_31 = L_30->___threadContainers_6;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_il2cpp_TypeInfo_var);
		Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE* L_32 = ((U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
		Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE* L_33 = L_32;
		G_B15_0 = L_33;
		G_B15_1 = L_31;
		G_B15_2 = L_29;
		if (L_33)
		{
			G_B16_0 = L_33;
			G_B16_1 = L_31;
			G_B16_2 = L_29;
			goto IL_00c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_il2cpp_TypeInfo_var);
		U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A* L_34 = ((U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE* L_35 = (Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE*)il2cpp_codegen_object_new(Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE_il2cpp_TypeInfo_var);
		Func_2__ctor_mD4B23D42B1BF0F4E2273FDAE8FC1948C1CDCDD75(L_35, L_34, (intptr_t)((void*)U3CU3Ec_U3CTickU3Eb__7_0_m107A0E6D59D15582502382C65FEBD27017B96A7E_RuntimeMethod_var), NULL);
		Func_2_t91CCD77EF8D74FDA5BAB3FD0C170510E0171A2EE* L_36 = L_35;
		((U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC3FFA01CDD29A6B7D7B4E4B2AE4DD1B52E915A1A_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_36);
		G_B16_0 = L_36;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_00c7:
	{
		RuntimeObject* L_37;
		L_37 = Enumerable_Where_TisThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_m18F9A74BC844E1C2C85114E5FA2DBFC5E2A547A2(G_B16_1, G_B16_0, Enumerable_Where_TisThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_m18F9A74BC844E1C2C85114E5FA2DBFC5E2A547A2_RuntimeMethod_var);
		List_1_t9CD6EA2EB29E7879E2715BB9E7132EE5EE2393B7* L_38;
		L_38 = Enumerable_ToList_TisThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_m71A92DF5CACD254B4D5C68C7493FAB555B9EF8B3(L_37, Enumerable_ToList_TisThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA_m71A92DF5CACD254B4D5C68C7493FAB555B9EF8B3_RuntimeMethod_var);
		G_B16_2->___threadContainers_6 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&G_B16_2->___threadContainers_6), (void*)L_38);
	}

IL_00d6:
	{
		// yield return new WaitForSecondsRealtime(tickIntervalSeconds);
		ThreadedCoroutine_t83EE2CDF9DA4C21CBF7EDF729D7551B9267DCAAB* L_39 = V_1;
		float L_40 = L_39->___tickIntervalSeconds_4;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_41 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_41, L_40, NULL);
		__this->___U3CU3E2__current_1 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_41);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00f0:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0023;
	}
}
// System.Object ThreadedCoroutine/<Tick>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTickU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF66C798FC8C68AE3A6F0DD0DB6296506C1E51F9C (U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ThreadedCoroutine/<Tick>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTickU3Ed__7_System_Collections_IEnumerator_Reset_m8ADC15C2101D2C8234B40F98C815F59D97BEAA59 (U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTickU3Ed__7_System_Collections_IEnumerator_Reset_m8ADC15C2101D2C8234B40F98C815F59D97BEAA59_RuntimeMethod_var)));
	}
}
// System.Object ThreadedCoroutine/<Tick>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTickU3Ed__7_System_Collections_IEnumerator_get_Current_m5FEC91023659C3457BEA91964782881BA9752736 (U3CTickU3Ed__7_t1BABB340D41613FCFE100D4CD0ADC38FB2B81D4A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void ThreadContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContainer__ctor_m46991E519680777D435ACD0BECE55EFB7DB74A5A (ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ThreadContainer()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.Id = UnityEngine.Random.Range(0, 10000);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)10000), NULL);
		__this->___Id_0 = L_0;
		// Results = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_1, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		__this->___Results_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Results_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void ThreadContainer::StoreResult(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContainer_StoreResult_m69638C7E9A52FA1127087CCBDD4633935AF018AC (ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Results.Add(name, value);
		RuntimeObject* L_0 = __this->___Results_4;
		String_t* L_1 = ___name0;
		RuntimeObject* L_2 = ___value1;
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void ThreadContainer::MarkForDeletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContainer_MarkForDeletion_m94D285FA3843E78B1B46EFD190A4868F785547AB (ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* __this, const RuntimeMethod* method) 
{
	{
		// this.markedForDeletion = true;
		__this->___markedForDeletion_5 = (bool)1;
		// }
		return;
	}
}
// System.Boolean ThreadContainer::get_MarkedForDeletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadContainer_get_MarkedForDeletion_mF32B657F2773F25A5B24F0E57A80101A181EE9BF (ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.markedForDeletion; }
		bool L_0 = __this->___markedForDeletion_5;
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
// System.Void DelayedCallback::CallIn(System.Single,System.Action,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedCallback_CallIn_m8E6861129EC9991B664998E266771A55D79F3920 (float ___delayMilliseconds0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___context2, const RuntimeMethod* method) 
{
	{
		// context.StartCoroutine(DelayedCoroutine(delayMilliseconds, callback));
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___context2;
		float L_1 = ___delayMilliseconds0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___callback1;
		RuntimeObject* L_3;
		L_3 = DelayedCallback_DelayedCoroutine_m65930BEE7E885BABE8DE830C3D3B70B6157DC9B9(L_1, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DelayedCallback::DelayedCoroutine(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelayedCallback_DelayedCoroutine_m65930BEE7E885BABE8DE830C3D3B70B6157DC9B9 (float ___delayMilliseconds0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62* L_0 = (U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62*)il2cpp_codegen_object_new(U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62_il2cpp_TypeInfo_var);
		U3CDelayedCoroutineU3Ed__1__ctor_m9029C6C9D2076D9A1C629C8D8D3F4A3747B95480(L_0, 0, NULL);
		U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62* L_1 = L_0;
		float L_2 = ___delayMilliseconds0;
		L_1->___delayMilliseconds_2 = L_2;
		U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62* L_3 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___callback1;
		L_3->___callback_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_3), (void*)L_4);
		return L_3;
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
// System.Void DelayedCallback/<DelayedCoroutine>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__1__ctor_m9029C6C9D2076D9A1C629C8D8D3F4A3747B95480 (U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DelayedCallback/<DelayedCoroutine>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__1_System_IDisposable_Dispose_m4434A6EEEC0ADDA1E9A132351ACE6A010700CAD5 (U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DelayedCallback/<DelayedCoroutine>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedCoroutineU3Ed__1_MoveNext_mB6E6986D544B8A8FECFEC1695B48BBF0E66FA282 (U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(delayMilliseconds / 1000);
		float L_3 = __this->___delayMilliseconds_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, ((float)(L_3/(1000.0f))), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// callback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___callback_3;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
		// }
		return (bool)0;
	}
}
// System.Object DelayedCallback/<DelayedCoroutine>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayedCoroutineU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m06AB7826C14C2701088703FB58D2A5D1D461A89E (U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DelayedCallback/<DelayedCoroutine>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedCoroutineU3Ed__1_System_Collections_IEnumerator_Reset_m86D144FD72C3A68BA71886A577F25F1438C20470 (U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayedCoroutineU3Ed__1_System_Collections_IEnumerator_Reset_m86D144FD72C3A68BA71886A577F25F1438C20470_RuntimeMethod_var)));
	}
}
// System.Object DelayedCallback/<DelayedCoroutine>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDelayedCoroutineU3Ed__1_System_Collections_IEnumerator_get_Current_m11E128567B7E643328422C9B6C559A740D67C78B (U3CDelayedCoroutineU3Ed__1_t367020D675DEF5FC327226C9F94C9A88ED761C62* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void DelegateCurve::.ctor(EasingCurve,DelegateCurve/Curve1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCurve__ctor_mF8E1351ACCF167044609ED2048AD7CC68E1C6636 (DelegateCurve_t542B8CE694494B71C750EC544DDF6137E577D57D* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* ___curveFunc11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelegateCurve(EasingCurve curve, Curve1 curveFunc1)
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C(__this, NULL);
		// this.curveA = curve;
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_0 = ___curve0;
		__this->___curveA_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curveA_11), (void*)L_0);
		// this.curveFunc1 = curveFunc1;
		Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* L_1 = ___curveFunc11;
		__this->___curveFunc1_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curveFunc1_13), (void*)L_1);
		// this.order = Order.One;
		__this->___order_10 = 0;
		// }
		return;
	}
}
// System.Void DelegateCurve::.ctor(EasingCurve,EasingCurve,DelegateCurve/Curve2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateCurve__ctor_m2A1180B434662F453475D2C6BDD1F7CE5DDDBD3D (DelegateCurve_t542B8CE694494B71C750EC544DDF6137E577D57D* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* ___curveFunc22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelegateCurve(EasingCurve curveA, EasingCurve curveB, Curve2 curveFunc2)
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C(__this, NULL);
		// this.curveA = curveA;
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_0 = ___curveA0;
		__this->___curveA_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curveA_11), (void*)L_0);
		// this.curveB = curveB;
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_1 = ___curveB1;
		__this->___curveB_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curveB_12), (void*)L_1);
		// this.curveFunc2 = curveFunc2;
		Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* L_2 = ___curveFunc22;
		__this->___curveFunc2_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curveFunc2_14), (void*)L_2);
		// this.order = Order.Two;
		__this->___order_10 = 1;
		// }
		return;
	}
}
// System.Single DelegateCurve::GetEasedValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DelegateCurve_GetEasedValue_m1C025B1BC5D3502D8A6F1C6F8ED54D528CF98416 (DelegateCurve_t542B8CE694494B71C750EC544DDF6137E577D57D* __this, float ___t0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (this.order)
		int32_t L_0 = __this->___order_10;
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
			goto IL_0023;
		}
	}
	{
		goto IL_003c;
	}

IL_0010:
	{
		// return this.curveFunc1(this.curveA, t);
		Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* L_3 = __this->___curveFunc1_13;
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_4 = __this->___curveA_11;
		float L_5 = ___t0;
		float L_6;
		L_6 = Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_inline(L_3, L_4, L_5, NULL);
		return L_6;
	}

IL_0023:
	{
		// return this.curveFunc2(this.curveA, this.curveB, t);
		Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* L_7 = __this->___curveFunc2_14;
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_8 = __this->___curveA_11;
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_9 = __this->___curveB_12;
		float L_10 = ___t0;
		float L_11;
		L_11 = Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_inline(L_7, L_8, L_9, L_10, NULL);
		return L_11;
	}

IL_003c:
	{
		// throw new NotImplementedException("Order " + this.order + " is not yet implemented in DelegateCurve");
		int32_t* L_12 = (&__this->___order_10);
		Il2CppFakeBox<int32_t> L_13(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Order_t6F95A8CCF7535ACACC4C7ECA7F2F0D87FD6AC185_il2cpp_TypeInfo_var)), L_12);
		String_t* L_14;
		L_14 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_13), NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral515D8BE55B12C4E8F039A4845D3D27C3CB9855DA)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDBDFB2B26374203D0C93616462149EA24C3D6414)), NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_16 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DelegateCurve_GetEasedValue_m1C025B1BC5D3502D8A6F1C6F8ED54D528CF98416_RuntimeMethod_var)));
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
float Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_Multicast(Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* currentDelegate = reinterpret_cast<Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___curve0, ___t1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenInst(Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___curve0, ___t1, method);
}
float Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenStatic(Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___curve0, ___t1, method);
}
float Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenStaticInvoker(Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< float, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float >::Invoke(__this->___method_ptr_0, method, NULL, ___curve0, ___t1);
}
float Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_ClosedStaticInvoker(Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< float, RuntimeObject*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___curve0, ___t1);
}
float Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenVirtual(Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method)
{
	return VirtualFuncInvoker1< float, float >::Invoke(il2cpp_codegen_method_get_slot(method), ___curve0, ___t1);
}
float Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenInterface(Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker1< float, float >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___curve0, ___t1);
}
float Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenGenericVirtual(Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker1< float, float >::Invoke(method, ___curve0, ___t1);
}
float Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenGenericInterface(Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker1< float, float >::Invoke(method, ___curve0, ___t1);
}
// System.Void DelegateCurve/Curve1::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Curve1__ctor_mBF0C5C006DDFFC7363BA6D4639AFDA05D52AE1DD (Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_Multicast;
}
// System.Single DelegateCurve/Curve1::Invoke(EasingCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969 (Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___curve0, ___t1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DelegateCurve/Curve1::BeginInvoke(EasingCurve,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Curve1_BeginInvoke_m7225DBBF6BD9B0069811ABD53E2CDE44BBA890DB (Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___curve0;
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___t1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Single DelegateCurve/Curve1::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Curve1_EndInvoke_mFDD52E5B71079450AA2CEFD2E707100B3FC65096 (Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
float Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_Multicast(Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* currentDelegate = reinterpret_cast<Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___curveA0, ___curveB1, ___t2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenInst(Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___curveA0, ___curveB1, ___t2, method);
}
float Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenStatic(Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___curveA0, ___curveB1, ___t2, method);
}
float Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenStaticInvoker(Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< float, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float >::Invoke(__this->___method_ptr_0, method, NULL, ___curveA0, ___curveB1, ___t2);
}
float Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_ClosedStaticInvoker(Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< float, RuntimeObject*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___curveA0, ___curveB1, ___t2);
}
float Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenVirtual(Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method)
{
	return VirtualFuncInvoker2< float, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float >::Invoke(il2cpp_codegen_method_get_slot(method), ___curveA0, ___curveB1, ___t2);
}
float Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenInterface(Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker2< float, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___curveA0, ___curveB1, ___t2);
}
float Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenGenericVirtual(Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker2< float, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float >::Invoke(method, ___curveA0, ___curveB1, ___t2);
}
float Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenGenericInterface(Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker2< float, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float >::Invoke(method, ___curveA0, ___curveB1, ___t2);
}
// System.Void DelegateCurve/Curve2::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Curve2__ctor_m0EBA5062C2B4CBABD7B820B264E0A7099ACB106F (Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_Multicast;
}
// System.Single DelegateCurve/Curve2::Invoke(EasingCurve,EasingCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D (Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___curveA0, ___curveB1, ___t2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DelegateCurve/Curve2::BeginInvoke(EasingCurve,EasingCurve,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Curve2_BeginInvoke_mDC5F8BF76F5EB4F0A04F28B254327DFB2C744C5D (Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___curveA0;
	__d_args[1] = ___curveB1;
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___t2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Single DelegateCurve/Curve2::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Curve2_EndInvoke_mDD5FE8A537913BC795400D9D12A33A75CE7BEA95 (Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single EaseIn2::GetEasedValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EaseIn2_GetEasedValue_m279880785BA2BF3E085EBE9073C0661F0B643367 (EaseIn2_t818C44A2C6CA0F4F03836FA46C237A84E34C63BC* __this, float ___t0, const RuntimeMethod* method) 
{
	{
		// return t * t;
		float L_0 = ___t0;
		float L_1 = ___t0;
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// System.Void EaseIn2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseIn2__ctor_mC30C6F38795B2F3A3A06265FAB1B18BAAD3BF5E0 (EaseIn2_t818C44A2C6CA0F4F03836FA46C237A84E34C63BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C(__this, NULL);
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
// System.Single EaseIn3::GetEasedValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EaseIn3_GetEasedValue_m97BD6C3A8F496D85631BB8B440447139F90B1AE3 (EaseIn3_t734F9E7D350054B5F1C0D60093E071539A25230C* __this, float ___t0, const RuntimeMethod* method) 
{
	{
		// return t * t * t;
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___t0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
	}
}
// System.Void EaseIn3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseIn3__ctor_mAD5DBC31AAC954DED305F8CC7754537163998BF3 (EaseIn3_t734F9E7D350054B5F1C0D60093E071539A25230C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C(__this, NULL);
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
// System.Single EaseIn4::GetEasedValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EaseIn4_GetEasedValue_mB33AC89F8AF90522C398CF9E8D0173E33FB9D011 (EaseIn4_t1EDA361DBB100F9BF63A7D3FA51ED7E2D6FBCB12* __this, float ___t0, const RuntimeMethod* method) 
{
	{
		// return t * t * t * t;
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___t0;
		float L_3 = ___t0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2)), L_3));
	}
}
// System.Void EaseIn4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseIn4__ctor_m25E009031930EE623CDBB488678C1A37A6EE0421 (EaseIn4_t1EDA361DBB100F9BF63A7D3FA51ED7E2D6FBCB12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C(__this, NULL);
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
// System.Single EaseInOut2::GetEasedValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EaseInOut2_GetEasedValue_mACA990AC140A6C2A2E00942D45069129DC6EC121 (EaseInOut2_t8B90FD1AA2D581B3F2922C9BAE0CF76F34D62D38* __this, float ___t0, const RuntimeMethod* method) 
{
	{
		// return (t * t) / ((t * t) + ((1 - t) * (1 - t)));
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___t0;
		float L_3 = ___t0;
		float L_4 = ___t0;
		float L_5 = ___t0;
		return ((float)(((float)il2cpp_codegen_multiply(L_0, L_1))/((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_4)), ((float)il2cpp_codegen_subtract((1.0f), L_5))))))));
	}
}
// System.Void EaseInOut2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseInOut2__ctor_mE5F2E02F196262A9A91D1B998B330385FEB34D99 (EaseInOut2_t8B90FD1AA2D581B3F2922C9BAE0CF76F34D62D38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C(__this, NULL);
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
// System.Single EaseInOut3::GetEasedValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EaseInOut3_GetEasedValue_mDE268CBB8CCC52D8DDA102F5F0734E5F38FB6875 (EaseInOut3_t71E81F49E9EF8A6057092A502A5CB898CBB5F5E8* __this, float ___t0, const RuntimeMethod* method) 
{
	{
		// return (t * t * t) / ((t * t * t) + ((1 - t) * (1 - t) * (1 - t)));
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___t0;
		float L_3 = ___t0;
		float L_4 = ___t0;
		float L_5 = ___t0;
		float L_6 = ___t0;
		float L_7 = ___t0;
		float L_8 = ___t0;
		return ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2))/((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_6)), ((float)il2cpp_codegen_subtract((1.0f), L_7)))), ((float)il2cpp_codegen_subtract((1.0f), L_8))))))));
	}
}
// System.Void EaseInOut3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseInOut3__ctor_m0C3E8C50BEBAF623231E0B4D0F83EDCB11D201F4 (EaseInOut3_t71E81F49E9EF8A6057092A502A5CB898CBB5F5E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C(__this, NULL);
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
// System.Single EaseInOut4::GetEasedValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EaseInOut4_GetEasedValue_mD112AC6DFD3150C9F58AE9109CEC9ABE15EEDAD1 (EaseInOut4_tF19F0460536D5B34140008CDF4861580474BD2D0* __this, float ___t0, const RuntimeMethod* method) 
{
	{
		// return (t * t * t * t) / ((t * t * t * t) + ((1 - t) * (1 - t) * (1 - t) * (1 - t)));
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___t0;
		float L_3 = ___t0;
		float L_4 = ___t0;
		float L_5 = ___t0;
		float L_6 = ___t0;
		float L_7 = ___t0;
		float L_8 = ___t0;
		float L_9 = ___t0;
		float L_10 = ___t0;
		float L_11 = ___t0;
		return ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2)), L_3))/((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_5)), L_6)), L_7)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_8)), ((float)il2cpp_codegen_subtract((1.0f), L_9)))), ((float)il2cpp_codegen_subtract((1.0f), L_10)))), ((float)il2cpp_codegen_subtract((1.0f), L_11))))))));
	}
}
// System.Void EaseInOut4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseInOut4__ctor_m445058FDA08CE8A734645EBE26EE7918EC530FE6 (EaseInOut4_tF19F0460536D5B34140008CDF4861580474BD2D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C(__this, NULL);
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
// System.Single EaseOut2::GetEasedValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EaseOut2_GetEasedValue_m8239EC1C215C86BFDE5A8B97D4B65BC41FE9275C (EaseOut2_t9DBE87878E811D7FBA2DF035D7E55FBA165D5369* __this, float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - ((1 - t) * (1 - t));
		float L_0 = ___t0;
		float L_1 = ___t0;
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_0)), ((float)il2cpp_codegen_subtract((1.0f), L_1))))));
	}
}
// System.Void EaseOut2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseOut2__ctor_mDADD412C0FC6EB1443C9479688FDFE6B25C3A227 (EaseOut2_t9DBE87878E811D7FBA2DF035D7E55FBA165D5369* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C(__this, NULL);
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
// System.Single EaseOut3::GetEasedValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EaseOut3_GetEasedValue_m6635E4890156788E3B290326F7C2A4C5F71F6962 (EaseOut3_t4BE67FC2B9E8EF0E1ADAE99A45D27146A882BC66* __this, float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - ((1 - t) * (1 - t) * (1 - t));
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___t0;
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_0)), ((float)il2cpp_codegen_subtract((1.0f), L_1)))), ((float)il2cpp_codegen_subtract((1.0f), L_2))))));
	}
}
// System.Void EaseOut3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseOut3__ctor_m68EC02C3DB334009A0C6198BBE05FA87A24F67F7 (EaseOut3_t4BE67FC2B9E8EF0E1ADAE99A45D27146A882BC66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C(__this, NULL);
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
// System.Single EaseOut4::GetEasedValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EaseOut4_GetEasedValue_m345627A08AFE0AD1F744BBD995F5C8F398C337DD (EaseOut4_t5296B6B3969E0741270249845A6F9FB431DD02D7* __this, float ___t0, const RuntimeMethod* method) 
{
	{
		// return 1 - ((1 - t) * (1 - t) * (1 - t) * (1 - t));
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___t0;
		float L_3 = ___t0;
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_0)), ((float)il2cpp_codegen_subtract((1.0f), L_1)))), ((float)il2cpp_codegen_subtract((1.0f), L_2)))), ((float)il2cpp_codegen_subtract((1.0f), L_3))))));
	}
}
// System.Void EaseOut4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseOut4__ctor_m4DFB9B1BBB15EC43C5069E6BA46E21D4578949A9 (EaseOut4_t5296B6B3969E0741270249845A6F9FB431DD02D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C(__this, NULL);
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
// System.Single EasingCurve::Apply(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingCurve_Apply_mBE44C31AECC613C499C28B16A1593EDA844F5C4A (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* __this, float ___minValue0, float ___maxValue1, float ___percentage2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float easedPercentage = this.GetEasedValue(percentage);
		float L_0 = ___percentage2;
		float L_1;
		L_1 = VirtualFuncInvoker1< float, float >::Invoke(4 /* System.Single EasingCurve::GetEasedValue(System.Single) */, __this, L_0);
		V_0 = L_1;
		// if (easedPercentage < float.Epsilon && easedPercentage > -float.Epsilon)
		float L_2 = V_0;
		if ((!(((float)L_2) < ((float)(1.40129846E-45f)))))
		{
			goto IL_001a;
		}
	}
	{
		float L_3 = V_0;
		if ((!(((float)L_3) > ((float)(-1.40129846E-45f)))))
		{
			goto IL_001a;
		}
	}
	{
		// return minValue;
		float L_4 = ___minValue0;
		return L_4;
	}

IL_001a:
	{
		// return Mathf.Lerp(minValue, maxValue, easedPercentage);
		float L_5 = ___minValue0;
		float L_6 = ___maxValue1;
		float L_7 = V_0;
		float L_8;
		L_8 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Single EasingCurve::Invert(EasingCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingCurve_Invert_mCF2E0B68A75710142E47A2760D5D72942C3A7E6D (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method) 
{
	{
		// return 1 - curve.GetEasedValue(t);
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_0 = ___curve0;
		float L_1 = ___t1;
		float L_2;
		L_2 = VirtualFuncInvoker1< float, float >::Invoke(4 /* System.Single EasingCurve::GetEasedValue(System.Single) */, L_0, L_1);
		return ((float)il2cpp_codegen_subtract((1.0f), L_2));
	}
}
// System.Single EasingCurve::Multiply(EasingCurve,EasingCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingCurve_Multiply_m4887B286F947A10A8F8A1659EE01F9A2510E99F3 (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method) 
{
	{
		// return curveA.GetEasedValue(t) * curveB.GetEasedValue(t);
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_0 = ___curveA0;
		float L_1 = ___t2;
		float L_2;
		L_2 = VirtualFuncInvoker1< float, float >::Invoke(4 /* System.Single EasingCurve::GetEasedValue(System.Single) */, L_0, L_1);
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_3 = ___curveB1;
		float L_4 = ___t2;
		float L_5;
		L_5 = VirtualFuncInvoker1< float, float >::Invoke(4 /* System.Single EasingCurve::GetEasedValue(System.Single) */, L_3, L_4);
		return ((float)il2cpp_codegen_multiply(L_2, L_5));
	}
}
// System.Single EasingCurve::Compose(EasingCurve,EasingCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingCurve_Compose_m65CA185349A9CDFF7317752E0FBD522230D09E6E (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method) 
{
	{
		// return curveA.GetEasedValue(curveB.GetEasedValue(t));
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_0 = ___curveA0;
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_1 = ___curveB1;
		float L_2 = ___t2;
		float L_3;
		L_3 = VirtualFuncInvoker1< float, float >::Invoke(4 /* System.Single EasingCurve::GetEasedValue(System.Single) */, L_1, L_2);
		float L_4;
		L_4 = VirtualFuncInvoker1< float, float >::Invoke(4 /* System.Single EasingCurve::GetEasedValue(System.Single) */, L_0, L_3);
		return L_4;
	}
}
// System.Single EasingCurve::CrossFade(EasingCurve,EasingCurve,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingCurve_CrossFade_m0FF69148D44074278C940BAEB50F20DE41AD5430 (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float easedValueA = curveA.GetEasedValue(t);
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_0 = ___curveA0;
		float L_1 = ___t2;
		float L_2;
		L_2 = VirtualFuncInvoker1< float, float >::Invoke(4 /* System.Single EasingCurve::GetEasedValue(System.Single) */, L_0, L_1);
		V_0 = L_2;
		// float easedValueB = curveB.GetEasedValue(t);
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_3 = ___curveB1;
		float L_4 = ___t2;
		float L_5;
		L_5 = VirtualFuncInvoker1< float, float >::Invoke(4 /* System.Single EasingCurve::GetEasedValue(System.Single) */, L_3, L_4);
		V_1 = L_5;
		// return ((1 - t) * easedValueA) + (t * easedValueB);
		float L_6 = ___t2;
		float L_7 = V_0;
		float L_8 = ___t2;
		float L_9 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_6)), L_7)), ((float)il2cpp_codegen_multiply(L_8, L_9))));
	}
}
// System.Single EasingCurve::Blend(EasingCurve,EasingCurve,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingCurve_Blend_m6A4728F7EB70BC4EDE17D65FEC42DF5A9598A93B (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, float ___blendValue3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float easedValueA = curveA.GetEasedValue(t);
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_0 = ___curveA0;
		float L_1 = ___t2;
		float L_2;
		L_2 = VirtualFuncInvoker1< float, float >::Invoke(4 /* System.Single EasingCurve::GetEasedValue(System.Single) */, L_0, L_1);
		V_0 = L_2;
		// float easedValueB = curveB.GetEasedValue(t);
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_3 = ___curveB1;
		float L_4 = ___t2;
		float L_5;
		L_5 = VirtualFuncInvoker1< float, float >::Invoke(4 /* System.Single EasingCurve::GetEasedValue(System.Single) */, L_3, L_4);
		V_1 = L_5;
		// return easedValueA + (blendValue * (easedValueB - easedValueA));
		float L_6 = V_0;
		float L_7 = ___blendValue3;
		float L_8 = V_1;
		float L_9 = V_0;
		return ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, ((float)il2cpp_codegen_subtract(L_8, L_9))))));
	}
}
// System.Void EasingCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C (EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void EasingCurve::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasingCurve__cctor_mABB9DC97761136EC684C9C18B392617A8A65D9CB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseIn2_t818C44A2C6CA0F4F03836FA46C237A84E34C63BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseIn3_t734F9E7D350054B5F1C0D60093E071539A25230C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseIn4_t1EDA361DBB100F9BF63A7D3FA51ED7E2D6FBCB12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseInOut2_t8B90FD1AA2D581B3F2922C9BAE0CF76F34D62D38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseInOut3_t71E81F49E9EF8A6057092A502A5CB898CBB5F5E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseInOut4_tF19F0460536D5B34140008CDF4861580474BD2D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseOut2_t9DBE87878E811D7FBA2DF035D7E55FBA165D5369_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseOut3_t4BE67FC2B9E8EF0E1ADAE99A45D27146A882BC66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EaseOut4_t5296B6B3969E0741270249845A6F9FB431DD02D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Linear_t68F8866348A581549E5FB634524E5C68FB6DE8AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly EasingCurve Linear = new Linear();
		Linear_t68F8866348A581549E5FB634524E5C68FB6DE8AC* L_0 = (Linear_t68F8866348A581549E5FB634524E5C68FB6DE8AC*)il2cpp_codegen_object_new(Linear_t68F8866348A581549E5FB634524E5C68FB6DE8AC_il2cpp_TypeInfo_var);
		Linear__ctor_m3B9FA7CE8DFFEF9C6BB0EC234C0F68200DBF5F2B(L_0, NULL);
		((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___Linear_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___Linear_0), (void*)L_0);
		// public static readonly EasingCurve EaseIn2 = new EaseIn2();
		EaseIn2_t818C44A2C6CA0F4F03836FA46C237A84E34C63BC* L_1 = (EaseIn2_t818C44A2C6CA0F4F03836FA46C237A84E34C63BC*)il2cpp_codegen_object_new(EaseIn2_t818C44A2C6CA0F4F03836FA46C237A84E34C63BC_il2cpp_TypeInfo_var);
		EaseIn2__ctor_mC30C6F38795B2F3A3A06265FAB1B18BAAD3BF5E0(L_1, NULL);
		((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseIn2_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseIn2_1), (void*)L_1);
		// public static readonly EasingCurve EaseOut2 = new EaseOut2();
		EaseOut2_t9DBE87878E811D7FBA2DF035D7E55FBA165D5369* L_2 = (EaseOut2_t9DBE87878E811D7FBA2DF035D7E55FBA165D5369*)il2cpp_codegen_object_new(EaseOut2_t9DBE87878E811D7FBA2DF035D7E55FBA165D5369_il2cpp_TypeInfo_var);
		EaseOut2__ctor_mDADD412C0FC6EB1443C9479688FDFE6B25C3A227(L_2, NULL);
		((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseOut2_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseOut2_2), (void*)L_2);
		// public static readonly EasingCurve EaseInOut2 = new EaseInOut2();
		EaseInOut2_t8B90FD1AA2D581B3F2922C9BAE0CF76F34D62D38* L_3 = (EaseInOut2_t8B90FD1AA2D581B3F2922C9BAE0CF76F34D62D38*)il2cpp_codegen_object_new(EaseInOut2_t8B90FD1AA2D581B3F2922C9BAE0CF76F34D62D38_il2cpp_TypeInfo_var);
		EaseInOut2__ctor_mE5F2E02F196262A9A91D1B998B330385FEB34D99(L_3, NULL);
		((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseInOut2_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseInOut2_3), (void*)L_3);
		// public static readonly EasingCurve EaseIn3 = new EaseIn3();
		EaseIn3_t734F9E7D350054B5F1C0D60093E071539A25230C* L_4 = (EaseIn3_t734F9E7D350054B5F1C0D60093E071539A25230C*)il2cpp_codegen_object_new(EaseIn3_t734F9E7D350054B5F1C0D60093E071539A25230C_il2cpp_TypeInfo_var);
		EaseIn3__ctor_mAD5DBC31AAC954DED305F8CC7754537163998BF3(L_4, NULL);
		((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseIn3_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseIn3_4), (void*)L_4);
		// public static readonly EasingCurve EaseOut3 = new EaseOut3();
		EaseOut3_t4BE67FC2B9E8EF0E1ADAE99A45D27146A882BC66* L_5 = (EaseOut3_t4BE67FC2B9E8EF0E1ADAE99A45D27146A882BC66*)il2cpp_codegen_object_new(EaseOut3_t4BE67FC2B9E8EF0E1ADAE99A45D27146A882BC66_il2cpp_TypeInfo_var);
		EaseOut3__ctor_m68EC02C3DB334009A0C6198BBE05FA87A24F67F7(L_5, NULL);
		((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseOut3_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseOut3_5), (void*)L_5);
		// public static readonly EasingCurve EaseInOut3 = new EaseInOut3();
		EaseInOut3_t71E81F49E9EF8A6057092A502A5CB898CBB5F5E8* L_6 = (EaseInOut3_t71E81F49E9EF8A6057092A502A5CB898CBB5F5E8*)il2cpp_codegen_object_new(EaseInOut3_t71E81F49E9EF8A6057092A502A5CB898CBB5F5E8_il2cpp_TypeInfo_var);
		EaseInOut3__ctor_m0C3E8C50BEBAF623231E0B4D0F83EDCB11D201F4(L_6, NULL);
		((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseInOut3_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseInOut3_6), (void*)L_6);
		// public static readonly EasingCurve EaseIn4 = new EaseIn4();
		EaseIn4_t1EDA361DBB100F9BF63A7D3FA51ED7E2D6FBCB12* L_7 = (EaseIn4_t1EDA361DBB100F9BF63A7D3FA51ED7E2D6FBCB12*)il2cpp_codegen_object_new(EaseIn4_t1EDA361DBB100F9BF63A7D3FA51ED7E2D6FBCB12_il2cpp_TypeInfo_var);
		EaseIn4__ctor_m25E009031930EE623CDBB488678C1A37A6EE0421(L_7, NULL);
		((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseIn4_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseIn4_7), (void*)L_7);
		// public static readonly EasingCurve EaseOut4 = new EaseOut4();
		EaseOut4_t5296B6B3969E0741270249845A6F9FB431DD02D7* L_8 = (EaseOut4_t5296B6B3969E0741270249845A6F9FB431DD02D7*)il2cpp_codegen_object_new(EaseOut4_t5296B6B3969E0741270249845A6F9FB431DD02D7_il2cpp_TypeInfo_var);
		EaseOut4__ctor_m4DFB9B1BBB15EC43C5069E6BA46E21D4578949A9(L_8, NULL);
		((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseOut4_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseOut4_8), (void*)L_8);
		// public static readonly EasingCurve EaseInOut4 = new EaseInOut4();
		EaseInOut4_tF19F0460536D5B34140008CDF4861580474BD2D0* L_9 = (EaseInOut4_tF19F0460536D5B34140008CDF4861580474BD2D0*)il2cpp_codegen_object_new(EaseInOut4_tF19F0460536D5B34140008CDF4861580474BD2D0_il2cpp_TypeInfo_var);
		EaseInOut4__ctor_m445058FDA08CE8A734645EBE26EE7918EC530FE6(L_9, NULL);
		((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseInOut4_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___EaseInOut4_9), (void*)L_9);
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
// System.Single Linear::GetEasedValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Linear_GetEasedValue_m33366DC5FE157E04B2B4F994DB36DD3562A9B604 (Linear_t68F8866348A581549E5FB634524E5C68FB6DE8AC* __this, float ___t0, const RuntimeMethod* method) 
{
	{
		// return t;
		float L_0 = ___t0;
		return L_0;
	}
}
// System.Void Linear::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Linear__ctor_m3B9FA7CE8DFFEF9C6BB0EC234C0F68200DBF5F2B (Linear_t68F8866348A581549E5FB634524E5C68FB6DE8AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve__ctor_m5A551E76080B4C53DE2B2FD9C322D3BF0CEE7D3C(__this, NULL);
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
// System.Void ValueAnimator::Animate(System.Single,System.Single,System.Single,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueAnimator_Animate_m1EE7D6DA10E8313F927A7F1F82853847224E8AB5 (ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B* __this, float ___fromValue0, float ___toValue1, float ___timeSpanSeconds2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___mutatorFunction3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Animate(fromValue, toValue, timeSpanSeconds, mutatorFunction, EasingCurve.Linear);
		float L_0 = ___fromValue0;
		float L_1 = ___toValue1;
		float L_2 = ___timeSpanSeconds2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___mutatorFunction3;
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_4 = ((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___Linear_0;
		ValueAnimator_Animate_m1964D69FB7B07306703A2E94C8CE24604A9975C7(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void ValueAnimator::Animate(System.Single,System.Single,System.Single,System.Action`1<System.Single>,EasingCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueAnimator_Animate_m1964D69FB7B07306703A2E94C8CE24604A9975C7 (ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B* __this, float ___fromValue0, float ___toValue1, float ___timeSpanSeconds2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___mutatorFunction3, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___easingCurve4, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateOverTimeCoroutine(fromValue, toValue, timeSpanSeconds, mutatorFunction, easingCurve));
		float L_0 = ___fromValue0;
		float L_1 = ___toValue1;
		float L_2 = ___timeSpanSeconds2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___mutatorFunction3;
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_4 = ___easingCurve4;
		RuntimeObject* L_5;
		L_5 = ValueAnimator_AnimateOverTimeCoroutine_m96D7C3510D5D6A780C8E956F59D937DCFD87E6DD(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void ValueAnimator::Animate(System.Single,System.Single,System.Func`1<System.Single>,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueAnimator_Animate_m040640A28C4C37B2B510BADEC70F25465422FFCA (ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B* __this, float ___fromValue0, float ___toValue1, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___percentageFetcherFunction2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___mutatorFunction3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Animate(fromValue, toValue, percentageFetcherFunction, mutatorFunction, EasingCurve.Linear);
		float L_0 = ___fromValue0;
		float L_1 = ___toValue1;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_2 = ___percentageFetcherFunction2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___mutatorFunction3;
		il2cpp_codegen_runtime_class_init_inline(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var);
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_4 = ((EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_StaticFields*)il2cpp_codegen_static_fields_for(EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0_il2cpp_TypeInfo_var))->___Linear_0;
		ValueAnimator_Animate_m297B932C26C12895CC3DCBD68F62444905F82960(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void ValueAnimator::Animate(System.Single,System.Single,System.Func`1<System.Single>,System.Action`1<System.Single>,EasingCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueAnimator_Animate_m297B932C26C12895CC3DCBD68F62444905F82960 (ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B* __this, float ___fromValue0, float ___toValue1, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___percentageFetcherFunction2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___mutatorFunction3, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___easingCurve4, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateWithRespectCoroutine(fromValue, toValue, percentageFetcherFunction, mutatorFunction, easingCurve));
		float L_0 = ___fromValue0;
		float L_1 = ___toValue1;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_2 = ___percentageFetcherFunction2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___mutatorFunction3;
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_4 = ___easingCurve4;
		RuntimeObject* L_5;
		L_5 = ValueAnimator_AnimateWithRespectCoroutine_m291A4402081F7FEDE15BE41ABB0016D8DB8D3242(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ValueAnimator::AnimateOverTimeCoroutine(System.Single,System.Single,System.Single,System.Action`1<System.Single>,EasingCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueAnimator_AnimateOverTimeCoroutine_m96D7C3510D5D6A780C8E956F59D937DCFD87E6DD (ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B* __this, float ___fromValue0, float ___toValue1, float ___timeSpanSeconds2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___mutatorFunction3, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___easingCurve4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* L_0 = (U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D*)il2cpp_codegen_object_new(U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D_il2cpp_TypeInfo_var);
		U3CAnimateOverTimeCoroutineU3Ed__4__ctor_m2409D11ED81CB3CD79A6385286AD466BC8A341DD(L_0, 0, NULL);
		U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* L_1 = L_0;
		float L_2 = ___fromValue0;
		L_1->___fromValue_4 = L_2;
		U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* L_3 = L_1;
		float L_4 = ___toValue1;
		L_3->___toValue_5 = L_4;
		U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* L_5 = L_3;
		float L_6 = ___timeSpanSeconds2;
		L_5->___timeSpanSeconds_2 = L_6;
		U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* L_7 = L_5;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8 = ___mutatorFunction3;
		L_7->___mutatorFunction_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___mutatorFunction_6), (void*)L_8);
		U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* L_9 = L_7;
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_10 = ___easingCurve4;
		L_9->___easingCurve_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___easingCurve_3), (void*)L_10);
		return L_9;
	}
}
// System.Collections.IEnumerator ValueAnimator::AnimateWithRespectCoroutine(System.Single,System.Single,System.Func`1<System.Single>,System.Action`1<System.Single>,EasingCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueAnimator_AnimateWithRespectCoroutine_m291A4402081F7FEDE15BE41ABB0016D8DB8D3242 (ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B* __this, float ___fromValue0, float ___toValue1, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___percentageFetcherFunction2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___mutatorFunction3, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___easingCurve4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* L_0 = (U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F*)il2cpp_codegen_object_new(U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F_il2cpp_TypeInfo_var);
		U3CAnimateWithRespectCoroutineU3Ed__5__ctor_m688815C97F2565851B9BB8411544B82446DB3294(L_0, 0, NULL);
		U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* L_1 = L_0;
		float L_2 = ___fromValue0;
		L_1->___fromValue_4 = L_2;
		U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* L_3 = L_1;
		float L_4 = ___toValue1;
		L_3->___toValue_5 = L_4;
		U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* L_5 = L_3;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_6 = ___percentageFetcherFunction2;
		L_5->___percentageFetcherFunction_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___percentageFetcherFunction_2), (void*)L_6);
		U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* L_7 = L_5;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8 = ___mutatorFunction3;
		L_7->___mutatorFunction_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___mutatorFunction_6), (void*)L_8);
		U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* L_9 = L_7;
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_10 = ___easingCurve4;
		L_9->___easingCurve_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___easingCurve_3), (void*)L_10);
		return L_9;
	}
}
// System.Void ValueAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueAnimator__ctor_mEC3919974F5BA2AED811D47017BA6A517B8FB579 (ValueAnimator_tE24FA20F60FBD9752738D1C1572BB35764F8C08B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ValueAnimator/<AnimateOverTimeCoroutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateOverTimeCoroutineU3Ed__4__ctor_m2409D11ED81CB3CD79A6385286AD466BC8A341DD (U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ValueAnimator/<AnimateOverTimeCoroutine>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateOverTimeCoroutineU3Ed__4_System_IDisposable_Dispose_m47AC75FE0BCE3B7CBFF1B76B862ECD53999DBB4F (U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ValueAnimator/<AnimateOverTimeCoroutine>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateOverTimeCoroutineU3Ed__4_MoveNext_m2E4FF0E6ADF55E0CEABD13FF6B7423F4D9946778 (U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// System.Diagnostics.Stopwatch stopwatch = new System.Diagnostics.Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_3, NULL);
		__this->___U3CstopwatchU3E5__2_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstopwatchU3E5__2_7), (void*)L_3);
		// stopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_4 = __this->___U3CstopwatchU3E5__2_7;
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_4, NULL);
	}

IL_002d:
	{
		// currentPercentage = (stopwatch.ElapsedMilliseconds / 1000F) / timeSpanSeconds;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_5 = __this->___U3CstopwatchU3E5__2_7;
		int64_t L_6;
		L_6 = Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF(L_5, NULL);
		float L_7 = __this->___timeSpanSeconds_2;
		__this->___U3CcurrentPercentageU3E5__3_8 = ((float)(((float)(((float)L_6)/(1000.0f)))/L_7));
		// float newValue = easingCurve.Apply(fromValue, toValue, currentPercentage);
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_8 = __this->___easingCurve_3;
		float L_9 = __this->___fromValue_4;
		float L_10 = __this->___toValue_5;
		float L_11 = __this->___U3CcurrentPercentageU3E5__3_8;
		float L_12;
		L_12 = EasingCurve_Apply_mBE44C31AECC613C499C28B16A1593EDA844F5C4A(L_8, L_9, L_10, L_11, NULL);
		V_1 = L_12;
		// mutatorFunction(newValue);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_13 = __this->___mutatorFunction_6;
		float L_14 = V_1;
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_13, L_14, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0086:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// } while (currentPercentage + float.Epsilon < 1);
		float L_15 = __this->___U3CcurrentPercentageU3E5__3_8;
		if ((((float)((float)il2cpp_codegen_add(L_15, (1.40129846E-45f)))) < ((float)(1.0f))))
		{
			goto IL_002d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ValueAnimator/<AnimateOverTimeCoroutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateOverTimeCoroutineU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m40FAA98D5D3A898CAC80E3DF467395FFA8076B5D (U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ValueAnimator/<AnimateOverTimeCoroutine>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateOverTimeCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m5BB405AEAB3E0CDE3A6A8C7B7B129E9AC96C089D (U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateOverTimeCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m5BB405AEAB3E0CDE3A6A8C7B7B129E9AC96C089D_RuntimeMethod_var)));
	}
}
// System.Object ValueAnimator/<AnimateOverTimeCoroutine>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateOverTimeCoroutineU3Ed__4_System_Collections_IEnumerator_get_Current_mA993C48EDBAD23702810AA8C3D854E8A69270200 (U3CAnimateOverTimeCoroutineU3Ed__4_t3753CFD3F7A9FF33C2F2828E32460F77319C5D1D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void ValueAnimator/<AnimateWithRespectCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateWithRespectCoroutineU3Ed__5__ctor_m688815C97F2565851B9BB8411544B82446DB3294 (U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ValueAnimator/<AnimateWithRespectCoroutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateWithRespectCoroutineU3Ed__5_System_IDisposable_Dispose_mA7E6D3B0FF764A312D032FAF31156A887594B1B9 (U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ValueAnimator/<AnimateWithRespectCoroutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateWithRespectCoroutineU3Ed__5_MoveNext_mB6AA8AE95686D8B08EB85FF86DD26482C8A853C8 (U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
			goto IL_0062;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0017:
	{
		// currentPercentage = percentageFetcherFunction();
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_3 = __this->___percentageFetcherFunction_2;
		float L_4;
		L_4 = Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline(L_3, NULL);
		__this->___U3CcurrentPercentageU3E5__2_7 = L_4;
		// float newValue = easingCurve.Apply(fromValue, toValue, currentPercentage);
		EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* L_5 = __this->___easingCurve_3;
		float L_6 = __this->___fromValue_4;
		float L_7 = __this->___toValue_5;
		float L_8 = __this->___U3CcurrentPercentageU3E5__2_7;
		float L_9;
		L_9 = EasingCurve_Apply_mBE44C31AECC613C499C28B16A1593EDA844F5C4A(L_5, L_6, L_7, L_8, NULL);
		V_1 = L_9;
		// mutatorFunction(newValue);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_10 = __this->___mutatorFunction_6;
		float L_11 = V_1;
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_10, L_11, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0062:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// } while (currentPercentage + float.Epsilon < 1);
		float L_12 = __this->___U3CcurrentPercentageU3E5__2_7;
		if ((((float)((float)il2cpp_codegen_add(L_12, (1.40129846E-45f)))) < ((float)(1.0f))))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ValueAnimator/<AnimateWithRespectCoroutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateWithRespectCoroutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF181C8E6246C082E0DFD17A3246CBC005D92C492 (U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ValueAnimator/<AnimateWithRespectCoroutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateWithRespectCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m3DFB71B35CD1F85D23E27E34B7DFC4DFE4AF7856 (U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateWithRespectCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m3DFB71B35CD1F85D23E27E34B7DFC4DFE4AF7856_RuntimeMethod_var)));
	}
}
// System.Object ValueAnimator/<AnimateWithRespectCoroutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateWithRespectCoroutineU3Ed__5_System_Collections_IEnumerator_get_Current_m924CF4F26D31F30AB65CC6212C9726FB9970E761 (U3CAnimateWithRespectCoroutineU3Ed__5_t7A0AA7E178BE7B57356D16BF196CADE876DE2F3F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void DrawDebug::Lines(UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDebug_Lines_mA605CA405A29AB96AD177B84DE2D2511A494592F (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___lines0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Lines(null, lines);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11));
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_0 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___lines0;
		il2cpp_codegen_runtime_class_init_inline(DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var);
		DrawDebug_Lines_mB51D609740B61294DA87F6670CC975F744D391EF(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DrawDebug::Lines(System.Nullable`1<UnityEngine.Color>,UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDebug_Lines_mB51D609740B61294DA87F6670CC975F744D391EF (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___lineColor0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___lines1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (lines == null)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___lines1;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// for (int i = 0; i < lines.Length; i++)
		V_0 = 0;
		goto IL_0094;
	}

IL_000b:
	{
		// Vector4 line = lines[i];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___lines1;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// if (lineColor.HasValue)
		bool L_5;
		L_5 = Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline((&___lineColor0), Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// Debug.DrawLine(new Vector3(line.x, line.y), new Vector3(line.z, line.w), lineColor.Value);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = V_1;
		float L_7 = L_6.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = V_1;
		float L_9 = L_8.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_10), L_7, L_9, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = V_1;
		float L_12 = L_11.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_1;
		float L_14 = L_13.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_15), L_12, L_14, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637((&___lineColor0), Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_10, L_15, L_16, NULL);
		goto IL_0090;
	}

IL_004c:
	{
		// Debug.DrawLine(new Vector3(line.x, line.y), new Vector3(line.z, line.w), Color.HSVToRGB(((i * 1) % 360) / 360F, 1, 1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_1;
		float L_18 = L_17.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = V_1;
		float L_20 = L_19.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_21), L_18, L_20, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22 = V_1;
		float L_23 = L_22.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = V_1;
		float L_25 = L_24.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_26), L_23, L_25, /*hidden argument*/NULL);
		int32_t L_27 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline(((float)(((float)((int32_t)(L_27%((int32_t)360))))/(360.0f))), (1.0f), (1.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_21, L_26, L_28, NULL);
	}

IL_0090:
	{
		// for (int i = 0; i < lines.Length; i++)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0094:
	{
		// for (int i = 0; i < lines.Length; i++)
		int32_t L_30 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_31 = ___lines1;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DrawDebug::Points(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDebug_Points_m0E764FF40FD135757B1D2DB881F14A443DE32C34 (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Points(defaultIconSize, defaultIconColor, points);
		il2cpp_codegen_runtime_class_init_inline(DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var);
		float L_0 = ((DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_StaticFields*)il2cpp_codegen_static_fields_for(DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var))->___defaultIconSize_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ((DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_StaticFields*)il2cpp_codegen_static_fields_for(DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var))->___defaultIconColor_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___points0;
		DrawDebug_Points_mB1E98EBCEFBDCC4AB2E5FD90E3495B82C1C5E46C(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void DrawDebug::Points(UnityEngine.Color,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDebug_Points_m3395ABFDE49F2F3849FAACD4771EE0A5FEF7D45B (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___iconColor0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Points(defaultIconSize, iconColor, points);
		il2cpp_codegen_runtime_class_init_inline(DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var);
		float L_0 = ((DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_StaticFields*)il2cpp_codegen_static_fields_for(DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var))->___defaultIconSize_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___iconColor0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___points1;
		DrawDebug_Points_mB1E98EBCEFBDCC4AB2E5FD90E3495B82C1C5E46C(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void DrawDebug::Points(System.Single,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDebug_Points_m010F75B87BADAF2BFB63898A4EB241F88B700794 (float ___iconSize0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Points(iconSize, Color.magenta, points);
		float L_0 = ___iconSize0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_2 = ___points1;
		il2cpp_codegen_runtime_class_init_inline(DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var);
		DrawDebug_Points_mB1E98EBCEFBDCC4AB2E5FD90E3495B82C1C5E46C(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void DrawDebug::Points(System.Single,UnityEngine.Color,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDebug_Points_mB1E98EBCEFBDCC4AB2E5FD90E3495B82C1C5E46C (float ___iconSize0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___iconColor1, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_4 = NULL;
	int32_t V_5 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (points == null)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___points2;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// Vector2 bottomLeft = new Vector2(-iconSize, -iconSize);
		float L_1 = ___iconSize0;
		float L_2 = ___iconSize0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((-L_1)), ((-L_2)), NULL);
		// Vector2 bottomRight = new Vector2(iconSize, -iconSize);
		float L_3 = ___iconSize0;
		float L_4 = ___iconSize0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_3, ((-L_4)), NULL);
		// Vector2 topLeft = new Vector2(-iconSize, iconSize);
		float L_5 = ___iconSize0;
		float L_6 = ___iconSize0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), ((-L_5)), L_6, NULL);
		// Vector2 topRight = new Vector2(iconSize, iconSize);
		float L_7 = ___iconSize0;
		float L_8 = ___iconSize0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), L_7, L_8, NULL);
		// foreach (Vector2 point in points)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = ___points2;
		V_4 = L_9;
		V_5 = 0;
		goto IL_0085;
	}

IL_0034:
	{
		// foreach (Vector2 point in points)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = V_4;
		int32_t L_11 = V_5;
		int32_t L_12 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_6 = L_13;
		// Debug.DrawLine(point + bottomLeft, point + topRight, iconColor);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_20, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___iconColor1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_17, L_21, L_22, NULL);
		// Debug.DrawLine(point + topLeft, point + bottomRight, iconColor);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_25, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_29, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = ___iconColor1;
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_26, L_30, L_31, NULL);
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0085:
	{
		// foreach (Vector2 point in points)
		int32_t L_33 = V_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_34 = V_4;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0034;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DrawDebug::Label(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDebug_Label_mEEE953E625D8FBFBB9252C0A3BE4152DE34A5BF3 (String_t* ___text0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DrawDebug::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawDebug__cctor_m6EF8A50B2A0F77FACD6D95EA23BE37032F3EEBB1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly float defaultIconSize = 0.005F;
		((DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_StaticFields*)il2cpp_codegen_static_fields_for(DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var))->___defaultIconSize_0 = (0.00499999989f);
		// static readonly Color defaultIconColor = Color.magenta;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		((DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_StaticFields*)il2cpp_codegen_static_fields_for(DrawDebug_tB1CABCED737095F76B15CDC01C2A111F62705FC8_il2cpp_TypeInfo_var))->___defaultIconColor_1 = L_0;
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
// UnityEngine.Collider2D[] Rigidbody2DExtensions::GetAllColliders(UnityEngine.Rigidbody2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* Rigidbody2DExtensions_GetAllColliders_mCB73A25462B2E73AACDFE41425BBD62431221BE7 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___self0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_0 = NULL;
	{
		// Collider2D[] colliders = new Collider2D[self.attachedColliderCount];
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___self0;
		int32_t L_1;
		L_1 = Rigidbody2D_get_attachedColliderCount_m3CA3496C4A5740059D36AEB2B64455778E03898C(L_0, NULL);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_2 = (Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034*)(Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034*)SZArrayNew(Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// self.GetAttachedColliders(colliders);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = ___self0;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_4 = V_0;
		int32_t L_5;
		L_5 = Rigidbody2D_GetAttachedColliders_m8BD4BF172EE5A599BF0E7403AA3D22BCA962717A(L_3, L_4, NULL);
		// return colliders;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_6 = V_0;
		return L_6;
	}
}
// System.Void Rigidbody2DExtensions::IgnoreCollision(UnityEngine.Rigidbody2D,UnityEngine.Collider2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2DExtensions_IgnoreCollision_m10423C212EC327FD22A85301D18CC8911F595502 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___self0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider1, bool ___ignore2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Collider2D[] colliders = self.GetAllColliders();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___self0;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_1;
		L_1 = Rigidbody2DExtensions_GetAllColliders_mCB73A25462B2E73AACDFE41425BBD62431221BE7(L_0, NULL);
		V_0 = L_1;
		// for (int colliderIndex = 0; colliderIndex < colliders.Length; colliderIndex++)
		V_1 = 0;
		goto IL_0019;
	}

IL_000b:
	{
		// Physics2D.IgnoreCollision(colliders[colliderIndex], collider, ignore);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6 = ___collider1;
		bool L_7 = ___ignore2;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Physics2D_IgnoreCollision_mA05835421D23AACF69E76082124F4F983B9E2BDD(L_5, L_6, L_7, NULL);
		// for (int colliderIndex = 0; colliderIndex < colliders.Length; colliderIndex++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0019:
	{
		// for (int colliderIndex = 0; colliderIndex < colliders.Length; colliderIndex++)
		int32_t L_9 = V_1;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Rigidbody2DExtensions::IgnoreCollision(UnityEngine.Rigidbody2D,UnityEngine.Rigidbody2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2DExtensions_IgnoreCollision_m3BD42AEFC1F8A045C7ADADC06E89C78E54A398AC (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___self0, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___other1, bool ___ignore2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_0 = NULL;
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Collider2D[] colliders = self.GetAllColliders();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = ___self0;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_1;
		L_1 = Rigidbody2DExtensions_GetAllColliders_mCB73A25462B2E73AACDFE41425BBD62431221BE7(L_0, NULL);
		V_0 = L_1;
		// Collider2D[] otherColliders = other.GetAllColliders();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = ___other1;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_3;
		L_3 = Rigidbody2DExtensions_GetAllColliders_mCB73A25462B2E73AACDFE41425BBD62431221BE7(L_2, NULL);
		V_1 = L_3;
		// for (int colliderIndex = 0; colliderIndex < colliders.Length; colliderIndex++)
		V_2 = 0;
		goto IL_0030;
	}

IL_0012:
	{
		// for (int otherColliderIndex = 0; otherColliderIndex < otherColliders.Length; otherColliderIndex++)
		V_3 = 0;
		goto IL_0026;
	}

IL_0016:
	{
		// Physics2D.IgnoreCollision(colliders[colliderIndex], otherColliders[otherColliderIndex], ignore);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_4 = V_0;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_8 = V_1;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		bool L_12 = ___ignore2;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Physics2D_IgnoreCollision_mA05835421D23AACF69E76082124F4F983B9E2BDD(L_7, L_11, L_12, NULL);
		// for (int otherColliderIndex = 0; otherColliderIndex < otherColliders.Length; otherColliderIndex++)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0026:
	{
		// for (int otherColliderIndex = 0; otherColliderIndex < otherColliders.Length; otherColliderIndex++)
		int32_t L_14 = V_3;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		// for (int colliderIndex = 0; colliderIndex < colliders.Length; colliderIndex++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0030:
	{
		// for (int colliderIndex = 0; colliderIndex < colliders.Length; colliderIndex++)
		int32_t L_17 = V_2;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// }
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
// System.Void Texture2DExtensions::Fill(UnityEngine.Texture2D,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DExtensions_Fill_mD3E2AF2563F72896C26B6F90386E0A0019E01503 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___self0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	{
		// FillRaw(self, color);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___self0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color1;
		Texture2DExtensions_FillRaw_m0A12AE57054EFA90786B2921A8026111AD449F85(L_0, L_1, NULL);
		// self.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___self0;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_2, NULL);
		// }
		return;
	}
}
// System.Void Texture2DExtensions::FillRaw(UnityEngine.Texture2D,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2DExtensions_FillRaw_m0A12AE57054EFA90786B2921A8026111AD449F85 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___self0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int x = 0; x < self.width; x++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		// for (int y = 0; y < self.height; y++)
		V_1 = 0;
		goto IL_0015;
	}

IL_0008:
	{
		// self.SetPixel(x, y, color);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___self0;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___color1;
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_0, L_1, L_2, L_3, NULL);
		// for (int y = 0; y < self.height; y++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for (int y = 0; y < self.height; y++)
		int32_t L_5 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___self0;
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int x = 0; x < self.width; x++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0022:
	{
		// for (int x = 0; x < self.width; x++)
		int32_t L_9 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___self0;
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector2Int Texture2DExtensions::GetDimensions(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Texture2DExtensions_GetDimensions_m2ACF850127BE70949DF405634CAE53DCBB27B1F1 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___self0, const RuntimeMethod* method) 
{
	{
		// return new Vector2Int(self.width, self.height);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___self0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___self0;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Texture2DExtensions::Contains(UnityEngine.Texture2D,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2DExtensions_Contains_m4E3B05376EC2FA9D78145E9CD30B3D8A03B4B85D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___self0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point1, const RuntimeMethod* method) 
{
	{
		// return point.x >= 0 && point.x < self.width &&
		//     point.y >= 0 && point.y < self.height;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___point1;
		float L_1 = L_0.___x_0;
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___point1;
		float L_3 = L_2.___x_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___self0;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		if ((!(((float)L_3) < ((float)((float)L_5)))))
		{
			goto IL_0039;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___point1;
		float L_7 = L_6.___y_1;
		if ((!(((float)L_7) >= ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___point1;
		float L_9 = L_8.___y_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___self0;
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		return (bool)((((float)L_9) < ((float)((float)L_11)))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Boolean Texture2DExtensions::Contains(UnityEngine.Texture2D,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2DExtensions_Contains_m574E5FFC57CAE57FAA27A32DDA80C83EBC2BEEE6 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___self0, float ___x1, float ___y2, const RuntimeMethod* method) 
{
	{
		// return x >= 0 && x < self.width &&
		//     y >= 0 && y < self.height;
		float L_0 = ___x1;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		float L_1 = ___x1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___self0;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		if ((!(((float)L_1) < ((float)((float)L_3)))))
		{
			goto IL_0025;
		}
	}
	{
		float L_4 = ___y2;
		if ((!(((float)L_4) >= ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		float L_5 = ___y2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___self0;
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		return (bool)((((float)L_5) < ((float)((float)L_7)))? 1 : 0);
	}

IL_0025:
	{
		return (bool)0;
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
// UnityEngine.Vector2 Vector2Extensions::ProjectOnto(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Extensions_ProjectOnto_mBF67DFA59CA4C3009E1B28A50B023DA9D3D6465C (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	{
		// return (Vector2.Dot(a, b) / b.sqrMagnitude) * b;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___b1;
		float L_2;
		L_2 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___b1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline(((float)(L_2/L_3)), L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Vector2Extensions::Orthogonal(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Extensions_Orthogonal_m2AF7231D7498D52175BC3386571C5EB289082895 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___self0, const RuntimeMethod* method) 
{
	{
		// return new Vector2(-self.y, self.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___self0;
		float L_1 = L_0.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___self0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((-L_1)), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 Vector2Extensions::Clone(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Extensions_Clone_m5295F2337E9A2F8152ACCBE87DFE6CA755159D0F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___self0, const RuntimeMethod* method) 
{
	{
		// return new Vector2(self.x, self.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___self0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___self0;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 Vector2Extensions::Add(UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Extensions_Add_m9837E18ADA609F554A0CD184D2AF80F4A9B5AD4F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___self0, float ___x1, float ___y2, const RuntimeMethod* method) 
{
	{
		// return new Vector2(self.x + x, self.y + y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___self0;
		float L_1 = L_0.___x_0;
		float L_2 = ___x1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___self0;
		float L_4 = L_3.___y_1;
		float L_5 = ___y2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_add(L_1, L_2)), ((float)il2cpp_codegen_add(L_4, L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 Vector2Extensions::Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Extensions_Multiply_m6BC7A00336C0FC1752175A0159928A73A471AF90 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___self0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___other1, const RuntimeMethod* method) 
{
	{
		// return new Vector2(self.x * other.x, self.y * other.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___self0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___other1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___self0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___other1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2 Vector2Extensions::WithX(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Extensions_WithX_m5A28C7F47AA5A9A66EAFE899F870C847C2289684 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___self0, float ___x1, const RuntimeMethod* method) 
{
	{
		// return new Vector2(x, self.y);
		float L_0 = ___x1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___self0;
		float L_2 = L_1.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector2 Vector2Extensions::WithY(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Extensions_WithY_m49991EA8F9B78F386FA2090066FFBF159B936623 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___self0, float ___y1, const RuntimeMethod* method) 
{
	{
		// return new Vector2(self.x, y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___self0;
		float L_1 = L_0.___x_0;
		float L_2 = ___y1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector4 Vector2Extensions::Concat(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector2Extensions_Concat_m6295229AC80CF933A530922FBC12313A34156655 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___self0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___other1, const RuntimeMethod* method) 
{
	{
		// return new Vector4(self.x, self.y, other.x, other.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___self0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___self0;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___other1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___other1;
		float L_7 = L_6.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Single Vector2Extensions::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Extensions_Dot_m764E1CB77F1A00F7884337BF0504BF00105AC5E0 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___self0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___other1, const RuntimeMethod* method) 
{
	{
		// return self.x * other.x + self.y * other.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___self0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___other1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___self0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___other1;
		float L_7 = L_6.___y_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
	}
}
// System.Single Vector2Extensions::AsScalarOf(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Extensions_AsScalarOf_m839694F62712ACACF24BEA025B0AD66AD627329F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___self0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___other1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// if (other.x != 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___other1;
		float L_1 = L_0.___x_0;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_001d;
		}
	}
	{
		// scalar = self.x / other.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___self0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___other1;
		float L_5 = L_4.___x_0;
		V_0 = ((float)(L_3/L_5));
		goto IL_0040;
	}

IL_001d:
	{
		// else if (other.y != 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___other1;
		float L_7 = L_6.___y_1;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_003a;
		}
	}
	{
		// scalar = self.y / other.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___self0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___other1;
		float L_11 = L_10.___y_1;
		V_0 = ((float)(L_9/L_11));
		goto IL_0040;
	}

IL_003a:
	{
		// return 0;
		return (0.0f);
	}

IL_0040:
	{
		// Vector2 scaledOther = other * scalar;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___other1;
		float L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_12, L_13, NULL);
		V_1 = L_14;
		// float tolerance = 1e-5F;
		V_2 = (9.99999975E-06f);
		// if (scaledOther.x - self.x < tolerance && scaledOther.y - self.y < tolerance)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		float L_16 = L_15.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___self0;
		float L_18 = L_17.___x_0;
		float L_19 = V_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_16, L_18))) < ((float)L_19))))
		{
			goto IL_0070;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_1;
		float L_21 = L_20.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = ___self0;
		float L_23 = L_22.___y_1;
		float L_24 = V_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_21, L_23))) < ((float)L_24))))
		{
			goto IL_0070;
		}
	}
	{
		// return scalar;
		float L_25 = V_0;
		return L_25;
	}

IL_0070:
	{
		// throw new InvalidOperationException("Vector parameter is not a scalar of target Vector");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_26 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23794BA5BEB5096CF6459849981BED8B988ACE04)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2Extensions_AsScalarOf_m839694F62712ACACF24BEA025B0AD66AD627329F_RuntimeMethod_var)));
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
// UnityEngine.Vector3 Vector3Extensions::WithX(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Extensions_WithX_m2ABDEA02D5E5FE99F6BFC2D3BCCE7BC80E92B9CE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, float ___newX1, const RuntimeMethod* method) 
{
	{
		// return new Vector3(newX, self.y, self.z);
		float L_0 = ___newX1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___self0;
		float L_2 = L_1.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___self0;
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector3 Vector3Extensions::WithY(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Extensions_WithY_m9DF2156D92FCC6CBBC11A2D42EB624742B46B5C0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, float ___newY1, const RuntimeMethod* method) 
{
	{
		// return new Vector3(self.x, newY, self.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___self0;
		float L_1 = L_0.___x_2;
		float L_2 = ___newY1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___self0;
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector3 Vector3Extensions::WithZ(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Extensions_WithZ_m7C4E183EFE57CC1B2444994ED84D72770BDCED03 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, float ___newZ1, const RuntimeMethod* method) 
{
	{
		// return new Vector3(self.x, self.y, newZ);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___self0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___self0;
		float L_3 = L_2.___y_3;
		float L_4 = ___newZ1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Int32 PathStack::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PathStack_get_Length_m0F09469E1D6CA048D79D508D35A75F47B5B43B9D (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisString_t_m498656AA08CF7218D7153CF70BC5E1110D19B7F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.tokens.Count();
		RuntimeObject* L_0 = __this->___tokens_1;
		int32_t L_1;
		L_1 = Enumerable_Count_TisString_t_m498656AA08CF7218D7153CF70BC5E1110D19B7F0(L_0, Enumerable_Count_TisString_t_m498656AA08CF7218D7153CF70BC5E1110D19B7F0_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void PathStack::.ctor(PathType,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathStack__ctor_mA9331036F3D4CD07846CD31A394884460C447418 (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, int32_t ___type0, RuntimeObject* ___initialPath1, const RuntimeMethod* method) 
{
	{
		// public PathStack(PathType type, IEnumerable<string> initialPath)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.type = type;
		int32_t L_0 = ___type0;
		__this->___type_0 = L_0;
		// this.tokens = initialPath;
		RuntimeObject* L_1 = ___initialPath1;
		__this->___tokens_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokens_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void PathStack::.ctor(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathStack__ctor_m8F760D08328728FAC2665345A828EA58F7A3474E (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, RuntimeObject* ___initialPath0, const RuntimeMethod* method) 
{
	{
		// public PathStack(IEnumerable<string> initialPath)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.type = PathType.Relative;
		__this->___type_0 = 1;
		// this.tokens = initialPath;
		RuntimeObject* L_0 = ___initialPath0;
		__this->___tokens_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokens_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void PathStack::.ctor(PathType,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathStack__ctor_mAF3B508F107C97088D3011DB3648DD4DEA72A472 (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, int32_t ___type0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___initialPath1, const RuntimeMethod* method) 
{
	{
		// public PathStack(PathType type, params string[] initialPath)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.type = type;
		int32_t L_0 = ___type0;
		__this->___type_0 = L_0;
		// this.tokens = initialPath;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___initialPath1;
		__this->___tokens_1 = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokens_1), (void*)(RuntimeObject*)L_1);
		// }
		return;
	}
}
// System.Void PathStack::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathStack__ctor_mEC7F13982D7693EA7294AF815DAC1B768841CEF8 (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___initialPath0, const RuntimeMethod* method) 
{
	{
		// public PathStack(params string[] initialPath)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.type = PathType.Relative;
		__this->___type_0 = 1;
		// this.tokens = initialPath;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___initialPath0;
		__this->___tokens_1 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokens_1), (void*)(RuntimeObject*)L_0);
		// }
		return;
	}
}
// PathStack PathStack::FromPathString(System.String,System.Nullable`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* PathStack_FromPathString_mBDD96A2651B112A2AC14B03AC7FB102B2D5120BA (String_t* ___pathString0, Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 ___pathDelimeter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_ToString_m762DAD85C39B2A0ABBC6B7FD5BE22FF69791BB09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFromPathStringU3Eb__8_0_m786D632346883AC63DF7C99325DD259966D0ED55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9BC21D183699107F1B46D82AF035D78EFF08A31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDCE3B5C3BE29A81D3B9E7888FA0BD94D8B4B464);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B4_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_1 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B3_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_1 = NULL;
	int32_t G_B7_0 = 0;
	{
		// if (!pathDelimeter.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_inline((&___pathDelimeter1), Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// pathDelimeter = Path.DirectorySeparatorChar;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE((&___pathDelimeter1), L_1, Nullable_1__ctor_m925B76A79F5C50FC6CCDB1C29526E908C8257ABE_RuntimeMethod_var);
	}

IL_0015:
	{
		// IEnumerable<string> tokens = pathString
		//   .Split(pathDelimeter.Value)
		//   .Where(token => token != null && token.Trim().Length > 0);
		String_t* L_2 = ___pathString0;
		Il2CppChar L_3;
		L_3 = Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6((&___pathDelimeter1), Nullable_1_get_Value_m55ED19C596AEEBD33764B97EC3893CC0695667E6_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, L_3, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_il2cpp_TypeInfo_var);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_5 = ((U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_il2cpp_TypeInfo_var);
		U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097* L_7 = ((U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_8 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CFromPathStringU3Eb__8_0_m786D632346883AC63DF7C99325DD259966D0ED55_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_9 = L_8;
		((U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0042:
	{
		RuntimeObject* L_10;
		L_10 = Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A((RuntimeObject*)G_B4_1, G_B4_0, Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A_RuntimeMethod_var);
		V_0 = L_10;
		// bool isAbsolute = pathString.Length > 0 && Regex.IsMatch(pathString, "^(" + pathDelimeter + "|\\w:)");
		String_t* L_11 = ___pathString0;
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_13 = ___pathString0;
		Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1 L_14 = ___pathDelimeter1;
		V_2 = L_14;
		String_t* L_15;
		L_15 = Nullable_1_ToString_m762DAD85C39B2A0ABBC6B7FD5BE22FF69791BB09((&V_2), Nullable_1_ToString_m762DAD85C39B2A0ABBC6B7FD5BE22FF69791BB09_RuntimeMethod_var);
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralFDCE3B5C3BE29A81D3B9E7888FA0BD94D8B4B464, L_15, _stringLiteralD9BC21D183699107F1B46D82AF035D78EFF08A31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Regex_IsMatch_m66D13054C7992322810B0CFC6B46AF11A927C9AA(L_13, L_16, NULL);
		G_B7_0 = ((int32_t)(L_17));
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = 0;
	}

IL_0078:
	{
		// if (isAbsolute)
		if (!G_B7_0)
		{
			goto IL_007e;
		}
	}
	{
		// type = PathType.Absolute;
		V_1 = 0;
		goto IL_0080;
	}

IL_007e:
	{
		// type = PathType.Relative;
		V_1 = 1;
	}

IL_0080:
	{
		// return new PathStack(type, tokens);
		int32_t L_18 = V_1;
		RuntimeObject* L_19 = V_0;
		PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* L_20 = (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193*)il2cpp_codegen_object_new(PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193_il2cpp_TypeInfo_var);
		PathStack__ctor_mA9331036F3D4CD07846CD31A394884460C447418(L_20, L_18, L_19, NULL);
		return L_20;
	}
}
// PathStack PathStack::Push(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* PathStack_Push_m1630D088F87BC8C1DECB2E183C9CCC777207956B (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___newTokens0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new PathStack(this.type, tokens.Concat(newTokens));
		int32_t L_0 = __this->___type_0;
		RuntimeObject* L_1 = __this->___tokens_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___newTokens0;
		RuntimeObject* L_3;
		L_3 = Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544(L_1, (RuntimeObject*)L_2, Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544_RuntimeMethod_var);
		PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* L_4 = (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193*)il2cpp_codegen_object_new(PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193_il2cpp_TypeInfo_var);
		PathStack__ctor_mA9331036F3D4CD07846CD31A394884460C447418(L_4, L_0, L_3, NULL);
		return L_4;
	}
}
// PathStack PathStack::Pop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* PathStack_Pop_m0AE5EAEC29085F0F004294027B9C4AC4F6308E15 (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisString_t_m79D0DCB46163AF537E1588860EEACEB89E5C46D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new PathStack(this.type, tokens.Reverse().Skip(number).Reverse());
		int32_t L_0 = __this->___type_0;
		RuntimeObject* L_1 = __this->___tokens_1;
		RuntimeObject* L_2;
		L_2 = Enumerable_Reverse_TisString_t_m79D0DCB46163AF537E1588860EEACEB89E5C46D6(L_1, Enumerable_Reverse_TisString_t_m79D0DCB46163AF537E1588860EEACEB89E5C46D6_RuntimeMethod_var);
		int32_t L_3 = ___number0;
		RuntimeObject* L_4;
		L_4 = Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D(L_2, L_3, Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D_RuntimeMethod_var);
		RuntimeObject* L_5;
		L_5 = Enumerable_Reverse_TisString_t_m79D0DCB46163AF537E1588860EEACEB89E5C46D6(L_4, Enumerable_Reverse_TisString_t_m79D0DCB46163AF537E1588860EEACEB89E5C46D6_RuntimeMethod_var);
		PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* L_6 = (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193*)il2cpp_codegen_object_new(PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193_il2cpp_TypeInfo_var);
		PathStack__ctor_mA9331036F3D4CD07846CD31A394884460C447418(L_6, L_0, L_5, NULL);
		return L_6;
	}
}
// System.String PathStack::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathStack_Peek_mA43F776A93E739E07090A5CE838FEEAB759CCBBB (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return tokens.Last();
		RuntimeObject* L_0 = __this->___tokens_1;
		String_t* L_1;
		L_1 = Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D(L_0, Enumerable_Last_TisString_t_mDA4E0C8C41AC3443C4FCA45618C86486DB1E784D_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean PathStack::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathStack_IsEmpty_m81094FA859BD08F109C397CCB9A62FC5FE4D8213 (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, const RuntimeMethod* method) 
{
	{
		// return this.Length == 0;
		int32_t L_0;
		L_0 = PathStack_get_Length_m0F09469E1D6CA048D79D508D35A75F47B5B43B9D(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.String PathStack::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathStack_ToString_m745BFAB986B7D112B3B850A0FAD7A5ECFF437229 (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string result = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (this.type == PathType.Absolute)
		int32_t L_0 = __this->___type_0;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		// result += Path.DirectorySeparatorChar;
		String_t* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, L_2, NULL);
		V_0 = L_3;
	}

IL_001f:
	{
		// result += string.Join(Path.DirectorySeparatorChar.ToString(), tokens.ToArray());
		String_t* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2), NULL);
		RuntimeObject* L_6 = __this->___tokens_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_6, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(L_5, L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, L_8, NULL);
		V_0 = L_9;
		// return result;
		String_t* L_10 = V_0;
		return L_10;
	}
}
// PathStack PathStack::op_Addition(PathStack,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* PathStack_op_Addition_m3F3E3FE1BE16EBE120090903F7980EFA0F0513E0 (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* ___self0, String_t* ___s1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self.Push(s);
		PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* L_0 = ___self0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___s1;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* L_4;
		L_4 = PathStack_Push_m1630D088F87BC8C1DECB2E183C9CCC777207956B(L_0, L_2, NULL);
		return L_4;
	}
}
// PathStack PathStack::op_Addition(PathStack,PathStack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* PathStack_op_Addition_m258EE9A9AEE7D08DA0E7D1DEB7D9FF275C8E31BC (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* ___self0, PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* ___other1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.type == PathType.Absolute)
		PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* L_0 = ___other1;
		int32_t L_1 = L_0->___type_0;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Cannot add absolute path to another path, you can only add ONTO Absolute Path Stacks");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EB7D9A08290F6A0D90BC58A15862A0E1AEBFCF5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PathStack_op_Addition_m258EE9A9AEE7D08DA0E7D1DEB7D9FF275C8E31BC_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return new PathStack(self.type, self.tokens.Concat(other.tokens));
		PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* L_3 = ___self0;
		int32_t L_4 = L_3->___type_0;
		PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* L_5 = ___self0;
		RuntimeObject* L_6 = L_5->___tokens_1;
		PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* L_7 = ___other1;
		RuntimeObject* L_8 = L_7->___tokens_1;
		RuntimeObject* L_9;
		L_9 = Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544(L_6, L_8, Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544_RuntimeMethod_var);
		PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193* L_10 = (PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193*)il2cpp_codegen_object_new(PathStack_t91FEC2CBAB6C25A56CBB1F43CFC5B0A2DBC1A193_il2cpp_TypeInfo_var);
		PathStack__ctor_mA9331036F3D4CD07846CD31A394884460C447418(L_10, L_4, L_9, NULL);
		return L_10;
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
// System.Void PathStack/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1103CF0EF75AE4AF3D08DDBEBBDE7F1DA067B186 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097* L_0 = (U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097*)il2cpp_codegen_object_new(U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mABEE1A84856BC4EA732243A0133C616F933A0827(L_0, NULL);
		((U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void PathStack/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mABEE1A84856BC4EA732243A0133C616F933A0827 (U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean PathStack/<>c::<FromPathString>b__8_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFromPathStringU3Eb__8_0_m786D632346883AC63DF7C99325DD259966D0ED55 (U3CU3Ec_t99B931369469AD111A5CB98401F34370682BD097* __this, String_t* ___token0, const RuntimeMethod* method) 
{
	{
		// .Where(token => token != null && token.Trim().Length > 0);
		String_t* L_0 = ___token0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = ___token0;
		String_t* L_2;
		L_2 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_1, NULL);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
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
// UnityEngine.Vector2 PointService::RandomPoint(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointService_RandomPoint_mA2B30B32894F7AA0D827EF95E8CA638B1F09FE02 (float ___minX0, float ___minY1, float ___maxX2, float ___maxY3, const RuntimeMethod* method) 
{
	{
		// return new Vector2(Random.Range(minX, maxX), Random.Range(minY, maxY));
		float L_0 = ___minX0;
		float L_1 = ___maxX2;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_0, L_1, NULL);
		float L_3 = ___minY1;
		float L_4 = ___maxY3;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_3, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 PointService::RandomPointInRadius(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointService_RandomPointInRadius_mAF59C50C32E8E3491A9B8B17373209B032029414 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, float ___radius1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return center + Random.insideUnitCircle.normalized * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___center0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Random_get_insideUnitCircle_mB2FE9BAA7DDF7FED2AA53EA4667F864747E20DA2(NULL);
		V_0 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_0), NULL);
		float L_3 = ___radius1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_2, L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 PointService::RandomValidPoint(System.Single,System.Single,System.Single,System.Single,UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointService_RandomValidPoint_m4CB14AF6C342286BB5169B720EA3A7AF7345C9F8 (float ___minX0, float ___minY1, float ___maxX2, float ___maxY3, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B4_0 = 0;
	{
		// bool isValid = false;
		V_0 = (bool)0;
		// Vector2? point = null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		goto IL_0042;
	}

IL_000c:
	{
		// point = PointService.RandomPoint(minX, minY, maxX, maxY);
		float L_0 = ___minX0;
		float L_1 = ___minY1;
		float L_2 = ___maxX2;
		float L_3 = ___maxY3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointService_RandomPoint_mA2B30B32894F7AA0D827EF95E8CA638B1F09FE02(L_0, L_1, L_2, L_3, NULL);
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&V_1), L_4, Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		// Collider2D collider = Physics2D.OverlapPoint(point.Value, mask);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7((&V_1), Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = ___mask4;
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_8;
		L_8 = Physics2D_OverlapPoint_mCCA9CD3A57E00F9673E1B93B16A3CEB0D46147D1(L_5, L_7, NULL);
		// isValid = collider == null && point.HasValue;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		bool L_10;
		L_10 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&V_1), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		G_B4_0 = ((int32_t)(L_10));
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		V_0 = (bool)G_B4_0;
	}

IL_0042:
	{
		// while (!isValid)
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_000c;
		}
	}
	{
		// return point.Value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7((&V_1), Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		return L_12;
	}
}
// UnityEngine.Vector2 PointService::RandomValidPointInRadius(UnityEngine.Vector2,System.Single,UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointService_RandomValidPointInRadius_mD20B883A5AABEF6474AD5B62DE0D2A12E4D3455F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, float ___radius1, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B4_0 = 0;
	{
		// bool isValid = false;
		V_0 = (bool)0;
		// Vector2? point = null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		goto IL_003f;
	}

IL_000c:
	{
		// point = PointService.RandomPointInRadius(center, radius);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___center0;
		float L_1 = ___radius1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointService_RandomPointInRadius_mAF59C50C32E8E3491A9B8B17373209B032029414(L_0, L_1, NULL);
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&V_1), L_2, Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		// Collider2D collider = Physics2D.OverlapPoint(point.Value, mask);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7((&V_1), Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = ___mask2;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6;
		L_6 = Physics2D_OverlapPoint_mCCA9CD3A57E00F9673E1B93B16A3CEB0D46147D1(L_3, L_5, NULL);
		// isValid = collider == null && point.HasValue;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline((&V_1), Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_003e;
	}

IL_003d:
	{
		G_B4_0 = 0;
	}

IL_003e:
	{
		V_0 = (bool)G_B4_0;
	}

IL_003f:
	{
		// while (!isValid)
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_000c;
		}
	}
	{
		// return point.Value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7((&V_1), Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		return L_10;
	}
}
// UnityEngine.Vector2 PointService::DropPointToGround(UnityEngine.Vector2,UnityEngine.LayerMask,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointService_DropPointToGround_mBA43AEF8A8C8222E86EDAC2FE0F6B4F75DA8CA52 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ground1, float ___distanceFromGround2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RaycastHit2D hitInfo = Physics2D.Raycast(point, Vector2.down, float.PositiveInfinity, ground);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___point0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2 = ___ground1;
		int32_t L_3;
		L_3 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_4;
		L_4 = Physics2D_Raycast_m5BF2A59AAEE0B488FB3ECD1D3AF3537FD7789E7F(L_0, L_1, (std::numeric_limits<float>::infinity()), L_3, NULL);
		V_0 = L_4;
		// return hitInfo.point + Vector2.up * distanceFromGround;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		float L_7 = ___distanceFromGround2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_6, L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_5, L_8, NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___target1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* MonoInstallerBase_get_Container_m4D8FF2EC36D5FD912A9423C164EBF05BE88662B8_inline (MonoInstallerBase_tC9E728244D33DC1422D07ED90DBDA2847A6F7E50* __this, const RuntimeMethod* method) 
{
	{
		// get { return _container; }
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_0 = __this->____container_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_firstSelectedGameObject_m15FB056EE7A99D8DD5891D40A6E3EF18719F0553_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FirstSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_FirstSelected_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CurrentSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentSelected_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ThreadContainer_get_MarkedForDeletion_mF32B657F2773F25A5B24F0E57A80101A181EE9BF_inline (ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.markedForDeletion; }
		bool L_0 = __this->___markedForDeletion_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WorkFinished_Invoke_mC615525E196AC39AD5C4F9E1248A087BFD36A3B0_inline (WorkFinished_tA6FBDFB3716BE0C55FEC545B468AD97A1AFD805B* __this, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA* ___threadContainer0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ThreadContainer_t14213900EB466B9A1A6DF2AAB739D04509B3F1CA*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___threadContainer0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Curve1_Invoke_m19B4D1096B6C73D60A5643F8F07F7E009B29A969_inline (Curve1_t4402334EE55DDB6E28AFCD4926474C73E87655E3* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curve0, float ___t1, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___curve0, ___t1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Curve2_Invoke_m40B88BB81D640222B19CF1DAC42B16D42DCD148D_inline (Curve2_t6F2F2AA534F1F3EF1C8C463EE7F288122B373A7C* __this, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveA0, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0* ___curveB1, float ___t2, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, EasingCurve_t3DC1E0E7446F70C83A7868DC941D1905B3C7E8A0*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___curveA0, ___curveB1, ___t2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___H0;
		float L_1 = ___S1;
		float L_2 = ___V2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF(L_0, L_1, L_2, (bool)1, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mC53581E703768BA2512A7C65283657C331994353_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a1;
		float L_1 = L_0.___x_0;
		float L_2 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a1;
		float L_4 = L_3.___y_1;
		float L_5 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___downVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9897CE72A58099ADB081E439D3A3EF0AA9CF5ED9_gshared_inline (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
