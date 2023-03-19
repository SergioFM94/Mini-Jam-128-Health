#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<Zenject.DiContainer>
struct Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8;
// System.Action`1<System.Reflection.FieldInfo>
struct Action_1_t85BF1C5A502E06C64F55E4BBB10F5147C08A24B1;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.ISignalHandler>>
struct Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF;
// System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.DiContainer/ProviderInfo>>
struct Dictionary_2_t988ECB582CD41C093FD55A374D496E6CF1652D83;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Object>
struct Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE;
// System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext>
struct Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76;
// System.Collections.Generic.Dictionary`2<System.Type,Zenject.ZenjectTypeInfo>
struct Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`2<System.Collections.Generic.List`1<Zenject.ISignalHandler>,System.Collections.Generic.IEnumerable`1<Zenject.ISignalHandler>>
struct Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3;
// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Boolean>
struct Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E;
// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32>
struct Func_2_tD52805B3429F12539373FEC711930A36A24A37D1;
// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type>
struct Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630;
// System.Func`2<System.Reflection.FieldInfo,System.String>
struct Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E;
// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>>
struct Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D;
// System.Func`2<UnityEngine.GameObject,System.Boolean>
struct Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C;
// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164;
// System.Func`2<System.Reflection.MethodInfo,System.Int32>
struct Func_2_t71765C126395C159B2E7E865B36871B1059E8C18;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Reflection.ParameterInfo,Zenject.InjectableInfo>
struct Func_2_tC62621E47817065D1808718363314932F0DD09EA;
// System.Func`2<Zenject.PostInjectableInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>>
struct Func_2_t7A911A55255256022EB742741E520F8931A733CC;
// System.Func`2<System.Reflection.PropertyInfo,System.Boolean>
struct Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74;
// System.Func`2<System.Type,Zenject.TypeValuePair>
struct Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629;
// System.Func`2<Zenject.InitializableManager/InitializableInfo,System.Int32>
struct Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8;
// System.Collections.Generic.IDictionary`2<UnityEngine.SceneManagement.Scene,System.Object>
struct IDictionary_2_tA149F4E6F71997E5ADF96E66BBFEDA7FBD3C5568;
// System.Collections.Generic.IDictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext>
struct IDictionary_2_t5C47574E630540D49F5CE2E2BBD9312BD8546772;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Zenject.ISignalHandler>>
struct IEnumerable_1_tF53E1E535983FDF6F36F46364E6E8B757367256B;
// System.Collections.Generic.IEnumerable`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>>
struct IEnumerable_1_tE8A64047BDE794490B5A208FEF6B1A9AC4002AE2;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t62CCC8C17677893BE99939DD1210D67697098FFC;
// System.Collections.Generic.IEnumerable`1<Zenject.DiContainer>
struct IEnumerable_1_t6427FCA2450FE3D8D9FE4C86056F324AE2963F82;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<Zenject.ISignalHandler>
struct IEnumerable_1_t7193570BA6E421A46F632ABC1A7DD17E209A79EF;
// System.Collections.Generic.IEnumerable`1<Zenject.ITickable>
struct IEnumerable_1_t1E0CDE6CB1A51B8CF7463FA3F097B1257E4307D0;
// System.Collections.Generic.IEnumerable`1<Zenject.InjectAttribute>
struct IEnumerable_1_t798C671F795FF2BF04C25A788B934F83C03502FA;
// System.Collections.Generic.IEnumerable`1<Zenject.InjectAttributeBase>
struct IEnumerable_1_t5F99A8DFDD50EC8DA7599B28A53276DD702522EF;
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>
struct IEnumerable_1_t62EA9E12363CABD7FF20BA1810FD5FB1AEAF365C;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t8E50A30565DC033F3BDF1627DA5A9C930C1E0DB9;
// System.Collections.Generic.IEnumerable`1<Zenject.PostInjectableInfo>
struct IEnumerable_1_t8494E00DF4DC407774B11615FAA25726F3644F46;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t4F5FCDEAC3CEC5489B3CEE5871FC5F9D22C281EE;
// System.Collections.Generic.IEnumerable`1<UnityEngine.SceneManagement.Scene>
struct IEnumerable_1_t80FA8C12E50004BDAC9E4244C00383855E527395;
// System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>
struct IEnumerable_1_t44C442169CAFB74959D118C4BA3C141F2376513F;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair>
struct IEnumerable_1_t652EED2BF7DA1D1AA6429FD7803F78C4CCCDC7B6;
// System.Collections.Generic.IEnumerable`1<Zenject.InitializableManager/InitializableInfo>
struct IEnumerable_1_t6FD270BD53BBF240A56D0E485196C12F8309017A;
// System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>
struct IEnumerator_1_tD1E868EC4EE9679F2F2D4F9F10CEAB9153B8C991;
// System.Collections.Generic.IEnumerator`1<Zenject.InjectableInfo>
struct IEnumerator_1_t09BBDFE9656841B4DB8A7C6F48CDB0F2D55783F8;
// System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>
struct IEnumerator_1_t5DB30F59007139D6E8222133A68763E967465D72;
// System.Collections.Generic.IEnumerator`1<UnityEngine.SceneManagement.Scene>
struct IEnumerator_1_tBC12B12B96ECDA29A046F7F27F267286BE754EFA;
// System.Collections.Generic.IEnumerator`1<Zenject.SceneContext>
struct IEnumerator_1_t9D6429EAACC09F2377DCE637394958198CCCF3ED;
// System.Collections.Generic.IEqualityComparer`1<Zenject.BindingId>
struct IEqualityComparer_1_t3B39ABC8472056191C4144EE4B05AAE267C79056;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.SceneManagement.Scene>
struct IEqualityComparer_1_tCB40CA97216A7275134FFB53EA1B7D8DC815E139;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IList`1<Zenject.ISignalHandler>
struct IList_1_t630ED40F037EE8DEF88480A74BD5592C361A47EE;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Linq.IOrderedEnumerable`1<System.Reflection.MethodInfo>
struct IOrderedEnumerable_1_t6D37AEE7FEE9EECE6DF920A6D0D3B3CED73BB385;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// System.Linq.IOrderedEnumerable`1<Zenject.InitializableManager/InitializableInfo>
struct IOrderedEnumerable_1_tC9E33571C7A409E38939368DF7BAB86DAB229B7D;
// Zenject.Installer`1<Zenject.ActionInstaller>
struct Installer_1_t9C8C1E92ED9900E789E7207FFBCA555A776AC324;
// Zenject.Installer`1<System.Object>
struct Installer_1_t2A3E1279140FAED73AEDAE0DAF5B2CA269286ADF;
// Zenject.Installer`2<System.Collections.Generic.List`1<System.Type>,Zenject.ExecutionOrderInstaller>
struct Installer_2_t68BD527F5A221F90CCF2411322361606E65183F1;
// Zenject.Installer`2<System.Object,System.Object>
struct Installer_2_tABD2AB4AD686328EA02BC7E1FC965CD2ED86BDE3;
// System.Collections.Generic.Dictionary`2/KeyCollection<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.ISignalHandler>>
struct KeyCollection_t5C6BED39372D9C24A8768AD69E576A49EEC3A9DC;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.SceneManagement.Scene,Zenject.SceneContext>
struct KeyCollection_t064E128B17C8476ACC35A279DDBD046015879FF1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Zenject.ZenjectTypeInfo>
struct KeyCollection_t0F3AD0EB124D6197C79916F5114D673DB4F28B98;
// System.Collections.Generic.LinkedList`1<Zenject.TaskUpdater`1/TaskInfo<Zenject.IFixedTickable>>
struct LinkedList_1_tE63E6854501BFDA12B5467DC41937C8F5B36062C;
// System.Collections.Generic.LinkedList`1<Zenject.TaskUpdater`1/TaskInfo<Zenject.ILateTickable>>
struct LinkedList_1_tB13F8C480D02DE8032D3A5BE7D8211A16B6F9935;
// System.Collections.Generic.LinkedList`1<Zenject.TaskUpdater`1/TaskInfo<Zenject.ITickable>>
struct LinkedList_1_t45F5E239BD001EC2238FE986E1E03900E35EC8B4;
// System.Collections.Generic.List`1<Zenject.TaskUpdater`1/TaskInfo<Zenject.IFixedTickable>>
struct List_1_tBE94BAFE59BD6E97F33FADB021943D9762475958;
// System.Collections.Generic.List`1<Zenject.TaskUpdater`1/TaskInfo<Zenject.ILateTickable>>
struct List_1_tDAC5BE0E3C8C102CDAB916F78B675B71CA7557FB;
// System.Collections.Generic.List`1<Zenject.TaskUpdater`1/TaskInfo<Zenject.ITickable>>
struct List_1_t6F2AA65A5081115C33B9184CEDE48ECDDF286087;
// System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>>
struct List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC;
// System.Collections.Generic.List`1<Zenject.DiContainer>
struct List_1_tBAB5173AA04562C93B884EBAB822FE5471345CE8;
// System.Collections.Generic.List`1<System.Reflection.FieldInfo>
struct List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7;
// System.Collections.Generic.List`1<Zenject.IBindingFinalizer>
struct List_1_t787076ABDCA9B3A4F32FF152B992D2730EE7CE23;
// System.Collections.Generic.List`1<Zenject.IFixedTickable>
struct List_1_t75860E9D5BFCA97BA71BABFD4FD00310E5FBED51;
// System.Collections.Generic.List`1<Zenject.IInitializable>
struct List_1_tF803B1C71B931118205808A1CB0B2C32CB4E0BD9;
// System.Collections.Generic.List`1<Zenject.ILateTickable>
struct List_1_t478793A356A38C441F4D2905E82955E27C636133;
// System.Collections.Generic.List`1<Zenject.ILazy>
struct List_1_t0C3FEBDA4EC2A8ABA78426FBD80DBD8705FC8467;
// System.Collections.Generic.List`1<Zenject.IMemoryPool>
struct List_1_t1187A154B962750DCED10BBEBA9DB0C50B4AA8B0;
// System.Collections.Generic.List`1<Zenject.ISignalHandler>
struct List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E;
// System.Collections.Generic.List`1<Zenject.ITickable>
struct List_1_t32C173F10D76C02DB552E9A30C59B4E1C6AEB482;
// System.Collections.Generic.List`1<Zenject.InjectAttributeBase>
struct List_1_tCBE4B2163152CB0A4722667AA65591B659F4B906;
// System.Collections.Generic.List`1<Zenject.InjectableInfo>
struct List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219;
// System.Collections.Generic.List`1<Zenject.InstallerBase>
struct List_1_t3262082430AFC7478C4241D42F4C6FF18FFCDE31;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB;
// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81;
// System.Collections.Generic.List`1<Zenject.MonoInstaller>
struct List_1_t6FFC5A20CA46741CD91AB9AF39F5E5A6D5258148;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Zenject.PostInjectableInfo>
struct List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC;
// System.Collections.Generic.List`1<Zenject.SceneContext>
struct List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927;
// System.Collections.Generic.List`1<Zenject.SceneDecoratorContext>
struct List_1_t439A50ED63829BF9CA96BA904926AB09015C3B54;
// System.Collections.Generic.List`1<Zenject.ScriptableObjectInstaller>
struct List_1_t5F894C40E621830FE428E35C211C1EE0404B5878;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
// System.Collections.Generic.List`1<Zenject.TypeValuePair>
struct List_1_tE4CB9AB1202E30A4175B37378F6F0A884213B6FB;
// System.Collections.Generic.List`1<Zenject.DisposableManager/DisposableInfo>
struct List_1_tFAD1FC2959695B0AA01CAA60013AF46ABBF3D7A1;
// System.Collections.Generic.List`1<Zenject.DisposableManager/LateDisposableInfo>
struct List_1_tE20A067F4778E1FD895C5DE06F91E1AF91D7AEFC;
// System.Collections.Generic.List`1<Zenject.InitializableManager/InitializableInfo>
struct List_1_t69EF27975B43588D2A19A62492BF754E60E49D13;
// System.Collections.Generic.Queue`1<Zenject.IBindingFinalizer>
struct Queue_1_t3E14233FCF507E6137F31676BE8CF810E2E1B726;
// System.Collections.Generic.Stack`1<Zenject.DiContainer/LookupId>
struct Stack_1_t36B44E77205D301E7643CF522922A95A66EDA879;
// Zenject.TaskUpdater`1<Zenject.IFixedTickable>
struct TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7;
// Zenject.TaskUpdater`1<Zenject.ILateTickable>
struct TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29;
// Zenject.TaskUpdater`1<Zenject.ITickable>
struct TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47;
// Zenject.TaskUpdater`1<System.Object>
struct TaskUpdater_1_tDACEFEFB336EEDCE7B96314045D6A1A1BACBD889;
// System.Collections.Generic.Dictionary`2/ValueCollection<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.ISignalHandler>>
struct ValueCollection_t14750C19FE145094F0DE0C5874257AE3FB8FF1EB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.SceneManagement.Scene,Zenject.SceneContext>
struct ValueCollection_tC5B7D90D39B8E851270054E7A71C16A3361C4F8B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Zenject.ZenjectTypeInfo>
struct ValueCollection_t43A0B40A450D3E7FE47386AEF09371C18A4BEEAA;
// ModestTree.Util.ValuePair`2<System.Type,System.Int32>
struct ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.ISignalHandler>>[]
struct EntryU5BU5D_tC4770374383BDF1D9A1E33C7F017F300285A262F;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.SceneManagement.Scene,Zenject.SceneContext>[]
struct EntryU5BU5D_t2ECF769FA21FF9BE253969015660E57F015E46F2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Zenject.ZenjectTypeInfo>[]
struct EntryU5BU5D_t63B55F8C8193CC3BC1FFC46B519B70DACDEA6374;
// ModestTree.Util.ValuePair`2<System.Type,System.Int32>[]
struct ValuePair_2U5BU5D_t1A8C7DACBDA359C6FD7996D9DE06A692949FD51A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Zenject.DiContainer[]
struct DiContainerU5BU5D_t5FA4C878B60C69868A9D2192B4D63D4925F49038;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// Zenject.IFixedTickable[]
struct IFixedTickableU5BU5D_tA8B4928A1CCA0EE11B14D9A3B94E94BA41670621;
// Zenject.IInitializable[]
struct IInitializableU5BU5D_t38B97B13EBB5B19614EBDF80F3E4123690FCFA91;
// Zenject.ILateTickable[]
struct ILateTickableU5BU5D_t2DE8DCD97BF3AD6555D175BE1E2AA91A85B1AD6D;
// Zenject.IMemoryPool[]
struct IMemoryPoolU5BU5D_t82E4B9737E48EB50214A5F7647E1DE417A2A6127;
// Zenject.ISignalHandler[]
struct ISignalHandlerU5BU5D_tC2F91F0037CC8DED9BBA43782C1AE09A10E9E898;
// Zenject.ITickable[]
struct ITickableU5BU5D_t9CDC2EBEF5887DD1242C5808E663086C2653E6C6;
// Zenject.InjectAttributeBase[]
struct InjectAttributeBaseU5BU5D_t0848299D53D277909B7873FD8B2E145655A0700A;
// Zenject.InjectableInfo[]
struct InjectableInfoU5BU5D_tADD1D9C0135AD320B30E832F4615A199FFEDAF7F;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Zenject.PostInjectableInfo[]
struct PostInjectableInfoU5BU5D_tBCC0D7069B3FA986F5F64A45AD06D9C741351C23;
// Zenject.SceneContext[]
struct SceneContextU5BU5D_tB07CF537D54DA9E1CB105F3EBA725E51EAF87611;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Zenject.TypeValuePair[]
struct TypeValuePairU5BU5D_t66FF4A9586061A1105D3EB2C090C761005EA31E4;
// Zenject.InitializableManager/InitializableInfo[]
struct InitializableInfoU5BU5D_tBB8DD5931BE97DC4EAAD5A797930814B8413D8E4;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Zenject.ActionInstaller
struct ActionInstaller_t01973575DCFE24B103632DAA2627465AA4DFA3DC;
// Zenject.ArgConditionCopyNonLazyBinder
struct ArgConditionCopyNonLazyBinder_t02E8730F99239DEE447A998767E1AA93D54CE726;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Zenject.BindFinalizerWrapper
struct BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920;
// Zenject.BindInfo
struct BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Zenject.BindingCondition
struct BindingCondition_t15737FAF5CEC1F330D6F0B318D2DCA38D007F1EE;
// Zenject.BindingId
struct BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Zenject.ConcreteBinderNonGeneric
struct ConcreteBinderNonGeneric_tF46BE25BEF7E538CAB5A72A81F0EDA097DF7A833;
// Zenject.ConcreteIdBinderNonGeneric
struct ConcreteIdBinderNonGeneric_tA44CBAEC077725C86E7E973931742EA755F05511;
// Zenject.ConditionCopyNonLazyBinder
struct ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// Zenject.Context
struct Context_tC1C23E7580DABAD04E4E86549B17439509D41AEC;
// Zenject.DefaultGameObjectKernel
struct DefaultGameObjectKernel_t91D548644E7C32D3FE9E39C7743A3939A92BE7F1;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Zenject.DiContainer
struct DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D;
// Zenject.DisposableManager
struct DisposableManager_t8F1BDD7CD4AC974A6E1F1E201B729F8D3BD7768C;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// Zenject.ExecutionOrderInstaller
struct ExecutionOrderInstaller_tE8943D79999952936239B341E2702BAC080E68AC;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Zenject.FixedTickablesTaskUpdater
struct FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362;
// Zenject.FromBinderNonGeneric
struct FromBinderNonGeneric_tBF219737E8A3BCB902999D7F4E91C3346E7ED771;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Zenject.IBindingFinalizer
struct IBindingFinalizer_tD43606826C152368C735B6E9BD751448F8EE8CF4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Zenject.IFixedTickable
struct IFixedTickable_tE8A5EE2A00E8864CD7650FF74246894ED684D8A8;
// Zenject.IInitializable
struct IInitializable_t6F7E396A96DB8CC4C5CE8E02DC8B4DB545961A75;
// Zenject.ILateTickable
struct ILateTickable_t3238FE6BE7CD7D3A90F3E242D8696DE02934DB39;
// Zenject.IMemoryPool
struct IMemoryPool_t0FEAD58136C81F0EF2194A5C02CBE6E5222FAD76;
// Zenject.ISignalHandler
struct ISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703;
// Zenject.ITickable
struct ITickable_tE2FB17D0E5590B6C0EDBA19B2F7E0AF24DBA661D;
// Zenject.InitializableManager
struct InitializableManager_t61FEBDD9E6DC9697D92D67E17123AF4C53139EDA;
// Zenject.InjectAttribute
struct InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F;
// Zenject.InjectAttributeBase
struct InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA;
// Zenject.InjectLocalAttribute
struct InjectLocalAttribute_tBCAD986851767FC02B30F75880232912172D533E;
// Zenject.InjectOptionalAttribute
struct InjectOptionalAttribute_t92089F243CECC33394438DC46F192F9B95A500FA;
// Zenject.InjectableInfo
struct InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201;
// Zenject.InstallerBase
struct InstallerBase_t96B3BE01124AD212055DEE639E0DB966D2465EBC;
// Zenject.Kernel
struct Kernel_t489C8EA295AB206A7F16ADEFBD72776E7E7E2940;
// Zenject.LateTickablesTaskUpdater
struct LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4;
// Zenject.LazyInstanceInjector
struct LazyInstanceInjector_t2AA44260100D467072B2694FC38FFFF8C6C646F7;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Zenject.MonoKernel
struct MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D;
// Zenject.NonLazyBinder
struct NonLazyBinder_t9FD4DEB05CE8E09EE16E5566508D881816228AF0;
// RedBlueGames.NotNull.NotNullViolation
struct NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Zenject.NullBindingFinalizer
struct NullBindingFinalizer_t4607F719F1E7804CE699E388A3FDE0041AFDABAF;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// Zenject.PoolCleanupChecker
struct PoolCleanupChecker_t8C3ADDFD4B19D2E886E58B7F3F279E4B6E7AFD5F;
// Zenject.PostInjectableInfo
struct PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434;
// ModestTree.Util.PreserveAttribute
struct PreserveAttribute_t84A5B8674170AA91A860FA7A8641869914D2E21A;
// Zenject.ProfileBlock
struct ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15;
// Zenject.ProjectContext
struct ProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825;
// Zenject.ProjectKernel
struct ProjectKernel_t995911BE6D433E9F016917A4B1638126A90D8EBD;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Zenject.SceneContext
struct SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154;
// Zenject.SceneContextRegistry
struct SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56;
// Zenject.SceneContextRegistryAdderAndRemover
struct SceneContextRegistryAdderAndRemover_t5507E184D0AA356F47AA946F7BBD4054EE31CAF5;
// Zenject.SceneKernel
struct SceneKernel_tECE939AAB7ABD8F8FCA1EB0526FE903EE63178E8;
// Zenject.ScopeArgConditionCopyNonLazyBinder
struct ScopeArgConditionCopyNonLazyBinder_t26365631A16C2AD0B91FBA23A1E699B5A695491A;
// Zenject.SignalBase
struct SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869;
// Zenject.SignalBinder
struct SignalBinder_tA7C7F1AF1EBEC2E1D82BB2181C284E4805812586;
// Zenject.SignalBinderWithId
struct SignalBinderWithId_t5F0CC220AD7CF57338E5EADB804DFB5751B1C65B;
// Zenject.SignalHandlerBase
struct SignalHandlerBase_tBBD7D21C6134FB970E6A44B4D833112E83D81DD1;
// Zenject.SignalHandlerBinder
struct SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF;
// Zenject.SignalHandlerBinderWithId
struct SignalHandlerBinderWithId_tAC0626864984388C37A79B295ACD61C575F58A2A;
// Zenject.SignalManager
struct SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4;
// Zenject.SignalSettings
struct SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1;
// Zenject.SingletonMarkRegistry
struct SingletonMarkRegistry_t31E4D8E5D2D3D1DC2D94CE1ECC9903DF5210A4C8;
// Zenject.SingletonProviderCreator
struct SingletonProviderCreator_t3415DFD4C08FF9090E0E34531F37CD93BA6CBA9A;
// Zenject.StaticMethodSignalHandler
struct StaticMethodSignalHandler_t0CE0BEF81B871FDCC3DF52D425A2897EF04EF9C7;
// System.String
struct String_t;
// Zenject.TickableManager
struct TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0;
// Zenject.TickablesTaskUpdater
struct TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Zenject.TypeValuePair
struct TypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A;
// Zenject.ValidationMarker
struct ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Zenject.ZenAutoInjecter
struct ZenAutoInjecter_t3DAFF7852AA15BFFF5395DA6A23D2BA25C648FB9;
// Zenject.Internal.ZenUtilInternal
struct ZenUtilInternal_tE43BA8A707652E95F7822C823FDFD9ED91A1F4D1;
// Zenject.ZenjectAllowDuringValidationAttribute
struct ZenjectAllowDuringValidationAttribute_tBEFAC4FE26C46EAACFB698791563B4475E916956;
// Zenject.ZenjectException
struct ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9;
// Zenject.ZenjectSceneLoader
struct ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C;
// Zenject.ZenjectTypeInfo
struct ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D;
// Zenject.InitializableManager/<>c
struct U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF;
// Zenject.InitializableManager/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518;
// Zenject.InitializableManager/InitializableInfo
struct InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// Zenject.SignalManager/<>c
struct U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80;
// Zenject.TickableManager/<>c
struct U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3;
// Zenject.TickableManager/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0;
// Zenject.TickableManager/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C;
// Zenject.TickableManager/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA;
// Zenject.TypeAnalyzer/<>c
struct U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05;
// Zenject.TypeAnalyzer/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150;
// Zenject.TypeAnalyzer/<>c__DisplayClass10_1
struct U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481;
// Zenject.TypeAnalyzer/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t45B39717DBA5C541CBC86278F9AA8E119EA74BF5;
// Zenject.TypeAnalyzer/<>c__DisplayClass11_1
struct U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343;
// Zenject.TypeAnalyzer/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C;
// Zenject.TypeAnalyzer/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF;
// Zenject.TypeAnalyzer/<GetFieldInjectables>d__8
struct U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738;
// Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7
struct U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539;
// Zenject.ValidationUtil/<>c
struct U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F;
// Zenject.Internal.ZenUtilInternal/<>c
struct U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3;
// Zenject.Internal.ZenUtilInternal/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560;
// Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3
struct U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4;
// Zenject.ZenjectTypeInfo/<>c
struct U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t85BF1C5A502E06C64F55E4BBB10F5147C08A24B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContainerSources_t3E0F8969ECB86611F1AAF8FEE47710898A2B2CC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiContainerU5BU5D_t5FA4C878B60C69868A9D2192B4D63D4925F49038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t71765C126395C159B2E7E865B36871B1059E8C18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7A911A55255256022EB742741E520F8931A733CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC62621E47817065D1808718363314932F0DD09EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD52805B3429F12539373FEC711930A36A24A37D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4F5FCDEAC3CEC5489B3CEE5871FC5F9D22C281EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t80FA8C12E50004BDAC9E4244C00383855E527395_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5DB30F59007139D6E8222133A68763E967465D72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t69908BE263733D5C3989BAC671BE4067F7FE66E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBC12B12B96ECDA29A046F7F27F267286BE754EFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBF08A45CFD58B2A76F18AFEE729870000EDAF4FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD1E868EC4EE9679F2F2D4F9F10CEAB9153B8C991_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFixedTickable_tE8A5EE2A00E8864CD7650FF74246894ED684D8A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInitializable_t6F7E396A96DB8CC4C5CE8E02DC8B4DB545961A75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILateTickable_t3238FE6BE7CD7D3A90F3E242D8696DE02934DB39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMemoryPool_t0FEAD58136C81F0EF2194A5C02CBE6E5222FAD76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITickable_tE2FB17D0E5590B6C0EDBA19B2F7E0AF24DBA661D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t69EF27975B43588D2A19A62492BF754E60E49D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadSceneRelationship_t7616F264B3266B6F976690ADE485DDAB6EB4224F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullBindingFinalizer_t4607F719F1E7804CE699E388A3FDE0041AFDABAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignalBinderWithId_t5F0CC220AD7CF57338E5EADB804DFB5751B1C65B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t45B39717DBA5C541CBC86278F9AA8E119EA74BF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0657AE03216D7B62127980A8B8375B5629121F89;
IL2CPP_EXTERN_C String_t* _stringLiteral0A53977DBEC9B77F6494B4D291E1205A97B43808;
IL2CPP_EXTERN_C String_t* _stringLiteral21535F5C39DF909FA40E00126F39C7152AB21669;
IL2CPP_EXTERN_C String_t* _stringLiteral2A43CDA85B148CFB0D1B1CAB2C18DA697D1E16A6;
IL2CPP_EXTERN_C String_t* _stringLiteral5F144EDE244D7BEAE87CA17D6BF54B03D20322EF;
IL2CPP_EXTERN_C String_t* _stringLiteral6089A66607AC9D045E4E58C264ABDED66F7E1BC4;
IL2CPP_EXTERN_C String_t* _stringLiteral78EA9E436F801D766A6FA7A3B2073268348DB4CD;
IL2CPP_EXTERN_C String_t* _stringLiteral7A3297D1F0A61EE9E7172E216D036D99552F3FF4;
IL2CPP_EXTERN_C String_t* _stringLiteral7A8C6825293E553A8AFF2DCC22FC7B931D434290;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8BC5A066D2B60F19507DE6B9044D0AC239DEECA7;
IL2CPP_EXTERN_C String_t* _stringLiteral8C26C79FFDDEF904377DCE5F0DE99E35789E52C8;
IL2CPP_EXTERN_C String_t* _stringLiteral8D35009E18A15CB7584F10CFB9BF2C2733DFD0BB;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteralA00507757DC3B7E80550592F47FC777DA207F289;
IL2CPP_EXTERN_C String_t* _stringLiteralA6C812691CE65C686F6D5DD7768D42F4C5AC85FA;
IL2CPP_EXTERN_C String_t* _stringLiteralA833A387FD4E1FEB35B3FAD864CA1A87928CA4DB;
IL2CPP_EXTERN_C String_t* _stringLiteralD7AE5B29C30D381703922F71CE2120EBBEC3C12A;
IL2CPP_EXTERN_C String_t* _stringLiteralDDC8F96BC8D3A322AE3FD87A66DF249F5EE9A6F8;
IL2CPP_EXTERN_C const RuntimeMethod* ArgConditionCopyNonLazyBinder_WithArguments_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisBindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB_m0553C0811F5446AB1F9DFC9FB55186B967B26DB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArgConditionCopyNonLazyBinder_WithArguments_TisSignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1_TisBindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA_mB3E05DCBDA18BFE1C360EDA5A2AD7FF46945C22E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcreteBinderNonGeneric_To_TisStaticMethodSignalHandler_t0CE0BEF81B871FDCC3DF52D425A2897EF04EF9C7_m2B763D956A36187FC01CC3927BA855F102BB8C6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiContainer_Resolve_TisSceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56_mAE036D230C80FD5081A68BB54669DB6939E506D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m307D7B9BDF22CCA0754F51B5463F8E7893502553_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m354999475B3E592D5FD1002C079D1AD9C3EFECB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB8BD2766957B69A0CF92E9F0B5AB1B636782657A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m007CD046F6CDC638D4B9670FF1B55BFAC3572538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mCDDBCDF80DD1D831234154B9ACE5B5754C33C91A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDDC68F40977530973C19178FA4459CC436B781AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0D9B4680D7C4F067B8F56834D97D631912B50627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m36EB4DB335562EFCD7104246495C03C143908566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB8323C7B23E4D89188A6FFF8E4596EA9159907EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m0DEE85EEEA5A8AD7500040A00859EA487136516A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m0815DC1E2AAF01134EDA89730FB730382B3CF94A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisFieldInfo_t_m120E54771AE0057A93898EEE26A589F0C5B5AC6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisFieldInfo_t_m9AEDE6D6F93B3FC8B7AC51B7D87E1DDBEDDF1485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m64315434DB7EAF42E2A44B55EF9285E16E08DA63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisType_t_m35B23F074726B58C605EC26DB7F2AE1C3A55713A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mD0DC6AA54A655F96022C9AB1E375221D58E34E1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Distinct_TisFieldInfo_t_m04C394D265558D3214B0F99A5B1B4829E6428AF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Empty_TisFieldInfo_t_m3F0C51FB0DC4328922A53AD75450A6D56E1A14A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Empty_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m18A05866B0AA0E91416AD29FB59DF2993FC19DF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisInitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3B59F152BFDF5EC447FFADA9F6233438A840E67E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisMethodInfo_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m407B413A9800F0D83D153CD88EB4EA420FEA0C2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_mCD5A6AE2EC66723AA38172CD91A1A96AAB668541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisType_t_m78DD34608B5C265A97ACBF43A5B80F3F518BFC42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m564646418ABB7E4A2C9EF71CDF481F557419481C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisList_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mECAEDD9E583FB2731696DBAA7AFB08C9434CA370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisPostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m84785C4F7BDC740687D990C0E637370A9FB10FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisFieldInfo_t_TisString_t_m4001C29647540D7C3A0AEC2D42134CA449775B51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m87F724693AFE67D95C71A496AF4B7410F099A3D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisType_t_TisTypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_mDD0B5BF2E4E680E301D665A2D0B88C9A0CFE3930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisType_t_m4079112A996D1BC45A025AE5A8BAE9F9906D0AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_mFCD77DA5BEDB80CD993C7649718314870686003A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m1B029F6AA7575FF1F37EB07A2650F0CCA02984DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Single_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_m227D11234EAE6AAAC642BF62AD763C03A3FBC430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisFieldInfo_t_mDA159D274DAA88E98E2DEBCA7379ECFFA00ACD00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_mA5FFEA94B7FF27AD0D83926541566E730BC5ECB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mF643C8F89091667446619CBD496EDEC554EF6B76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_mF953DE6BF23A9B0EDE47B7050D84481EAF9352B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisMethodInfo_t_m1C029DAC004C7D920CDAF7298894ABB7E768437E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m28330046613BB44CD7B11CEA4DD98DAB585BB0F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisTypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_m4C470C506595FC06B36EC76ED179219F68DD34EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m8EA9B635BFA7C329D4148DF66995F7A096C746D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m4AC829827FA2EDC2185B8554E788741789A97DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisMethodInfo_t_mAA1D9863BA8B1900B6E5E8CCD11997EBA23EBCDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0C41B186E9844C73F3BECEC841FE01F2070DB809_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0FE3BB3978B8A4ADD87FDCEE0414B1A985DAD784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4A369A78161D0DAEE3181B2FA9D766BEEEF59626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m72617E0142E3A1F4A457AD25117959299921C833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7E8A5B379377A14A8508B0B29C056169E63ED405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m85873B108A68C6EE5EF138B90260FB0A050C046F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC21EBDE98869168DD47D7AA98AC2A343C2B08433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m037245F288C0405F0DF1E76CD9D61A628570BF54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m23C6ED2EACB2EDC19A98D94DD8662DFB0EAFB7FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2A79026A96ECE71851E7BD52966139EDD4B7227C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m327F0B2C77FA32715CEDCBB51C02A0EFC981896E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m57BE58AA6A3199C882D7CF201DDE29B953A0562B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m981B1084D7F0A2206335654ED740B66E870F9DC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAAC7A2F02AECA35BFB92DF86A61B226575F2B931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m555CA28D91C56E4F343450CDD7EF36D3ADDC219E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5F38B9B6042C8CAE18CD1187C1C939E1791AC8D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m662A8C59B30AE918121AB31B7F200F08D3AAA6B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m910D5762B64608E78F4E87793506DFB120BD6BAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB19C6B8F2C1A0327A653CDA4C64F715D9FDB235D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDD58D01A6CCBB745B7EAD7A209104A22BE1FE99B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE8D61EDD6D8A43622AD86724EA9C57AAB8077D67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825_m57CE0FF9883F4EF8649BC783D01562DF4358265A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m0F6A82CA8D0F852039A19EF19334743D469FB044_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0CFAE58E748FAFFB98501EFAE1703F6F39E8BE72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializableManager_Initialize_mD440BC29C7FA6A954AF6C960B109AE880911BFF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Installer_1__ctor_m5DF207CD0637CD313A233538EF8827604B068888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Installer_2__ctor_m78A7DEB2F8E12CE27C8E44BFD7EFE1A7A4F9D797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinqExtensions_HasMoreThan_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m10DA62F47B76A012E5DDA569901E60C01CB4B809_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinqExtensions_IsEmpty_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m957B332A72BB2AD1774B2DEA5D6EE2F923FDD778_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinqExtensions_IsEmpty_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mB43F4A9D4E87F470A0E006218A4EF5F5B949AC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinqExtensions_IsEmpty_TisRuntimeObject_m07643C6CC506300ABC02726DFA8ADB4E922BEF53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinqExtensions_IsEmpty_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m917355CF3B38D9108B83E4E4ED9D339C39B39C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinqExtensions_OnlyOrDefault_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m8EF30D0618F6FC9E9CC26552A4432A77844C4854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0D16ECB497C9DF4D43F0E90CDB7987F5CB7CA446_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7CF78E8A7E92E9A542A8F3B92CF7C8DFDF5C284C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB96253194EE0B11850EEF47EFF49172C53D675CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF929C29F3B2D7390D81A7BC13E40D6F21A39376E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m38AD404A2BBC86B65806EC531DAD25DB6E4AA1E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1973EF68F5F20C3A58190680AAB021160F19EC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m364D9F9165A815033E49F0CC9E91A055276ECD91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m603E1CC572A4D58983CABD9C3571213CA31393D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m68FDE279576C3D6719EA87AE5830386871463C60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m94EFE4F64F22E61DA338706490DBAFE8DDE87F1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m965161ABEF6554ED54E6D8132046044D332F6F6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF72875CC6023D88437CE4284EF8F4091B69F89DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m1F056354847C31B867863E86AAEBF49A0EF4DA4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m573903B4538AD4A31417A5960299DE20825F6269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m87229AD704AC65FA52F40FFB65CB43FA725ADA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9534EB27BCE7E4A8B866BEEE13D23380A924FF10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2CD9A05CE21127C6DDC7DF2763FB4F9B447F2502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m808F9FADF8A4D1DEAE16041E2F3301645E1F430E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBC3CB4555B314F4B8D25BF94DC78A7B0F4BE1EB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC0055DAFCD6867C15E54CB94FDADA29D816DE2A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3A86B341493CE9799916D9223A98543B829D9BF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8CB824F21E6F362C20F4FBC0FCBBB59B5A226889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiscExtensions_RemoveWithConfirm_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_m9AF443999C513DB9BEA32E7EA575E84C1AC7EA98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiscExtensions_RemoveWithConfirm_TisScene_tA1DC762B79745EB5140F054C884855B922318356_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m5957D55B7721B989AB18174C547BC4A9B685BD76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiscExtensions_Yield_TisType_t_m5DA0AF261A51C7BFCBDECB1F9A9E84CA6F0F21C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_FindObjectsOfTypeAll_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8F4E76E85D7C2CEF6EEDBC4E39C568AE65BC01D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1_AddTask_m1AFE6061E394A96783E9AD33768BBEDE878DA72B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1_AddTask_m4C7F9D58D0E9C4848EF614371D84AFB0045DB604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1_AddTask_m88690305F6E8BEDC25539CD6C76F391233F7F58C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1_OnFrameStart_m102158ECA1E7149317040564962B68D75AE70CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1_OnFrameStart_mAD43B62AA029D19D0C9AD038BEBA853A3C733E7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1_OnFrameStart_mF40B828E2B3412B03B7ACA356F3E3C141C9A56D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1_RemoveTask_m173B7CD7BD38ED2F776D2D1EE470B976E1B11CA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1_RemoveTask_m6EC7CE5B624AA743AB8A0B0751E9DF81E48AA326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1_RemoveTask_mEF678DB0941F865D8E6294FAA9A7AE505B0CC266_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1_UpdateAll_m12C8FE5A0D5F0E4BC8D4EAE7CA325B86A618999C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1_UpdateAll_m39F09EEB678C1610817E282267C43C5C59FC1503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1_UpdateAll_m5096337F1C6A1C7B2EFD35C801D2F7651E62DD0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1__ctor_m74EAF678DF93EABB62F1BDB588CBD5916CC3A1D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1__ctor_m8AD67A2C1EA7BB115E0F208E210DDC0749D0BD56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskUpdater_1__ctor_m8E158C0B1B2D3C9A6D131804A43845414062FA92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeAnalyzer_GetOnlyPropertySetter_m44566CC9C8E77B1859B2DE6C9E9EDEA5323592D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_AllAttributes_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m40555E9795982801E99FDF783EA317562051F30A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_AllAttributes_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mA16D441FFDF05076E635E15A270BBB98DBF05884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_AllAttributes_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_m665A57A66413D579B0AC8F4BB59852CF9101FF35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_DerivesFromOrEqual_TisGameObjectContext_tA110077B8B5A087C1CE15C7C266B19DA70049160_m5EB55130BA73417C20DDCEABBB024041BC23D3A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_DerivesFrom_TisIFixedTickable_tE8A5EE2A00E8864CD7650FF74246894ED684D8A8_mD953995D5E437E8FA61C0FC4D639F0A79D6FA56A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_DerivesFrom_TisILateTickable_t3238FE6BE7CD7D3A90F3E242D8696DE02934DB39_mFB3899A81AFB4C9CF908E1C35F7589A15E8DA8E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_DerivesFrom_TisITickable_tE2FB17D0E5590B6C0EDBA19B2F7E0AF24DBA661D_m84700B00543C87C8B5FC9FA02E0DE1A58365D47A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_DerivesFrom_TisMonoInstaller_tF7394A53721F75A3A34C20082903328321552D20_mC75D550E5AF6F01AD1B1E54213BB94D839A338B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeExtensions_HasAttribute_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_mBDE3F4FAED2226425AFC987BE67C6C1E4526142B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllSceneContextsU3Ed__3_System_Collections_IEnumerator_Reset_m5710B74FB71793A695EF8BDDF5922D40765B065D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetFieldInjectablesU3Ed__8_System_Collections_IEnumerator_Reset_mF288797C9180DABE306CF7B5813D8E2B63F5EA71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetPropertyInjectablesU3Ed__7_System_Collections_IEnumerator_Reset_m88536A50806C4473FBFE44498F7746D1A0985715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateDefaultArgsU3Eb__0_0_mBC80ADDCABDA8589CE842C330612A01BA05E32CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAllSceneContextsU3Eb__3_0_m9A73DB4A9369BEFD45F7FBE1A33A958AECD84F4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetFieldInjectablesU3Eb__8_0_m8785DD3DCA527FC16B42E831D2E5BE4589057F67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetInjectConstructorU3Eb__12_0_mF2EA0C8B8405978CEFA65C7E90DC1DA980F173E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetInjectConstructorU3Eb__12_1_mF1FD8A90B7A4218327A99470E54162BAF06DA501_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetOnlyPropertySetterU3Eb__10_1_m039136ADA8FA89DC7259606A0A12994FE2DCE140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetPostInjectMethodsU3Eb__6_0_mC1CD417EED78558DFB83855958218831E89EFE1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetPropertyInjectablesU3Eb__7_0_m83F44AEA58526B52EA682178D2E7A671A8D24DEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetRootGameObjectsU3Eb__7_0_mC67F876FB5CDD32C57127D6F627FFA5273E105B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitFixedTickablesU3Eb__17_0_mB54095AAB42BFE49FCA69D0781533BC0E853E4B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitFixedTickablesU3Eb__17_2_m38F4164F25107EB09CA59974A05E88BAD652C71A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitLateTickablesU3Eb__19_0_m88B2C65F7C3AD62836C848703B37E2472042EE26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitLateTickablesU3Eb__19_2_m9C70723C1ED5859A297EEB9F823AF07739EFA81C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitTickablesU3Eb__18_0_mACC6DB90072FA0C73702B89730D79DE1BFFC37DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitTickablesU3Eb__18_2_m9B622530985BD165D7E1EBAC080B0E3A7365BA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeU3Eb__3_0_m0789EC1FC689EA0495BABD53CAE558F8A87A4B4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CLateDisposeU3Eb__6_0_mCA6BD8065B36C32C872E07C4F723EDFF778C18DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__2_1_m80A23A3CC9263088F59CA83949A1222D28B45EBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_AllInjectablesU3Eb__12_0_mE3B01BA9553D8A055899AE43A12DDF16D2CE1AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CGetOnlyPropertySetterU3Eb__0_m4FEEF3C40CE311FBB370177C2DDADAAB0AAF5730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CGetOnlyPropertySetterU3Eb__2_mECCEB2BAD35BAD17FEA56412489CC152D5AA553A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_1_U3CGetOnlyPropertySetterU3Eb__3_mC2FB7C315558B1DF213427245D5FF4A75098A55A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CCreateForMemberU3Eb__0_m1E7B42D20E471EACC690B20250A5BF0746DF86DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_1_U3CCreateForMemberU3Eb__1_mE3E3578F50FA35202F883510F5A31F091D237B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CInitFixedTickablesU3Eb__1_m36BCDF0FD54630021ED9FA9370FAF728259F7EDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CInitTickablesU3Eb__1_mEDBA4077981DFE7E4203E4814DAD2167F26A2412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CInitLateTickablesU3Eb__1_mA0AC33B843D13DA2ED7AF9DF7CE42B4CB0BE13E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m624DB64F8C5D4D402C7C341BF7D8D95F7B9B4F2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CGetConstructorInjectablesU3Eb__0_mC005DED5DAC9B3E2AF95156592100AAEAA3EDFB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetPostInjectMethodsU3Eb__1_m1250FDDFF1676C1C3871DFF1A1FB8467C66A552C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetPostInjectMethodsU3Eb__2_m824D380C1244BBF658059F8AB2C52BC008BDDC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CGetRootGameObjectsU3Eb__1_m17942BF19512D70FDC9652871D3A8169851497DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZenAutoInjecter_Construct_m1DB00EC167112DE161AC4A7D058F2D4ED5BA227F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IInitializable_t6F7E396A96DB8CC4C5CE8E02DC8B4DB545961A75_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A;
struct DiContainerU5BU5D_t5FA4C878B60C69868A9D2192B4D63D4925F49038;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct SceneContextU5BU5D_tB07CF537D54DA9E1CB105F3EBA725E51EAF87611;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.ISignalHandler>>
struct Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC4770374383BDF1D9A1E33C7F017F300285A262F* ____entries_1;
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
	KeyCollection_t5C6BED39372D9C24A8768AD69E576A49EEC3A9DC* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t14750C19FE145094F0DE0C5874257AE3FB8FF1EB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext>
struct Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2ECF769FA21FF9BE253969015660E57F015E46F2* ____entries_1;
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
	KeyCollection_t064E128B17C8476ACC35A279DDBD046015879FF1* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC5B7D90D39B8E851270054E7A71C16A3361C4F8B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,Zenject.ZenjectTypeInfo>
struct Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t63B55F8C8193CC3BC1FFC46B519B70DACDEA6374* ____entries_1;
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
	KeyCollection_t0F3AD0EB124D6197C79916F5114D673DB4F28B98* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t43A0B40A450D3E7FE47386AEF09371C18A4BEEAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Linq.EmptyEnumerable`1<System.Object>
struct EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E  : public RuntimeObject
{
};

struct EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E_StaticFields
{
	// TElement[] System.Linq.EmptyEnumerable`1::Instance
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Instance_0;
};

// System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>>
struct List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValuePair_2U5BU5D_t1A8C7DACBDA359C6FD7996D9DE06A692949FD51A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValuePair_2U5BU5D_t1A8C7DACBDA359C6FD7996D9DE06A692949FD51A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.DiContainer>
struct List_1_tBAB5173AA04562C93B884EBAB822FE5471345CE8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DiContainerU5BU5D_t5FA4C878B60C69868A9D2192B4D63D4925F49038* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBAB5173AA04562C93B884EBAB822FE5471345CE8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DiContainerU5BU5D_t5FA4C878B60C69868A9D2192B4D63D4925F49038* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Reflection.FieldInfo>
struct List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.IFixedTickable>
struct List_1_t75860E9D5BFCA97BA71BABFD4FD00310E5FBED51  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IFixedTickableU5BU5D_tA8B4928A1CCA0EE11B14D9A3B94E94BA41670621* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t75860E9D5BFCA97BA71BABFD4FD00310E5FBED51_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IFixedTickableU5BU5D_tA8B4928A1CCA0EE11B14D9A3B94E94BA41670621* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.IInitializable>
struct List_1_tF803B1C71B931118205808A1CB0B2C32CB4E0BD9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IInitializableU5BU5D_t38B97B13EBB5B19614EBDF80F3E4123690FCFA91* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF803B1C71B931118205808A1CB0B2C32CB4E0BD9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IInitializableU5BU5D_t38B97B13EBB5B19614EBDF80F3E4123690FCFA91* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.ILateTickable>
struct List_1_t478793A356A38C441F4D2905E82955E27C636133  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ILateTickableU5BU5D_t2DE8DCD97BF3AD6555D175BE1E2AA91A85B1AD6D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t478793A356A38C441F4D2905E82955E27C636133_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ILateTickableU5BU5D_t2DE8DCD97BF3AD6555D175BE1E2AA91A85B1AD6D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.IMemoryPool>
struct List_1_t1187A154B962750DCED10BBEBA9DB0C50B4AA8B0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMemoryPoolU5BU5D_t82E4B9737E48EB50214A5F7647E1DE417A2A6127* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1187A154B962750DCED10BBEBA9DB0C50B4AA8B0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMemoryPoolU5BU5D_t82E4B9737E48EB50214A5F7647E1DE417A2A6127* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.ISignalHandler>
struct List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ISignalHandlerU5BU5D_tC2F91F0037CC8DED9BBA43782C1AE09A10E9E898* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ISignalHandlerU5BU5D_tC2F91F0037CC8DED9BBA43782C1AE09A10E9E898* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.ITickable>
struct List_1_t32C173F10D76C02DB552E9A30C59B4E1C6AEB482  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ITickableU5BU5D_t9CDC2EBEF5887DD1242C5808E663086C2653E6C6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t32C173F10D76C02DB552E9A30C59B4E1C6AEB482_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ITickableU5BU5D_t9CDC2EBEF5887DD1242C5808E663086C2653E6C6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.InjectAttributeBase>
struct List_1_tCBE4B2163152CB0A4722667AA65591B659F4B906  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InjectAttributeBaseU5BU5D_t0848299D53D277909B7873FD8B2E145655A0700A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCBE4B2163152CB0A4722667AA65591B659F4B906_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InjectAttributeBaseU5BU5D_t0848299D53D277909B7873FD8B2E145655A0700A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.InjectableInfo>
struct List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InjectableInfoU5BU5D_tADD1D9C0135AD320B30E832F4615A199FFEDAF7F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InjectableInfoU5BU5D_tADD1D9C0135AD320B30E832F4615A199FFEDAF7F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.PostInjectableInfo>
struct List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PostInjectableInfoU5BU5D_tBCC0D7069B3FA986F5F64A45AD06D9C741351C23* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PostInjectableInfoU5BU5D_tBCC0D7069B3FA986F5F64A45AD06D9C741351C23* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.SceneContext>
struct List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SceneContextU5BU5D_tB07CF537D54DA9E1CB105F3EBA725E51EAF87611* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SceneContextU5BU5D_tB07CF537D54DA9E1CB105F3EBA725E51EAF87611* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.TypeValuePair>
struct List_1_tE4CB9AB1202E30A4175B37378F6F0A884213B6FB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypeValuePairU5BU5D_t66FF4A9586061A1105D3EB2C090C761005EA31E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE4CB9AB1202E30A4175B37378F6F0A884213B6FB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypeValuePairU5BU5D_t66FF4A9586061A1105D3EB2C090C761005EA31E4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Zenject.InitializableManager/InitializableInfo>
struct List_1_t69EF27975B43588D2A19A62492BF754E60E49D13  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InitializableInfoU5BU5D_tBB8DD5931BE97DC4EAAD5A797930814B8413D8E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t69EF27975B43588D2A19A62492BF754E60E49D13_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InitializableInfoU5BU5D_tBB8DD5931BE97DC4EAAD5A797930814B8413D8E4* ___s_emptyArray_5;
};

// Zenject.TaskUpdater`1<Zenject.IFixedTickable>
struct TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<Zenject.TaskUpdater`1/TaskInfo<TTask>> Zenject.TaskUpdater`1::_tasks
	LinkedList_1_tE63E6854501BFDA12B5467DC41937C8F5B36062C* ____tasks_0;
	// System.Collections.Generic.List`1<Zenject.TaskUpdater`1/TaskInfo<TTask>> Zenject.TaskUpdater`1::_queuedTasks
	List_1_tBE94BAFE59BD6E97F33FADB021943D9762475958* ____queuedTasks_1;
};

// Zenject.TaskUpdater`1<Zenject.ILateTickable>
struct TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<Zenject.TaskUpdater`1/TaskInfo<TTask>> Zenject.TaskUpdater`1::_tasks
	LinkedList_1_tB13F8C480D02DE8032D3A5BE7D8211A16B6F9935* ____tasks_0;
	// System.Collections.Generic.List`1<Zenject.TaskUpdater`1/TaskInfo<TTask>> Zenject.TaskUpdater`1::_queuedTasks
	List_1_tDAC5BE0E3C8C102CDAB916F78B675B71CA7557FB* ____queuedTasks_1;
};

// Zenject.TaskUpdater`1<Zenject.ITickable>
struct TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<Zenject.TaskUpdater`1/TaskInfo<TTask>> Zenject.TaskUpdater`1::_tasks
	LinkedList_1_t45F5E239BD001EC2238FE986E1E03900E35EC8B4* ____tasks_0;
	// System.Collections.Generic.List`1<Zenject.TaskUpdater`1/TaskInfo<TTask>> Zenject.TaskUpdater`1::_queuedTasks
	List_1_t6F2AA65A5081115C33B9184CEDE48ECDDF286087* ____queuedTasks_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.ISignalHandler>>
struct ValueCollection_t14750C19FE145094F0DE0C5874257AE3FB8FF1EB  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF* ____dictionary_0;
};

// ModestTree.Util.ValuePair`2<System.Type,System.Int32>
struct ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5  : public RuntimeObject
{
	// T1 ModestTree.Util.ValuePair`2::First
	Type_t* ___First_0;
	// T2 ModestTree.Util.ValuePair`2::Second
	int32_t ___Second_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Zenject.BindFinalizerWrapper
struct BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920  : public RuntimeObject
{
	// Zenject.IBindingFinalizer Zenject.BindFinalizerWrapper::_subFinalizer
	RuntimeObject* ____subFinalizer_0;
};

// Zenject.BindInfo
struct BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA  : public RuntimeObject
{
	// System.String Zenject.BindInfo::<ContextInfo>k__BackingField
	String_t* ___U3CContextInfoU3Ek__BackingField_0;
	// System.Boolean Zenject.BindInfo::<RequireExplicitScope>k__BackingField
	bool ___U3CRequireExplicitScopeU3Ek__BackingField_1;
	// System.Object Zenject.BindInfo::<Identifier>k__BackingField
	RuntimeObject* ___U3CIdentifierU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.Type> Zenject.BindInfo::<ContractTypes>k__BackingField
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___U3CContractTypesU3Ek__BackingField_3;
	// System.Boolean Zenject.BindInfo::<CopyIntoAllSubContainers>k__BackingField
	bool ___U3CCopyIntoAllSubContainersU3Ek__BackingField_4;
	// Zenject.InvalidBindResponses Zenject.BindInfo::<InvalidBindResponse>k__BackingField
	int32_t ___U3CInvalidBindResponseU3Ek__BackingField_5;
	// System.Boolean Zenject.BindInfo::<NonLazy>k__BackingField
	bool ___U3CNonLazyU3Ek__BackingField_6;
	// Zenject.BindingCondition Zenject.BindInfo::<Condition>k__BackingField
	BindingCondition_t15737FAF5CEC1F330D6F0B318D2DCA38D007F1EE* ___U3CConditionU3Ek__BackingField_7;
	// Zenject.ToChoices Zenject.BindInfo::<ToChoice>k__BackingField
	int32_t ___U3CToChoiceU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.Type> Zenject.BindInfo::<ToTypes>k__BackingField
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___U3CToTypesU3Ek__BackingField_9;
	// Zenject.ScopeTypes Zenject.BindInfo::<Scope>k__BackingField
	int32_t ___U3CScopeU3Ek__BackingField_10;
	// System.Object Zenject.BindInfo::<ConcreteIdentifier>k__BackingField
	RuntimeObject* ___U3CConcreteIdentifierU3Ek__BackingField_11;
	// System.Collections.Generic.List`1<Zenject.TypeValuePair> Zenject.BindInfo::<Arguments>k__BackingField
	List_1_tE4CB9AB1202E30A4175B37378F6F0A884213B6FB* ___U3CArgumentsU3Ek__BackingField_12;
};

// Zenject.BindingId
struct BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB  : public RuntimeObject
{
	// System.Type Zenject.BindingId::Type
	Type_t* ___Type_0;
	// System.Object Zenject.BindingId::Identifier
	RuntimeObject* ___Identifier_1;
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

// Zenject.DisposableManager
struct DisposableManager_t8F1BDD7CD4AC974A6E1F1E201B729F8D3BD7768C  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Zenject.DisposableManager/DisposableInfo> Zenject.DisposableManager::_disposables
	List_1_tFAD1FC2959695B0AA01CAA60013AF46ABBF3D7A1* ____disposables_0;
	// System.Collections.Generic.List`1<Zenject.DisposableManager/LateDisposableInfo> Zenject.DisposableManager::_lateDisposables
	List_1_tE20A067F4778E1FD895C5DE06F91E1AF91D7AEFC* ____lateDisposables_1;
	// System.Boolean Zenject.DisposableManager::_disposed
	bool ____disposed_2;
	// System.Boolean Zenject.DisposableManager::_lateDisposed
	bool ____lateDisposed_3;
};

// Zenject.InitializableManager
struct InitializableManager_t61FEBDD9E6DC9697D92D67E17123AF4C53139EDA  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Zenject.InitializableManager/InitializableInfo> Zenject.InitializableManager::_initializables
	List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* ____initializables_0;
	// System.Boolean Zenject.InitializableManager::_hasInitialized
	bool ____hasInitialized_1;
};

// Zenject.InjectableInfo
struct InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201  : public RuntimeObject
{
	// System.Boolean Zenject.InjectableInfo::Optional
	bool ___Optional_0;
	// System.Object Zenject.InjectableInfo::Identifier
	RuntimeObject* ___Identifier_1;
	// Zenject.InjectSources Zenject.InjectableInfo::SourceType
	int32_t ___SourceType_2;
	// System.String Zenject.InjectableInfo::MemberName
	String_t* ___MemberName_3;
	// System.Type Zenject.InjectableInfo::MemberType
	Type_t* ___MemberType_4;
	// System.Type Zenject.InjectableInfo::ObjectType
	Type_t* ___ObjectType_5;
	// System.Action`2<System.Object,System.Object> Zenject.InjectableInfo::Setter
	Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* ___Setter_6;
	// System.Object Zenject.InjectableInfo::DefaultValue
	RuntimeObject* ___DefaultValue_7;
};

// Zenject.InstallerBase
struct InstallerBase_t96B3BE01124AD212055DEE639E0DB966D2465EBC  : public RuntimeObject
{
	// Zenject.DiContainer Zenject.InstallerBase::_container
	DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ____container_0;
};

// Zenject.Kernel
struct Kernel_t489C8EA295AB206A7F16ADEFBD72776E7E7E2940  : public RuntimeObject
{
	// Zenject.TickableManager Zenject.Kernel::_tickableManager
	TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* ____tickableManager_0;
	// Zenject.InitializableManager Zenject.Kernel::_initializableManager
	InitializableManager_t61FEBDD9E6DC9697D92D67E17123AF4C53139EDA* ____initializableManager_1;
	// Zenject.DisposableManager Zenject.Kernel::_disposablesManager
	DisposableManager_t8F1BDD7CD4AC974A6E1F1E201B729F8D3BD7768C* ____disposablesManager_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Zenject.NonLazyBinder
struct NonLazyBinder_t9FD4DEB05CE8E09EE16E5566508D881816228AF0  : public RuntimeObject
{
	// Zenject.BindInfo Zenject.NonLazyBinder::<BindInfo>k__BackingField
	BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* ___U3CBindInfoU3Ek__BackingField_0;
};

// RedBlueGames.NotNull.NotNullViolation
struct NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2  : public RuntimeObject
{
	// System.Reflection.FieldInfo RedBlueGames.NotNull.NotNullViolation::<FieldInfo>k__BackingField
	FieldInfo_t* ___U3CFieldInfoU3Ek__BackingField_0;
	// UnityEngine.GameObject RedBlueGames.NotNull.NotNullViolation::<ErrorGameObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CErrorGameObjectU3Ek__BackingField_1;
	// UnityEngine.MonoBehaviour RedBlueGames.NotNull.NotNullViolation::<SourceMonoBehaviour>k__BackingField
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___U3CSourceMonoBehaviourU3Ek__BackingField_2;
};

// Zenject.NullBindingFinalizer
struct NullBindingFinalizer_t4607F719F1E7804CE699E388A3FDE0041AFDABAF  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Zenject.PoolCleanupChecker
struct PoolCleanupChecker_t8C3ADDFD4B19D2E886E58B7F3F279E4B6E7AFD5F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Zenject.IMemoryPool> Zenject.PoolCleanupChecker::_poolFactories
	List_1_t1187A154B962750DCED10BBEBA9DB0C50B4AA8B0* ____poolFactories_0;
};

// Zenject.PostInjectableInfo
struct PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434  : public RuntimeObject
{
	// System.Reflection.MethodInfo Zenject.PostInjectableInfo::_methodInfo
	MethodInfo_t* ____methodInfo_0;
	// System.Collections.Generic.List`1<Zenject.InjectableInfo> Zenject.PostInjectableInfo::_injectableInfo
	List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* ____injectableInfo_1;
};

// Zenject.ProfileBlock
struct ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15  : public RuntimeObject
{
};

struct ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15_StaticFields
{
	// System.Text.RegularExpressions.Regex Zenject.ProfileBlock::<ProfilePattern>k__BackingField
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___U3CProfilePatternU3Ek__BackingField_0;
};

// RedBlueGames.NotNull.ReflectionUtility
struct ReflectionUtility_tD51F7F2113FE89026673503FA5B6F788A1955C98  : public RuntimeObject
{
};

// Zenject.SceneContextRegistry
struct SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext> Zenject.SceneContextRegistry::_map
	Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76* ____map_0;
};

// Zenject.SceneContextRegistryAdderAndRemover
struct SceneContextRegistryAdderAndRemover_t5507E184D0AA356F47AA946F7BBD4054EE31CAF5  : public RuntimeObject
{
	// Zenject.SceneContextRegistry Zenject.SceneContextRegistryAdderAndRemover::_registry
	SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* ____registry_0;
	// Zenject.SceneContext Zenject.SceneContextRegistryAdderAndRemover::_sceneContext
	SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* ____sceneContext_1;
};

// Zenject.SignalBase
struct SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869  : public RuntimeObject
{
	// Zenject.SignalManager Zenject.SignalBase::_manager
	SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* ____manager_0;
	// Zenject.BindingId Zenject.SignalBase::<SignalId>k__BackingField
	BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___U3CSignalIdU3Ek__BackingField_1;
	// Zenject.SignalSettings Zenject.SignalBase::<Settings>k__BackingField
	SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* ___U3CSettingsU3Ek__BackingField_2;
};

// Zenject.SignalExtensions
struct SignalExtensions_t3CDFB8B6243073E5EB7322CCB9B222A0B750B182  : public RuntimeObject
{
};

// Zenject.SignalHandlerBase
struct SignalHandlerBase_tBBD7D21C6134FB970E6A44B4D833112E83D81DD1  : public RuntimeObject
{
	// Zenject.SignalManager Zenject.SignalHandlerBase::_manager
	SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* ____manager_0;
	// Zenject.BindingId Zenject.SignalHandlerBase::_signalId
	BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ____signalId_1;
};

// Zenject.SignalHandlerBinder
struct SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF  : public RuntimeObject
{
	// Zenject.BindFinalizerWrapper Zenject.SignalHandlerBinder::_finalizerWrapper
	BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920* ____finalizerWrapper_0;
	// System.Type Zenject.SignalHandlerBinder::_signalType
	Type_t* ____signalType_1;
	// Zenject.DiContainer Zenject.SignalHandlerBinder::_container
	DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ____container_2;
	// System.Object Zenject.SignalHandlerBinder::<Identifier>k__BackingField
	RuntimeObject* ___U3CIdentifierU3Ek__BackingField_3;
};

// Zenject.SignalManager
struct SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.ISignalHandler>> Zenject.SignalManager::_signalHandlers
	Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF* ____signalHandlers_0;
};

// Zenject.SignalSettings
struct SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1  : public RuntimeObject
{
	// System.Boolean Zenject.SignalSettings::RequiresHandler
	bool ___RequiresHandler_0;
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

// Zenject.TickableManager
struct TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Zenject.ITickable> Zenject.TickableManager::_tickables
	List_1_t32C173F10D76C02DB552E9A30C59B4E1C6AEB482* ____tickables_0;
	// System.Collections.Generic.List`1<Zenject.IFixedTickable> Zenject.TickableManager::_fixedTickables
	List_1_t75860E9D5BFCA97BA71BABFD4FD00310E5FBED51* ____fixedTickables_1;
	// System.Collections.Generic.List`1<Zenject.ILateTickable> Zenject.TickableManager::_lateTickables
	List_1_t478793A356A38C441F4D2905E82955E27C636133* ____lateTickables_2;
	// System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> Zenject.TickableManager::_priorities
	List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* ____priorities_3;
	// System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> Zenject.TickableManager::_fixedPriorities
	List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* ____fixedPriorities_4;
	// System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> Zenject.TickableManager::_latePriorities
	List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* ____latePriorities_5;
	// Zenject.TickablesTaskUpdater Zenject.TickableManager::_updater
	TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9* ____updater_6;
	// Zenject.FixedTickablesTaskUpdater Zenject.TickableManager::_fixedUpdater
	FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362* ____fixedUpdater_7;
	// Zenject.LateTickablesTaskUpdater Zenject.TickableManager::_lateUpdater
	LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4* ____lateUpdater_8;
	// System.Boolean Zenject.TickableManager::_isPaused
	bool ____isPaused_9;
};

// Zenject.TypeAnalyzer
struct TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306  : public RuntimeObject
{
};

struct TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,Zenject.ZenjectTypeInfo> Zenject.TypeAnalyzer::_typeInfo
	Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243* ____typeInfo_0;
};

// Zenject.TypeValuePair
struct TypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A  : public RuntimeObject
{
	// System.Type Zenject.TypeValuePair::Type
	Type_t* ___Type_0;
	// System.Object Zenject.TypeValuePair::Value
	RuntimeObject* ___Value_1;
};

// Zenject.ValidationMarker
struct ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C  : public RuntimeObject
{
	// System.Boolean Zenject.ValidationMarker::<InstantiateFailed>k__BackingField
	bool ___U3CInstantiateFailedU3Ek__BackingField_0;
	// System.Type Zenject.ValidationMarker::<MarkedType>k__BackingField
	Type_t* ___U3CMarkedTypeU3Ek__BackingField_1;
};

// Zenject.ValidationUtil
struct ValidationUtil_tC13791C669D9BC5FCEDB4E169B24B912CFBD77A9  : public RuntimeObject
{
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

// Zenject.Internal.ZenUtilInternal
struct ZenUtilInternal_tE43BA8A707652E95F7822C823FDFD9ED91A1F4D1  : public RuntimeObject
{
};

// Zenject.ZenjectSceneLoader
struct ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C  : public RuntimeObject
{
	// Zenject.ProjectKernel Zenject.ZenjectSceneLoader::_projectKernel
	ProjectKernel_t995911BE6D433E9F016917A4B1638126A90D8EBD* ____projectKernel_0;
	// Zenject.DiContainer Zenject.ZenjectSceneLoader::_sceneContainer
	DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ____sceneContainer_1;
};

// Zenject.ZenjectTypeInfo
struct ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Zenject.PostInjectableInfo> Zenject.ZenjectTypeInfo::_postInjectMethods
	List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* ____postInjectMethods_0;
	// System.Collections.Generic.List`1<Zenject.InjectableInfo> Zenject.ZenjectTypeInfo::_constructorInjectables
	List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* ____constructorInjectables_1;
	// System.Collections.Generic.List`1<Zenject.InjectableInfo> Zenject.ZenjectTypeInfo::_fieldInjectables
	List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* ____fieldInjectables_2;
	// System.Collections.Generic.List`1<Zenject.InjectableInfo> Zenject.ZenjectTypeInfo::_propertyInjectables
	List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* ____propertyInjectables_3;
	// System.Reflection.ConstructorInfo Zenject.ZenjectTypeInfo::_injectConstructor
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ____injectConstructor_4;
	// System.Type Zenject.ZenjectTypeInfo::_typeAnalyzed
	Type_t* ____typeAnalyzed_5;
};

// Zenject.InitializableManager/<>c
struct U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF  : public RuntimeObject
{
};

struct U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_StaticFields
{
	// Zenject.InitializableManager/<>c Zenject.InitializableManager/<>c::<>9
	U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF* ___U3CU3E9_0;
	// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> Zenject.InitializableManager/<>c::<>9__2_1
	Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* ___U3CU3E9__2_1_1;
	// System.Func`2<Zenject.InitializableManager/InitializableInfo,System.Int32> Zenject.InitializableManager/<>c::<>9__3_0
	Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8* ___U3CU3E9__3_0_2;
};

// Zenject.InitializableManager/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518  : public RuntimeObject
{
	// Zenject.IInitializable Zenject.InitializableManager/<>c__DisplayClass2_0::initializable
	RuntimeObject* ___initializable_0;
};

// Zenject.InitializableManager/InitializableInfo
struct InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD  : public RuntimeObject
{
	// Zenject.IInitializable Zenject.InitializableManager/InitializableInfo::Initializable
	RuntimeObject* ___Initializable_0;
	// System.Int32 Zenject.InitializableManager/InitializableInfo::Priority
	int32_t ___Priority_1;
};

// Zenject.SignalManager/<>c
struct U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80  : public RuntimeObject
{
};

struct U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_StaticFields
{
	// Zenject.SignalManager/<>c Zenject.SignalManager/<>c::<>9
	U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.List`1<Zenject.ISignalHandler>,System.Collections.Generic.IEnumerable`1<Zenject.ISignalHandler>> Zenject.SignalManager/<>c::<>9__6_0
	Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3* ___U3CU3E9__6_0_1;
};

// Zenject.TickableManager/<>c
struct U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3  : public RuntimeObject
{
};

struct U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields
{
	// Zenject.TickableManager/<>c Zenject.TickableManager/<>c::<>9
	U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* ___U3CU3E9_0;
	// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type> Zenject.TickableManager/<>c::<>9__17_0
	Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* ___U3CU3E9__17_0_1;
	// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> Zenject.TickableManager/<>c::<>9__17_2
	Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* ___U3CU3E9__17_2_2;
	// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type> Zenject.TickableManager/<>c::<>9__18_0
	Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* ___U3CU3E9__18_0_3;
	// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> Zenject.TickableManager/<>c::<>9__18_2
	Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* ___U3CU3E9__18_2_4;
	// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type> Zenject.TickableManager/<>c::<>9__19_0
	Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* ___U3CU3E9__19_0_5;
	// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32> Zenject.TickableManager/<>c::<>9__19_2
	Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* ___U3CU3E9__19_2_6;
};

// Zenject.TickableManager/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0  : public RuntimeObject
{
	// Zenject.IFixedTickable Zenject.TickableManager/<>c__DisplayClass17_0::tickable
	RuntimeObject* ___tickable_0;
};

// Zenject.TickableManager/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C  : public RuntimeObject
{
	// Zenject.ITickable Zenject.TickableManager/<>c__DisplayClass18_0::tickable
	RuntimeObject* ___tickable_0;
};

// Zenject.TickableManager/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA  : public RuntimeObject
{
	// Zenject.ILateTickable Zenject.TickableManager/<>c__DisplayClass19_0::tickable
	RuntimeObject* ___tickable_0;
};

// Zenject.TypeAnalyzer/<>c
struct U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05  : public RuntimeObject
{
};

struct U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields
{
	// Zenject.TypeAnalyzer/<>c Zenject.TypeAnalyzer/<>c::<>9
	U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.MethodInfo,System.Boolean> Zenject.TypeAnalyzer/<>c::<>9__6_0
	Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* ___U3CU3E9__6_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> Zenject.TypeAnalyzer/<>c::<>9__7_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__7_0_2;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Zenject.TypeAnalyzer/<>c::<>9__8_0
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* ___U3CU3E9__8_0_3;
	// System.Func`2<System.Reflection.FieldInfo,System.String> Zenject.TypeAnalyzer/<>c::<>9__10_1
	Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E* ___U3CU3E9__10_1_4;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Zenject.TypeAnalyzer/<>c::<>9__12_0
	Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* ___U3CU3E9__12_0_5;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Zenject.TypeAnalyzer/<>c::<>9__12_1
	Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* ___U3CU3E9__12_1_6;
};

// Zenject.TypeAnalyzer/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150  : public RuntimeObject
{
	// System.String Zenject.TypeAnalyzer/<>c__DisplayClass10_0::propertyName
	String_t* ___propertyName_0;
	// System.Collections.Generic.List`1<System.Reflection.FieldInfo> Zenject.TypeAnalyzer/<>c__DisplayClass10_0::writeableFields
	List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* ___writeableFields_1;
};

// Zenject.TypeAnalyzer/<>c__DisplayClass10_1
struct U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481  : public RuntimeObject
{
	// System.Object Zenject.TypeAnalyzer/<>c__DisplayClass10_1::injectable
	RuntimeObject* ___injectable_0;
	// System.Object Zenject.TypeAnalyzer/<>c__DisplayClass10_1::value
	RuntimeObject* ___value_1;
};

// Zenject.TypeAnalyzer/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t45B39717DBA5C541CBC86278F9AA8E119EA74BF5  : public RuntimeObject
{
	// System.Reflection.FieldInfo Zenject.TypeAnalyzer/<>c__DisplayClass11_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// Zenject.TypeAnalyzer/<>c__DisplayClass11_1
struct U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343  : public RuntimeObject
{
	// System.Reflection.PropertyInfo Zenject.TypeAnalyzer/<>c__DisplayClass11_1::propInfo
	PropertyInfo_t* ___propInfo_0;
};

// Zenject.TypeAnalyzer/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C  : public RuntimeObject
{
	// System.Type Zenject.TypeAnalyzer/<>c__DisplayClass4_0::parentType
	Type_t* ___parentType_0;
};

// Zenject.TypeAnalyzer/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Type> Zenject.TypeAnalyzer/<>c__DisplayClass6_0::heirarchyList
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___heirarchyList_0;
	// System.Type Zenject.TypeAnalyzer/<>c__DisplayClass6_0::type
	Type_t* ___type_1;
	// System.Func`2<System.Reflection.ParameterInfo,Zenject.InjectableInfo> Zenject.TypeAnalyzer/<>c__DisplayClass6_0::<>9__2
	Func_2_tC62621E47817065D1808718363314932F0DD09EA* ___U3CU3E9__2_2;
};

// Zenject.TypeAnalyzer/<GetFieldInjectables>d__8
struct U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738  : public RuntimeObject
{
	// System.Int32 Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Zenject.InjectableInfo Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::<>2__current
	InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* ___U3CU3E2__current_1;
	// System.Int32 Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::type
	Type_t* ___type_3;
	// System.Type Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo> Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7
struct U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539  : public RuntimeObject
{
	// System.Int32 Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Zenject.InjectableInfo Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::<>2__current
	InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* ___U3CU3E2__current_1;
	// System.Int32 Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::type
	Type_t* ___type_3;
	// System.Type Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo> Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// Zenject.ValidationUtil/<>c
struct U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F  : public RuntimeObject
{
};

struct U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_StaticFields
{
	// Zenject.ValidationUtil/<>c Zenject.ValidationUtil/<>c::<>9
	U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F* ___U3CU3E9_0;
	// System.Func`2<System.Type,Zenject.TypeValuePair> Zenject.ValidationUtil/<>c::<>9__0_0
	Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629* ___U3CU3E9__0_0_1;
};

// Zenject.Internal.ZenUtilInternal/<>c
struct U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3  : public RuntimeObject
{
};

struct U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_StaticFields
{
	// Zenject.Internal.ZenUtilInternal/<>c Zenject.Internal.ZenUtilInternal/<>c::<>9
	U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>> Zenject.Internal.ZenUtilInternal/<>c::<>9__3_0
	Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D* ___U3CU3E9__3_0_1;
	// System.Func`2<UnityEngine.GameObject,System.Boolean> Zenject.Internal.ZenUtilInternal/<>c::<>9__7_0
	Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* ___U3CU3E9__7_0_2;
};

// Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3
struct U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4  : public RuntimeObject
{
	// System.Int32 Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Zenject.SceneContext Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::<>2__current
	SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* ___U3CU3E2__current_1;
	// System.Int32 Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerator`1<UnityEngine.SceneManagement.Scene> Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;
};

// Zenject.ZenjectTypeInfo/<>c
struct U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176  : public RuntimeObject
{
};

struct U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_StaticFields
{
	// Zenject.ZenjectTypeInfo/<>c Zenject.ZenjectTypeInfo/<>c::<>9
	U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176* ___U3CU3E9_0;
	// System.Func`2<Zenject.PostInjectableInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>> Zenject.ZenjectTypeInfo/<>c::<>9__12_0
	Func_2_t7A911A55255256022EB742741E520F8931A733CC* ___U3CU3E9__12_0_1;
};

// System.Collections.Generic.List`1/Enumerator<Zenject.IFixedTickable>
struct Enumerator_t5FF2FF89A1B66B7CEFCE1636D194180017141CED 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t75860E9D5BFCA97BA71BABFD4FD00310E5FBED51* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Zenject.ILateTickable>
struct Enumerator_t831A2721348431EA69C4CE3F768D98138408838C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t478793A356A38C441F4D2905E82955E27C636133* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Zenject.IMemoryPool>
struct Enumerator_t3A20911FBF765856D9BD863859CE99FC88309693 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1187A154B962750DCED10BBEBA9DB0C50B4AA8B0* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Zenject.ISignalHandler>
struct Enumerator_t74D9C18B6BFF65E61E5BC70B22C75656674B5E0E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Zenject.ITickable>
struct Enumerator_tE4DD9D1AC9A1914BFE6C63B52EAB0BED63CCDC02 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t32C173F10D76C02DB552E9A30C59B4E1C6AEB482* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Zenject.SceneContext>
struct Enumerator_tC16172A04ACC2E610B11B3D3C79E5529BAA5485B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Type>
struct Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Type_t* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Zenject.InitializableManager/InitializableInfo>
struct Enumerator_t9F34442C9C3F16F31740AA13C19423BC4DA5FDFC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* ____current_3;
};

// Zenject.Installer`1<Zenject.ActionInstaller>
struct Installer_1_t9C8C1E92ED9900E789E7207FFBCA555A776AC324  : public InstallerBase_t96B3BE01124AD212055DEE639E0DB966D2465EBC
{
};

// Zenject.Installer`2<System.Collections.Generic.List`1<System.Type>,Zenject.ExecutionOrderInstaller>
struct Installer_2_t68BD527F5A221F90CCF2411322361606E65183F1  : public InstallerBase_t96B3BE01124AD212055DEE639E0DB966D2465EBC
{
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

// Zenject.CopyNonLazyBinder
struct CopyNonLazyBinder_tFC46E0570F4E71B325BCBF97763A2804EB9C4D1E  : public NonLazyBinder_t9FD4DEB05CE8E09EE16E5566508D881816228AF0
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// Zenject.FixedTickablesTaskUpdater
struct FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362  : public TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// Zenject.LateTickablesTaskUpdater
struct LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4  : public TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// ModestTree.Util.PreserveAttribute
struct PreserveAttribute_t84A5B8674170AA91A860FA7A8641869914D2E21A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// Zenject.SignalHandlerBinderWithId
struct SignalHandlerBinderWithId_tAC0626864984388C37A79B295ACD61C575F58A2A  : public SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF
{
};

// Zenject.StaticMethodSignalHandler
struct StaticMethodSignalHandler_t0CE0BEF81B871FDCC3DF52D425A2897EF04EF9C7  : public SignalHandlerBase_tBBD7D21C6134FB970E6A44B4D833112E83D81DD1
{
	// System.Action Zenject.StaticMethodSignalHandler::_method
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____method_2;
};

// Zenject.TickablesTaskUpdater
struct TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9  : public TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47
{
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// Zenject.ZenjectAllowDuringValidationAttribute
struct ZenjectAllowDuringValidationAttribute_tBEFAC4FE26C46EAACFB698791563B4475E916956  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Zenject.ActionInstaller
struct ActionInstaller_t01973575DCFE24B103632DAA2627465AA4DFA3DC  : public Installer_1_t9C8C1E92ED9900E789E7207FFBCA555A776AC324
{
	// System.Action`1<Zenject.DiContainer> Zenject.ActionInstaller::_installMethod
	Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ____installMethod_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// Zenject.ConditionCopyNonLazyBinder
struct ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C  : public CopyNonLazyBinder_tFC46E0570F4E71B325BCBF97763A2804EB9C4D1E
{
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
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

// Zenject.ExecutionOrderInstaller
struct ExecutionOrderInstaller_tE8943D79999952936239B341E2702BAC080E68AC  : public Installer_2_t68BD527F5A221F90CCF2411322361606E65183F1
{
	// System.Collections.Generic.List`1<System.Type> Zenject.ExecutionOrderInstaller::_typeOrder
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ____typeOrder_1;
};

// Zenject.InjectAttributeBase
struct InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA  : public PreserveAttribute_t84A5B8674170AA91A860FA7A8641869914D2E21A
{
	// System.Boolean Zenject.InjectAttributeBase::<Optional>k__BackingField
	bool ___U3COptionalU3Ek__BackingField_0;
	// System.Object Zenject.InjectAttributeBase::<Id>k__BackingField
	RuntimeObject* ___U3CIdU3Ek__BackingField_1;
	// Zenject.InjectSources Zenject.InjectAttributeBase::<Source>k__BackingField
	int32_t ___U3CSourceU3Ek__BackingField_2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Zenject.Internal.ZenUtilInternal/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560  : public RuntimeObject
{
	// UnityEngine.SceneManagement.Scene Zenject.Internal.ZenUtilInternal/<>c__DisplayClass7_0::scene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene_0;
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

// Zenject.InjectAttribute
struct InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F  : public InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA
{
};

// Zenject.InjectLocalAttribute
struct InjectLocalAttribute_tBCAD986851767FC02B30F75880232912172D533E  : public InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA
{
};

// Zenject.InjectOptionalAttribute
struct InjectOptionalAttribute_t92089F243CECC33394438DC46F192F9B95A500FA  : public InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA
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

// Zenject.SignalBinder
struct SignalBinder_tA7C7F1AF1EBEC2E1D82BB2181C284E4805812586  : public ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C
{
	// Zenject.SignalSettings Zenject.SignalBinder::_signalSettings
	SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* ____signalSettings_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Zenject.ZenjectException
struct ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9  : public Exception_t
{
};

// System.Action`1<Zenject.DiContainer>
struct Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8  : public MulticastDelegate_t
{
};

// System.Action`1<System.Reflection.FieldInfo>
struct Action_1_t85BF1C5A502E06C64F55E4BBB10F5147C08A24B1  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.List`1<Zenject.ISignalHandler>,System.Collections.Generic.IEnumerable`1<Zenject.ISignalHandler>>
struct Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3  : public MulticastDelegate_t
{
};

// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Boolean>
struct Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E  : public MulticastDelegate_t
{
};

// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32>
struct Func_2_tD52805B3429F12539373FEC711930A36A24A37D1  : public MulticastDelegate_t
{
};

// System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type>
struct Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.FieldInfo,System.String>
struct Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>>
struct Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.GameObject,System.Boolean>
struct Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.MethodInfo,System.Int32>
struct Func_2_t71765C126395C159B2E7E865B36871B1059E8C18  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.ParameterInfo,Zenject.InjectableInfo>
struct Func_2_tC62621E47817065D1808718363314932F0DD09EA  : public MulticastDelegate_t
{
};

// System.Func`2<Zenject.PostInjectableInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>>
struct Func_2_t7A911A55255256022EB742741E520F8931A733CC  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.PropertyInfo,System.Boolean>
struct Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,Zenject.TypeValuePair>
struct Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629  : public MulticastDelegate_t
{
};

// System.Func`2<Zenject.InitializableManager/InitializableInfo,System.Int32>
struct Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Zenject.ScopeArgConditionCopyNonLazyBinder
struct ScopeArgConditionCopyNonLazyBinder_t26365631A16C2AD0B91FBA23A1E699B5A695491A  : public ArgConditionCopyNonLazyBinder_t02E8730F99239DEE447A998767E1AA93D54CE726
{
};

// Zenject.SignalBinderWithId
struct SignalBinderWithId_t5F0CC220AD7CF57338E5EADB804DFB5751B1C65B  : public SignalBinder_tA7C7F1AF1EBEC2E1D82BB2181C284E4805812586
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// Zenject.Context
struct Context_tC1C23E7580DABAD04E4E86549B17439509D41AEC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Zenject.MonoInstaller> Zenject.Context::_installers
	List_1_t6FFC5A20CA46741CD91AB9AF39F5E5A6D5258148* ____installers_4;
	// System.Collections.Generic.List`1<Zenject.MonoInstaller> Zenject.Context::_installerPrefabs
	List_1_t6FFC5A20CA46741CD91AB9AF39F5E5A6D5258148* ____installerPrefabs_5;
	// System.Collections.Generic.List`1<Zenject.ScriptableObjectInstaller> Zenject.Context::_scriptableObjectInstallers
	List_1_t5F894C40E621830FE428E35C211C1EE0404B5878* ____scriptableObjectInstallers_6;
	// System.Collections.Generic.List`1<Zenject.InstallerBase> Zenject.Context::_normalInstallers
	List_1_t3262082430AFC7478C4241D42F4C6FF18FFCDE31* ____normalInstallers_7;
	// System.Collections.Generic.List`1<System.Type> Zenject.Context::_normalInstallerTypes
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ____normalInstallerTypes_8;
};

// Zenject.FromBinderNonGeneric
struct FromBinderNonGeneric_tBF219737E8A3BCB902999D7F4E91C3346E7ED771  : public FromBinder_t721B09A903F3C6C11EEB6D3611D576D04B70BC7E
{
};

// Zenject.MonoKernel
struct MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zenject.TickableManager Zenject.MonoKernel::_tickableManager
	TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* ____tickableManager_4;
	// Zenject.InitializableManager Zenject.MonoKernel::_initializableManager
	InitializableManager_t61FEBDD9E6DC9697D92D67E17123AF4C53139EDA* ____initializableManager_5;
	// Zenject.DisposableManager Zenject.MonoKernel::_disposablesManager
	DisposableManager_t8F1BDD7CD4AC974A6E1F1E201B729F8D3BD7768C* ____disposablesManager_6;
	// System.Boolean Zenject.MonoKernel::_hasInitialized
	bool ____hasInitialized_7;
	// System.Boolean Zenject.MonoKernel::_isDestroyed
	bool ____isDestroyed_8;
};

// Zenject.ZenAutoInjecter
struct ZenAutoInjecter_t3DAFF7852AA15BFFF5395DA6A23D2BA25C648FB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zenject.ZenAutoInjecter/ContainerSources Zenject.ZenAutoInjecter::_containerSource
	int32_t ____containerSource_4;
	// System.Boolean Zenject.ZenAutoInjecter::_hasStarted
	bool ____hasStarted_5;
};

// Zenject.ConcreteBinderNonGeneric
struct ConcreteBinderNonGeneric_tF46BE25BEF7E538CAB5A72A81F0EDA097DF7A833  : public FromBinderNonGeneric_tBF219737E8A3BCB902999D7F4E91C3346E7ED771
{
};

// Zenject.DefaultGameObjectKernel
struct DefaultGameObjectKernel_t91D548644E7C32D3FE9E39C7743A3939A92BE7F1  : public MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D
{
};

// Zenject.ProjectContext
struct ProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825  : public Context_tC1C23E7580DABAD04E4E86549B17439509D41AEC
{
	// Zenject.DiContainer Zenject.ProjectContext::_container
	DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ____container_12;
};

struct ProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825_StaticFields
{
	// Zenject.ProjectContext Zenject.ProjectContext::_instance
	ProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825* ____instance_11;
};

// Zenject.ProjectKernel
struct ProjectKernel_t995911BE6D433E9F016917A4B1638126A90D8EBD  : public MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D
{
};

// Zenject.RunnableContext
struct RunnableContext_t0799AAC72734FE6294D06DFEDC66BA6340D498C6  : public Context_tC1C23E7580DABAD04E4E86549B17439509D41AEC
{
	// System.Boolean Zenject.RunnableContext::_autoRun
	bool ____autoRun_9;
	// System.Boolean Zenject.RunnableContext::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_11;
};

struct RunnableContext_t0799AAC72734FE6294D06DFEDC66BA6340D498C6_StaticFields
{
	// System.Boolean Zenject.RunnableContext::_staticAutoRun
	bool ____staticAutoRun_10;
};

// Zenject.SceneKernel
struct SceneKernel_tECE939AAB7ABD8F8FCA1EB0526FE903EE63178E8  : public MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D
{
};

// Zenject.ConcreteIdBinderNonGeneric
struct ConcreteIdBinderNonGeneric_tA44CBAEC077725C86E7E973931742EA755F05511  : public ConcreteBinderNonGeneric_tF46BE25BEF7E538CAB5A72A81F0EDA097DF7A833
{
};

// Zenject.SceneContext
struct SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154  : public RunnableContext_t0799AAC72734FE6294D06DFEDC66BA6340D498C6
{
	// System.Boolean Zenject.SceneContext::_parentNewObjectsUnderRoot
	bool ____parentNewObjectsUnderRoot_15;
	// System.Collections.Generic.List`1<System.String> Zenject.SceneContext::_contractNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____contractNames_16;
	// System.String Zenject.SceneContext::_parentContractName
	String_t* ____parentContractName_17;
	// System.Collections.Generic.List`1<System.String> Zenject.SceneContext::_parentContractNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____parentContractNames_18;
	// Zenject.DiContainer Zenject.SceneContext::_container
	DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ____container_19;
	// System.Collections.Generic.List`1<Zenject.SceneDecoratorContext> Zenject.SceneContext::_decoratorContexts
	List_1_t439A50ED63829BF9CA96BA904926AB09015C3B54* ____decoratorContexts_20;
	// System.Boolean Zenject.SceneContext::_hasInstalled
	bool ____hasInstalled_21;
	// System.Boolean Zenject.SceneContext::_hasResolved
	bool ____hasResolved_22;
};

struct SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_StaticFields
{
	// System.Action`1<Zenject.DiContainer> Zenject.SceneContext::ExtraBindingsInstallMethod
	Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___ExtraBindingsInstallMethod_12;
	// System.Action`1<Zenject.DiContainer> Zenject.SceneContext::ExtraBindingsLateInstallMethod
	Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___ExtraBindingsLateInstallMethod_13;
	// System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> Zenject.SceneContext::ParentContainers
	RuntimeObject* ___ParentContainers_14;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
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
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A  : public RuntimeArray
{
	ALIGN_FIELD (8) ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* m_Items[1];

	inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Zenject.DiContainer[]
struct DiContainerU5BU5D_t5FA4C878B60C69868A9D2192B4D63D4925F49038  : public RuntimeArray
{
	ALIGN_FIELD (8) DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* m_Items[1];

	inline DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7  : public RuntimeArray
{
	ALIGN_FIELD (8) MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* m_Items[1];

	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// Zenject.SceneContext[]
struct SceneContextU5BU5D_tB07CF537D54DA9E1CB105F3EBA725E51EAF87611  : public RuntimeArray
{
	ALIGN_FIELD (8) SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* m_Items[1];

	inline SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8FAC2A5066E30AA4BA544C3F08603F64D4CFF982_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean ModestTree.LinqExtensions::IsEmpty<System.Int32>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B_gshared (RuntimeObject* ___enumerable0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Single<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0CD0677A1278BFC7E13405D11D1EF30919C9E9A2_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___keySelector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisRuntimeObject_mF7B0A079765A37716D52A158EBD61E57C390CBC9_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m58FDD9D37B71CF72436120819302D436B848645E_gshared (Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m259444494CC09AED56BD19FE56AC664129D7E273_gshared (Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m8282D82C9A692E1FAF66F8D3A495FC70A9505D1E_gshared (Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___key0, const RuntimeMethod* method) ;
// System.Void ModestTree.MiscExtensions::RemoveWithConfirm<UnityEngine.SceneManagement.Scene,System.Object>(System.Collections.Generic.IDictionary`2<TKey,TVal>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiscExtensions_RemoveWithConfirm_TisScene_tA1DC762B79745EB5140F054C884855B922318356_TisRuntimeObject_mA2294E3ABBF60FE677468B4C3188E8A72034A671_gshared (RuntimeObject* ___dictionary0, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___key1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1274D1874D6C2D18CA282A64D7F77564518D885E_gshared (Dictionary_2_t7B1AA6899AF4FA6B3ECC9010058A7911C883C2EE* __this, const RuntimeMethod* method) ;
// System.Void Zenject.TaskUpdater`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskUpdater_1__ctor_m5E3027EDE123C6C38EA3C20A928744E867C0CC21_gshared (TaskUpdater_1_tDACEFEFB336EEDCE7B96314045D6A1A1BACBD889* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Boolean ModestTree.TypeExtensions::DerivesFrom<System.Object>(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_DerivesFrom_TisRuntimeObject_mAF1D8B1B54D2E5FACA67536DAEB05E84EC5525AD_gshared (Type_t* ___a0, const RuntimeMethod* method) ;
// System.Void Zenject.TaskUpdater`1<System.Object>::AddTask(TTask,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskUpdater_1_AddTask_m85E0DBB09BAB5BC943F6F1474C1F099DBE00C46D_gshared (TaskUpdater_1_tDACEFEFB336EEDCE7B96314045D6A1A1BACBD889* __this, RuntimeObject* ___task0, int32_t ___priority1, const RuntimeMethod* method) ;
// System.Void Zenject.TaskUpdater`1<System.Object>::RemoveTask(TTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskUpdater_1_RemoveTask_mFBC279BEAEFA8230059F1BDA2CC2C86D19AEA3AE_gshared (TaskUpdater_1_tDACEFEFB336EEDCE7B96314045D6A1A1BACBD889* __this, RuntimeObject* ___task0, const RuntimeMethod* method) ;
// System.Void Zenject.TaskUpdater`1<System.Object>::OnFrameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskUpdater_1_OnFrameStart_m0BE7FFAED0E18A34DDCB19A2FF9B64DF3AA66053_gshared (TaskUpdater_1_tDACEFEFB336EEDCE7B96314045D6A1A1BACBD889* __this, const RuntimeMethod* method) ;
// System.Void Zenject.TaskUpdater`1<System.Object>::UpdateAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskUpdater_1_UpdateAll_m0E782F5A4FEE3134B5978367079974895697142B_gshared (TaskUpdater_1_tDACEFEFB336EEDCE7B96314045D6A1A1BACBD889* __this, const RuntimeMethod* method) ;
// Zenject.ConditionCopyNonLazyBinder Zenject.ArgConditionCopyNonLazyBinder::WithArguments<System.Object,System.Object>(TParam1,TParam2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C* ArgConditionCopyNonLazyBinder_WithArguments_TisRuntimeObject_TisRuntimeObject_mE8891CB23F5D1F623D525CA6CB00E317B1397EB2_gshared (ArgConditionCopyNonLazyBinder_t02E8730F99239DEE447A998767E1AA93D54CE726* __this, RuntimeObject* ___param10, RuntimeObject* ___param21, const RuntimeMethod* method) ;
// Zenject.FromBinderNonGeneric Zenject.ConcreteBinderNonGeneric::To<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FromBinderNonGeneric_tBF219737E8A3BCB902999D7F4E91C3346E7ED771* ConcreteBinderNonGeneric_To_TisRuntimeObject_m94FC47523504E1A55776D167D29103BED49414CA_gshared (ConcreteBinderNonGeneric_tF46BE25BEF7E538CAB5A72A81F0EDA097DF7A833* __this, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void ModestTree.MiscExtensions::RemoveWithConfirm<System.Object>(System.Collections.Generic.IList`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiscExtensions_RemoveWithConfirm_TisRuntimeObject_m11AF11F45841A615F205820927E772BDBF4FD96D_gshared (RuntimeObject* ___list0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared (RuntimeObject* ___source0, Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___selector1, const RuntimeMethod* method) ;
// System.Boolean ModestTree.LinqExtensions::IsEmpty<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinqExtensions_IsEmpty_TisRuntimeObject_m07643C6CC506300ABC02726DFA8ADB4E922BEF53_gshared (RuntimeObject* ___enumerable0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void Zenject.Installer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Installer_1__ctor_mD3BE6C92472885970A367D50DFD0A73789AD36D6_gshared (Installer_1_t2A3E1279140FAED73AEDAE0DAF5B2CA269286ADF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Zenject.Installer`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Installer_2__ctor_mFE9A241451161159D510ADD4634A45A58CF69C49_gshared (Installer_2_tABD2AB4AD686328EA02BC7E1FC965CD2ED86BDE3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_mA90CDE158774C34A28C07CEEA9E9EA2A61618238_gshared_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> ModestTree.TypeExtensions::AllAttributes<System.Object>(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_AllAttributes_TisRuntimeObject_mDB3A0CE9932F81539E061854BD2CB455185B0B3F_gshared (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___provider0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SingleOrDefault_TisRuntimeObject_mBE781B30D8108D145C144C1733472EA99BA4A5BE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> ModestTree.MiscExtensions::Yield<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MiscExtensions_Yield_TisRuntimeObject_m4DB0D2A44E9AAA335EECCD4DC66DE29587CC0883_gshared (RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> ModestTree.TypeExtensions::AllAttributes<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_AllAttributes_TisRuntimeObject_mC7063BCED4D4AFF50DB8155F4B0B52A578A79866_gshared (MemberInfo_t* ___provider0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Single<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Single_TisRuntimeObject_m4966D6BB67940E1EE80ADA3CC60C81D03436C62F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Distinct_TisRuntimeObject_mBCF33F5AD0A25B1E57B46FF34330DF74278ADB9E_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean ModestTree.LinqExtensions::HasMoreThan<System.Object>(System.Collections.Generic.IEnumerable`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinqExtensions_HasMoreThan_TisRuntimeObject_m7602DCA3378C40A3927328D2C134719D9E1188ED_gshared (RuntimeObject* ___enumerable0, int32_t ___amount1, const RuntimeMethod* method) ;
// TSource ModestTree.LinqExtensions::OnlyOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinqExtensions_OnlyOrDefault_TisRuntimeObject_mA2B56BB84BBFA56807B53116F49937FFF4594E28_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean ModestTree.TypeExtensions::HasAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_HasAttribute_TisRuntimeObject_m4915E8CD840540E1907B0DB4758E6A3BBEEAAA95_gshared (MemberInfo_t* ___provider0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// TContract Zenject.DiContainer::Resolve<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiContainer_Resolve_TisRuntimeObject_mFFDEEAA3E39CFE9D5D9A9885DACB34691CD0BF78_gshared (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean ModestTree.TypeExtensions::DerivesFromOrEqual<System.Object>(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_DerivesFromOrEqual_TisRuntimeObject_mD5E2B752622FAB4859B749DCCA8C7722ABDEF100_gshared (Type_t* ___a0, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_FindObjectsOfTypeAll_TisRuntimeObject_mD84D8C84477F126072383A3F1E7789DA25B4206B_gshared (const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Zenject.InitializableManager/InitializableInfo>::.ctor()
inline void List_1__ctor_m9534EB27BCE7E4A8B866BEEE13D23380A924FF10 (List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69EF27975B43588D2A19A62492BF754E60E49D13*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Zenject.InitializableManager/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mACB6670AAEF447BB8AE0BE9CA86466185FE60C72 (U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Zenject.IInitializable>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m8CB824F21E6F362C20F4FBC0FCBBB59B5A226889 (List_1_tF803B1C71B931118205808A1CB0B2C32CB4E0BD9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tF803B1C71B931118205808A1CB0B2C32CB4E0BD9*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m97A3CC5F9959553B29AEC0A8EF64F1365096B4DF (Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<ModestTree.Util.ValuePair`2<System.Type,System.Int32>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB (RuntimeObject* ___source0, Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF9BFCD96585F4D20C430F2C111EC77C206A88827 (Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD52805B3429F12539373FEC711930A36A24A37D1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176 (RuntimeObject* ___source0, Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tD52805B3429F12539373FEC711930A36A24A37D1*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8FAC2A5066E30AA4BA544C3F08603F64D4CFF982_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_gshared)(___source0, method);
}
// System.Boolean ModestTree.LinqExtensions::IsEmpty<System.Int32>(System.Collections.Generic.IEnumerable`1<T>)
inline bool LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B (RuntimeObject* ___enumerable0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B_gshared)(___enumerable0, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE_gshared)(___source0, method);
}
// TSource System.Linq.Enumerable::Single<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588_gshared)(___source0, method);
}
// System.Void Zenject.InitializableManager/InitializableInfo::.ctor(Zenject.IInitializable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializableInfo__ctor_mE72A82DF0A223081E171CC88CA96552D7B38A08B (InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* __this, RuntimeObject* ___initializable0, int32_t ___priority1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Zenject.InitializableManager/InitializableInfo>::Add(T)
inline void List_1_Add_mB96253194EE0B11850EEF47EFF49172C53D675CC_inline (List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* __this, InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69EF27975B43588D2A19A62492BF754E60E49D13*, InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Zenject.IInitializable>::get_Count()
inline int32_t List_1_get_Count_mC0055DAFCD6867C15E54CB94FDADA29D816DE2A9_inline (List_1_tF803B1C71B931118205808A1CB0B2C32CB4E0BD9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF803B1C71B931118205808A1CB0B2C32CB4E0BD9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void ModestTree.Assert::That(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_m83A61B69B6C128204755435348EA0C90439CBCD0 (bool ___condition0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Zenject.InitializableManager/InitializableInfo,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFECB6FE4FFC14240D4E84BFB1FFF7677BA884B8E (Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<Zenject.InitializableManager/InitializableInfo,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisInitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3B59F152BFDF5EC447FFADA9F6233438A840E67E (RuntimeObject* ___source0, Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0CD0677A1278BFC7E13405D11D1EF30919C9E9A2_gshared)(___source0, ___keySelector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Zenject.InitializableManager/InitializableInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* Enumerable_ToList_TisInitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_mA5FFEA94B7FF27AD0D83926541566E730BC5ECB4 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Zenject.InitializableManager/InitializableInfo>::GetEnumerator()
inline Enumerator_t9F34442C9C3F16F31740AA13C19423BC4DA5FDFC List_1_GetEnumerator_m94EFE4F64F22E61DA338706490DBAFE8DDE87F1A (List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9F34442C9C3F16F31740AA13C19423BC4DA5FDFC (*) (List_1_t69EF27975B43588D2A19A62492BF754E60E49D13*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Zenject.InitializableManager/InitializableInfo>::Dispose()
inline void Enumerator_Dispose_m0FE3BB3978B8A4ADD87FDCEE0414B1A985DAD784 (Enumerator_t9F34442C9C3F16F31740AA13C19423BC4DA5FDFC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9F34442C9C3F16F31740AA13C19423BC4DA5FDFC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Zenject.InitializableManager/InitializableInfo>::get_Current()
inline InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* Enumerator_get_Current_m662A8C59B30AE918121AB31B7F200F08D3AAA6B1_inline (Enumerator_t9F34442C9C3F16F31740AA13C19423BC4DA5FDFC* __this, const RuntimeMethod* method)
{
	return ((  InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* (*) (Enumerator_t9F34442C9C3F16F31740AA13C19423BC4DA5FDFC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Zenject.ZenjectException ModestTree.Assert::CreateException(System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9* Assert_CreateException_mDAC4F5998F3B66103210D9029FA0DD9013F51449 (Exception_t* ___innerException0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Zenject.InitializableManager/InitializableInfo>::MoveNext()
inline bool Enumerator_MoveNext_m981B1084D7F0A2206335654ED740B66E870F9DC7 (Enumerator_t9F34442C9C3F16F31740AA13C19423BC4DA5FDFC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9F34442C9C3F16F31740AA13C19423BC4DA5FDFC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean ModestTree.TypeExtensions::DerivesFromOrEqual(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_DerivesFromOrEqual_m6BFB2950495FF37C00DFC4F74534E7850293C210 (Type_t* ___a0, Type_t* ___b1, const RuntimeMethod* method) ;
// System.Void Zenject.InitializableManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDC8D8462DE1DA0DB66E53409E92C17BBF0155BF5 (U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF* __this, const RuntimeMethod* method) ;
// System.Void Zenject.MonoKernel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoKernel__ctor_m2B5FFA25C690FB022D323AAA62FD74162887D549 (MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D* __this, const RuntimeMethod* method) ;
// System.Void Zenject.InitializableManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializableManager_Initialize_mD440BC29C7FA6A954AF6C960B109AE880911BFF9 (InitializableManager_t61FEBDD9E6DC9697D92D67E17123AF4C53139EDA* __this, const RuntimeMethod* method) ;
// System.Void Zenject.DisposableManager::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposableManager_Dispose_m2E6C44359C0316EE3B9F0BC1D737BAAC96FAC4E7 (DisposableManager_t8F1BDD7CD4AC974A6E1F1E201B729F8D3BD7768C* __this, const RuntimeMethod* method) ;
// System.Void Zenject.DisposableManager::LateDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposableManager_LateDispose_m1367E5D3AA9CB105504895BDBA9324CECB0B9BB8 (DisposableManager_t8F1BDD7CD4AC974A6E1F1E201B729F8D3BD7768C* __this, const RuntimeMethod* method) ;
// System.Void Zenject.TickableManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_Update_m7D02EFC9E2DBF8E1D175DFB13BB16C2CFEB718D3 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) ;
// System.Void Zenject.TickableManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_LateUpdate_m62094E5F66666C7A7CA1FD635F98355CAB2DE8AC (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) ;
// System.Void Zenject.TickableManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_FixedUpdate_m53C7F12177FDE6FA7253AD6D28C9D3CF983CE1D8 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) ;
// System.Void Zenject.MonoKernel::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoKernel_Initialize_mE2A34EF1D5017C7B15448B3B690B22F12CA39E48 (MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Zenject.ProjectKernel::ForceUnloadAllScenes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectKernel_ForceUnloadAllScenes_m5E8BCA8E89F35DCD0E758F9BE544AA6CD28AC201 (ProjectKernel_t995911BE6D433E9F016917A4B1638126A90D8EBD* __this, bool ___immediate0, const RuntimeMethod* method) ;
// System.Boolean Zenject.MonoKernel::get_IsDestroyed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MonoKernel_get_IsDestroyed_m2A7029FFC8F6D46080B8837117F377BA437139F8_inline (MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Zenject.SceneContext> Zenject.Internal.ZenUtilInternal::GetAllSceneContexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenUtilInternal_GetAllSceneContexts_m83B2831EF26DA4C50C8216CCE4E2FE87C6464507 (const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<Zenject.SceneContext>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Reverse_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_mCD5A6AE2EC66723AA38172CD91A1A96AAB668541 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisRuntimeObject_mF7B0A079765A37716D52A158EBD61E57C390CBC9_gshared)(___source0, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Zenject.SceneContext>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927* Enumerable_ToList_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m28330046613BB44CD7B11CEA4DD98DAB585BB0F6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Zenject.SceneContext>::GetEnumerator()
inline Enumerator_tC16172A04ACC2E610B11B3D3C79E5529BAA5485B List_1_GetEnumerator_m364D9F9165A815033E49F0CC9E91A055276ECD91 (List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC16172A04ACC2E610B11B3D3C79E5529BAA5485B (*) (List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Zenject.SceneContext>::Dispose()
inline void Enumerator_Dispose_m0C41B186E9844C73F3BECEC841FE01F2070DB809 (Enumerator_tC16172A04ACC2E610B11B3D3C79E5529BAA5485B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC16172A04ACC2E610B11B3D3C79E5529BAA5485B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Zenject.SceneContext>::get_Current()
inline SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* Enumerator_get_Current_m5F38B9B6042C8CAE18CD1187C1C939E1791AC8D6_inline (Enumerator_tC16172A04ACC2E610B11B3D3C79E5529BAA5485B* __this, const RuntimeMethod* method)
{
	return ((  SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* (*) (Enumerator_tC16172A04ACC2E610B11B3D3C79E5529BAA5485B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Zenject.SceneContext>::MoveNext()
inline bool Enumerator_MoveNext_mAAC7A2F02AECA35BFB92DF86A61B226575F2B931 (Enumerator_tC16172A04ACC2E610B11B3D3C79E5529BAA5485B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC16172A04ACC2E610B11B3D3C79E5529BAA5485B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m007CD046F6CDC638D4B9670FF1B55BFAC3572538 (Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))Dictionary_2_ContainsKey_m58FDD9D37B71CF72436120819302D436B848645E_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext>::Add(TKey,TValue)
inline void Dictionary_2_Add_m307D7B9BDF22CCA0754F51B5463F8E7893502553 (Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___key0, SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76*, Scene_tA1DC762B79745EB5140F054C884855B922318356, SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154*, const RuntimeMethod*))Dictionary_2_Add_m259444494CC09AED56BD19FE56AC664129D7E273_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext>::get_Item(TKey)
inline SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* Dictionary_2_get_Item_m0DEE85EEEA5A8AD7500040A00859EA487136516A (Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___key0, const RuntimeMethod* method)
{
	return ((  SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* (*) (Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))Dictionary_2_get_Item_m8282D82C9A692E1FAF66F8D3A495FC70A9505D1E_gshared)(__this, ___key0, method);
}
// System.Void ModestTree.MiscExtensions::RemoveWithConfirm<UnityEngine.SceneManagement.Scene,Zenject.SceneContext>(System.Collections.Generic.IDictionary`2<TKey,TVal>,TKey)
inline void MiscExtensions_RemoveWithConfirm_TisScene_tA1DC762B79745EB5140F054C884855B922318356_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m5957D55B7721B989AB18174C547BC4A9B685BD76 (RuntimeObject* ___dictionary0, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___key1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Scene_tA1DC762B79745EB5140F054C884855B922318356, const RuntimeMethod*))MiscExtensions_RemoveWithConfirm_TisScene_tA1DC762B79745EB5140F054C884855B922318356_TisRuntimeObject_mA2294E3ABBF60FE677468B4C3188E8A72034A671_gshared)(___dictionary0, ___key1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext>::.ctor()
inline void Dictionary_2__ctor_m36EB4DB335562EFCD7104246495C03C143908566 (Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76*, const RuntimeMethod*))Dictionary_2__ctor_m1274D1874D6C2D18CA282A64D7F77564518D885E_gshared)(__this, method);
}
// System.Void Zenject.SceneContextRegistry::Add(Zenject.SceneContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContextRegistry_Add_m619E15834647D77B80130BCE1E31C5D689D3A6A2 (SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* __this, SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* ___context0, const RuntimeMethod* method) ;
// System.Void Zenject.SceneContextRegistry::Remove(Zenject.SceneContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContextRegistry_Remove_m90AD48E94712C019A1CAD70CCA0D3979B14D6C99 (SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* __this, SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* ___context0, const RuntimeMethod* method) ;
// System.Void Zenject.TaskUpdater`1<Zenject.ITickable>::.ctor()
inline void TaskUpdater_1__ctor_m8E158C0B1B2D3C9A6D131804A43845414062FA92 (TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47*, const RuntimeMethod*))TaskUpdater_1__ctor_m5E3027EDE123C6C38EA3C20A928744E867C0CC21_gshared)(__this, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.ILateTickable>::.ctor()
inline void TaskUpdater_1__ctor_m8AD67A2C1EA7BB115E0F208E210DDC0749D0BD56 (TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29*, const RuntimeMethod*))TaskUpdater_1__ctor_m5E3027EDE123C6C38EA3C20A928744E867C0CC21_gshared)(__this, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.IFixedTickable>::.ctor()
inline void TaskUpdater_1__ctor_m74EAF678DF93EABB62F1BDB588CBD5916CC3A1D3 (TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7*, const RuntimeMethod*))TaskUpdater_1__ctor_m5E3027EDE123C6C38EA3C20A928744E867C0CC21_gshared)(__this, method);
}
// System.Void Zenject.TickablesTaskUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickablesTaskUpdater__ctor_m6D5C5858C001A40B8DC43FC0E75CFEEBEE23D2C4 (TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9* __this, const RuntimeMethod* method) ;
// System.Void Zenject.FixedTickablesTaskUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedTickablesTaskUpdater__ctor_m5F8D2A29010EF9C77A2BEDB58AA71F9EFE944CDE (FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362* __this, const RuntimeMethod* method) ;
// System.Void Zenject.LateTickablesTaskUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LateTickablesTaskUpdater__ctor_mE5F23218F18F6CD79D776628D45019180088BCF2 (LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4* __this, const RuntimeMethod* method) ;
// System.Void Zenject.TickableManager::InitTickables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_InitTickables_m8E86D1E458735C7E59CE98A820BEA39FDDA1D5EE (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) ;
// System.Void Zenject.TickableManager::InitFixedTickables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_InitFixedTickables_m5C668B24AEF1F2328BC870BC10FC69C8323FB88C (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) ;
// System.Void Zenject.TickableManager::InitLateTickables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_InitLateTickables_m60F91215914E2A35C99C8C2351E59A6E6E9761DB (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7169780EFE0BAC1D61868B6CA9A28D05A86DC6DF (Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<ModestTree.Util.ValuePair`2<System.Type,System.Int32>,System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisType_t_m4079112A996D1BC45A025AE5A8BAE9F9906D0AAC (RuntimeObject* ___source0, Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Boolean ModestTree.TypeExtensions::DerivesFrom<Zenject.IFixedTickable>(System.Type)
inline bool TypeExtensions_DerivesFrom_TisIFixedTickable_tE8A5EE2A00E8864CD7650FF74246894ED684D8A8_mD953995D5E437E8FA61C0FC4D639F0A79D6FA56A (Type_t* ___a0, const RuntimeMethod* method)
{
	return ((  bool (*) (Type_t*, const RuntimeMethod*))TypeExtensions_DerivesFrom_TisRuntimeObject_mAF1D8B1B54D2E5FACA67536DAEB05E84EC5525AD_gshared)(___a0, method);
}
// System.Void ModestTree.Assert::That(System.Boolean,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_m3E74483F729A9A222574B7C43EAAA0CDA85199A7 (bool ___condition0, String_t* ___message1, RuntimeObject* ___p12, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Zenject.IFixedTickable>::GetEnumerator()
inline Enumerator_t5FF2FF89A1B66B7CEFCE1636D194180017141CED List_1_GetEnumerator_mF72875CC6023D88437CE4284EF8F4091B69F89DC (List_1_t75860E9D5BFCA97BA71BABFD4FD00310E5FBED51* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5FF2FF89A1B66B7CEFCE1636D194180017141CED (*) (List_1_t75860E9D5BFCA97BA71BABFD4FD00310E5FBED51*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Zenject.IFixedTickable>::Dispose()
inline void Enumerator_Dispose_m7E8A5B379377A14A8508B0B29C056169E63ED405 (Enumerator_t5FF2FF89A1B66B7CEFCE1636D194180017141CED* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5FF2FF89A1B66B7CEFCE1636D194180017141CED*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// System.Void Zenject.TickableManager/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m300D071E658DA39FBADC9E169400E85A9222F478 (U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Zenject.IFixedTickable>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m910D5762B64608E78F4E87793506DFB120BD6BAA_inline (Enumerator_t5FF2FF89A1B66B7CEFCE1636D194180017141CED* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t5FF2FF89A1B66B7CEFCE1636D194180017141CED*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.IFixedTickable>::AddTask(TTask,System.Int32)
inline void TaskUpdater_1_AddTask_m1AFE6061E394A96783E9AD33768BBEDE878DA72B (TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7* __this, RuntimeObject* ___task0, int32_t ___priority1, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7*, RuntimeObject*, int32_t, const RuntimeMethod*))TaskUpdater_1_AddTask_m85E0DBB09BAB5BC943F6F1474C1F099DBE00C46D_gshared)(__this, ___task0, ___priority1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Zenject.IFixedTickable>::MoveNext()
inline bool Enumerator_MoveNext_m23C6ED2EACB2EDC19A98D94DD8662DFB0EAFB7FD (Enumerator_t5FF2FF89A1B66B7CEFCE1636D194180017141CED* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5FF2FF89A1B66B7CEFCE1636D194180017141CED*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean ModestTree.TypeExtensions::DerivesFrom<Zenject.ITickable>(System.Type)
inline bool TypeExtensions_DerivesFrom_TisITickable_tE2FB17D0E5590B6C0EDBA19B2F7E0AF24DBA661D_m84700B00543C87C8B5FC9FA02E0DE1A58365D47A (Type_t* ___a0, const RuntimeMethod* method)
{
	return ((  bool (*) (Type_t*, const RuntimeMethod*))TypeExtensions_DerivesFrom_TisRuntimeObject_mAF1D8B1B54D2E5FACA67536DAEB05E84EC5525AD_gshared)(___a0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Zenject.ITickable>::GetEnumerator()
inline Enumerator_tE4DD9D1AC9A1914BFE6C63B52EAB0BED63CCDC02 List_1_GetEnumerator_m1973EF68F5F20C3A58190680AAB021160F19EC9F (List_1_t32C173F10D76C02DB552E9A30C59B4E1C6AEB482* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE4DD9D1AC9A1914BFE6C63B52EAB0BED63CCDC02 (*) (List_1_t32C173F10D76C02DB552E9A30C59B4E1C6AEB482*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Zenject.ITickable>::Dispose()
inline void Enumerator_Dispose_m85873B108A68C6EE5EF138B90260FB0A050C046F (Enumerator_tE4DD9D1AC9A1914BFE6C63B52EAB0BED63CCDC02* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE4DD9D1AC9A1914BFE6C63B52EAB0BED63CCDC02*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// System.Void Zenject.TickableManager/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mE234C39A66D7D4AC78AB31B1DBDC9C321B744E87 (U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Zenject.ITickable>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mB19C6B8F2C1A0327A653CDA4C64F715D9FDB235D_inline (Enumerator_tE4DD9D1AC9A1914BFE6C63B52EAB0BED63CCDC02* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tE4DD9D1AC9A1914BFE6C63B52EAB0BED63CCDC02*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.ITickable>::AddTask(TTask,System.Int32)
inline void TaskUpdater_1_AddTask_m4C7F9D58D0E9C4848EF614371D84AFB0045DB604 (TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47* __this, RuntimeObject* ___task0, int32_t ___priority1, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47*, RuntimeObject*, int32_t, const RuntimeMethod*))TaskUpdater_1_AddTask_m85E0DBB09BAB5BC943F6F1474C1F099DBE00C46D_gshared)(__this, ___task0, ___priority1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Zenject.ITickable>::MoveNext()
inline bool Enumerator_MoveNext_m57BE58AA6A3199C882D7CF201DDE29B953A0562B (Enumerator_tE4DD9D1AC9A1914BFE6C63B52EAB0BED63CCDC02* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE4DD9D1AC9A1914BFE6C63B52EAB0BED63CCDC02*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean ModestTree.TypeExtensions::DerivesFrom<Zenject.ILateTickable>(System.Type)
inline bool TypeExtensions_DerivesFrom_TisILateTickable_t3238FE6BE7CD7D3A90F3E242D8696DE02934DB39_mFB3899A81AFB4C9CF908E1C35F7589A15E8DA8E7 (Type_t* ___a0, const RuntimeMethod* method)
{
	return ((  bool (*) (Type_t*, const RuntimeMethod*))TypeExtensions_DerivesFrom_TisRuntimeObject_mAF1D8B1B54D2E5FACA67536DAEB05E84EC5525AD_gshared)(___a0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Zenject.ILateTickable>::GetEnumerator()
inline Enumerator_t831A2721348431EA69C4CE3F768D98138408838C List_1_GetEnumerator_m603E1CC572A4D58983CABD9C3571213CA31393D0 (List_1_t478793A356A38C441F4D2905E82955E27C636133* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t831A2721348431EA69C4CE3F768D98138408838C (*) (List_1_t478793A356A38C441F4D2905E82955E27C636133*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Zenject.ILateTickable>::Dispose()
inline void Enumerator_Dispose_m72617E0142E3A1F4A457AD25117959299921C833 (Enumerator_t831A2721348431EA69C4CE3F768D98138408838C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t831A2721348431EA69C4CE3F768D98138408838C*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// System.Void Zenject.TickableManager/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m0444F1E1D03F6E5846DB0D42AD8D26517D0A2780 (U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Zenject.ILateTickable>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mDD58D01A6CCBB745B7EAD7A209104A22BE1FE99B_inline (Enumerator_t831A2721348431EA69C4CE3F768D98138408838C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t831A2721348431EA69C4CE3F768D98138408838C*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.ILateTickable>::AddTask(TTask,System.Int32)
inline void TaskUpdater_1_AddTask_m88690305F6E8BEDC25539CD6C76F391233F7F58C (TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29* __this, RuntimeObject* ___task0, int32_t ___priority1, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29*, RuntimeObject*, int32_t, const RuntimeMethod*))TaskUpdater_1_AddTask_m85E0DBB09BAB5BC943F6F1474C1F099DBE00C46D_gshared)(__this, ___task0, ___priority1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Zenject.ILateTickable>::MoveNext()
inline bool Enumerator_MoveNext_m2A79026A96ECE71851E7BD52966139EDD4B7227C (Enumerator_t831A2721348431EA69C4CE3F768D98138408838C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t831A2721348431EA69C4CE3F768D98138408838C*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Zenject.TickableManager::Add(Zenject.ITickable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_Add_m99D53DB315A4C27FE5E1A00CC7ACF5901E9E6024 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, RuntimeObject* ___tickable0, int32_t ___priority1, const RuntimeMethod* method) ;
// System.Void Zenject.TickableManager::AddLate(Zenject.ILateTickable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_AddLate_m5376BDCC9422275E48731E48810280B7BD007C27 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, RuntimeObject* ___tickable0, int32_t ___priority1, const RuntimeMethod* method) ;
// System.Void Zenject.TaskUpdater`1<Zenject.ITickable>::RemoveTask(TTask)
inline void TaskUpdater_1_RemoveTask_m173B7CD7BD38ED2F776D2D1EE470B976E1B11CA3 (TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47* __this, RuntimeObject* ___task0, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47*, RuntimeObject*, const RuntimeMethod*))TaskUpdater_1_RemoveTask_mFBC279BEAEFA8230059F1BDA2CC2C86D19AEA3AE_gshared)(__this, ___task0, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.ILateTickable>::RemoveTask(TTask)
inline void TaskUpdater_1_RemoveTask_mEF678DB0941F865D8E6294FAA9A7AE505B0CC266 (TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29* __this, RuntimeObject* ___task0, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29*, RuntimeObject*, const RuntimeMethod*))TaskUpdater_1_RemoveTask_mFBC279BEAEFA8230059F1BDA2CC2C86D19AEA3AE_gshared)(__this, ___task0, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.IFixedTickable>::RemoveTask(TTask)
inline void TaskUpdater_1_RemoveTask_m6EC7CE5B624AA743AB8A0B0751E9DF81E48AA326 (TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7* __this, RuntimeObject* ___task0, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7*, RuntimeObject*, const RuntimeMethod*))TaskUpdater_1_RemoveTask_mFBC279BEAEFA8230059F1BDA2CC2C86D19AEA3AE_gshared)(__this, ___task0, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.ITickable>::OnFrameStart()
inline void TaskUpdater_1_OnFrameStart_mAD43B62AA029D19D0C9AD038BEBA853A3C733E7E (TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47*, const RuntimeMethod*))TaskUpdater_1_OnFrameStart_m0BE7FFAED0E18A34DDCB19A2FF9B64DF3AA66053_gshared)(__this, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.ITickable>::UpdateAll()
inline void TaskUpdater_1_UpdateAll_m5096337F1C6A1C7B2EFD35C801D2F7651E62DD0A (TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_t47C92BED0963E9CAB16AF1FD6963B1CB08E82D47*, const RuntimeMethod*))TaskUpdater_1_UpdateAll_m0E782F5A4FEE3134B5978367079974895697142B_gshared)(__this, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.IFixedTickable>::OnFrameStart()
inline void TaskUpdater_1_OnFrameStart_mF40B828E2B3412B03B7ACA356F3E3C141C9A56D3 (TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7*, const RuntimeMethod*))TaskUpdater_1_OnFrameStart_m0BE7FFAED0E18A34DDCB19A2FF9B64DF3AA66053_gshared)(__this, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.IFixedTickable>::UpdateAll()
inline void TaskUpdater_1_UpdateAll_m12C8FE5A0D5F0E4BC8D4EAE7CA325B86A618999C (TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_tE4495D4CCD3462B7160D7FE5A7090BBCB54836B7*, const RuntimeMethod*))TaskUpdater_1_UpdateAll_m0E782F5A4FEE3134B5978367079974895697142B_gshared)(__this, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.ILateTickable>::OnFrameStart()
inline void TaskUpdater_1_OnFrameStart_m102158ECA1E7149317040564962B68D75AE70CE2 (TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29*, const RuntimeMethod*))TaskUpdater_1_OnFrameStart_m0BE7FFAED0E18A34DDCB19A2FF9B64DF3AA66053_gshared)(__this, method);
}
// System.Void Zenject.TaskUpdater`1<Zenject.ILateTickable>::UpdateAll()
inline void TaskUpdater_1_UpdateAll_m39F09EEB678C1610817E282267C43C5C59FC1503 (TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskUpdater_1_t40CBCD99A07176769F37E5A5DAF2ABD94B00CA29*, const RuntimeMethod*))TaskUpdater_1_UpdateAll_m0E782F5A4FEE3134B5978367079974895697142B_gshared)(__this, method);
}
// System.Void Zenject.TickableManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m492D651CC676D2E7A927A727528E7082BC5CB7F3 (U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* __this, const RuntimeMethod* method) ;
// System.Object Zenject.BindInfo::get_Identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BindInfo_get_Identifier_m06AD5B204DE0C4AB1B9B304AD9DF81594A976519_inline (BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* __this, const RuntimeMethod* method) ;
// System.Void Zenject.BindingId::.ctor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingId__ctor_mFA7CB103CF17F90F3897E3C9E023D6E2DB7D4A66 (BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* __this, Type_t* ___type0, RuntimeObject* ___identifier1, const RuntimeMethod* method) ;
// System.Void Zenject.SignalBase::set_SignalId(Zenject.BindingId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignalBase_set_SignalId_mD4E7B4BC08FB5D6C18F9B32E88C5F9C86D40984A_inline (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___value0, const RuntimeMethod* method) ;
// System.Void Zenject.SignalBase::set_Settings(Zenject.SignalSettings)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignalBase_set_Settings_m4806ADA4377060EEE6D9F5D77070F80C5E7337B7_inline (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* ___value0, const RuntimeMethod* method) ;
// Zenject.BindingId Zenject.SignalBase::get_SignalId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* SignalBase_get_SignalId_m1C7CB1A15F3DA4C876B3A67C005BA4671C7E4D57_inline (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, const RuntimeMethod* method) ;
// System.Int32 Zenject.SignalManager::GetNumHandlers(Zenject.BindingId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignalManager_GetNumHandlers_m8980BE93BF67467CD20C94246B7BC3EF89785917 (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalType0, const RuntimeMethod* method) ;
// System.Boolean Zenject.SignalManager::IsHandlerRegistered(Zenject.BindingId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignalManager_IsHandlerRegistered_m449E2DE4C4E5DC2218D8EA40DF72E98BBE49B528 (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalType0, const RuntimeMethod* method) ;
// System.Void Zenject.ConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionCopyNonLazyBinder__ctor_m0EEDDDA6AE1390B557E3954DC4F1535EB442B31C (ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C* __this, BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* ___bindInfo0, const RuntimeMethod* method) ;
// System.Void Zenject.SignalBinder::.ctor(Zenject.BindInfo,Zenject.SignalSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalBinder__ctor_m3B3D7A209F766C8EF20675F87D0F33247BED76E6 (SignalBinder_tA7C7F1AF1EBEC2E1D82BB2181C284E4805812586* __this, BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* ___bindInfo0, SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* ___signalSettings1, const RuntimeMethod* method) ;
// Zenject.BindInfo Zenject.NonLazyBinder::get_BindInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* NonLazyBinder_get_BindInfo_mEED382479D9C4DCE644F684AF11856E018C63DB9_inline (NonLazyBinder_t9FD4DEB05CE8E09EE16E5566508D881816228AF0* __this, const RuntimeMethod* method) ;
// System.Void Zenject.BindInfo::set_Identifier(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BindInfo_set_Identifier_mE1B8B64FDF1E21B08E67BB5156E4ED5835096901_inline (BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Zenject.BindInfo::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindInfo__ctor_m84BD2762A9D2F6BAABFEB28475EFC5B3B3ECCCA8 (BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* __this, Type_t* ___contractType0, const RuntimeMethod* method) ;
// System.Void Zenject.SignalSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalSettings__ctor_m953DD8B3F130FF6EE54C21D3AF1A816442DB32F6 (SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* __this, const RuntimeMethod* method) ;
// Zenject.ConcreteIdBinderNonGeneric Zenject.DiContainer::Bind(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConcreteIdBinderNonGeneric_tA44CBAEC077725C86E7E973931742EA755F05511* DiContainer_Bind_m0BB557F9B922373B1A3E4E463B80D02C872704E4 (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___contractTypes0, const RuntimeMethod* method) ;
// Zenject.ArgConditionCopyNonLazyBinder Zenject.ScopeArgConditionCopyNonLazyBinder::AsCached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgConditionCopyNonLazyBinder_t02E8730F99239DEE447A998767E1AA93D54CE726* ScopeArgConditionCopyNonLazyBinder_AsCached_m13799B5CECC834B8A04D4CE489360283A412DE15 (ScopeArgConditionCopyNonLazyBinder_t26365631A16C2AD0B91FBA23A1E699B5A695491A* __this, const RuntimeMethod* method) ;
// Zenject.ConditionCopyNonLazyBinder Zenject.ArgConditionCopyNonLazyBinder::WithArguments<Zenject.SignalSettings,Zenject.BindInfo>(TParam1,TParam2)
inline ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C* ArgConditionCopyNonLazyBinder_WithArguments_TisSignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1_TisBindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA_mB3E05DCBDA18BFE1C360EDA5A2AD7FF46945C22E (ArgConditionCopyNonLazyBinder_t02E8730F99239DEE447A998767E1AA93D54CE726* __this, SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* ___param10, BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* ___param21, const RuntimeMethod* method)
{
	return ((  ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C* (*) (ArgConditionCopyNonLazyBinder_t02E8730F99239DEE447A998767E1AA93D54CE726*, SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1*, BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA*, const RuntimeMethod*))ArgConditionCopyNonLazyBinder_WithArguments_TisRuntimeObject_TisRuntimeObject_mE8891CB23F5D1F623D525CA6CB00E317B1397EB2_gshared)(__this, ___param10, ___param21, method);
}
// System.Void Zenject.SignalBinderWithId::.ctor(Zenject.BindInfo,Zenject.SignalSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalBinderWithId__ctor_m34CB28B54DD3FC4027FDE75687A75BCA96A4A76C (SignalBinderWithId_t5F0CC220AD7CF57338E5EADB804DFB5751B1C65B* __this, BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* ___bindInfo0, SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* ___signalSettings1, const RuntimeMethod* method) ;
// System.Void Zenject.SignalManager::Register(Zenject.BindingId,Zenject.ISignalHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalManager_Register_mD834FB0AEEB8B476A9D7FAAD6CFC3A4A2A1218F5 (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalType0, RuntimeObject* ___handler1, const RuntimeMethod* method) ;
// System.Void Zenject.SignalManager::Unregister(Zenject.BindingId,Zenject.ISignalHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalManager_Unregister_m296958FE3504B03D600640086926CE74B49D00F7 (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalType0, RuntimeObject* ___handler1, const RuntimeMethod* method) ;
// System.Void Zenject.NullBindingFinalizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullBindingFinalizer__ctor_m4685B20E5F15BA02E13656C0856FA80C5B53913A (NullBindingFinalizer_t4607F719F1E7804CE699E388A3FDE0041AFDABAF* __this, const RuntimeMethod* method) ;
// System.Void Zenject.BindFinalizerWrapper::set_SubFinalizer(Zenject.IBindingFinalizer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BindFinalizerWrapper_set_SubFinalizer_m7A57D41B3A2592B0663624D3497567FD687645B6_inline (BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// Zenject.FromBinderNonGeneric Zenject.ConcreteBinderNonGeneric::To<Zenject.StaticMethodSignalHandler>()
inline FromBinderNonGeneric_tBF219737E8A3BCB902999D7F4E91C3346E7ED771* ConcreteBinderNonGeneric_To_TisStaticMethodSignalHandler_t0CE0BEF81B871FDCC3DF52D425A2897EF04EF9C7_m2B763D956A36187FC01CC3927BA855F102BB8C6F (ConcreteBinderNonGeneric_tF46BE25BEF7E538CAB5A72A81F0EDA097DF7A833* __this, const RuntimeMethod* method)
{
	return ((  FromBinderNonGeneric_tBF219737E8A3BCB902999D7F4E91C3346E7ED771* (*) (ConcreteBinderNonGeneric_tF46BE25BEF7E538CAB5A72A81F0EDA097DF7A833*, const RuntimeMethod*))ConcreteBinderNonGeneric_To_TisRuntimeObject_m94FC47523504E1A55776D167D29103BED49414CA_gshared)(__this, method);
}
// System.Object Zenject.SignalHandlerBinder::get_Identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SignalHandlerBinder_get_Identifier_m0F09FAA2891555F3A8EE732920FE787E5AA19497_inline (SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF* __this, const RuntimeMethod* method) ;
// Zenject.ConditionCopyNonLazyBinder Zenject.ArgConditionCopyNonLazyBinder::WithArguments<System.Action,Zenject.BindingId>(TParam1,TParam2)
inline ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C* ArgConditionCopyNonLazyBinder_WithArguments_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisBindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB_m0553C0811F5446AB1F9DFC9FB55186B967B26DB5 (ArgConditionCopyNonLazyBinder_t02E8730F99239DEE447A998767E1AA93D54CE726* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___param10, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___param21, const RuntimeMethod* method)
{
	return ((  ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C* (*) (ArgConditionCopyNonLazyBinder_t02E8730F99239DEE447A998767E1AA93D54CE726*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB*, const RuntimeMethod*))ArgConditionCopyNonLazyBinder_WithArguments_TisRuntimeObject_TisRuntimeObject_mE8891CB23F5D1F623D525CA6CB00E317B1397EB2_gshared)(__this, ___param10, ___param21, method);
}
// System.Void Zenject.SignalHandlerBinder::.ctor(Zenject.DiContainer,System.Type,Zenject.BindFinalizerWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHandlerBinder__ctor_m8015F3FF149971D17578A1BF9D6EFAC3D762BFA7 (SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF* __this, DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ___container0, Type_t* ___signalType1, BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920* ___finalizerWrapper2, const RuntimeMethod* method) ;
// System.Void Zenject.SignalHandlerBinder::set_Identifier(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignalHandlerBinder_set_Identifier_m62FA977B2E991AF7BB6A589E2B54F3ED85E0AEA7_inline (SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Zenject.ISignalHandler> Zenject.SignalManager::GetList(Zenject.BindingId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* SignalManager_GetList_m94EADAC0FE87471EED207EA37E6CF673B4EA4B1A (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalType0, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<Zenject.ISignalHandler>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mD0DC6AA54A655F96022C9AB1E375221D58E34E1A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared)(___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<Zenject.ISignalHandler>::get_Count()
inline int32_t List_1_get_Count_m2CD9A05CE21127C6DDC7DF2763FB4F9B447F2502_inline (List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.ISignalHandler>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mDDC68F40977530973C19178FA4459CC436B781AB (Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___key0, List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF*, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB*, List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<Zenject.ISignalHandler>::.ctor()
inline void List_1__ctor_m573903B4538AD4A31417A5960299DE20825F6269 (List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.ISignalHandler>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m354999475B3E592D5FD1002C079D1AD9C3EFECB2 (Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___key0, List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF*, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB*, List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<Zenject.ISignalHandler>::Add(T)
inline void List_1_Add_m7CF78E8A7E92E9A542A8F3B92CF7C8DFDF5C284C_inline (List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ModestTree.MiscExtensions::RemoveWithConfirm<Zenject.ISignalHandler>(System.Collections.Generic.IList`1<T>,T)
inline void MiscExtensions_RemoveWithConfirm_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_m9AF443999C513DB9BEA32E7EA575E84C1AC7EA98 (RuntimeObject* ___list0, RuntimeObject* ___item1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MiscExtensions_RemoveWithConfirm_TisRuntimeObject_m11AF11F45841A615F205820927E772BDBF4FD96D_gshared)(___list0, ___item1, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.ISignalHandler>>::get_Values()
inline ValueCollection_t14750C19FE145094F0DE0C5874257AE3FB8FF1EB* Dictionary_2_get_Values_m0815DC1E2AAF01134EDA89730FB730382B3CF94A (Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t14750C19FE145094F0DE0C5874257AE3FB8FF1EB* (*) (Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.List`1<Zenject.ISignalHandler>,System.Collections.Generic.IEnumerable`1<Zenject.ISignalHandler>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA800B8F6F122C0DE535A81462759E565CA28239C (Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Collections.Generic.List`1<Zenject.ISignalHandler>,Zenject.ISignalHandler>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisList_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mECAEDD9E583FB2731696DBAA7AFB08C9434CA370 (RuntimeObject* ___source0, Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared)(___source0, ___selector1, method);
}
// System.Boolean ModestTree.LinqExtensions::IsEmpty<Zenject.ISignalHandler>(System.Collections.Generic.IEnumerable`1<T>)
inline bool LinqExtensions_IsEmpty_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mB43F4A9D4E87F470A0E006218A4EF5F5B949AC9F (RuntimeObject* ___enumerable0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))LinqExtensions_IsEmpty_TisRuntimeObject_m07643C6CC506300ABC02726DFA8ADB4E922BEF53_gshared)(___enumerable0, method);
}
// System.Void ModestTree.Assert::Warn(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Warn_mB95A6A8EF16FA1A363776E30107E3EAC3ABFE43D (bool ___condition0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Zenject.ISignalHandler>::GetEnumerator()
inline Enumerator_t74D9C18B6BFF65E61E5BC70B22C75656674B5E0E List_1_GetEnumerator_m68FDE279576C3D6719EA87AE5830386871463C60 (List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t74D9C18B6BFF65E61E5BC70B22C75656674B5E0E (*) (List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Zenject.ISignalHandler>::Dispose()
inline void Enumerator_Dispose_mC21EBDE98869168DD47D7AA98AC2A343C2B08433 (Enumerator_t74D9C18B6BFF65E61E5BC70B22C75656674B5E0E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t74D9C18B6BFF65E61E5BC70B22C75656674B5E0E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Zenject.ISignalHandler>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mE8D61EDD6D8A43622AD86724EA9C57AAB8077D67_inline (Enumerator_t74D9C18B6BFF65E61E5BC70B22C75656674B5E0E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t74D9C18B6BFF65E61E5BC70B22C75656674B5E0E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Zenject.ISignalHandler>::MoveNext()
inline bool Enumerator_MoveNext_m327F0B2C77FA32715CEDCBB51C02A0EFC981896E (Enumerator_t74D9C18B6BFF65E61E5BC70B22C75656674B5E0E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t74D9C18B6BFF65E61E5BC70B22C75656674B5E0E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.ISignalHandler>>::.ctor()
inline void Dictionary_2__ctor_m0D9B4680D7C4F067B8F56834D97D631912B50627 (Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Zenject.SignalManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB62389AE285B42A7B8795D0F23D3C1D970E11132 (U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80* __this, const RuntimeMethod* method) ;
// System.Void Zenject.SignalHandlerBase::.ctor(Zenject.BindingId,Zenject.SignalManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHandlerBase__ctor_m3A4127CAEE9960E92D686E1B9CA08347194B79DB (SignalHandlerBase_tBBD7D21C6134FB970E6A44B4D833112E83D81DD1* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalId0, SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* ___manager1, const RuntimeMethod* method) ;
// System.Boolean ModestTree.LinqExtensions::IsEmpty<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
inline bool LinqExtensions_IsEmpty_TisRuntimeObject_m07643C6CC506300ABC02726DFA8ADB4E922BEF53 (RuntimeObject* ___enumerable0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))LinqExtensions_IsEmpty_TisRuntimeObject_m07643C6CC506300ABC02726DFA8ADB4E922BEF53_gshared)(___enumerable0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Zenject.InjectAttributeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase__ctor_mFC442BE3A58FCC230E5C2329E1E91D8F3D764BAB (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, const RuntimeMethod* method) ;
// System.Void ModestTree.Util.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m92F1CE428056ACBE26B2A041BF47B76708F30B36 (PreserveAttribute_t84A5B8674170AA91A860FA7A8641869914D2E21A* __this, const RuntimeMethod* method) ;
// System.Void Zenject.InjectAttributeBase::set_Source(Zenject.InjectSources)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Source_mB7936A56F38FBACCCF3C156075274043E1A58341_inline (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Zenject.InjectAttributeBase::set_Optional(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Optional_m2DB525F0CD84E7CCC5BA04CDA7A6143DFFAFE84E_inline (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Zenject.Installer`1<Zenject.ActionInstaller>::.ctor()
inline void Installer_1__ctor_m5DF207CD0637CD313A233538EF8827604B068888 (Installer_1_t9C8C1E92ED9900E789E7207FFBCA555A776AC324* __this, const RuntimeMethod* method)
{
	((  void (*) (Installer_1_t9C8C1E92ED9900E789E7207FFBCA555A776AC324*, const RuntimeMethod*))Installer_1__ctor_mD3BE6C92472885970A367D50DFD0A73789AD36D6_gshared)(__this, method);
}
// Zenject.DiContainer Zenject.InstallerBase::get_Container()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* InstallerBase_get_Container_m6B8334AE16BE80DB951E34255450A92F8A7D5DB2_inline (InstallerBase_t96B3BE01124AD212055DEE639E0DB966D2465EBC* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Zenject.DiContainer>::Invoke(T)
inline void Action_1_Invoke_mB96BF190727AD06D27AF09633E7DE0EBE3A0BC03_inline (Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* __this, DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8*, DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Zenject.Installer`2<System.Collections.Generic.List`1<System.Type>,Zenject.ExecutionOrderInstaller>::.ctor()
inline void Installer_2__ctor_m78A7DEB2F8E12CE27C8E44BFD7EFE1A7A4F9D797 (Installer_2_t68BD527F5A221F90CCF2411322361606E65183F1* __this, const RuntimeMethod* method)
{
	((  void (*) (Installer_2_t68BD527F5A221F90CCF2411322361606E65183F1*, const RuntimeMethod*))Installer_2__ctor_mFE9A241451161159D510ADD4634A45A58CF69C49_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
inline int32_t List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_inline (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
inline Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Type>::Dispose()
inline void Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1 (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Type>::get_Current()
inline Type_t* Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_inline (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Zenject.DiContainer::BindExecutionOrder(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiContainer_BindExecutionOrder_mFE62A962AF4E902012ADC51A04B2F286665AD8D7 (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* __this, Type_t* ___type0, int32_t ___order1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Type>::MoveNext()
inline bool Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877 (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Zenject.IMemoryPool>::GetEnumerator()
inline Enumerator_t3A20911FBF765856D9BD863859CE99FC88309693 List_1_GetEnumerator_m965161ABEF6554ED54E6D8132046044D332F6F6A (List_1_t1187A154B962750DCED10BBEBA9DB0C50B4AA8B0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3A20911FBF765856D9BD863859CE99FC88309693 (*) (List_1_t1187A154B962750DCED10BBEBA9DB0C50B4AA8B0*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Zenject.IMemoryPool>::Dispose()
inline void Enumerator_Dispose_m4A369A78161D0DAEE3181B2FA9D766BEEEF59626 (Enumerator_t3A20911FBF765856D9BD863859CE99FC88309693* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3A20911FBF765856D9BD863859CE99FC88309693*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Zenject.IMemoryPool>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m555CA28D91C56E4F343450CDD7EF36D3ADDC219E_inline (Enumerator_t3A20911FBF765856D9BD863859CE99FC88309693* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t3A20911FBF765856D9BD863859CE99FC88309693*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String ModestTree.MiscExtensions::Fmt(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiscExtensions_Fmt_m2471F73DCB0E16776F46371A3A9C10FD72DAFE2D (String_t* ___s0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void ModestTree.Assert::IsEqual(System.Object,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsEqual_m3A17E54DF7A2463A165909D275AF0479B8FC09B1 (RuntimeObject* ___left0, RuntimeObject* ___right1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Zenject.IMemoryPool>::MoveNext()
inline bool Enumerator_MoveNext_m037245F288C0405F0DF1E76CD9D61A628570BF54 (Enumerator_t3A20911FBF765856D9BD863859CE99FC88309693* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3A20911FBF765856D9BD863859CE99FC88309693*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Zenject.ProfileBlock::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileBlock__ctor_m827492D3F291563FC692250CF815D93B1EB0D870 (ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15* __this, String_t* ___sampleName0, bool ___rootBlock1, const RuntimeMethod* method) ;
// System.Boolean ModestTree.TypeExtensions::IsAbstract(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsAbstract_m4A8BA2D60D6CB79A6A5D24946363513383C99D16 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Zenject.ZenjectTypeInfo>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mCDDBCDF80DD1D831234154B9ACE5B5754C33C91A (Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243* __this, Type_t* ___key0, ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243*, Type_t*, ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Zenject.ZenjectTypeInfo Zenject.TypeAnalyzer::CreateTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* TypeAnalyzer_CreateTypeInfo_m63F38B9248EFB140C5B3CA46EC0041F7EBBE2716 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Zenject.ZenjectTypeInfo>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB8BD2766957B69A0CF92E9F0B5AB1B636782657A (Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243* __this, Type_t* ___key0, ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243*, Type_t*, ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Reflection.ConstructorInfo Zenject.TypeAnalyzer::GetInjectConstructor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* TypeAnalyzer_GetInjectConstructor_m0629549C5A38887312D425D791EE36EC54CBA605 (Type_t* ___parentType0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Zenject.PostInjectableInfo> Zenject.TypeAnalyzer::GetPostInjectMethods(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* TypeAnalyzer_GetPostInjectMethods_m4DCC955D42A8152E482EA1EB3C7419ADCCA3086B (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.TypeAnalyzer::GetFieldInjectables(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeAnalyzer_GetFieldInjectables_mD9DB192EBF4038694215CAC9589DE0D9CC203167 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Zenject.InjectableInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* Enumerable_ToList_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_mF953DE6BF23A9B0EDE47B7050D84481EAF9352B8 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.TypeAnalyzer::GetPropertyInjectables(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeAnalyzer_GetPropertyInjectables_mCAB3A78B4B7AB538BF9763664B3433E50BB6600C (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.TypeAnalyzer::GetConstructorInjectables(System.Type,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeAnalyzer_GetConstructorInjectables_m15478351A2B4D0C57F38B0BD32B08C206E14A493 (Type_t* ___parentType0, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___constructorInfo1, const RuntimeMethod* method) ;
// System.Void Zenject.ZenjectTypeInfo::.ctor(System.Type,System.Collections.Generic.List`1<Zenject.PostInjectableInfo>,System.Reflection.ConstructorInfo,System.Collections.Generic.List`1<Zenject.InjectableInfo>,System.Collections.Generic.List`1<Zenject.InjectableInfo>,System.Collections.Generic.List`1<Zenject.InjectableInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectTypeInfo__ctor_m6F91A916326D11E76E1DAC48818C197489E50F91 (ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* __this, Type_t* ___typeAnalyzed0, List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* ___postInjectMethods1, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___injectConstructor2, List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* ___fieldInjectables3, List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* ___propertyInjectables4, List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* ___constructorInjectables5, const RuntimeMethod* method) ;
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m07F79109E8207A6A2FF614F55ABBEDD6CCCFEC8C (U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.ConstructorInfo::op_Equality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Equality_m6DD673A9263EE646773396F9D8DEE46FA48FFBF2 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___left0, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___right1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<Zenject.InjectableInfo>()
inline RuntimeObject* Enumerable_Empty_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m18A05866B0AA0E91416AD29FB59DF2993FC19DF0_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisRuntimeObject_mA90CDE158774C34A28C07CEEA9E9EA2A61618238_gshared_inline)(method);
}
// System.Void System.Func`2<System.Reflection.ParameterInfo,Zenject.InjectableInfo>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE158FE1A173FB1579F3E9976B022979CC5527355 (Func_2_tC62621E47817065D1808718363314932F0DD09EA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC62621E47817065D1808718363314932F0DD09EA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Reflection.ParameterInfo,Zenject.InjectableInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m87F724693AFE67D95C71A496AF4B7410F099A3D3 (RuntimeObject* ___source0, Func_2_tC62621E47817065D1808718363314932F0DD09EA* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC62621E47817065D1808718363314932F0DD09EA*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<T> ModestTree.TypeExtensions::AllAttributes<Zenject.InjectAttributeBase>(System.Reflection.ParameterInfo)
inline RuntimeObject* TypeExtensions_AllAttributes_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m40555E9795982801E99FDF783EA317562051F30A (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___provider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F*, const RuntimeMethod*))TypeExtensions_AllAttributes_TisRuntimeObject_mDB3A0CE9932F81539E061854BD2CB455185B0B3F_gshared)(___provider0, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Zenject.InjectAttributeBase>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tCBE4B2163152CB0A4722667AA65591B659F4B906* Enumerable_ToList_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mF643C8F89091667446619CBD496EDEC554EF6B76 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tCBE4B2163152CB0A4722667AA65591B659F4B906* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<Zenject.InjectAttributeBase>::get_Count()
inline int32_t List_1_get_Count_m808F9FADF8A4D1DEAE16041E2F3301645E1F430E_inline (List_1_tCBE4B2163152CB0A4722667AA65591B659F4B906* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCBE4B2163152CB0A4722667AA65591B659F4B906*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void ModestTree.Assert::That(System.Boolean,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_m01A6B7E62D93E7352AAB67B40C0522C03B175D52 (bool ___condition0, String_t* ___message1, RuntimeObject* ___p12, RuntimeObject* ___p23, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::SingleOrDefault<Zenject.InjectAttributeBase>(System.Collections.Generic.IEnumerable`1<TSource>)
inline InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* Enumerable_SingleOrDefault_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m1B029F6AA7575FF1F37EB07A2650F0CCA02984DC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_mBE781B30D8108D145C144C1733472EA99BA4A5BE_gshared)(___source0, method);
}
// System.Object Zenject.InjectAttributeBase::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InjectAttributeBase_get_Id_m250FF1978AC82CC02B0B187EAD1B988949D2ABD0_inline (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, const RuntimeMethod* method) ;
// System.Boolean Zenject.InjectAttributeBase::get_Optional()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InjectAttributeBase_get_Optional_m00795F7AB4BC24B675BBA10B2D0D6943FA092C07_inline (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, const RuntimeMethod* method) ;
// Zenject.InjectSources Zenject.InjectAttributeBase::get_Source()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InjectAttributeBase_get_Source_m9C6D120731515051BDBF74825335ADD7C7FE352E_inline (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, const RuntimeMethod* method) ;
// System.Void Zenject.InjectableInfo::.ctor(System.Boolean,System.Object,System.String,System.Type,System.Type,System.Action`2<System.Object,System.Object>,System.Object,Zenject.InjectSources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectableInfo__ctor_mFDA78F7AF2EF52D23175DF56E5CCE534C226FE19 (InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* __this, bool ___optional0, RuntimeObject* ___identifier1, String_t* ___memberName2, Type_t* ___memberType3, Type_t* ___objectType4, Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* ___setter5, RuntimeObject* ___defaultValue6, int32_t ___sourceType7, const RuntimeMethod* method) ;
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mDD3AA6C2635E942EDE13E2242F1A4A41860BB00D (U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> ModestTree.TypeExtensions::GetAllInstanceMethods(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetAllInstanceMethods_m9F7415A06FEEFBEF03835C7CF430665BE453E198 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.MethodInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m85EFD3541E8A8498FD05A6169ED11E00D408A2F0 (Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisMethodInfo_t_mAA1D9863BA8B1900B6E5E8CCD11997EBA23EBCDD (RuntimeObject* ___source0, Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB* Enumerable_ToList_TisMethodInfo_t_m1C029DAC004C7D920CDAF7298894ABB7E768437E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Collections.Generic.IEnumerable`1<T> ModestTree.MiscExtensions::Yield<System.Type>(T)
inline RuntimeObject* MiscExtensions_Yield_TisType_t_m5DA0AF261A51C7BFCBDECB1F9A9E84CA6F0F21C7 (Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Type_t*, const RuntimeMethod*))MiscExtensions_Yield_TisRuntimeObject_m4DB0D2A44E9AAA335EECCD4DC66DE29587CC0883_gshared)(___item0, method);
}
// System.Collections.Generic.IEnumerable`1<System.Type> ModestTree.TypeExtensions::GetParentTypes(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetParentTypes_mB3E14E2EE5D12A687AE1AB5D1E9DF77DBC39BE4E (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisType_t_m35B23F074726B58C605EC26DB7F2AE1C3A55713A (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Reverse_TisType_t_m78DD34608B5C265A97ACBF43A5B80F3F518BFC42 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisRuntimeObject_mF7B0A079765A37716D52A158EBD61E57C390CBC9_gshared)(___source0, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Func`2<System.Reflection.MethodInfo,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m43ED00517D31C8316E75539FD95323C8322A4FBC (Func_2_t71765C126395C159B2E7E865B36871B1059E8C18* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t71765C126395C159B2E7E865B36871B1059E8C18*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Reflection.MethodInfo,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisMethodInfo_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m407B413A9800F0D83D153CD88EB4EA420FEA0C2B (RuntimeObject* ___source0, Func_2_t71765C126395C159B2E7E865B36871B1059E8C18* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t71765C126395C159B2E7E865B36871B1059E8C18*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0CD0677A1278BFC7E13405D11D1EF30919C9E9A2_gshared)(___source0, ___keySelector1, method);
}
// System.Void System.Collections.Generic.List`1<Zenject.PostInjectableInfo>::.ctor()
inline void List_1__ctor_m87229AD704AC65FA52F40FFB65CB43FA725ADA30 (List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<T> ModestTree.TypeExtensions::AllAttributes<Zenject.InjectAttribute>(System.Reflection.MemberInfo)
inline RuntimeObject* TypeExtensions_AllAttributes_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_m665A57A66413D579B0AC8F4BB59852CF9101FF35 (MemberInfo_t* ___provider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MemberInfo_t*, const RuntimeMethod*))TypeExtensions_AllAttributes_TisRuntimeObject_mC7063BCED4D4AFF50DB8155F4B0B52A578A79866_gshared)(___provider0, method);
}
// TSource System.Linq.Enumerable::Single<Zenject.InjectAttribute>(System.Collections.Generic.IEnumerable`1<TSource>)
inline InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F* Enumerable_Single_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_m227D11234EAE6AAAC642BF62AD763C03A3FBC430 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Single_TisRuntimeObject_m4966D6BB67940E1EE80ADA3CC60C81D03436C62F_gshared)(___source0, method);
}
// System.Void ModestTree.Assert::That(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_m0CA07617E2F574096CEB75250563BA2CB6349FB1 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Zenject.PostInjectableInfo::.ctor(System.Reflection.MethodInfo,System.Collections.Generic.List`1<Zenject.InjectableInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostInjectableInfo__ctor_mEBC7EEAC0C7E406E695831B971A7DDD019039E63 (PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434* __this, MethodInfo_t* ___methodInfo0, List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* ___injectableInfo1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Zenject.PostInjectableInfo>::Add(T)
inline void List_1_Add_mF929C29F3B2D7390D81A7BC13E40D6F21A39376E_inline (List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* __this, PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC*, PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertyInjectablesU3Ed__7__ctor_m8BC3DC9559130CFEA03BB7444485D1E8B12ED3C0 (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFieldInjectablesU3Ed__8__ctor_m73C7401AAA5CE20457F1170A71F02BB0E8284CAE (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<System.Reflection.FieldInfo>()
inline RuntimeObject* Enumerable_Empty_TisFieldInfo_t_m3F0C51FB0DC4328922A53AD75450A6D56E1A14A9_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisRuntimeObject_mA90CDE158774C34A28C07CEEA9E9EA2A61618238_gshared_inline)(method);
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> Zenject.TypeAnalyzer::GetAllFields(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeAnalyzer_GetAllFields_mCD54FC91ABCA1F4E165BD085BEEB27A9198AE4DC (Type_t* ___t0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Reflection.FieldInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisFieldInfo_t_m9AEDE6D6F93B3FC8B7AC51B7D87E1DDBEDDF1485 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<System.Reflection.FieldInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Distinct_TisFieldInfo_t_m04C394D265558D3214B0F99A5B1B4829E6428AF7 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Distinct_TisRuntimeObject_mBCF33F5AD0A25B1E57B46FF34330DF74278ADB9E_gshared)(___source0, method);
}
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mAD3933459CB2A59E72E0CD52D7164A18598F69BD (U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Reflection.FieldInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* Enumerable_ToList_TisFieldInfo_t_mDA159D274DAA88E98E2DEBCA7379ECFFA00ACD00 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Func`2<System.Reflection.FieldInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m720E8683356B22FA89D3983D974FC700BDE279A3 (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Reflection.FieldInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90 (RuntimeObject* ___source0, Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.FieldInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisFieldInfo_t_m120E54771AE0057A93898EEE26A589F0C5B5AC6A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___source0, method);
}
// System.Void System.Func`2<System.Reflection.FieldInfo,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9FC86261B4A26C6B6D721971A566A0EAD8AB25F4 (Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Reflection.FieldInfo,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisFieldInfo_t_TisString_t_m4001C29647540D7C3A0AEC2D42134CA449775B51 (RuntimeObject* ___source0, Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void Zenject.ZenjectException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectException__ctor_mE027D5E78D20EE15B004C923CE66BFA54A52707B (ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052 (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<T> ModestTree.TypeExtensions::AllAttributes<Zenject.InjectAttributeBase>(System.Reflection.MemberInfo)
inline RuntimeObject* TypeExtensions_AllAttributes_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mA16D441FFDF05076E635E15A270BBB98DBF05884 (MemberInfo_t* ___provider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MemberInfo_t*, const RuntimeMethod*))TypeExtensions_AllAttributes_TisRuntimeObject_mC7063BCED4D4AFF50DB8155F4B0B52A578A79866_gshared)(___provider0, method);
}
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m954BE2FD616197CE3739F8CCE197EA3AB79C4BF1 (U3CU3Ec__DisplayClass11_0_t45B39717DBA5C541CBC86278F9AA8E119EA74BF5* __this, const RuntimeMethod* method) ;
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass11_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_1__ctor_mFB8C5CDE9B1C109BAE71877BBEE877C56FBCF8A1 (U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343* __this, const RuntimeMethod* method) ;
// System.Action`2<System.Object,System.Object> Zenject.TypeAnalyzer::GetOnlyPropertySetter(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* TypeAnalyzer_GetOnlyPropertySetter_m44566CC9C8E77B1859B2DE6C9E9EDEA5323592D3 (Type_t* ___parentType0, String_t* ___propertyName1, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo[] ModestTree.TypeExtensions::Constructors(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* TypeExtensions_Constructors_mD6382C00BFFF854332BC7BF3DEC8CA89F9E88A3C (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean ModestTree.LinqExtensions::IsEmpty<System.Reflection.ConstructorInfo>(System.Collections.Generic.IEnumerable`1<T>)
inline bool LinqExtensions_IsEmpty_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m957B332A72BB2AD1774B2DEA5D6EE2F923FDD778 (RuntimeObject* ___enumerable0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))LinqExtensions_IsEmpty_TisRuntimeObject_m07643C6CC506300ABC02726DFA8ADB4E922BEF53_gshared)(___enumerable0, method);
}
// System.Boolean ModestTree.LinqExtensions::HasMoreThan<System.Reflection.ConstructorInfo>(System.Collections.Generic.IEnumerable`1<T>,System.Int32)
inline bool LinqExtensions_HasMoreThan_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m10DA62F47B76A012E5DDA569901E60C01CB4B809 (RuntimeObject* ___enumerable0, int32_t ___amount1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, int32_t, const RuntimeMethod*))LinqExtensions_HasMoreThan_TisRuntimeObject_m7602DCA3378C40A3927328D2C134719D9E1188ED_gshared)(___enumerable0, ___amount1, method);
}
// System.Void System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7871710CD540E478649F02E1BC07A13BF5D774D2 (Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Reflection.ConstructorInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m8EA9B635BFA7C329D4148DF66995F7A096C746D9 (RuntimeObject* ___source0, Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// TSource System.Linq.Enumerable::SingleOrDefault<System.Reflection.ConstructorInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Enumerable_SingleOrDefault_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_mFCD77DA5BEDB80CD993C7649718314870686003A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_mBE781B30D8108D145C144C1733472EA99BA4A5BE_gshared)(___source0, method);
}
// System.Boolean System.Reflection.ConstructorInfo::op_Inequality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___left0, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___right1, const RuntimeMethod* method) ;
// TSource ModestTree.LinqExtensions::OnlyOrDefault<System.Reflection.ConstructorInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* LinqExtensions_OnlyOrDefault_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m8EF30D0618F6FC9E9CC26552A4432A77844C4854 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* (*) (RuntimeObject*, const RuntimeMethod*))LinqExtensions_OnlyOrDefault_TisRuntimeObject_mA2B56BB84BBFA56807B53116F49937FFF4594E28_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Zenject.ZenjectTypeInfo>::.ctor()
inline void Dictionary_2__ctor_mB8323C7B23E4D89188A6FFF8E4596EA9159907EA (Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// Zenject.InjectableInfo Zenject.TypeAnalyzer::CreateInjectableInfoForParam(System.Type,System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* TypeAnalyzer_CreateInjectableInfoForParam_m1D369B0176E5282D2E424285F283791082045F16 (Type_t* ___parentType0, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___paramInfo1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
inline int32_t List_1_IndexOf_m1F056354847C31B867863E86AAEBF49A0EF4DA4D (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, Type_t*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void Zenject.TypeAnalyzer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD4F15AAB203127AB6C67559EA09C5E8ECEEADE68 (U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___source0, method);
}
// System.Boolean ModestTree.TypeExtensions::HasAttribute(System.Reflection.MemberInfo,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_HasAttribute_mC50DA3D76BFE618249BC1AE1B55F1E5C39793F59 (MemberInfo_t* ___provider0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___attributeTypes1, const RuntimeMethod* method) ;
// System.Boolean ModestTree.TypeExtensions::HasAttribute<Zenject.InjectAttribute>(System.Reflection.MemberInfo)
inline bool TypeExtensions_HasAttribute_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_mBDE3F4FAED2226425AFC987BE67C6C1E4526142B (MemberInfo_t* ___provider0, const RuntimeMethod* method)
{
	return ((  bool (*) (MemberInfo_t*, const RuntimeMethod*))TypeExtensions_HasAttribute_TisRuntimeObject_m4915E8CD840540E1907B0DB4758E6A3BBEEAAA95_gshared)(___provider0, method);
}
// System.Boolean System.Reflection.MethodBase::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsPrivate_m0818D64C8361CC0FE0DD77AFBBEA0B9BC37E8549 (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertyInjectablesU3Ed__7_U3CU3Em__Finally1_m3A7A02C3B031B65445F74CEB1CD7803C9E62FBAB (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, const RuntimeMethod* method) ;
// System.Void Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertyInjectablesU3Ed__7_System_IDisposable_Dispose_m064C0E461E200577FC34E4EF685EDDA90593A096 (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> ModestTree.TypeExtensions::GetAllInstanceProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetAllInstanceProperties_mDD8F3AF1FEC5571A4BD67A9A1705500FE939D80E (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.PropertyInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7 (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Reflection.PropertyInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC (RuntimeObject* ___source0, Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// Zenject.InjectableInfo Zenject.TypeAnalyzer::CreateForMember(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* TypeAnalyzer_CreateForMember_m3BDFD58DEC375EEA2153F40D6C78BCE08B6B248A (MemberInfo_t* ___memInfo0, Type_t* ___parentType1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Zenject.InjectableInfo> Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::System.Collections.Generic.IEnumerable<Zenject.InjectableInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPropertyInjectablesU3Ed__7_System_Collections_Generic_IEnumerableU3CZenject_InjectableInfoU3E_GetEnumerator_m91E92B15F466FC7DD11D5CFAA6DDF14CB767E91B (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, const RuntimeMethod* method) ;
// System.Void Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFieldInjectablesU3Ed__8_U3CU3Em__Finally1_m3D57B177FE3AB65B9909B56E48C0AE090F715850 (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, const RuntimeMethod* method) ;
// System.Void Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFieldInjectablesU3Ed__8_System_IDisposable_Dispose_m2B0A43ED6E76C70778CB42FAA6BCAEB24BF19E16 (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> ModestTree.TypeExtensions::GetAllInstanceFields(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetAllInstanceFields_m2D537D936FDD5E2A34C6160D866C731B86F5E144 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Zenject.InjectableInfo> Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::System.Collections.Generic.IEnumerable<Zenject.InjectableInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFieldInjectablesU3Ed__8_System_Collections_Generic_IEnumerableU3CZenject_InjectableInfoU3E_GetEnumerator_m6E6350EAE290270DFC6554994FD4DC9DE0F34AF3 (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass10_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_1__ctor_m112FCC140EE50412F5D1CEDC794109255FF72F94 (U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Reflection.FieldInfo>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m819B21F3E857F07609D5D714AACCE865BC1D071B (Action_1_t85BF1C5A502E06C64F55E4BBB10F5147C08A24B1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t85BF1C5A502E06C64F55E4BBB10F5147C08A24B1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.FieldInfo>::ForEach(System.Action`1<T>)
inline void List_1_ForEach_m38AD404A2BBC86B65806EC531DAD25DB6E4AA1E4 (List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* __this, Action_1_t85BF1C5A502E06C64F55E4BBB10F5147C08A24B1* ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7*, Action_1_t85BF1C5A502E06C64F55E4BBB10F5147C08A24B1*, const RuntimeMethod*))List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared)(__this, ___action0, method);
}
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,Zenject.TypeValuePair>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m700F8BCE2DC5DE51EB0DCB5B3792297791C7FB9A (Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Type,Zenject.TypeValuePair>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisType_t_TisTypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_mDD0B5BF2E4E680E301D665A2D0B88C9A0CFE3930 (RuntimeObject* ___source0, Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Zenject.TypeValuePair>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tE4CB9AB1202E30A4175B37378F6F0A884213B6FB* Enumerable_ToList_TisTypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_m4C470C506595FC06B36EC76ED179219F68DD34EE (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tE4CB9AB1202E30A4175B37378F6F0A884213B6FB* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void Zenject.ValidationUtil/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m120140ED9E39CA4D797B5A0BA45E8CEC72B01255 (U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F* __this, const RuntimeMethod* method) ;
// System.Object ModestTree.TypeExtensions::GetDefaultValue(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetDefaultValue_m29FE2D568664EB1CB40CC6B2407DAD6755E41613 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void Zenject.TypeValuePair::.ctor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeValuePair__ctor_mB1A5D813B999244E16187F290D2E6C74AC39961C (TypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A* __this, Type_t* ___type0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// Zenject.ZenjectException ModestTree.Assert::CreateException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9* Assert_CreateException_mAAD6DA0A595CA31D78D49B154C2A7749DDFAF343 (String_t* ___message0, const RuntimeMethod* method) ;
// Zenject.DiContainer Zenject.ZenAutoInjecter::LookupContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ZenAutoInjecter_LookupContainer_mEBC6647FC2A4A9DE3A12BA588F2BFFEC0EC7C346 (ZenAutoInjecter_t3DAFF7852AA15BFFF5395DA6A23D2BA25C648FB9* __this, const RuntimeMethod* method) ;
// System.Void Zenject.DiContainer::InjectGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiContainer_InjectGameObject_m39A61E50E6A45030E87BFCCB0E1006BEC0BAFAAF (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// Zenject.ProjectContext Zenject.ProjectContext::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825* ProjectContext_get_Instance_m31E3E1B48D8830D4445DE17E483CA4FB37D93B31 (const RuntimeMethod* method) ;
// System.Void ModestTree.Assert::IsEqual(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsEqual_mED53223A9DF123AF6720159D70F0DDB0F6A9C6A3 (RuntimeObject* ___left0, RuntimeObject* ___right1, const RuntimeMethod* method) ;
// TContract Zenject.DiContainer::Resolve<Zenject.SceneContextRegistry>()
inline SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* DiContainer_Resolve_TisSceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56_mAE036D230C80FD5081A68BB54669DB6939E506D7 (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* __this, const RuntimeMethod* method)
{
	return ((  SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* (*) (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D*, const RuntimeMethod*))DiContainer_Resolve_TisRuntimeObject_mFFDEEAA3E39CFE9D5D9A9885DACB34691CD0BF78_gshared)(__this, method);
}
// Zenject.SceneContext Zenject.SceneContextRegistry::GetSceneContextForScene(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* SceneContextRegistry_GetSceneContextForScene_m93CA181B161E476B38759D3AA8102B548EB8E278 (SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Zenject.ZenjectSceneLoader::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectSceneLoader_LoadScene_m3481F714913CD094FEE4713E9BB0B3D61F3CE00A (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, const RuntimeMethod* method) ;
// System.Void Zenject.ZenjectSceneLoader::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectSceneLoader_LoadScene_mF97BC3656717743EF4701A25280EB76E448C2EF7 (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings2, const RuntimeMethod* method) ;
// System.Void Zenject.ZenjectSceneLoader::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>,Zenject.LoadSceneRelationship)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectSceneLoader_LoadScene_m528284FA92FEB47A3203B14D4DE1C30C3CECAD93 (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings2, int32_t ___containerMode3, const RuntimeMethod* method) ;
// System.Void Zenject.ZenjectSceneLoader::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>,Zenject.LoadSceneRelationship,System.Action`1<Zenject.DiContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectSceneLoader_LoadScene_m4236AAB75AAA96FE49F9D9D3C8AE9A03E6FBDB8B (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings2, int32_t ___containerMode3, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindingsLate4, const RuntimeMethod* method) ;
// System.Void Zenject.ZenjectSceneLoader::PrepareForLoadScene(UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>,System.Action`1<Zenject.DiContainer>,Zenject.LoadSceneRelationship)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectSceneLoader_PrepareForLoadScene_m56DFA9E873491F5E2FF42115E068CE83BA54F2D2 (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, int32_t ___loadMode0, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindingsLate2, int32_t ___containerMode3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::CanStreamedLevelBeLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_CanStreamedLevelBeLoaded_mC3B7683DBAB183CFBEEDB2025580E1754B920BD4 (String_t* ___levelName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation Zenject.ZenjectSceneLoader::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ZenjectSceneLoader_LoadSceneAsync_m9A1A9C9B6C582021B3CC1DF34B2D29E6F2896FD7 (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation Zenject.ZenjectSceneLoader::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ZenjectSceneLoader_LoadSceneAsync_mADC6D2F6B07B63EB0DEE01BF720722893DA956FC (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings2, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation Zenject.ZenjectSceneLoader::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>,Zenject.LoadSceneRelationship)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ZenjectSceneLoader_LoadSceneAsync_m253625CA12413F9B41430FE4676150647FADD8E4 (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings2, int32_t ___containerMode3, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation Zenject.ZenjectSceneLoader::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>,Zenject.LoadSceneRelationship,System.Action`1<Zenject.DiContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ZenjectSceneLoader_LoadSceneAsync_mA833C4284EA9AC25A1C27A4B74EACF24FF9257FB (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings2, int32_t ___containerMode3, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindingsLate4, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m29D55D2C6CB7A019B26DA3F44C0881FF6AC491EC (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> Zenject.DiContainer::get_ParentContainers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DiContainer_get_ParentContainers_m0614507A32CB4D8382BB174CB30B3B288F18106C_inline (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<Zenject.InjectableInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m64315434DB7EAF42E2A44B55EF9285E16E08DA63 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared)(___first0, ___second1, method);
}
// System.Void System.Func`2<Zenject.PostInjectableInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD47FAD4D5024765677D13E0A6B3918BAF4B0D405 (Func_2_t7A911A55255256022EB742741E520F8931A733CC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7A911A55255256022EB742741E520F8931A733CC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<Zenject.PostInjectableInfo,Zenject.InjectableInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisPostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m84785C4F7BDC740687D990C0E637370A9FB10FB3 (RuntimeObject* ___source0, Func_2_t7A911A55255256022EB742741E520F8931A733CC* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7A911A55255256022EB742741E520F8931A733CC*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared)(___source0, ___selector1, method);
}
// System.Void Zenject.ZenjectTypeInfo/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE7F813473998F25F8A6015C3E1D47415ABCF9903 (U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.PostInjectableInfo::get_InjectableInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PostInjectableInfo_get_InjectableInfo_mF5EBDF92A43E7C3AF715D45CEF9068CBFEAE693A_inline (PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434* __this, const RuntimeMethod* method) ;
// System.Void Zenject.ValidationMarker::set_MarkedType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidationMarker_set_MarkedType_mC430D15A1D0E0EF31DFF62C48A7C4C60239A8E7E_inline (ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void Zenject.ValidationMarker::set_InstantiateFailed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidationMarker_set_InstantiateFailed_mE33C5E11A58F4FFB578745B7CA0ED16992C9656D_inline (ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Zenject.ValidationMarker::.ctor(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationMarker__ctor_m662FDE909CDD331DA1263B5182E593A143E2FEDC (ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C* __this, Type_t* ___markedType0, bool ___instantiateFailed1, const RuntimeMethod* method) ;
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo ModestTree.TypeExtensions::Method(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* TypeExtensions_Method_m942C7846981011AFDD9A0A31C655520D2E1D5BE4 (Delegate_t* ___del0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean ModestTree.TypeExtensions::IsInterface(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsInterface_m535252AC61E4AF086957C76571817E3602A130B7 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Type ModestTree.TypeExtensions::BaseType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeExtensions_BaseType_mA964FE843A6999379B93BE824D517E09B78FD044 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllSceneContextsU3Ed__3__ctor_mBCFB2BB083C5C4CDABBB5C3DD75C4CACF5672440 (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> Zenject.Internal.ZenUtilInternal::GetRootGameObjects(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenUtilInternal_GetRootGameObjects_mA45CC84DE67FC7E1DBDA14D68FB6AB2927E4D47E (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Zenject.Internal.ZenUtilInternal::GetInjectableMonoBehaviours(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenUtilInternal_GetInjectableMonoBehaviours_m9BE7B0A558CCA2CD75C911FB46519BEFB2F665AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ___injectableComponents1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponents<UnityEngine.MonoBehaviour>()
inline MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* GameObject_GetComponents_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0CFAE58E748FAFFB98501EFAE1703F6F39E8BE72 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared)(__this, method);
}
// System.Boolean ModestTree.TypeExtensions::DerivesFromOrEqual<Zenject.GameObjectContext>(System.Type)
inline bool TypeExtensions_DerivesFromOrEqual_TisGameObjectContext_tA110077B8B5A087C1CE15C7C266B19DA70049160_m5EB55130BA73417C20DDCEABBB024041BC23D3A6 (Type_t* ___a0, const RuntimeMethod* method)
{
	return ((  bool (*) (Type_t*, const RuntimeMethod*))TypeExtensions_DerivesFromOrEqual_TisRuntimeObject_mD5E2B752622FAB4859B749DCCA8C7722ABDEF100_gshared)(___a0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::Add(T)
inline void List_1_Add_m0D16ECB497C9DF4D43F0E90CDB7987F5CB7CA446_inline (List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean Zenject.Internal.ZenUtilInternal::IsInjectableMonoBehaviourType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZenUtilInternal_IsInjectableMonoBehaviourType_m683FBB8F1A30855DFF2B4186B505370662E8DDDC (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean ModestTree.TypeExtensions::DerivesFrom<Zenject.MonoInstaller>(System.Type)
inline bool TypeExtensions_DerivesFrom_TisMonoInstaller_tF7394A53721F75A3A34C20082903328321552D20_mC75D550E5AF6F01AD1B1E54213BB94D839A338B0 (Type_t* ___a0, const RuntimeMethod* method)
{
	return ((  bool (*) (Type_t*, const RuntimeMethod*))TypeExtensions_DerivesFrom_TisRuntimeObject_mAF1D8B1B54D2E5FACA67536DAEB05E84EC5525AD_gshared)(___a0, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Zenject.Internal.ZenUtilInternal/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m9890DDA45656976832FFD33874954B88BDED9B1E (U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.GameObject,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9EDB1EDE49108C1136C6B0DD3DD5D2F843F5936E (Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m4AC829827FA2EDC2185B8554E788741789A97DA4 (RuntimeObject* ___source0, Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// T[] UnityEngine.Resources::FindObjectsOfTypeAll<UnityEngine.GameObject>()
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Resources_FindObjectsOfTypeAll_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8F4E76E85D7C2CEF6EEDBC4E39C568AE65BC01D3 (const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* (*) (const RuntimeMethod*))Resources_FindObjectsOfTypeAll_TisRuntimeObject_mD84D8C84477F126072383A3F1E7789DA25B4206B_gshared)(method);
}
// System.Void Zenject.Internal.ZenUtilInternal/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2159F49D3CCC8ED300518BE01881AE07D60F18FA (U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<Zenject.SceneContext>()
inline SceneContextU5BU5D_tB07CF537D54DA9E1CB105F3EBA725E51EAF87611* GameObject_GetComponentsInChildren_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m0F6A82CA8D0F852039A19EF19334743D469FB044 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SceneContextU5BU5D_tB07CF537D54DA9E1CB105F3EBA725E51EAF87611* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Zenject.ProjectContext>()
inline ProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825* GameObject_GetComponent_TisProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825_m57CE0FF9883F4EF8649BC783D01562DF4358265A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllSceneContextsU3Ed__3_U3CU3Em__Finally1_mDE84DA488168CD2B4B1988DCA5263B304004D1C4 (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, const RuntimeMethod* method) ;
// System.Void Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllSceneContextsU3Ed__3_System_IDisposable_Dispose_m2803EA7B0988F31D99F5458F38ACC3A1CA23B3E5 (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.SceneManagement.Scene> ModestTree.Util.UnityUtil::get_AllLoadedScenes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityUtil_get_AllLoadedScenes_m303F83A1E4CF00ED18DC6D7B668E8736FC77A5A7 (const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m53F9AB0453F5B10C8C21D06BA261FEEDCF23DB80 (Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<UnityEngine.GameObject,Zenject.SceneContext>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m564646418ABB7E4A2C9EF71CDF481F557419481C (RuntimeObject* ___source0, Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared)(___source0, ___selector1, method);
}
// System.Boolean ModestTree.LinqExtensions::IsEmpty<Zenject.SceneContext>(System.Collections.Generic.IEnumerable`1<T>)
inline bool LinqExtensions_IsEmpty_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m917355CF3B38D9108B83E4E4ED9D339C39B39C9E (RuntimeObject* ___enumerable0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))LinqExtensions_IsEmpty_TisRuntimeObject_m07643C6CC506300ABC02726DFA8ADB4E922BEF53_gshared)(___enumerable0, method);
}
// System.Int32 System.Collections.Generic.List`1<Zenject.SceneContext>::get_Count()
inline int32_t List_1_get_Count_mBC3CB4555B314F4B8D25BF94DC78A7B0F4BE1EB1_inline (List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Zenject.SceneContext>::get_Item(System.Int32)
inline SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* List_1_get_Item_m3A86B341493CE9799916D9223A98543B829D9BF1 (List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* (*) (List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.IEnumerator`1<Zenject.SceneContext> Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::System.Collections.Generic.IEnumerable<Zenject.SceneContext>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllSceneContextsU3Ed__3_System_Collections_Generic_IEnumerableU3CZenject_SceneContextU3E_GetEnumerator_m1D0A854E63470B6E3C3410F2802BCBAC0ED5ABF5 (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::op_Equality(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_op_Equality_m9FC9CA5FAE2FF94568EC2AB878B64ED8DC53CF68 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___lhs0, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___rhs1, const RuntimeMethod* method) ;
// System.Void RedBlueGames.NotNull.NotNullViolation::set_FieldInfo(System.Reflection.FieldInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotNullViolation_set_FieldInfo_m489123F63860EB13AE0E5FDFF89AE339741E5EE8_inline (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, FieldInfo_t* ___value0, const RuntimeMethod* method) ;
// System.Void RedBlueGames.NotNull.NotNullViolation::set_SourceMonoBehaviour(UnityEngine.MonoBehaviour)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotNullViolation_set_SourceMonoBehaviour_m88DA2CEB32E5F51EF0C768E1E42FE6FDC3D72E06_inline (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___value0, const RuntimeMethod* method) ;
// System.Void RedBlueGames.NotNull.NotNullViolation::set_ErrorGameObject(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotNullViolation_set_ErrorGameObject_m8FA7F995FA92BC2FD3777575744823B9937FCB49_inline (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject RedBlueGames.NotNull.NotNullViolation::get_ErrorGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* NotNullViolation_get_ErrorGameObject_m43C51798655B4B4BBCB30D312BC21CD656939E00_inline (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo RedBlueGames.NotNull.NotNullViolation::get_FieldInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldInfo_t* NotNullViolation_get_FieldInfo_m076D421DE002EEF1B41D8361DE97DFE9202C625A_inline (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, const RuntimeMethod* method) ;
// System.String RedBlueGames.NotNull.NotNullViolation::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotNullViolation_get_FullName_m9F7269BEBB4FA43866E5FA0C7245E68F36CD2C5A (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Zenject.InitializableManager::.ctor(System.Collections.Generic.List`1<Zenject.IInitializable>,System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializableManager__ctor_mFD8A62DABA8B0AF77B7668EC140D67E22739BE3C (InitializableManager_t61FEBDD9E6DC9697D92D67E17123AF4C53139EDA* __this, List_1_tF803B1C71B931118205808A1CB0B2C32CB4E0BD9* ___initializables0, List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* ___priorities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD52805B3429F12539373FEC711930A36A24A37D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB96253194EE0B11850EEF47EFF49172C53D675CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9534EB27BCE7E4A8B866BEEE13D23380A924FF10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC0055DAFCD6867C15E54CB94FDADA29D816DE2A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8CB824F21E6F362C20F4FBC0FCBBB59B5A226889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t69EF27975B43588D2A19A62492BF754E60E49D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__2_1_m80A23A3CC9263088F59CA83949A1222D28B45EBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m624DB64F8C5D4D402C7C341BF7D8D95F7B9B4F2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518* V_1 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_2 = NULL;
	int32_t V_3 = 0;
	Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	int32_t G_B6_0 = 0;
	{
		// public InitializableManager(
		//     [Inject(Optional = true, Source = InjectSources.Local)]
		//     List<IInitializable> initializables,
		//     [Inject(Optional = true, Source = InjectSources.Local)]
		//     List<ModestTree.Util.ValuePair<Type, int>> priorities)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _initializables = new List<InitializableInfo>();
		List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* L_0 = (List_1_t69EF27975B43588D2A19A62492BF754E60E49D13*)il2cpp_codegen_object_new(List_1_t69EF27975B43588D2A19A62492BF754E60E49D13_il2cpp_TypeInfo_var);
		List_1__ctor_m9534EB27BCE7E4A8B866BEEE13D23380A924FF10(L_0, List_1__ctor_m9534EB27BCE7E4A8B866BEEE13D23380A924FF10_RuntimeMethod_var);
		__this->____initializables_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____initializables_0), (void*)L_0);
		// for (int i = 0; i < initializables.Count; i++)
		V_0 = 0;
		goto IL_0099;
	}

IL_0018:
	{
		U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518* L_1 = (U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_mACB6670AAEF447BB8AE0BE9CA86466185FE60C72(L_1, NULL);
		V_1 = L_1;
		// var initializable = initializables[i];
		U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518* L_2 = V_1;
		List_1_tF803B1C71B931118205808A1CB0B2C32CB4E0BD9* L_3 = ___initializables0;
		int32_t L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m8CB824F21E6F362C20F4FBC0FCBBB59B5A226889(L_3, L_4, List_1_get_Item_m8CB824F21E6F362C20F4FBC0FCBBB59B5A226889_RuntimeMethod_var);
		L_2->___initializable_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___initializable_0), (void*)L_5);
		// var matches = priorities.Where(x => initializable.GetType().DerivesFromOrEqual(x.First)).Select(x => x.Second).ToList();
		List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* L_6 = ___priorities1;
		U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518* L_7 = V_1;
		Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E* L_8 = (Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E*)il2cpp_codegen_object_new(Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E_il2cpp_TypeInfo_var);
		Func_2__ctor_m97A3CC5F9959553B29AEC0A8EF64F1365096B4DF(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m624DB64F8C5D4D402C7C341BF7D8D95F7B9B4F2B_RuntimeMethod_var), NULL);
		RuntimeObject* L_9;
		L_9 = Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB(L_6, L_8, Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var);
		Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_10 = ((U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_1;
		Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_11 = L_10;
		G_B2_0 = L_11;
		G_B2_1 = L_9;
		if (L_11)
		{
			G_B3_0 = L_11;
			G_B3_1 = L_9;
			goto IL_005c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var);
		U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF* L_12 = ((U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_13 = (Func_2_tD52805B3429F12539373FEC711930A36A24A37D1*)il2cpp_codegen_object_new(Func_2_tD52805B3429F12539373FEC711930A36A24A37D1_il2cpp_TypeInfo_var);
		Func_2__ctor_mF9BFCD96585F4D20C430F2C111EC77C206A88827(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__2_1_m80A23A3CC9263088F59CA83949A1222D28B45EBC_RuntimeMethod_var), NULL);
		Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_14 = L_13;
		((U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_1), (void*)L_14);
		G_B3_0 = L_14;
		G_B3_1 = G_B2_1;
	}

IL_005c:
	{
		RuntimeObject* L_15;
		L_15 = Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176(G_B3_1, G_B3_0, Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16;
		L_16 = Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC(L_15, Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
		V_2 = L_16;
		// int priority = matches.IsEmpty() ? 0 : matches.Distinct().Single();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_17 = V_2;
		bool L_18;
		L_18 = LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B(L_17, LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_007c;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_19 = V_2;
		RuntimeObject* L_20;
		L_20 = Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE(L_19, Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE_RuntimeMethod_var);
		int32_t L_21;
		L_21 = Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588(L_20, Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588_RuntimeMethod_var);
		G_B6_0 = L_21;
		goto IL_007d;
	}

IL_007c:
	{
		G_B6_0 = 0;
	}

IL_007d:
	{
		V_3 = G_B6_0;
		// _initializables.Add(new InitializableInfo(initializable, priority));
		List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* L_22 = __this->____initializables_0;
		U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518* L_23 = V_1;
		RuntimeObject* L_24 = L_23->___initializable_0;
		int32_t L_25 = V_3;
		InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* L_26 = (InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD*)il2cpp_codegen_object_new(InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_il2cpp_TypeInfo_var);
		InitializableInfo__ctor_mE72A82DF0A223081E171CC88CA96552D7B38A08B(L_26, L_24, L_25, NULL);
		List_1_Add_mB96253194EE0B11850EEF47EFF49172C53D675CC_inline(L_22, L_26, List_1_Add_mB96253194EE0B11850EEF47EFF49172C53D675CC_RuntimeMethod_var);
		// for (int i = 0; i < initializables.Count; i++)
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0099:
	{
		// for (int i = 0; i < initializables.Count; i++)
		int32_t L_28 = V_0;
		List_1_tF803B1C71B931118205808A1CB0B2C32CB4E0BD9* L_29 = ___initializables0;
		int32_t L_30;
		L_30 = List_1_get_Count_mC0055DAFCD6867C15E54CB94FDADA29D816DE2A9_inline(L_29, List_1_get_Count_mC0055DAFCD6867C15E54CB94FDADA29D816DE2A9_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Zenject.InitializableManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializableManager_Initialize_mD440BC29C7FA6A954AF6C960B109AE880911BFF9 (InitializableManager_t61FEBDD9E6DC9697D92D67E17123AF4C53139EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisInitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3B59F152BFDF5EC447FFADA9F6233438A840E67E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_mA5FFEA94B7FF27AD0D83926541566E730BC5ECB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0FE3BB3978B8A4ADD87FDCEE0414B1A985DAD784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m981B1084D7F0A2206335654ED740B66E870F9DC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m662A8C59B30AE918121AB31B7F200F08D3AAA6B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializable_t6F7E396A96DB8CC4C5CE8E02DC8B4DB545961A75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m94EFE4F64F22E61DA338706490DBAFE8DDE87F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeU3Eb__3_0_m0789EC1FC689EA0495BABD53CAE558F8A87A4B4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9F34442C9C3F16F31740AA13C19423BC4DA5FDFC V_0;
	memset((&V_0), 0, sizeof(V_0));
	InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8* G_B2_0 = NULL;
	List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* G_B2_1 = NULL;
	InitializableManager_t61FEBDD9E6DC9697D92D67E17123AF4C53139EDA* G_B2_2 = NULL;
	Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8* G_B1_0 = NULL;
	List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* G_B1_1 = NULL;
	InitializableManager_t61FEBDD9E6DC9697D92D67E17123AF4C53139EDA* G_B1_2 = NULL;
	{
		// Assert.That(!_hasInitialized);
		bool L_0 = __this->____hasInitialized_1;
		Assert_That_m83A61B69B6C128204755435348EA0C90439CBCD0((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// _hasInitialized = true;
		__this->____hasInitialized_1 = (bool)1;
		// _initializables = _initializables.OrderBy(x => x.Priority).ToList();
		List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* L_1 = __this->____initializables_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var);
		Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8* L_2 = ((U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_2;
		Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var);
		U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF* L_4 = ((U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8* L_5 = (Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8*)il2cpp_codegen_object_new(Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8_il2cpp_TypeInfo_var);
		Func_2__ctor_mFECB6FE4FFC14240D4E84BFB1FFF7677BA884B8E(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CInitializeU3Eb__3_0_m0789EC1FC689EA0495BABD53CAE558F8A87A4B4E_RuntimeMethod_var), NULL);
		Func_2_tA8E72465F09F4C5B135DBE08ED13EB00736C66A8* L_6 = L_5;
		((U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_2), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_003b:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_OrderBy_TisInitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3B59F152BFDF5EC447FFADA9F6233438A840E67E(G_B2_1, G_B2_0, Enumerable_OrderBy_TisInitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3B59F152BFDF5EC447FFADA9F6233438A840E67E_RuntimeMethod_var);
		List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* L_8;
		L_8 = Enumerable_ToList_TisInitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_mA5FFEA94B7FF27AD0D83926541566E730BC5ECB4(L_7, Enumerable_ToList_TisInitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD_mA5FFEA94B7FF27AD0D83926541566E730BC5ECB4_RuntimeMethod_var);
		G_B2_2->____initializables_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->____initializables_0), (void*)L_8);
		// foreach (var initializable in _initializables)
		List_1_t69EF27975B43588D2A19A62492BF754E60E49D13* L_9 = __this->____initializables_0;
		Enumerator_t9F34442C9C3F16F31740AA13C19423BC4DA5FDFC L_10;
		L_10 = List_1_GetEnumerator_m94EFE4F64F22E61DA338706490DBAFE8DDE87F1A(L_9, List_1_GetEnumerator_m94EFE4F64F22E61DA338706490DBAFE8DDE87F1A_RuntimeMethod_var);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0FE3BB3978B8A4ADD87FDCEE0414B1A985DAD784((&V_0), Enumerator_Dispose_m0FE3BB3978B8A4ADD87FDCEE0414B1A985DAD784_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008c_1;
			}

IL_0058_1:
			{
				// foreach (var initializable in _initializables)
				InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* L_11;
				L_11 = Enumerator_get_Current_m662A8C59B30AE918121AB31B7F200F08D3AAA6B1_inline((&V_0), Enumerator_get_Current_m662A8C59B30AE918121AB31B7F200F08D3AAA6B1_RuntimeMethod_var);
				V_1 = L_11;
			}
			try
			{// begin try (depth: 2)
				// initializable.Initializable.Initialize();
				InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* L_12 = V_1;
				RuntimeObject* L_13 = L_12->___Initializable_0;
				InterfaceActionInvoker0::Invoke(0 /* System.Void Zenject.IInitializable::Initialize() */, IInitializable_t6F7E396A96DB8CC4C5CE8E02DC8B4DB545961A75_il2cpp_TypeInfo_var, L_13);
				// }
				goto IL_008c_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_006d_1;
				}
				throw e;
			}

CATCH_006d_1:
			{// begin catch(System.Exception)
				// throw Assert.CreateException(
				//     e, "Error occurred while initializing IInitializable with type '{0}'", initializable.Initializable.GetType());
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
				InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* L_16 = V_1;
				RuntimeObject* L_17 = L_16->___Initializable_0;
				Type_t* L_18;
				L_18 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_17, NULL);
				ArrayElementTypeCheck (L_15, L_18);
				(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
				ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9* L_19;
				L_19 = Assert_CreateException_mDAC4F5998F3B66103210D9029FA0DD9013F51449(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6C812691CE65C686F6D5DD7768D42F4C5AC85FA)), L_15, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializableManager_Initialize_mD440BC29C7FA6A954AF6C960B109AE880911BFF9_RuntimeMethod_var)));
			}// end catch (depth: 2)

IL_008c_1:
			{
				// foreach (var initializable in _initializables)
				bool L_20;
				L_20 = Enumerator_MoveNext_m981B1084D7F0A2206335654ED740B66E870F9DC7((&V_0), Enumerator_MoveNext_m981B1084D7F0A2206335654ED740B66E870F9DC7_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0058_1;
				}
			}
			{
				goto IL_00a5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a5:
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
// System.Void Zenject.InitializableManager/InitializableInfo::.ctor(Zenject.IInitializable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializableInfo__ctor_mE72A82DF0A223081E171CC88CA96552D7B38A08B (InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* __this, RuntimeObject* ___initializable0, int32_t ___priority1, const RuntimeMethod* method) 
{
	{
		// public InitializableInfo(IInitializable initializable, int priority)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Initializable = initializable;
		RuntimeObject* L_0 = ___initializable0;
		__this->___Initializable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Initializable_0), (void*)L_0);
		// Priority = priority;
		int32_t L_1 = ___priority1;
		__this->___Priority_1 = L_1;
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
// System.Void Zenject.InitializableManager/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mACB6670AAEF447BB8AE0BE9CA86466185FE60C72 (U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Zenject.InitializableManager/<>c__DisplayClass2_0::<.ctor>b__0(ModestTree.Util.ValuePair`2<System.Type,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m624DB64F8C5D4D402C7C341BF7D8D95F7B9B4F2B (U3CU3Ec__DisplayClass2_0_tBFFC04162E68EC3110A7817AC6AA9A1450682518* __this, ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* ___x0, const RuntimeMethod* method) 
{
	{
		// var matches = priorities.Where(x => initializable.GetType().DerivesFromOrEqual(x.First)).Select(x => x.Second).ToList();
		RuntimeObject* L_0 = __this->___initializable_0;
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* L_2 = ___x0;
		Type_t* L_3 = L_2->___First_0;
		bool L_4;
		L_4 = TypeExtensions_DerivesFromOrEqual_m6BFB2950495FF37C00DFC4F74534E7850293C210(L_1, L_3, NULL);
		return L_4;
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
// System.Void Zenject.InitializableManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6068DE55EC07452D98834E50955671408318A2DD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF* L_0 = (U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF*)il2cpp_codegen_object_new(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDC8D8462DE1DA0DB66E53409E92C17BBF0155BF5(L_0, NULL);
		((U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Zenject.InitializableManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDC8D8462DE1DA0DB66E53409E92C17BBF0155BF5 (U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Zenject.InitializableManager/<>c::<.ctor>b__2_1(ModestTree.Util.ValuePair`2<System.Type,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__2_1_m80A23A3CC9263088F59CA83949A1222D28B45EBC (U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF* __this, ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* ___x0, const RuntimeMethod* method) 
{
	{
		// var matches = priorities.Where(x => initializable.GetType().DerivesFromOrEqual(x.First)).Select(x => x.Second).ToList();
		ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* L_0 = ___x0;
		int32_t L_1 = L_0->___Second_1;
		return L_1;
	}
}
// System.Int32 Zenject.InitializableManager/<>c::<Initialize>b__3_0(Zenject.InitializableManager/InitializableInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CInitializeU3Eb__3_0_m0789EC1FC689EA0495BABD53CAE558F8A87A4B4E (U3CU3Ec_tD9FC4B90C205F3EB521640E79A193DC4BCD8B4AF* __this, InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* ___x0, const RuntimeMethod* method) 
{
	{
		// _initializables = _initializables.OrderBy(x => x.Priority).ToList();
		InitializableInfo_t9AC7B339E0591A10C8EF3C04C3B1F6F8C1D90ADD* L_0 = ___x0;
		int32_t L_1 = L_0->___Priority_1;
		return L_1;
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
// System.Void Zenject.DefaultGameObjectKernel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultGameObjectKernel__ctor_mD2D22B5EC3D29CFAA3C77D9464E011AB3C30672A (DefaultGameObjectKernel_t91D548644E7C32D3FE9E39C7743A3939A92BE7F1* __this, const RuntimeMethod* method) 
{
	{
		MonoKernel__ctor_m2B5FFA25C690FB022D323AAA62FD74162887D549(__this, NULL);
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
// System.Void Zenject.Kernel::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_Initialize_m54209BF72F658F5E43B1DA371A62918248E3E896 (Kernel_t489C8EA295AB206A7F16ADEFBD72776E7E7E2940* __this, const RuntimeMethod* method) 
{
	{
		// _initializableManager.Initialize();
		InitializableManager_t61FEBDD9E6DC9697D92D67E17123AF4C53139EDA* L_0 = __this->____initializableManager_1;
		InitializableManager_Initialize_mD440BC29C7FA6A954AF6C960B109AE880911BFF9(L_0, NULL);
		// }
		return;
	}
}
// System.Void Zenject.Kernel::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_Dispose_m2BD0AFC80BDE96D70503414F384867B5E61BB0AE (Kernel_t489C8EA295AB206A7F16ADEFBD72776E7E7E2940* __this, const RuntimeMethod* method) 
{
	{
		// _disposablesManager.Dispose();
		DisposableManager_t8F1BDD7CD4AC974A6E1F1E201B729F8D3BD7768C* L_0 = __this->____disposablesManager_2;
		DisposableManager_Dispose_m2E6C44359C0316EE3B9F0BC1D737BAAC96FAC4E7(L_0, NULL);
		// }
		return;
	}
}
// System.Void Zenject.Kernel::LateDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_LateDispose_m0C310430ABDB1A5C44757264F1754E11FC2B761D (Kernel_t489C8EA295AB206A7F16ADEFBD72776E7E7E2940* __this, const RuntimeMethod* method) 
{
	{
		// _disposablesManager.LateDispose();
		DisposableManager_t8F1BDD7CD4AC974A6E1F1E201B729F8D3BD7768C* L_0 = __this->____disposablesManager_2;
		DisposableManager_LateDispose_m1367E5D3AA9CB105504895BDBA9324CECB0B9BB8(L_0, NULL);
		// }
		return;
	}
}
// System.Void Zenject.Kernel::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_Tick_mA2F33283A7C0D9EF906BAD4A15874BDDA3987613 (Kernel_t489C8EA295AB206A7F16ADEFBD72776E7E7E2940* __this, const RuntimeMethod* method) 
{
	{
		// _tickableManager.Update();
		TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* L_0 = __this->____tickableManager_0;
		TickableManager_Update_m7D02EFC9E2DBF8E1D175DFB13BB16C2CFEB718D3(L_0, NULL);
		// }
		return;
	}
}
// System.Void Zenject.Kernel::LateTick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_LateTick_mCA44A9D04ACA935DD8B01DCFB36BA628D13DFB45 (Kernel_t489C8EA295AB206A7F16ADEFBD72776E7E7E2940* __this, const RuntimeMethod* method) 
{
	{
		// _tickableManager.LateUpdate();
		TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* L_0 = __this->____tickableManager_0;
		TickableManager_LateUpdate_m62094E5F66666C7A7CA1FD635F98355CAB2DE8AC(L_0, NULL);
		// }
		return;
	}
}
// System.Void Zenject.Kernel::FixedTick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_FixedTick_m9E4A1BB004BC8DBAE43D7D385C663FDAA0CD86E9 (Kernel_t489C8EA295AB206A7F16ADEFBD72776E7E7E2940* __this, const RuntimeMethod* method) 
{
	{
		// _tickableManager.FixedUpdate();
		TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* L_0 = __this->____tickableManager_0;
		TickableManager_FixedUpdate_m53C7F12177FDE6FA7253AD6D28C9D3CF983CE1D8(L_0, NULL);
		// }
		return;
	}
}
// System.Void Zenject.Kernel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel__ctor_m0C7A44C840F6CD53775F1102B685F4B012532DD5 (Kernel_t489C8EA295AB206A7F16ADEFBD72776E7E7E2940* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Zenject.MonoKernel::get_IsDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MonoKernel_get_IsDestroyed_m2A7029FFC8F6D46080B8837117F377BA437139F8 (MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D* __this, const RuntimeMethod* method) 
{
	{
		// get { return _isDestroyed; }
		bool L_0 = __this->____isDestroyed_8;
		return L_0;
	}
}
// System.Void Zenject.MonoKernel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoKernel_Start_m237A0B094963DF65DBAC14606C311E1946F68E30 (MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D* __this, const RuntimeMethod* method) 
{
	{
		// Initialize();
		MonoKernel_Initialize_mE2A34EF1D5017C7B15448B3B690B22F12CA39E48(__this, NULL);
		// }
		return;
	}
}
// System.Void Zenject.MonoKernel::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoKernel_Initialize_mE2A34EF1D5017C7B15448B3B690B22F12CA39E48 (MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D* __this, const RuntimeMethod* method) 
{
	{
		// if (!_hasInitialized)
		bool L_0 = __this->____hasInitialized_7;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// _hasInitialized = true;
		__this->____hasInitialized_7 = (bool)1;
		// _initializableManager.Initialize();
		InitializableManager_t61FEBDD9E6DC9697D92D67E17123AF4C53139EDA* L_1 = __this->____initializableManager_5;
		InitializableManager_Initialize_mD440BC29C7FA6A954AF6C960B109AE880911BFF9(L_1, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Zenject.MonoKernel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoKernel_Update_m9F80F50CD8A22DFB9D40BF5BCE4D513546F8B0E3 (MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D* __this, const RuntimeMethod* method) 
{
	{
		// if (_tickableManager != null)
		TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* L_0 = __this->____tickableManager_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _tickableManager.Update();
		TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* L_1 = __this->____tickableManager_4;
		TickableManager_Update_m7D02EFC9E2DBF8E1D175DFB13BB16C2CFEB718D3(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Zenject.MonoKernel::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoKernel_FixedUpdate_mC90C4080D17A4461E6448F905EE48FAD383F8554 (MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D* __this, const RuntimeMethod* method) 
{
	{
		// if (_tickableManager != null)
		TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* L_0 = __this->____tickableManager_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _tickableManager.FixedUpdate();
		TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* L_1 = __this->____tickableManager_4;
		TickableManager_FixedUpdate_m53C7F12177FDE6FA7253AD6D28C9D3CF983CE1D8(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Zenject.MonoKernel::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoKernel_LateUpdate_mCA806012B66E42B8258D2805C9F771FD1A92EECF (MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D* __this, const RuntimeMethod* method) 
{
	{
		// if (_tickableManager != null)
		TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* L_0 = __this->____tickableManager_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _tickableManager.LateUpdate();
		TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* L_1 = __this->____tickableManager_4;
		TickableManager_LateUpdate_m62094E5F66666C7A7CA1FD635F98355CAB2DE8AC(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Zenject.MonoKernel::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoKernel_OnDestroy_m01DDAD34ABFE6BCDD1F81761FC968E2375E6EB25 (MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D* __this, const RuntimeMethod* method) 
{
	{
		// if (_disposablesManager != null)
		DisposableManager_t8F1BDD7CD4AC974A6E1F1E201B729F8D3BD7768C* L_0 = __this->____disposablesManager_6;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		// Assert.That(!_isDestroyed);
		bool L_1 = __this->____isDestroyed_8;
		Assert_That_m83A61B69B6C128204755435348EA0C90439CBCD0((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), NULL);
		// _isDestroyed = true;
		__this->____isDestroyed_8 = (bool)1;
		// _disposablesManager.Dispose();
		DisposableManager_t8F1BDD7CD4AC974A6E1F1E201B729F8D3BD7768C* L_2 = __this->____disposablesManager_6;
		DisposableManager_Dispose_m2E6C44359C0316EE3B9F0BC1D737BAAC96FAC4E7(L_2, NULL);
		// _disposablesManager.LateDispose();
		DisposableManager_t8F1BDD7CD4AC974A6E1F1E201B729F8D3BD7768C* L_3 = __this->____disposablesManager_6;
		DisposableManager_LateDispose_m1367E5D3AA9CB105504895BDBA9324CECB0B9BB8(L_3, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Zenject.MonoKernel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoKernel__ctor_m2B5FFA25C690FB022D323AAA62FD74162887D549 (MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D* __this, const RuntimeMethod* method) 
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
// System.Void Zenject.ProjectKernel::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectKernel_OnApplicationQuit_m855E9127F08B8AFB455CBE92D05786447C3B2739 (ProjectKernel_t995911BE6D433E9F016917A4B1638126A90D8EBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ForceUnloadAllScenes(true);
		ProjectKernel_ForceUnloadAllScenes_m5E8BCA8E89F35DCD0E758F9BE544AA6CD28AC201(__this, (bool)1, NULL);
		// Assert.That(!IsDestroyed);
		bool L_0;
		L_0 = MonoKernel_get_IsDestroyed_m2A7029FFC8F6D46080B8837117F377BA437139F8_inline(__this, NULL);
		Assert_That_m83A61B69B6C128204755435348EA0C90439CBCD0((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// GameObject.DestroyImmediate(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_1, NULL);
		// Assert.That(IsDestroyed);
		bool L_2;
		L_2 = MonoKernel_get_IsDestroyed_m2A7029FFC8F6D46080B8837117F377BA437139F8_inline(__this, NULL);
		Assert_That_m83A61B69B6C128204755435348EA0C90439CBCD0(L_2, NULL);
		// }
		return;
	}
}
// System.Void Zenject.ProjectKernel::ForceUnloadAllScenes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectKernel_ForceUnloadAllScenes_m5E8BCA8E89F35DCD0E758F9BE544AA6CD28AC201 (ProjectKernel_t995911BE6D433E9F016917A4B1638126A90D8EBD* __this, bool ___immediate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_mCD5A6AE2EC66723AA38172CD91A1A96AAB668541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m28330046613BB44CD7B11CEA4DD98DAB585BB0F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0C41B186E9844C73F3BECEC841FE01F2070DB809_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAAC7A2F02AECA35BFB92DF86A61B226575F2B931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5F38B9B6042C8CAE18CD1187C1C939E1791AC8D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m364D9F9165A815033E49F0CC9E91A055276ECD91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC16172A04ACC2E610B11B3D3C79E5529BAA5485B V_0;
	memset((&V_0), 0, sizeof(V_0));
	SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* V_1 = NULL;
	{
		// Assert.That(!IsDestroyed);
		bool L_0;
		L_0 = MonoKernel_get_IsDestroyed_m2A7029FFC8F6D46080B8837117F377BA437139F8_inline(__this, NULL);
		Assert_That_m83A61B69B6C128204755435348EA0C90439CBCD0((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// foreach (var sceneContext in ZenUtilInternal.GetAllSceneContexts().Reverse().ToList())
		RuntimeObject* L_1;
		L_1 = ZenUtilInternal_GetAllSceneContexts_m83B2831EF26DA4C50C8216CCE4E2FE87C6464507(NULL);
		RuntimeObject* L_2;
		L_2 = Enumerable_Reverse_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_mCD5A6AE2EC66723AA38172CD91A1A96AAB668541(L_1, Enumerable_Reverse_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_mCD5A6AE2EC66723AA38172CD91A1A96AAB668541_RuntimeMethod_var);
		List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927* L_3;
		L_3 = Enumerable_ToList_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m28330046613BB44CD7B11CEA4DD98DAB585BB0F6(L_2, Enumerable_ToList_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m28330046613BB44CD7B11CEA4DD98DAB585BB0F6_RuntimeMethod_var);
		Enumerator_tC16172A04ACC2E610B11B3D3C79E5529BAA5485B L_4;
		L_4 = List_1_GetEnumerator_m364D9F9165A815033E49F0CC9E91A055276ECD91(L_3, List_1_GetEnumerator_m364D9F9165A815033E49F0CC9E91A055276ECD91_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0053:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0C41B186E9844C73F3BECEC841FE01F2070DB809((&V_0), Enumerator_Dispose_m0C41B186E9844C73F3BECEC841FE01F2070DB809_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_0025_1:
			{
				// foreach (var sceneContext in ZenUtilInternal.GetAllSceneContexts().Reverse().ToList())
				SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_5;
				L_5 = Enumerator_get_Current_m5F38B9B6042C8CAE18CD1187C1C939E1791AC8D6_inline((&V_0), Enumerator_get_Current_m5F38B9B6042C8CAE18CD1187C1C939E1791AC8D6_RuntimeMethod_var);
				V_1 = L_5;
				// if (immediate)
				bool L_6 = ___immediate0;
				if (!L_6)
				{
					goto IL_003d_1;
				}
			}
			{
				// GameObject.DestroyImmediate(sceneContext.gameObject);
				SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_7 = V_1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_8, NULL);
				goto IL_0048_1;
			}

IL_003d_1:
			{
				// GameObject.Destroy(sceneContext.gameObject);
				SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_9 = V_1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
			}

IL_0048_1:
			{
				// foreach (var sceneContext in ZenUtilInternal.GetAllSceneContexts().Reverse().ToList())
				bool L_11;
				L_11 = Enumerator_MoveNext_mAAC7A2F02AECA35BFB92DF86A61B226575F2B931((&V_0), Enumerator_MoveNext_mAAC7A2F02AECA35BFB92DF86A61B226575F2B931_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Zenject.ProjectKernel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectKernel__ctor_mDB18123BA4C292A149AD4CF2CAA9EAC4A19F90F3 (ProjectKernel_t995911BE6D433E9F016917A4B1638126A90D8EBD* __this, const RuntimeMethod* method) 
{
	{
		MonoKernel__ctor_m2B5FFA25C690FB022D323AAA62FD74162887D549(__this, NULL);
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
// System.Void Zenject.SceneKernel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneKernel__ctor_m914FBFA934777DFF36DFFE7EC6ED6971D3D74DF9 (SceneKernel_tECE939AAB7ABD8F8FCA1EB0526FE903EE63178E8* __this, const RuntimeMethod* method) 
{
	{
		MonoKernel__ctor_m2B5FFA25C690FB022D323AAA62FD74162887D549(__this, NULL);
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
// System.Void Zenject.SceneContextRegistry::Add(Zenject.SceneContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContextRegistry_Add_m619E15834647D77B80130BCE1E31C5D689D3A6A2 (SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* __this, SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m307D7B9BDF22CCA0754F51B5463F8E7893502553_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m007CD046F6CDC638D4B9670FF1B55BFAC3572538_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.That(!_map.ContainsKey(context.gameObject.scene));
		Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76* L_0 = __this->____map_0;
		SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_1 = ___context0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_2, NULL);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m007CD046F6CDC638D4B9670FF1B55BFAC3572538(L_0, L_3, Dictionary_2_ContainsKey_m007CD046F6CDC638D4B9670FF1B55BFAC3572538_RuntimeMethod_var);
		Assert_That_m83A61B69B6C128204755435348EA0C90439CBCD0((bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
		// _map.Add(context.gameObject.scene, context);
		Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76* L_5 = __this->____map_0;
		SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_6 = ___context0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_8;
		L_8 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_7, NULL);
		SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_9 = ___context0;
		Dictionary_2_Add_m307D7B9BDF22CCA0754F51B5463F8E7893502553(L_5, L_8, L_9, Dictionary_2_Add_m307D7B9BDF22CCA0754F51B5463F8E7893502553_RuntimeMethod_var);
		// }
		return;
	}
}
// Zenject.SceneContext Zenject.SceneContextRegistry::GetSceneContextForScene(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* SceneContextRegistry_GetSceneContextForScene_m93CA181B161E476B38759D3AA8102B548EB8E278 (SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0DEE85EEEA5A8AD7500040A00859EA487136516A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _map[scene];
		Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76* L_0 = __this->____map_0;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1 = ___scene0;
		SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_2;
		L_2 = Dictionary_2_get_Item_m0DEE85EEEA5A8AD7500040A00859EA487136516A(L_0, L_1, Dictionary_2_get_Item_m0DEE85EEEA5A8AD7500040A00859EA487136516A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Zenject.SceneContextRegistry::Remove(Zenject.SceneContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContextRegistry_Remove_m90AD48E94712C019A1CAD70CCA0D3979B14D6C99 (SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* __this, SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiscExtensions_RemoveWithConfirm_TisScene_tA1DC762B79745EB5140F054C884855B922318356_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m5957D55B7721B989AB18174C547BC4A9B685BD76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _map.RemoveWithConfirm(context.gameObject.scene);
		Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76* L_0 = __this->____map_0;
		SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_1 = ___context0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_2, NULL);
		MiscExtensions_RemoveWithConfirm_TisScene_tA1DC762B79745EB5140F054C884855B922318356_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m5957D55B7721B989AB18174C547BC4A9B685BD76(L_0, L_3, MiscExtensions_RemoveWithConfirm_TisScene_tA1DC762B79745EB5140F054C884855B922318356_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m5957D55B7721B989AB18174C547BC4A9B685BD76_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Zenject.SceneContextRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContextRegistry__ctor_m5D925ACE5DC7B8EA562F8AD1E5B28A492D7A64E2 (SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m36EB4DB335562EFCD7104246495C03C143908566_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly Dictionary<Scene, SceneContext> _map = new Dictionary<Scene, SceneContext>();
		Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76* L_0 = (Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76*)il2cpp_codegen_object_new(Dictionary_2_t87F4CB7CC0204BA1659236C322A67CEF3E04AB76_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m36EB4DB335562EFCD7104246495C03C143908566(L_0, Dictionary_2__ctor_m36EB4DB335562EFCD7104246495C03C143908566_RuntimeMethod_var);
		__this->____map_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____map_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Zenject.SceneContextRegistryAdderAndRemover::.ctor(Zenject.SceneContext,Zenject.SceneContextRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContextRegistryAdderAndRemover__ctor_m539CCC5C1D4FFCD63E3A3E379D82D8203F17C349 (SceneContextRegistryAdderAndRemover_t5507E184D0AA356F47AA946F7BBD4054EE31CAF5* __this, SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* ___sceneContext0, SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* ___registry1, const RuntimeMethod* method) 
{
	{
		// public SceneContextRegistryAdderAndRemover(
		//     SceneContext sceneContext,
		//     SceneContextRegistry registry)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _registry = registry;
		SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* L_0 = ___registry1;
		__this->____registry_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____registry_0), (void*)L_0);
		// _sceneContext = sceneContext;
		SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_1 = ___sceneContext0;
		__this->____sceneContext_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sceneContext_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void Zenject.SceneContextRegistryAdderAndRemover::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContextRegistryAdderAndRemover_Initialize_mEABA600E80B85B333E21F9CCBEA8E11990C0F511 (SceneContextRegistryAdderAndRemover_t5507E184D0AA356F47AA946F7BBD4054EE31CAF5* __this, const RuntimeMethod* method) 
{
	{
		// _registry.Add(_sceneContext);
		SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* L_0 = __this->____registry_0;
		SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_1 = __this->____sceneContext_1;
		SceneContextRegistry_Add_m619E15834647D77B80130BCE1E31C5D689D3A6A2(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Zenject.SceneContextRegistryAdderAndRemover::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneContextRegistryAdderAndRemover_Dispose_mDC71176133EB9E6A28D113AEDA53D301E61EE25B (SceneContextRegistryAdderAndRemover_t5507E184D0AA356F47AA946F7BBD4054EE31CAF5* __this, const RuntimeMethod* method) 
{
	{
		// _registry.Remove(_sceneContext);
		SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* L_0 = __this->____registry_0;
		SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_1 = __this->____sceneContext_1;
		SceneContextRegistry_Remove_m90AD48E94712C019A1CAD70CCA0D3979B14D6C99(L_0, L_1, NULL);
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
// System.Void Zenject.TickablesTaskUpdater::UpdateItem(Zenject.ITickable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickablesTaskUpdater_UpdateItem_mDE8D39EB40F74996D8E667160B319BF190125D61 (TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9* __this, RuntimeObject* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITickable_tE2FB17D0E5590B6C0EDBA19B2F7E0AF24DBA661D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// task.Tick();
		RuntimeObject* L_0 = ___task0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Zenject.ITickable::Tick() */, ITickable_tE2FB17D0E5590B6C0EDBA19B2F7E0AF24DBA661D_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Zenject.TickablesTaskUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickablesTaskUpdater__ctor_m6D5C5858C001A40B8DC43FC0E75CFEEBEE23D2C4 (TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1__ctor_m8E158C0B1B2D3C9A6D131804A43845414062FA92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskUpdater_1__ctor_m8E158C0B1B2D3C9A6D131804A43845414062FA92(__this, TaskUpdater_1__ctor_m8E158C0B1B2D3C9A6D131804A43845414062FA92_RuntimeMethod_var);
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
// System.Void Zenject.LateTickablesTaskUpdater::UpdateItem(Zenject.ILateTickable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LateTickablesTaskUpdater_UpdateItem_m1E6DF9F11B04D28C949077458B56C92B92489CB1 (LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4* __this, RuntimeObject* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILateTickable_t3238FE6BE7CD7D3A90F3E242D8696DE02934DB39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// task.LateTick();
		RuntimeObject* L_0 = ___task0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Zenject.ILateTickable::LateTick() */, ILateTickable_t3238FE6BE7CD7D3A90F3E242D8696DE02934DB39_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Zenject.LateTickablesTaskUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LateTickablesTaskUpdater__ctor_mE5F23218F18F6CD79D776628D45019180088BCF2 (LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1__ctor_m8AD67A2C1EA7BB115E0F208E210DDC0749D0BD56_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskUpdater_1__ctor_m8AD67A2C1EA7BB115E0F208E210DDC0749D0BD56(__this, TaskUpdater_1__ctor_m8AD67A2C1EA7BB115E0F208E210DDC0749D0BD56_RuntimeMethod_var);
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
// System.Void Zenject.FixedTickablesTaskUpdater::UpdateItem(Zenject.IFixedTickable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedTickablesTaskUpdater_UpdateItem_m1A6B6555242F7E8E8080DA1ECA2112A3CFB9CAB5 (FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362* __this, RuntimeObject* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFixedTickable_tE8A5EE2A00E8864CD7650FF74246894ED684D8A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// task.FixedTick();
		RuntimeObject* L_0 = ___task0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Zenject.IFixedTickable::FixedTick() */, IFixedTickable_tE8A5EE2A00E8864CD7650FF74246894ED684D8A8_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Zenject.FixedTickablesTaskUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedTickablesTaskUpdater__ctor_m5F8D2A29010EF9C77A2BEDB58AA71F9EFE944CDE (FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1__ctor_m74EAF678DF93EABB62F1BDB588CBD5916CC3A1D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskUpdater_1__ctor_m74EAF678DF93EABB62F1BDB588CBD5916CC3A1D3(__this, TaskUpdater_1__ctor_m74EAF678DF93EABB62F1BDB588CBD5916CC3A1D3_RuntimeMethod_var);
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
// System.Void Zenject.TickableManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager__ctor_m38F76062868879C1AB6B8B7E0E023537961E7A97 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly TickablesTaskUpdater _updater = new TickablesTaskUpdater();
		TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9* L_0 = (TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9*)il2cpp_codegen_object_new(TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9_il2cpp_TypeInfo_var);
		TickablesTaskUpdater__ctor_m6D5C5858C001A40B8DC43FC0E75CFEEBEE23D2C4(L_0, NULL);
		__this->____updater_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____updater_6), (void*)L_0);
		// readonly FixedTickablesTaskUpdater _fixedUpdater = new FixedTickablesTaskUpdater();
		FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362* L_1 = (FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362*)il2cpp_codegen_object_new(FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362_il2cpp_TypeInfo_var);
		FixedTickablesTaskUpdater__ctor_m5F8D2A29010EF9C77A2BEDB58AA71F9EFE944CDE(L_1, NULL);
		__this->____fixedUpdater_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fixedUpdater_7), (void*)L_1);
		// readonly LateTickablesTaskUpdater _lateUpdater = new LateTickablesTaskUpdater();
		LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4* L_2 = (LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4*)il2cpp_codegen_object_new(LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4_il2cpp_TypeInfo_var);
		LateTickablesTaskUpdater__ctor_mE5F23218F18F6CD79D776628D45019180088BCF2(L_2, NULL);
		__this->____lateUpdater_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lateUpdater_8), (void*)L_2);
		// public TickableManager()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.ITickable> Zenject.TickableManager::get_Tickables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TickableManager_get_Tickables_m54D70192D57D760C543FBD8157578DF4EA94AE11 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) 
{
	{
		// get { return _tickables; }
		List_1_t32C173F10D76C02DB552E9A30C59B4E1C6AEB482* L_0 = __this->____tickables_0;
		return L_0;
	}
}
// System.Boolean Zenject.TickableManager::get_IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TickableManager_get_IsPaused_m5402AB15E90C10712937F2F86F4D57164D9A369A (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) 
{
	{
		// get { return _isPaused; }
		bool L_0 = __this->____isPaused_9;
		return L_0;
	}
}
// System.Void Zenject.TickableManager::set_IsPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_set_IsPaused_m65FAB912F8317C66D411BB4D3AD3E75628355E89 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _isPaused = value; }
		bool L_0 = ___value0;
		__this->____isPaused_9 = L_0;
		// set { _isPaused = value; }
		return;
	}
}
// System.Void Zenject.TickableManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_Initialize_m3CCBC6E8D134F644420F5DB2EDEDFF1E1686B485 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) 
{
	{
		// InitTickables();
		TickableManager_InitTickables_m8E86D1E458735C7E59CE98A820BEA39FDDA1D5EE(__this, NULL);
		// InitFixedTickables();
		TickableManager_InitFixedTickables_m5C668B24AEF1F2328BC870BC10FC69C8323FB88C(__this, NULL);
		// InitLateTickables();
		TickableManager_InitLateTickables_m60F91215914E2A35C99C8C2351E59A6E6E9761DB(__this, NULL);
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::InitFixedTickables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_InitFixedTickables_m5C668B24AEF1F2328BC870BC10FC69C8323FB88C (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisType_t_m4079112A996D1BC45A025AE5A8BAE9F9906D0AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7E8A5B379377A14A8508B0B29C056169E63ED405_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m23C6ED2EACB2EDC19A98D94DD8662DFB0EAFB7FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m910D5762B64608E78F4E87793506DFB120BD6BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD52805B3429F12539373FEC711930A36A24A37D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF72875CC6023D88437CE4284EF8F4091B69F89DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_AddTask_m1AFE6061E394A96783E9AD33768BBEDE878DA72B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_DerivesFrom_TisIFixedTickable_tE8A5EE2A00E8864CD7650FF74246894ED684D8A8_mD953995D5E437E8FA61C0FC4D639F0A79D6FA56A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitFixedTickablesU3Eb__17_0_mB54095AAB42BFE49FCA69D0781533BC0E853E4B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitFixedTickablesU3Eb__17_2_m38F4164F25107EB09CA59974A05E88BAD652C71A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CInitFixedTickablesU3Eb__1_m36BCDF0FD54630021ED9FA9370FAF728259F7EDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F144EDE244D7BEAE87CA17D6BF54B03D20322EF);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	Enumerator_t5FF2FF89A1B66B7CEFCE1636D194180017141CED V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	int32_t V_5 = 0;
	Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* G_B2_0 = NULL;
	List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* G_B2_1 = NULL;
	Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* G_B1_0 = NULL;
	List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* G_B1_1 = NULL;
	Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	int32_t G_B17_0 = 0;
	{
		// foreach (var type in _fixedPriorities.Select(x => x.First))
		List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* L_0 = __this->____fixedPriorities_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
		Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* L_1 = ((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1;
		Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
		U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* L_3 = ((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* L_4 = (Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481*)il2cpp_codegen_object_new(Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481_il2cpp_TypeInfo_var);
		Func_2__ctor_m7169780EFE0BAC1D61868B6CA9A28D05A86DC6DF(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CInitFixedTickablesU3Eb__17_0_mB54095AAB42BFE49FCA69D0781533BC0E853E4B5_RuntimeMethod_var), NULL);
		Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* L_5 = L_4;
		((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisType_t_m4079112A996D1BC45A025AE5A8BAE9F9906D0AAC(G_B2_1, G_B2_0, Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisType_t_m4079112A996D1BC45A025AE5A8BAE9F9906D0AAC_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_0;
					if (!L_8)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_9 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_0032_1:
			{
				// foreach (var type in _fixedPriorities.Select(x => x.First))
				RuntimeObject* L_10 = V_0;
				Type_t* L_11;
				L_11 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var, L_10);
				V_1 = L_11;
				// Assert.That(type.DerivesFrom<IFixedTickable>(),
				//     "Expected type '{0}' to drive from IFixedTickable while checking priorities in TickableHandler", type);
				Type_t* L_12 = V_1;
				bool L_13;
				L_13 = TypeExtensions_DerivesFrom_TisIFixedTickable_tE8A5EE2A00E8864CD7650FF74246894ED684D8A8_mD953995D5E437E8FA61C0FC4D639F0A79D6FA56A(L_12, TypeExtensions_DerivesFrom_TisIFixedTickable_tE8A5EE2A00E8864CD7650FF74246894ED684D8A8_mD953995D5E437E8FA61C0FC4D639F0A79D6FA56A_RuntimeMethod_var);
				Type_t* L_14 = V_1;
				Assert_That_m3E74483F729A9A222574B7C43EAAA0CDA85199A7(L_13, _stringLiteral5F144EDE244D7BEAE87CA17D6BF54B03D20322EF, L_14, NULL);
			}

IL_004a_1:
			{
				// foreach (var type in _fixedPriorities.Select(x => x.First))
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// foreach (var tickable in _fixedTickables)
		List_1_t75860E9D5BFCA97BA71BABFD4FD00310E5FBED51* L_17 = __this->____fixedTickables_1;
		Enumerator_t5FF2FF89A1B66B7CEFCE1636D194180017141CED L_18;
		L_18 = List_1_GetEnumerator_mF72875CC6023D88437CE4284EF8F4091B69F89DC(L_17, List_1_GetEnumerator_mF72875CC6023D88437CE4284EF8F4091B69F89DC_RuntimeMethod_var);
		V_2 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ff:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7E8A5B379377A14A8508B0B29C056169E63ED405((&V_2), Enumerator_Dispose_m7E8A5B379377A14A8508B0B29C056169E63ED405_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f1_1;
			}

IL_006f_1:
			{
				U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0* L_19 = (U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0_il2cpp_TypeInfo_var);
				U3CU3Ec__DisplayClass17_0__ctor_m300D071E658DA39FBADC9E169400E85A9222F478(L_19, NULL);
				V_3 = L_19;
				// foreach (var tickable in _fixedTickables)
				U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0* L_20 = V_3;
				RuntimeObject* L_21;
				L_21 = Enumerator_get_Current_m910D5762B64608E78F4E87793506DFB120BD6BAA_inline((&V_2), Enumerator_get_Current_m910D5762B64608E78F4E87793506DFB120BD6BAA_RuntimeMethod_var);
				L_20->___tickable_0 = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&L_20->___tickable_0), (void*)L_21);
				// var matches = _fixedPriorities.Where(x => tickable.GetType().DerivesFromOrEqual(x.First)).Select(x => x.Second).ToList();
				List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* L_22 = __this->____fixedPriorities_4;
				U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0* L_23 = V_3;
				Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E* L_24 = (Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E*)il2cpp_codegen_object_new(Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E_il2cpp_TypeInfo_var);
				Func_2__ctor_m97A3CC5F9959553B29AEC0A8EF64F1365096B4DF(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CInitFixedTickablesU3Eb__1_m36BCDF0FD54630021ED9FA9370FAF728259F7EDB_RuntimeMethod_var), NULL);
				RuntimeObject* L_25;
				L_25 = Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB(L_22, L_24, Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
				Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_26 = ((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__17_2_2;
				Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_27 = L_26;
				G_B13_0 = L_27;
				G_B13_1 = L_25;
				if (L_27)
				{
					G_B14_0 = L_27;
					G_B14_1 = L_25;
					goto IL_00b8_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
				U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* L_28 = ((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_29 = (Func_2_tD52805B3429F12539373FEC711930A36A24A37D1*)il2cpp_codegen_object_new(Func_2_tD52805B3429F12539373FEC711930A36A24A37D1_il2cpp_TypeInfo_var);
				Func_2__ctor_mF9BFCD96585F4D20C430F2C111EC77C206A88827(L_29, L_28, (intptr_t)((void*)U3CU3Ec_U3CInitFixedTickablesU3Eb__17_2_m38F4164F25107EB09CA59974A05E88BAD652C71A_RuntimeMethod_var), NULL);
				Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_30 = L_29;
				((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__17_2_2 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__17_2_2), (void*)L_30);
				G_B14_0 = L_30;
				G_B14_1 = G_B13_1;
			}

IL_00b8_1:
			{
				RuntimeObject* L_31;
				L_31 = Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176(G_B14_1, G_B14_0, Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176_RuntimeMethod_var);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_32;
				L_32 = Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC(L_31, Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
				V_4 = L_32;
				// int priority = matches.IsEmpty() ? 0 : matches.Distinct().Single();
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_33 = V_4;
				bool L_34;
				L_34 = LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B(L_33, LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_00db_1;
				}
			}
			{
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_35 = V_4;
				RuntimeObject* L_36;
				L_36 = Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE(L_35, Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE_RuntimeMethod_var);
				int32_t L_37;
				L_37 = Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588(L_36, Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588_RuntimeMethod_var);
				G_B17_0 = L_37;
				goto IL_00dc_1;
			}

IL_00db_1:
			{
				G_B17_0 = 0;
			}

IL_00dc_1:
			{
				V_5 = G_B17_0;
				// _fixedUpdater.AddTask(tickable, priority);
				FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362* L_38 = __this->____fixedUpdater_7;
				U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0* L_39 = V_3;
				RuntimeObject* L_40 = L_39->___tickable_0;
				int32_t L_41 = V_5;
				TaskUpdater_1_AddTask_m1AFE6061E394A96783E9AD33768BBEDE878DA72B(L_38, L_40, L_41, TaskUpdater_1_AddTask_m1AFE6061E394A96783E9AD33768BBEDE878DA72B_RuntimeMethod_var);
			}

IL_00f1_1:
			{
				// foreach (var tickable in _fixedTickables)
				bool L_42;
				L_42 = Enumerator_MoveNext_m23C6ED2EACB2EDC19A98D94DD8662DFB0EAFB7FD((&V_2), Enumerator_MoveNext_m23C6ED2EACB2EDC19A98D94DD8662DFB0EAFB7FD_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_006f_1;
				}
			}
			{
				goto IL_010d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::InitTickables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_InitTickables_m8E86D1E458735C7E59CE98A820BEA39FDDA1D5EE (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisType_t_m4079112A996D1BC45A025AE5A8BAE9F9906D0AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m85873B108A68C6EE5EF138B90260FB0A050C046F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m57BE58AA6A3199C882D7CF201DDE29B953A0562B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB19C6B8F2C1A0327A653CDA4C64F715D9FDB235D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD52805B3429F12539373FEC711930A36A24A37D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1973EF68F5F20C3A58190680AAB021160F19EC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_AddTask_m4C7F9D58D0E9C4848EF614371D84AFB0045DB604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_DerivesFrom_TisITickable_tE2FB17D0E5590B6C0EDBA19B2F7E0AF24DBA661D_m84700B00543C87C8B5FC9FA02E0DE1A58365D47A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitTickablesU3Eb__18_0_mACC6DB90072FA0C73702B89730D79DE1BFFC37DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitTickablesU3Eb__18_2_m9B622530985BD165D7E1EBAC080B0E3A7365BA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CInitTickablesU3Eb__1_mEDBA4077981DFE7E4203E4814DAD2167F26A2412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6089A66607AC9D045E4E58C264ABDED66F7E1BC4);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	Enumerator_tE4DD9D1AC9A1914BFE6C63B52EAB0BED63CCDC02 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	int32_t V_5 = 0;
	Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* G_B2_0 = NULL;
	List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* G_B2_1 = NULL;
	Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* G_B1_0 = NULL;
	List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* G_B1_1 = NULL;
	Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	int32_t G_B17_0 = 0;
	{
		// foreach (var type in _priorities.Select(x => x.First))
		List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* L_0 = __this->____priorities_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
		Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* L_1 = ((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_3;
		Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
		U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* L_3 = ((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* L_4 = (Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481*)il2cpp_codegen_object_new(Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481_il2cpp_TypeInfo_var);
		Func_2__ctor_m7169780EFE0BAC1D61868B6CA9A28D05A86DC6DF(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CInitTickablesU3Eb__18_0_mACC6DB90072FA0C73702B89730D79DE1BFFC37DB_RuntimeMethod_var), NULL);
		Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* L_5 = L_4;
		((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_3), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisType_t_m4079112A996D1BC45A025AE5A8BAE9F9906D0AAC(G_B2_1, G_B2_0, Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisType_t_m4079112A996D1BC45A025AE5A8BAE9F9906D0AAC_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_0;
					if (!L_8)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_9 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_0032_1:
			{
				// foreach (var type in _priorities.Select(x => x.First))
				RuntimeObject* L_10 = V_0;
				Type_t* L_11;
				L_11 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var, L_10);
				V_1 = L_11;
				// Assert.That(type.DerivesFrom<ITickable>(),
				//     "Expected type '{0}' to drive from ITickable while checking priorities in TickableHandler", type);
				Type_t* L_12 = V_1;
				bool L_13;
				L_13 = TypeExtensions_DerivesFrom_TisITickable_tE2FB17D0E5590B6C0EDBA19B2F7E0AF24DBA661D_m84700B00543C87C8B5FC9FA02E0DE1A58365D47A(L_12, TypeExtensions_DerivesFrom_TisITickable_tE2FB17D0E5590B6C0EDBA19B2F7E0AF24DBA661D_m84700B00543C87C8B5FC9FA02E0DE1A58365D47A_RuntimeMethod_var);
				Type_t* L_14 = V_1;
				Assert_That_m3E74483F729A9A222574B7C43EAAA0CDA85199A7(L_13, _stringLiteral6089A66607AC9D045E4E58C264ABDED66F7E1BC4, L_14, NULL);
			}

IL_004a_1:
			{
				// foreach (var type in _priorities.Select(x => x.First))
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// foreach (var tickable in _tickables)
		List_1_t32C173F10D76C02DB552E9A30C59B4E1C6AEB482* L_17 = __this->____tickables_0;
		Enumerator_tE4DD9D1AC9A1914BFE6C63B52EAB0BED63CCDC02 L_18;
		L_18 = List_1_GetEnumerator_m1973EF68F5F20C3A58190680AAB021160F19EC9F(L_17, List_1_GetEnumerator_m1973EF68F5F20C3A58190680AAB021160F19EC9F_RuntimeMethod_var);
		V_2 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ff:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m85873B108A68C6EE5EF138B90260FB0A050C046F((&V_2), Enumerator_Dispose_m85873B108A68C6EE5EF138B90260FB0A050C046F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f1_1;
			}

IL_006f_1:
			{
				U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C* L_19 = (U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C_il2cpp_TypeInfo_var);
				U3CU3Ec__DisplayClass18_0__ctor_mE234C39A66D7D4AC78AB31B1DBDC9C321B744E87(L_19, NULL);
				V_3 = L_19;
				// foreach (var tickable in _tickables)
				U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C* L_20 = V_3;
				RuntimeObject* L_21;
				L_21 = Enumerator_get_Current_mB19C6B8F2C1A0327A653CDA4C64F715D9FDB235D_inline((&V_2), Enumerator_get_Current_mB19C6B8F2C1A0327A653CDA4C64F715D9FDB235D_RuntimeMethod_var);
				L_20->___tickable_0 = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&L_20->___tickable_0), (void*)L_21);
				// var matches = _priorities.Where(x => tickable.GetType().DerivesFromOrEqual(x.First)).Select(x => x.Second).ToList();
				List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* L_22 = __this->____priorities_3;
				U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C* L_23 = V_3;
				Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E* L_24 = (Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E*)il2cpp_codegen_object_new(Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E_il2cpp_TypeInfo_var);
				Func_2__ctor_m97A3CC5F9959553B29AEC0A8EF64F1365096B4DF(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CInitTickablesU3Eb__1_mEDBA4077981DFE7E4203E4814DAD2167F26A2412_RuntimeMethod_var), NULL);
				RuntimeObject* L_25;
				L_25 = Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB(L_22, L_24, Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
				Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_26 = ((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__18_2_4;
				Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_27 = L_26;
				G_B13_0 = L_27;
				G_B13_1 = L_25;
				if (L_27)
				{
					G_B14_0 = L_27;
					G_B14_1 = L_25;
					goto IL_00b8_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
				U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* L_28 = ((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_29 = (Func_2_tD52805B3429F12539373FEC711930A36A24A37D1*)il2cpp_codegen_object_new(Func_2_tD52805B3429F12539373FEC711930A36A24A37D1_il2cpp_TypeInfo_var);
				Func_2__ctor_mF9BFCD96585F4D20C430F2C111EC77C206A88827(L_29, L_28, (intptr_t)((void*)U3CU3Ec_U3CInitTickablesU3Eb__18_2_m9B622530985BD165D7E1EBAC080B0E3A7365BA9A_RuntimeMethod_var), NULL);
				Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_30 = L_29;
				((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__18_2_4 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__18_2_4), (void*)L_30);
				G_B14_0 = L_30;
				G_B14_1 = G_B13_1;
			}

IL_00b8_1:
			{
				RuntimeObject* L_31;
				L_31 = Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176(G_B14_1, G_B14_0, Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176_RuntimeMethod_var);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_32;
				L_32 = Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC(L_31, Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
				V_4 = L_32;
				// int priority = matches.IsEmpty() ? 0 : matches.Distinct().Single();
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_33 = V_4;
				bool L_34;
				L_34 = LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B(L_33, LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_00db_1;
				}
			}
			{
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_35 = V_4;
				RuntimeObject* L_36;
				L_36 = Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE(L_35, Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE_RuntimeMethod_var);
				int32_t L_37;
				L_37 = Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588(L_36, Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588_RuntimeMethod_var);
				G_B17_0 = L_37;
				goto IL_00dc_1;
			}

IL_00db_1:
			{
				G_B17_0 = 0;
			}

IL_00dc_1:
			{
				V_5 = G_B17_0;
				// _updater.AddTask(tickable, priority);
				TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9* L_38 = __this->____updater_6;
				U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C* L_39 = V_3;
				RuntimeObject* L_40 = L_39->___tickable_0;
				int32_t L_41 = V_5;
				TaskUpdater_1_AddTask_m4C7F9D58D0E9C4848EF614371D84AFB0045DB604(L_38, L_40, L_41, TaskUpdater_1_AddTask_m4C7F9D58D0E9C4848EF614371D84AFB0045DB604_RuntimeMethod_var);
			}

IL_00f1_1:
			{
				// foreach (var tickable in _tickables)
				bool L_42;
				L_42 = Enumerator_MoveNext_m57BE58AA6A3199C882D7CF201DDE29B953A0562B((&V_2), Enumerator_MoveNext_m57BE58AA6A3199C882D7CF201DDE29B953A0562B_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_006f_1;
				}
			}
			{
				goto IL_010d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::InitLateTickables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_InitLateTickables_m60F91215914E2A35C99C8C2351E59A6E6E9761DB (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisType_t_m4079112A996D1BC45A025AE5A8BAE9F9906D0AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m72617E0142E3A1F4A457AD25117959299921C833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2A79026A96ECE71851E7BD52966139EDD4B7227C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDD58D01A6CCBB745B7EAD7A209104A22BE1FE99B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD52805B3429F12539373FEC711930A36A24A37D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m603E1CC572A4D58983CABD9C3571213CA31393D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_AddTask_m88690305F6E8BEDC25539CD6C76F391233F7F58C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_DerivesFrom_TisILateTickable_t3238FE6BE7CD7D3A90F3E242D8696DE02934DB39_mFB3899A81AFB4C9CF908E1C35F7589A15E8DA8E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitLateTickablesU3Eb__19_0_m88B2C65F7C3AD62836C848703B37E2472042EE26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitLateTickablesU3Eb__19_2_m9C70723C1ED5859A297EEB9F823AF07739EFA81C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CInitLateTickablesU3Eb__1_mA0AC33B843D13DA2ED7AF9DF7CE42B4CB0BE13E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7AE5B29C30D381703922F71CE2120EBBEC3C12A);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	Enumerator_t831A2721348431EA69C4CE3F768D98138408838C V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	int32_t V_5 = 0;
	Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* G_B2_0 = NULL;
	List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* G_B2_1 = NULL;
	Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* G_B1_0 = NULL;
	List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* G_B1_1 = NULL;
	Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	int32_t G_B17_0 = 0;
	{
		// foreach (var type in _latePriorities.Select(x => x.First))
		List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* L_0 = __this->____latePriorities_5;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
		Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* L_1 = ((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__19_0_5;
		Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
		U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* L_3 = ((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* L_4 = (Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481*)il2cpp_codegen_object_new(Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481_il2cpp_TypeInfo_var);
		Func_2__ctor_m7169780EFE0BAC1D61868B6CA9A28D05A86DC6DF(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CInitLateTickablesU3Eb__19_0_m88B2C65F7C3AD62836C848703B37E2472042EE26_RuntimeMethod_var), NULL);
		Func_2_tC1D5FF50EB7F3DEF1A8213630F86AFB0E2AAC481* L_5 = L_4;
		((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__19_0_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__19_0_5), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisType_t_m4079112A996D1BC45A025AE5A8BAE9F9906D0AAC(G_B2_1, G_B2_0, Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisType_t_m4079112A996D1BC45A025AE5A8BAE9F9906D0AAC_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_0;
					if (!L_8)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_9 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_0032_1:
			{
				// foreach (var type in _latePriorities.Select(x => x.First))
				RuntimeObject* L_10 = V_0;
				Type_t* L_11;
				L_11 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var, L_10);
				V_1 = L_11;
				// Assert.That(type.DerivesFrom<ILateTickable>(),
				//     "Expected type '{0}' to drive from ILateTickable while checking priorities in TickableHandler", type);
				Type_t* L_12 = V_1;
				bool L_13;
				L_13 = TypeExtensions_DerivesFrom_TisILateTickable_t3238FE6BE7CD7D3A90F3E242D8696DE02934DB39_mFB3899A81AFB4C9CF908E1C35F7589A15E8DA8E7(L_12, TypeExtensions_DerivesFrom_TisILateTickable_t3238FE6BE7CD7D3A90F3E242D8696DE02934DB39_mFB3899A81AFB4C9CF908E1C35F7589A15E8DA8E7_RuntimeMethod_var);
				Type_t* L_14 = V_1;
				Assert_That_m3E74483F729A9A222574B7C43EAAA0CDA85199A7(L_13, _stringLiteralD7AE5B29C30D381703922F71CE2120EBBEC3C12A, L_14, NULL);
			}

IL_004a_1:
			{
				// foreach (var type in _latePriorities.Select(x => x.First))
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// foreach (var tickable in _lateTickables)
		List_1_t478793A356A38C441F4D2905E82955E27C636133* L_17 = __this->____lateTickables_2;
		Enumerator_t831A2721348431EA69C4CE3F768D98138408838C L_18;
		L_18 = List_1_GetEnumerator_m603E1CC572A4D58983CABD9C3571213CA31393D0(L_17, List_1_GetEnumerator_m603E1CC572A4D58983CABD9C3571213CA31393D0_RuntimeMethod_var);
		V_2 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ff:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m72617E0142E3A1F4A457AD25117959299921C833((&V_2), Enumerator_Dispose_m72617E0142E3A1F4A457AD25117959299921C833_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f1_1;
			}

IL_006f_1:
			{
				U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA* L_19 = (U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA_il2cpp_TypeInfo_var);
				U3CU3Ec__DisplayClass19_0__ctor_m0444F1E1D03F6E5846DB0D42AD8D26517D0A2780(L_19, NULL);
				V_3 = L_19;
				// foreach (var tickable in _lateTickables)
				U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA* L_20 = V_3;
				RuntimeObject* L_21;
				L_21 = Enumerator_get_Current_mDD58D01A6CCBB745B7EAD7A209104A22BE1FE99B_inline((&V_2), Enumerator_get_Current_mDD58D01A6CCBB745B7EAD7A209104A22BE1FE99B_RuntimeMethod_var);
				L_20->___tickable_0 = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&L_20->___tickable_0), (void*)L_21);
				// var matches = _latePriorities.Where(x => tickable.GetType().DerivesFromOrEqual(x.First)).Select(x => x.Second).ToList();
				List_1_t57C872DC4D1EDAD7FD08F248E3CBE46537EAAAFC* L_22 = __this->____latePriorities_5;
				U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA* L_23 = V_3;
				Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E* L_24 = (Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E*)il2cpp_codegen_object_new(Func_2_tD82CECF33001FDDD9FEEFA11D8EFD868444DBF2E_il2cpp_TypeInfo_var);
				Func_2__ctor_m97A3CC5F9959553B29AEC0A8EF64F1365096B4DF(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass19_0_U3CInitLateTickablesU3Eb__1_mA0AC33B843D13DA2ED7AF9DF7CE42B4CB0BE13E6_RuntimeMethod_var), NULL);
				RuntimeObject* L_25;
				L_25 = Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB(L_22, L_24, Enumerable_Where_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_m7AF2E689E03B133C9DAD0D0F1BB0C7CE4A3211DB_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
				Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_26 = ((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__19_2_6;
				Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_27 = L_26;
				G_B13_0 = L_27;
				G_B13_1 = L_25;
				if (L_27)
				{
					G_B14_0 = L_27;
					G_B14_1 = L_25;
					goto IL_00b8_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
				U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* L_28 = ((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_29 = (Func_2_tD52805B3429F12539373FEC711930A36A24A37D1*)il2cpp_codegen_object_new(Func_2_tD52805B3429F12539373FEC711930A36A24A37D1_il2cpp_TypeInfo_var);
				Func_2__ctor_mF9BFCD96585F4D20C430F2C111EC77C206A88827(L_29, L_28, (intptr_t)((void*)U3CU3Ec_U3CInitLateTickablesU3Eb__19_2_m9C70723C1ED5859A297EEB9F823AF07739EFA81C_RuntimeMethod_var), NULL);
				Func_2_tD52805B3429F12539373FEC711930A36A24A37D1* L_30 = L_29;
				((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__19_2_6 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9__19_2_6), (void*)L_30);
				G_B14_0 = L_30;
				G_B14_1 = G_B13_1;
			}

IL_00b8_1:
			{
				RuntimeObject* L_31;
				L_31 = Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176(G_B14_1, G_B14_0, Enumerable_Select_TisValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m899CD2763E4610C5F9A7C356C19B01C12AADE176_RuntimeMethod_var);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_32;
				L_32 = Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC(L_31, Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
				V_4 = L_32;
				// int priority = matches.IsEmpty() ? 0 : matches.Distinct().Single();
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_33 = V_4;
				bool L_34;
				L_34 = LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B(L_33, LinqExtensions_IsEmpty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26CF5226CA67F60A1DC858AE91B486C4252AE43B_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_00db_1;
				}
			}
			{
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_35 = V_4;
				RuntimeObject* L_36;
				L_36 = Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE(L_35, Enumerable_Distinct_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3421069716837BDE523D0FEDE14017149390D1CE_RuntimeMethod_var);
				int32_t L_37;
				L_37 = Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588(L_36, Enumerable_Single_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE5159175CB6199477CF70B5D123F2A7FB016588_RuntimeMethod_var);
				G_B17_0 = L_37;
				goto IL_00dc_1;
			}

IL_00db_1:
			{
				G_B17_0 = 0;
			}

IL_00dc_1:
			{
				V_5 = G_B17_0;
				// _lateUpdater.AddTask(tickable, priority);
				LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4* L_38 = __this->____lateUpdater_8;
				U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA* L_39 = V_3;
				RuntimeObject* L_40 = L_39->___tickable_0;
				int32_t L_41 = V_5;
				TaskUpdater_1_AddTask_m88690305F6E8BEDC25539CD6C76F391233F7F58C(L_38, L_40, L_41, TaskUpdater_1_AddTask_m88690305F6E8BEDC25539CD6C76F391233F7F58C_RuntimeMethod_var);
			}

IL_00f1_1:
			{
				// foreach (var tickable in _lateTickables)
				bool L_42;
				L_42 = Enumerator_MoveNext_m2A79026A96ECE71851E7BD52966139EDD4B7227C((&V_2), Enumerator_MoveNext_m2A79026A96ECE71851E7BD52966139EDD4B7227C_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_006f_1;
				}
			}
			{
				goto IL_010d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::Add(Zenject.ITickable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_Add_m99D53DB315A4C27FE5E1A00CC7ACF5901E9E6024 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, RuntimeObject* ___tickable0, int32_t ___priority1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_AddTask_m4C7F9D58D0E9C4848EF614371D84AFB0045DB604_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _updater.AddTask(tickable, priority);
		TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9* L_0 = __this->____updater_6;
		RuntimeObject* L_1 = ___tickable0;
		int32_t L_2 = ___priority1;
		TaskUpdater_1_AddTask_m4C7F9D58D0E9C4848EF614371D84AFB0045DB604(L_0, L_1, L_2, TaskUpdater_1_AddTask_m4C7F9D58D0E9C4848EF614371D84AFB0045DB604_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::Add(Zenject.ITickable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_Add_m961EC14D5871F1DE3FF56D4C81250E53A280EE6C (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, RuntimeObject* ___tickable0, const RuntimeMethod* method) 
{
	{
		// Add(tickable, 0);
		RuntimeObject* L_0 = ___tickable0;
		TickableManager_Add_m99D53DB315A4C27FE5E1A00CC7ACF5901E9E6024(__this, L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::AddLate(Zenject.ILateTickable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_AddLate_m5376BDCC9422275E48731E48810280B7BD007C27 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, RuntimeObject* ___tickable0, int32_t ___priority1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_AddTask_m88690305F6E8BEDC25539CD6C76F391233F7F58C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _lateUpdater.AddTask(tickable, priority);
		LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4* L_0 = __this->____lateUpdater_8;
		RuntimeObject* L_1 = ___tickable0;
		int32_t L_2 = ___priority1;
		TaskUpdater_1_AddTask_m88690305F6E8BEDC25539CD6C76F391233F7F58C(L_0, L_1, L_2, TaskUpdater_1_AddTask_m88690305F6E8BEDC25539CD6C76F391233F7F58C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::AddLate(Zenject.ILateTickable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_AddLate_mD118C278B3AD5037E08A54503D3EF588D2319083 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, RuntimeObject* ___tickable0, const RuntimeMethod* method) 
{
	{
		// AddLate(tickable, 0);
		RuntimeObject* L_0 = ___tickable0;
		TickableManager_AddLate_m5376BDCC9422275E48731E48810280B7BD007C27(__this, L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::AddFixed(Zenject.IFixedTickable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_AddFixed_mBE585E3052EA8834BD02A3B2B6BC1C41232D4256 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, RuntimeObject* ___tickable0, int32_t ___priority1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_AddTask_m1AFE6061E394A96783E9AD33768BBEDE878DA72B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fixedUpdater.AddTask(tickable, priority);
		FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362* L_0 = __this->____fixedUpdater_7;
		RuntimeObject* L_1 = ___tickable0;
		int32_t L_2 = ___priority1;
		TaskUpdater_1_AddTask_m1AFE6061E394A96783E9AD33768BBEDE878DA72B(L_0, L_1, L_2, TaskUpdater_1_AddTask_m1AFE6061E394A96783E9AD33768BBEDE878DA72B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::AddFixed(Zenject.IFixedTickable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_AddFixed_mA06ABC9B8BC83F23C089C7E929004972D1AD521E (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, RuntimeObject* ___tickable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_AddTask_m1AFE6061E394A96783E9AD33768BBEDE878DA72B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fixedUpdater.AddTask(tickable, 0);
		FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362* L_0 = __this->____fixedUpdater_7;
		RuntimeObject* L_1 = ___tickable0;
		TaskUpdater_1_AddTask_m1AFE6061E394A96783E9AD33768BBEDE878DA72B(L_0, L_1, 0, TaskUpdater_1_AddTask_m1AFE6061E394A96783E9AD33768BBEDE878DA72B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::Remove(Zenject.ITickable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_Remove_mA307EBE404AE4C0F1652C7544462B041403B4CC9 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, RuntimeObject* ___tickable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_RemoveTask_m173B7CD7BD38ED2F776D2D1EE470B976E1B11CA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _updater.RemoveTask(tickable);
		TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9* L_0 = __this->____updater_6;
		RuntimeObject* L_1 = ___tickable0;
		TaskUpdater_1_RemoveTask_m173B7CD7BD38ED2F776D2D1EE470B976E1B11CA3(L_0, L_1, TaskUpdater_1_RemoveTask_m173B7CD7BD38ED2F776D2D1EE470B976E1B11CA3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::RemoveLate(Zenject.ILateTickable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_RemoveLate_m177BE68881121BEF53392C7F856900C9963B8EB7 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, RuntimeObject* ___tickable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_RemoveTask_mEF678DB0941F865D8E6294FAA9A7AE505B0CC266_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _lateUpdater.RemoveTask(tickable);
		LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4* L_0 = __this->____lateUpdater_8;
		RuntimeObject* L_1 = ___tickable0;
		TaskUpdater_1_RemoveTask_mEF678DB0941F865D8E6294FAA9A7AE505B0CC266(L_0, L_1, TaskUpdater_1_RemoveTask_mEF678DB0941F865D8E6294FAA9A7AE505B0CC266_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::RemoveFixed(Zenject.IFixedTickable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_RemoveFixed_m323ABDB9CFBA7DC74928A99D3DFD97D731D3E01C (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, RuntimeObject* ___tickable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_RemoveTask_m6EC7CE5B624AA743AB8A0B0751E9DF81E48AA326_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fixedUpdater.RemoveTask(tickable);
		FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362* L_0 = __this->____fixedUpdater_7;
		RuntimeObject* L_1 = ___tickable0;
		TaskUpdater_1_RemoveTask_m6EC7CE5B624AA743AB8A0B0751E9DF81E48AA326(L_0, L_1, TaskUpdater_1_RemoveTask_m6EC7CE5B624AA743AB8A0B0751E9DF81E48AA326_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_Update_m7D02EFC9E2DBF8E1D175DFB13BB16C2CFEB718D3 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_OnFrameStart_mAD43B62AA029D19D0C9AD038BEBA853A3C733E7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_UpdateAll_m5096337F1C6A1C7B2EFD35C801D2F7651E62DD0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_isPaused)
		bool L_0 = __this->____isPaused_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _updater.OnFrameStart();
		TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9* L_1 = __this->____updater_6;
		TaskUpdater_1_OnFrameStart_mAD43B62AA029D19D0C9AD038BEBA853A3C733E7E(L_1, TaskUpdater_1_OnFrameStart_mAD43B62AA029D19D0C9AD038BEBA853A3C733E7E_RuntimeMethod_var);
		// _updater.UpdateAll();
		TickablesTaskUpdater_t9180F157764D57326D7142241BAF0BB3B2CA34F9* L_2 = __this->____updater_6;
		TaskUpdater_1_UpdateAll_m5096337F1C6A1C7B2EFD35C801D2F7651E62DD0A(L_2, TaskUpdater_1_UpdateAll_m5096337F1C6A1C7B2EFD35C801D2F7651E62DD0A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_FixedUpdate_m53C7F12177FDE6FA7253AD6D28C9D3CF983CE1D8 (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_OnFrameStart_mF40B828E2B3412B03B7ACA356F3E3C141C9A56D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_UpdateAll_m12C8FE5A0D5F0E4BC8D4EAE7CA325B86A618999C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_isPaused)
		bool L_0 = __this->____isPaused_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _fixedUpdater.OnFrameStart();
		FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362* L_1 = __this->____fixedUpdater_7;
		TaskUpdater_1_OnFrameStart_mF40B828E2B3412B03B7ACA356F3E3C141C9A56D3(L_1, TaskUpdater_1_OnFrameStart_mF40B828E2B3412B03B7ACA356F3E3C141C9A56D3_RuntimeMethod_var);
		// _fixedUpdater.UpdateAll();
		FixedTickablesTaskUpdater_t2274CA68E2DACADEC4EB92869E859043FB673362* L_2 = __this->____fixedUpdater_7;
		TaskUpdater_1_UpdateAll_m12C8FE5A0D5F0E4BC8D4EAE7CA325B86A618999C(L_2, TaskUpdater_1_UpdateAll_m12C8FE5A0D5F0E4BC8D4EAE7CA325B86A618999C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Zenject.TickableManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TickableManager_LateUpdate_m62094E5F66666C7A7CA1FD635F98355CAB2DE8AC (TickableManager_tF6567E0A4ACA9B89016B37E8A7426301B9EE90A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_OnFrameStart_m102158ECA1E7149317040564962B68D75AE70CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskUpdater_1_UpdateAll_m39F09EEB678C1610817E282267C43C5C59FC1503_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_isPaused)
		bool L_0 = __this->____isPaused_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _lateUpdater.OnFrameStart();
		LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4* L_1 = __this->____lateUpdater_8;
		TaskUpdater_1_OnFrameStart_m102158ECA1E7149317040564962B68D75AE70CE2(L_1, TaskUpdater_1_OnFrameStart_m102158ECA1E7149317040564962B68D75AE70CE2_RuntimeMethod_var);
		// _lateUpdater.UpdateAll();
		LateTickablesTaskUpdater_tF6379206B93A832257367AEC5E33F5E7541343F4* L_2 = __this->____lateUpdater_8;
		TaskUpdater_1_UpdateAll_m39F09EEB678C1610817E282267C43C5C59FC1503(L_2, TaskUpdater_1_UpdateAll_m39F09EEB678C1610817E282267C43C5C59FC1503_RuntimeMethod_var);
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
// System.Void Zenject.TickableManager/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m300D071E658DA39FBADC9E169400E85A9222F478 (U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Zenject.TickableManager/<>c__DisplayClass17_0::<InitFixedTickables>b__1(ModestTree.Util.ValuePair`2<System.Type,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass17_0_U3CInitFixedTickablesU3Eb__1_m36BCDF0FD54630021ED9FA9370FAF728259F7EDB (U3CU3Ec__DisplayClass17_0_t71E4CC688BFE0C8D818466497DAB3C470D3991B0* __this, ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* ___x0, const RuntimeMethod* method) 
{
	{
		// var matches = _fixedPriorities.Where(x => tickable.GetType().DerivesFromOrEqual(x.First)).Select(x => x.Second).ToList();
		RuntimeObject* L_0 = __this->___tickable_0;
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* L_2 = ___x0;
		Type_t* L_3 = L_2->___First_0;
		bool L_4;
		L_4 = TypeExtensions_DerivesFromOrEqual_m6BFB2950495FF37C00DFC4F74534E7850293C210(L_1, L_3, NULL);
		return L_4;
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
// System.Void Zenject.TickableManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0832CCE4B8BAD4FAF2B82E861791D3CBDAC135F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* L_0 = (U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3*)il2cpp_codegen_object_new(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m492D651CC676D2E7A927A727528E7082BC5CB7F3(L_0, NULL);
		((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Zenject.TickableManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m492D651CC676D2E7A927A727528E7082BC5CB7F3 (U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Type Zenject.TickableManager/<>c::<InitFixedTickables>b__17_0(ModestTree.Util.ValuePair`2<System.Type,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CU3Ec_U3CInitFixedTickablesU3Eb__17_0_mB54095AAB42BFE49FCA69D0781533BC0E853E4B5 (U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* __this, ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* ___x0, const RuntimeMethod* method) 
{
	{
		// foreach (var type in _fixedPriorities.Select(x => x.First))
		ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* L_0 = ___x0;
		Type_t* L_1 = L_0->___First_0;
		return L_1;
	}
}
// System.Int32 Zenject.TickableManager/<>c::<InitFixedTickables>b__17_2(ModestTree.Util.ValuePair`2<System.Type,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CInitFixedTickablesU3Eb__17_2_m38F4164F25107EB09CA59974A05E88BAD652C71A (U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* __this, ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* ___x0, const RuntimeMethod* method) 
{
	{
		// var matches = _fixedPriorities.Where(x => tickable.GetType().DerivesFromOrEqual(x.First)).Select(x => x.Second).ToList();
		ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* L_0 = ___x0;
		int32_t L_1 = L_0->___Second_1;
		return L_1;
	}
}
// System.Type Zenject.TickableManager/<>c::<InitTickables>b__18_0(ModestTree.Util.ValuePair`2<System.Type,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CU3Ec_U3CInitTickablesU3Eb__18_0_mACC6DB90072FA0C73702B89730D79DE1BFFC37DB (U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* __this, ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* ___x0, const RuntimeMethod* method) 
{
	{
		// foreach (var type in _priorities.Select(x => x.First))
		ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* L_0 = ___x0;
		Type_t* L_1 = L_0->___First_0;
		return L_1;
	}
}
// System.Int32 Zenject.TickableManager/<>c::<InitTickables>b__18_2(ModestTree.Util.ValuePair`2<System.Type,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CInitTickablesU3Eb__18_2_m9B622530985BD165D7E1EBAC080B0E3A7365BA9A (U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* __this, ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* ___x0, const RuntimeMethod* method) 
{
	{
		// var matches = _priorities.Where(x => tickable.GetType().DerivesFromOrEqual(x.First)).Select(x => x.Second).ToList();
		ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* L_0 = ___x0;
		int32_t L_1 = L_0->___Second_1;
		return L_1;
	}
}
// System.Type Zenject.TickableManager/<>c::<InitLateTickables>b__19_0(ModestTree.Util.ValuePair`2<System.Type,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CU3Ec_U3CInitLateTickablesU3Eb__19_0_m88B2C65F7C3AD62836C848703B37E2472042EE26 (U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* __this, ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* ___x0, const RuntimeMethod* method) 
{
	{
		// foreach (var type in _latePriorities.Select(x => x.First))
		ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* L_0 = ___x0;
		Type_t* L_1 = L_0->___First_0;
		return L_1;
	}
}
// System.Int32 Zenject.TickableManager/<>c::<InitLateTickables>b__19_2(ModestTree.Util.ValuePair`2<System.Type,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CInitLateTickablesU3Eb__19_2_m9C70723C1ED5859A297EEB9F823AF07739EFA81C (U3CU3Ec_t237DD073DEB020DE89101E9A7EC6E462841AEEC3* __this, ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* ___x0, const RuntimeMethod* method) 
{
	{
		// var matches = _latePriorities.Where(x => tickable.GetType().DerivesFromOrEqual(x.First)).Select(x => x.Second).ToList();
		ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* L_0 = ___x0;
		int32_t L_1 = L_0->___Second_1;
		return L_1;
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
// System.Void Zenject.TickableManager/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mE234C39A66D7D4AC78AB31B1DBDC9C321B744E87 (U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Zenject.TickableManager/<>c__DisplayClass18_0::<InitTickables>b__1(ModestTree.Util.ValuePair`2<System.Type,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CInitTickablesU3Eb__1_mEDBA4077981DFE7E4203E4814DAD2167F26A2412 (U3CU3Ec__DisplayClass18_0_t989C6B39838FADF329169D8EDB834F0D632F315C* __this, ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* ___x0, const RuntimeMethod* method) 
{
	{
		// var matches = _priorities.Where(x => tickable.GetType().DerivesFromOrEqual(x.First)).Select(x => x.Second).ToList();
		RuntimeObject* L_0 = __this->___tickable_0;
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* L_2 = ___x0;
		Type_t* L_3 = L_2->___First_0;
		bool L_4;
		L_4 = TypeExtensions_DerivesFromOrEqual_m6BFB2950495FF37C00DFC4F74534E7850293C210(L_1, L_3, NULL);
		return L_4;
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
// System.Void Zenject.TickableManager/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m0444F1E1D03F6E5846DB0D42AD8D26517D0A2780 (U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Zenject.TickableManager/<>c__DisplayClass19_0::<InitLateTickables>b__1(ModestTree.Util.ValuePair`2<System.Type,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass19_0_U3CInitLateTickablesU3Eb__1_mA0AC33B843D13DA2ED7AF9DF7CE42B4CB0BE13E6 (U3CU3Ec__DisplayClass19_0_t04E4B61510752F745C1CEB8DBC3DE283F8F44EAA* __this, ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* ___x0, const RuntimeMethod* method) 
{
	{
		// var matches = _latePriorities.Where(x => tickable.GetType().DerivesFromOrEqual(x.First)).Select(x => x.Second).ToList();
		RuntimeObject* L_0 = __this->___tickable_0;
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		ValuePair_2_tD7F2C987AB3BAAD27C08196B56FA5E1DEFF5B7A5* L_2 = ___x0;
		Type_t* L_3 = L_2->___First_0;
		bool L_4;
		L_4 = TypeExtensions_DerivesFromOrEqual_m6BFB2950495FF37C00DFC4F74534E7850293C210(L_1, L_3, NULL);
		return L_4;
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
// System.Void Zenject.SignalSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalSettings__ctor_m953DD8B3F130FF6EE54C21D3AF1A816442DB32F6 (SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Zenject.SignalBase::Construct(Zenject.SignalManager,Zenject.SignalSettings,Zenject.BindInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalBase_Construct_mF6958BC0AF6BACEDAB48E66DF527E89DC68F9221 (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* ___manager0, SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* ___settings1, BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* ___bindInfo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _manager = manager;
		SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* L_0 = ___manager0;
		__this->____manager_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____manager_0), (void*)L_0);
		// SignalId = new BindingId(this.GetType(), bindInfo.Identifier);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* L_2 = ___bindInfo2;
		RuntimeObject* L_3;
		L_3 = BindInfo_get_Identifier_m06AD5B204DE0C4AB1B9B304AD9DF81594A976519_inline(L_2, NULL);
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_4 = (BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB*)il2cpp_codegen_object_new(BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB_il2cpp_TypeInfo_var);
		BindingId__ctor_mFA7CB103CF17F90F3897E3C9E023D6E2DB7D4A66(L_4, L_1, L_3, NULL);
		SignalBase_set_SignalId_mD4E7B4BC08FB5D6C18F9B32E88C5F9C86D40984A_inline(__this, L_4, NULL);
		// Settings = settings;
		SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* L_5 = ___settings1;
		SignalBase_set_Settings_m4806ADA4377060EEE6D9F5D77070F80C5E7337B7_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// Zenject.BindingId Zenject.SignalBase::get_SignalId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* SignalBase_get_SignalId_m1C7CB1A15F3DA4C876B3A67C005BA4671C7E4D57 (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, const RuntimeMethod* method) 
{
	{
		// get;
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_0 = __this->___U3CSignalIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Zenject.SignalBase::set_SignalId(Zenject.BindingId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalBase_set_SignalId_mD4E7B4BC08FB5D6C18F9B32E88C5F9C86D40984A (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_0 = ___value0;
		__this->___U3CSignalIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignalIdU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Zenject.SignalSettings Zenject.SignalBase::get_Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* SignalBase_get_Settings_mD749E54FE60F32DDD635D97AF8C7411F969434E3 (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, const RuntimeMethod* method) 
{
	{
		// get;
		SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* L_0 = __this->___U3CSettingsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Zenject.SignalBase::set_Settings(Zenject.SignalSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalBase_set_Settings_m4806ADA4377060EEE6D9F5D77070F80C5E7337B7 (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* L_0 = ___value0;
		__this->___U3CSettingsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSettingsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Zenject.SignalManager Zenject.SignalBase::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* SignalBase_get_Manager_m2D4A36015815F77C2D477A4B2279CEF46599E4E0 (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, const RuntimeMethod* method) 
{
	{
		// get { return _manager; }
		SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* L_0 = __this->____manager_0;
		return L_0;
	}
}
// System.Int32 Zenject.SignalBase::get_NumHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignalBase_get_NumHandlers_mB2DDA8CC99E17E3ED3D0489653600292B794EC9B (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, const RuntimeMethod* method) 
{
	{
		// get { return _manager.GetNumHandlers(SignalId); }
		SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* L_0 = __this->____manager_0;
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_1;
		L_1 = SignalBase_get_SignalId_m1C7CB1A15F3DA4C876B3A67C005BA4671C7E4D57_inline(__this, NULL);
		int32_t L_2;
		L_2 = SignalManager_GetNumHandlers_m8980BE93BF67467CD20C94246B7BC3EF89785917(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Zenject.SignalBase::get_HasHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignalBase_get_HasHandler_mD31D46D3C07B87A0EA5E2EDE896B6AC811290413 (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, const RuntimeMethod* method) 
{
	{
		// get { return _manager.IsHandlerRegistered(SignalId); }
		SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* L_0 = __this->____manager_0;
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_1;
		L_1 = SignalBase_get_SignalId_m1C7CB1A15F3DA4C876B3A67C005BA4671C7E4D57_inline(__this, NULL);
		bool L_2;
		L_2 = SignalManager_IsHandlerRegistered_m449E2DE4C4E5DC2218D8EA40DF72E98BBE49B528(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Zenject.SignalBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalBase__ctor_m6E9574C717886F173AE29517FDC6A6DB79907C60 (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Zenject.SignalBinder::.ctor(Zenject.BindInfo,Zenject.SignalSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalBinder__ctor_m3B3D7A209F766C8EF20675F87D0F33247BED76E6 (SignalBinder_tA7C7F1AF1EBEC2E1D82BB2181C284E4805812586* __this, BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* ___bindInfo0, SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* ___signalSettings1, const RuntimeMethod* method) 
{
	{
		// : base(bindInfo)
		BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* L_0 = ___bindInfo0;
		ConditionCopyNonLazyBinder__ctor_m0EEDDDA6AE1390B557E3954DC4F1535EB442B31C(__this, L_0, NULL);
		// _signalSettings = signalSettings;
		SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* L_1 = ___signalSettings1;
		__this->____signalSettings_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signalSettings_1), (void*)L_1);
		// }
		return;
	}
}
// Zenject.ConditionCopyNonLazyBinder Zenject.SignalBinder::RequireHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C* SignalBinder_RequireHandler_m62E3C1C21C67E54159FBC7942B88377F749C9F42 (SignalBinder_tA7C7F1AF1EBEC2E1D82BB2181C284E4805812586* __this, const RuntimeMethod* method) 
{
	{
		// _signalSettings.RequiresHandler = true;
		SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* L_0 = __this->____signalSettings_1;
		L_0->___RequiresHandler_0 = (bool)1;
		// return this;
		return __this;
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
// System.Void Zenject.SignalBinderWithId::.ctor(Zenject.BindInfo,Zenject.SignalSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalBinderWithId__ctor_m34CB28B54DD3FC4027FDE75687A75BCA96A4A76C (SignalBinderWithId_t5F0CC220AD7CF57338E5EADB804DFB5751B1C65B* __this, BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* ___bindInfo0, SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* ___signalSettings1, const RuntimeMethod* method) 
{
	{
		// : base(bindInfo, signalSettings)
		BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* L_0 = ___bindInfo0;
		SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* L_1 = ___signalSettings1;
		SignalBinder__ctor_m3B3D7A209F766C8EF20675F87D0F33247BED76E6(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// Zenject.SignalBinder Zenject.SignalBinderWithId::WithId(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignalBinder_tA7C7F1AF1EBEC2E1D82BB2181C284E4805812586* SignalBinderWithId_WithId_m09459CB1BFA80F618202729FF58932467BB9690C (SignalBinderWithId_t5F0CC220AD7CF57338E5EADB804DFB5751B1C65B* __this, RuntimeObject* ___identifier0, const RuntimeMethod* method) 
{
	{
		// this.BindInfo.Identifier = identifier;
		BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* L_0;
		L_0 = NonLazyBinder_get_BindInfo_mEED382479D9C4DCE644F684AF11856E018C63DB9_inline(__this, NULL);
		RuntimeObject* L_1 = ___identifier0;
		BindInfo_set_Identifier_mE1B8B64FDF1E21B08E67BB5156E4ED5835096901_inline(L_0, L_1, NULL);
		// return this;
		return __this;
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
// Zenject.SignalBinderWithId Zenject.SignalExtensions::DeclareSignal(Zenject.DiContainer,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignalBinderWithId_t5F0CC220AD7CF57338E5EADB804DFB5751B1C65B* SignalExtensions_DeclareSignal_mE6CD24E0C9046B8C3718DE2C0F65E5B6FE0103C5 (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ___container0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgConditionCopyNonLazyBinder_WithArguments_TisSignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1_TisBindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA_mB3E05DCBDA18BFE1C360EDA5A2AD7FF46945C22E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalBinderWithId_t5F0CC220AD7CF57338E5EADB804DFB5751B1C65B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* V_0 = NULL;
	SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* V_1 = NULL;
	{
		// var info = new BindInfo(type);
		Type_t* L_0 = ___type1;
		BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* L_1 = (BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA*)il2cpp_codegen_object_new(BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA_il2cpp_TypeInfo_var);
		BindInfo__ctor_m84BD2762A9D2F6BAABFEB28475EFC5B3B3ECCCA8(L_1, L_0, NULL);
		V_0 = L_1;
		// var signalSettings = new SignalSettings();
		SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* L_2 = (SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1*)il2cpp_codegen_object_new(SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1_il2cpp_TypeInfo_var);
		SignalSettings__ctor_m953DD8B3F130FF6EE54C21D3AF1A816442DB32F6(L_2, NULL);
		V_1 = L_2;
		// container.Bind(type).AsCached().WithArguments(signalSettings, info);
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_3 = ___container0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = L_4;
		Type_t* L_6 = ___type1;
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_6);
		ConcreteIdBinderNonGeneric_tA44CBAEC077725C86E7E973931742EA755F05511* L_7;
		L_7 = DiContainer_Bind_m0BB557F9B922373B1A3E4E463B80D02C872704E4(L_3, L_5, NULL);
		ArgConditionCopyNonLazyBinder_t02E8730F99239DEE447A998767E1AA93D54CE726* L_8;
		L_8 = ScopeArgConditionCopyNonLazyBinder_AsCached_m13799B5CECC834B8A04D4CE489360283A412DE15(L_7, NULL);
		SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* L_9 = V_1;
		BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* L_10 = V_0;
		ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C* L_11;
		L_11 = ArgConditionCopyNonLazyBinder_WithArguments_TisSignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1_TisBindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA_mB3E05DCBDA18BFE1C360EDA5A2AD7FF46945C22E(L_8, L_9, L_10, ArgConditionCopyNonLazyBinder_WithArguments_TisSignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1_TisBindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA_mB3E05DCBDA18BFE1C360EDA5A2AD7FF46945C22E_RuntimeMethod_var);
		// return new SignalBinderWithId(info, signalSettings);
		BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* L_12 = V_0;
		SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* L_13 = V_1;
		SignalBinderWithId_t5F0CC220AD7CF57338E5EADB804DFB5751B1C65B* L_14 = (SignalBinderWithId_t5F0CC220AD7CF57338E5EADB804DFB5751B1C65B*)il2cpp_codegen_object_new(SignalBinderWithId_t5F0CC220AD7CF57338E5EADB804DFB5751B1C65B_il2cpp_TypeInfo_var);
		SignalBinderWithId__ctor_m34CB28B54DD3FC4027FDE75687A75BCA96A4A76C(L_14, L_12, L_13, NULL);
		return L_14;
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
// System.Void Zenject.SignalHandlerBase::.ctor(Zenject.BindingId,Zenject.SignalManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHandlerBase__ctor_m3A4127CAEE9960E92D686E1B9CA08347194B79DB (SignalHandlerBase_tBBD7D21C6134FB970E6A44B4D833112E83D81DD1* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalId0, SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* ___manager1, const RuntimeMethod* method) 
{
	{
		// public SignalHandlerBase(
		//     BindingId signalId, SignalManager manager)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _manager = manager;
		SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* L_0 = ___manager1;
		__this->____manager_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____manager_0), (void*)L_0);
		// _signalId = signalId;
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_1 = ___signalId0;
		__this->____signalId_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signalId_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void Zenject.SignalHandlerBase::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHandlerBase_Initialize_m4DFCC05D8655886BBA45E6DD49CB19982AE82A50 (SignalHandlerBase_tBBD7D21C6134FB970E6A44B4D833112E83D81DD1* __this, const RuntimeMethod* method) 
{
	{
		// _manager.Register(_signalId, this);
		SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* L_0 = __this->____manager_0;
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_1 = __this->____signalId_1;
		SignalManager_Register_mD834FB0AEEB8B476A9D7FAAD6CFC3A4A2A1218F5(L_0, L_1, __this, NULL);
		// }
		return;
	}
}
// System.Void Zenject.SignalHandlerBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHandlerBase_Dispose_m0489A30E4F01D19CF620287EAA6A8F776F6691EA (SignalHandlerBase_tBBD7D21C6134FB970E6A44B4D833112E83D81DD1* __this, const RuntimeMethod* method) 
{
	{
		// _manager.Unregister(_signalId, this);
		SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* L_0 = __this->____manager_0;
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_1 = __this->____signalId_1;
		SignalManager_Unregister_m296958FE3504B03D600640086926CE74B49D00F7(L_0, L_1, __this, NULL);
		// }
		return;
	}
}
// System.Void Zenject.SignalHandlerBase::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHandlerBase_Validate_mDA1156A24D854BFA7A678346B64E982A943712B7 (SignalHandlerBase_tBBD7D21C6134FB970E6A44B4D833112E83D81DD1* __this, const RuntimeMethod* method) 
{
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
// System.Void Zenject.SignalHandlerBinder::.ctor(Zenject.DiContainer,System.Type,Zenject.BindFinalizerWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHandlerBinder__ctor_m8015F3FF149971D17578A1BF9D6EFAC3D762BFA7 (SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF* __this, DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ___container0, Type_t* ___signalType1, BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920* ___finalizerWrapper2, const RuntimeMethod* method) 
{
	{
		// public SignalHandlerBinder(
		//     DiContainer container, Type signalType, BindFinalizerWrapper finalizerWrapper)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _container = container;
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_0 = ___container0;
		__this->____container_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____container_2), (void*)L_0);
		// _signalType = signalType;
		Type_t* L_1 = ___signalType1;
		__this->____signalType_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signalType_1), (void*)L_1);
		// _finalizerWrapper = finalizerWrapper;
		BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920* L_2 = ___finalizerWrapper2;
		__this->____finalizerWrapper_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____finalizerWrapper_0), (void*)L_2);
		// }
		return;
	}
}
// System.Object Zenject.SignalHandlerBinder::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignalHandlerBinder_get_Identifier_m0F09FAA2891555F3A8EE732920FE787E5AA19497 (SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF* __this, const RuntimeMethod* method) 
{
	{
		// get;
		RuntimeObject* L_0 = __this->___U3CIdentifierU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Zenject.SignalHandlerBinder::set_Identifier(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHandlerBinder_set_Identifier_m62FA977B2E991AF7BB6A589E2B54F3ED85E0AEA7 (SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		RuntimeObject* L_0 = ___value0;
		__this->___U3CIdentifierU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdentifierU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Zenject.SignalHandlerBinder::To(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHandlerBinder_To_m3BFD95323EC06BD23146B7876A28F7A9007179B8 (SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgConditionCopyNonLazyBinder_WithArguments_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisBindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB_m0553C0811F5446AB1F9DFC9FB55186B967B26DB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcreteBinderNonGeneric_To_TisStaticMethodSignalHandler_t0CE0BEF81B871FDCC3DF52D425A2897EF04EF9C7_m2B763D956A36187FC01CC3927BA855F102BB8C6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializable_t6F7E396A96DB8CC4C5CE8E02DC8B4DB545961A75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullBindingFinalizer_t4607F719F1E7804CE699E388A3FDE0041AFDABAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _finalizerWrapper.SubFinalizer = new NullBindingFinalizer();
		BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920* L_0 = __this->____finalizerWrapper_0;
		NullBindingFinalizer_t4607F719F1E7804CE699E388A3FDE0041AFDABAF* L_1 = (NullBindingFinalizer_t4607F719F1E7804CE699E388A3FDE0041AFDABAF*)il2cpp_codegen_object_new(NullBindingFinalizer_t4607F719F1E7804CE699E388A3FDE0041AFDABAF_il2cpp_TypeInfo_var);
		NullBindingFinalizer__ctor_m4685B20E5F15BA02E13656C0856FA80C5B53913A(L_1, NULL);
		BindFinalizerWrapper_set_SubFinalizer_m7A57D41B3A2592B0663624D3497567FD687645B6_inline(L_0, L_1, NULL);
		// _container.Bind(typeof(IInitializable), typeof(IDisposable)).To<StaticMethodSignalHandler>().AsCached()
		//     .WithArguments(method, new BindingId(_signalType, Identifier));
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_2 = __this->____container_2;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (IInitializable_t6F7E396A96DB8CC4C5CE8E02DC8B4DB545961A75_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_6);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_9);
		ConcreteIdBinderNonGeneric_tA44CBAEC077725C86E7E973931742EA755F05511* L_10;
		L_10 = DiContainer_Bind_m0BB557F9B922373B1A3E4E463B80D02C872704E4(L_2, L_7, NULL);
		FromBinderNonGeneric_tBF219737E8A3BCB902999D7F4E91C3346E7ED771* L_11;
		L_11 = ConcreteBinderNonGeneric_To_TisStaticMethodSignalHandler_t0CE0BEF81B871FDCC3DF52D425A2897EF04EF9C7_m2B763D956A36187FC01CC3927BA855F102BB8C6F(L_10, ConcreteBinderNonGeneric_To_TisStaticMethodSignalHandler_t0CE0BEF81B871FDCC3DF52D425A2897EF04EF9C7_m2B763D956A36187FC01CC3927BA855F102BB8C6F_RuntimeMethod_var);
		ArgConditionCopyNonLazyBinder_t02E8730F99239DEE447A998767E1AA93D54CE726* L_12;
		L_12 = ScopeArgConditionCopyNonLazyBinder_AsCached_m13799B5CECC834B8A04D4CE489360283A412DE15(L_11, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = ___method0;
		Type_t* L_14 = __this->____signalType_1;
		RuntimeObject* L_15;
		L_15 = SignalHandlerBinder_get_Identifier_m0F09FAA2891555F3A8EE732920FE787E5AA19497_inline(__this, NULL);
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_16 = (BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB*)il2cpp_codegen_object_new(BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB_il2cpp_TypeInfo_var);
		BindingId__ctor_mFA7CB103CF17F90F3897E3C9E023D6E2DB7D4A66(L_16, L_14, L_15, NULL);
		ConditionCopyNonLazyBinder_t2824A588C2C835BAD9C7E88B67E58A20E990706C* L_17;
		L_17 = ArgConditionCopyNonLazyBinder_WithArguments_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisBindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB_m0553C0811F5446AB1F9DFC9FB55186B967B26DB5(L_12, L_13, L_16, ArgConditionCopyNonLazyBinder_WithArguments_TisAction_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_TisBindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB_m0553C0811F5446AB1F9DFC9FB55186B967B26DB5_RuntimeMethod_var);
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
// System.Void Zenject.SignalHandlerBinderWithId::.ctor(Zenject.DiContainer,System.Type,Zenject.BindFinalizerWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalHandlerBinderWithId__ctor_m386EBE6933619BA011B23DE1E8447512E5082646 (SignalHandlerBinderWithId_tAC0626864984388C37A79B295ACD61C575F58A2A* __this, DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ___container0, Type_t* ___signalType1, BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920* ___finalizerWrapper2, const RuntimeMethod* method) 
{
	{
		// : base(container, signalType, finalizerWrapper)
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_0 = ___container0;
		Type_t* L_1 = ___signalType1;
		BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920* L_2 = ___finalizerWrapper2;
		SignalHandlerBinder__ctor_m8015F3FF149971D17578A1BF9D6EFAC3D762BFA7(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// Zenject.SignalHandlerBinder Zenject.SignalHandlerBinderWithId::WithId(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF* SignalHandlerBinderWithId_WithId_m3BF74E0F82F3AF54C5202033E6924D0F0E40AB5D (SignalHandlerBinderWithId_tAC0626864984388C37A79B295ACD61C575F58A2A* __this, RuntimeObject* ___identifier0, const RuntimeMethod* method) 
{
	{
		// Identifier = identifier;
		RuntimeObject* L_0 = ___identifier0;
		SignalHandlerBinder_set_Identifier_m62FA977B2E991AF7BB6A589E2B54F3ED85E0AEA7_inline(__this, L_0, NULL);
		// return this;
		return __this;
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
// System.Int32 Zenject.SignalManager::GetNumHandlers(Zenject.BindingId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignalManager_GetNumHandlers_m8980BE93BF67467CD20C94246B7BC3EF89785917 (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mD0DC6AA54A655F96022C9AB1E375221D58E34E1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetList(signalType).Count();
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_0 = ___signalType0;
		List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* L_1;
		L_1 = SignalManager_GetList_m94EADAC0FE87471EED207EA37E6CF673B4EA4B1A(__this, L_0, NULL);
		int32_t L_2;
		L_2 = Enumerable_Count_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mD0DC6AA54A655F96022C9AB1E375221D58E34E1A(L_1, Enumerable_Count_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mD0DC6AA54A655F96022C9AB1E375221D58E34E1A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Zenject.SignalManager::IsHandlerRegistered(Zenject.BindingId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignalManager_IsHandlerRegistered_m449E2DE4C4E5DC2218D8EA40DF72E98BBE49B528 (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2CD9A05CE21127C6DDC7DF2763FB4F9B447F2502_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetList(signalType).Count > 0;
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_0 = ___signalType0;
		List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* L_1;
		L_1 = SignalManager_GetList_m94EADAC0FE87471EED207EA37E6CF673B4EA4B1A(__this, L_0, NULL);
		int32_t L_2;
		L_2 = List_1_get_Count_m2CD9A05CE21127C6DDC7DF2763FB4F9B447F2502_inline(L_1, List_1_get_Count_m2CD9A05CE21127C6DDC7DF2763FB4F9B447F2502_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.List`1<Zenject.ISignalHandler> Zenject.SignalManager::GetList(Zenject.BindingId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* SignalManager_GetList_m94EADAC0FE87471EED207EA37E6CF673B4EA4B1A (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m354999475B3E592D5FD1002C079D1AD9C3EFECB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDDC68F40977530973C19178FA4459CC436B781AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m573903B4538AD4A31417A5960299DE20825F6269_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* V_0 = NULL;
	{
		// if (!_signalHandlers.TryGetValue(signalType, out handlers))
		Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF* L_0 = __this->____signalHandlers_0;
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_1 = ___signalType0;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mDDC68F40977530973C19178FA4459CC436B781AB(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mDDC68F40977530973C19178FA4459CC436B781AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// handlers = new List<ISignalHandler>();
		List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* L_3 = (List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E*)il2cpp_codegen_object_new(List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E_il2cpp_TypeInfo_var);
		List_1__ctor_m573903B4538AD4A31417A5960299DE20825F6269(L_3, List_1__ctor_m573903B4538AD4A31417A5960299DE20825F6269_RuntimeMethod_var);
		V_0 = L_3;
		// _signalHandlers.Add(signalType, handlers);
		Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF* L_4 = __this->____signalHandlers_0;
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_5 = ___signalType0;
		List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* L_6 = V_0;
		Dictionary_2_Add_m354999475B3E592D5FD1002C079D1AD9C3EFECB2(L_4, L_5, L_6, Dictionary_2_Add_m354999475B3E592D5FD1002C079D1AD9C3EFECB2_RuntimeMethod_var);
	}

IL_0023:
	{
		// return handlers;
		List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* L_7 = V_0;
		return L_7;
	}
}
// System.Void Zenject.SignalManager::Register(Zenject.BindingId,Zenject.ISignalHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalManager_Register_mD834FB0AEEB8B476A9D7FAAD6CFC3A4A2A1218F5 (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalType0, RuntimeObject* ___handler1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7CF78E8A7E92E9A542A8F3B92CF7C8DFDF5C284C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetList(signalType).Add(handler);
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_0 = ___signalType0;
		List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* L_1;
		L_1 = SignalManager_GetList_m94EADAC0FE87471EED207EA37E6CF673B4EA4B1A(__this, L_0, NULL);
		RuntimeObject* L_2 = ___handler1;
		List_1_Add_m7CF78E8A7E92E9A542A8F3B92CF7C8DFDF5C284C_inline(L_1, L_2, List_1_Add_m7CF78E8A7E92E9A542A8F3B92CF7C8DFDF5C284C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Zenject.SignalManager::Unregister(Zenject.BindingId,Zenject.ISignalHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalManager_Unregister_m296958FE3504B03D600640086926CE74B49D00F7 (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalType0, RuntimeObject* ___handler1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiscExtensions_RemoveWithConfirm_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_m9AF443999C513DB9BEA32E7EA575E84C1AC7EA98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetList(signalType).RemoveWithConfirm(handler);
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_0 = ___signalType0;
		List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* L_1;
		L_1 = SignalManager_GetList_m94EADAC0FE87471EED207EA37E6CF673B4EA4B1A(__this, L_0, NULL);
		RuntimeObject* L_2 = ___handler1;
		MiscExtensions_RemoveWithConfirm_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_m9AF443999C513DB9BEA32E7EA575E84C1AC7EA98(L_1, L_2, MiscExtensions_RemoveWithConfirm_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_m9AF443999C513DB9BEA32E7EA575E84C1AC7EA98_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Zenject.SignalManager::LateDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalManager_LateDispose_m3905AD66D80033B89EB5351974967D797BFAF5F9 (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m0815DC1E2AAF01134EDA89730FB730382B3CF94A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisList_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mECAEDD9E583FB2731696DBAA7AFB08C9434CA370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_IsEmpty_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mB43F4A9D4E87F470A0E006218A4EF5F5B949AC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CLateDisposeU3Eb__6_0_mCA6BD8065B36C32C872E07C4F723EDFF778C18DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0657AE03216D7B62127980A8B8375B5629121F89);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3* G_B2_0 = NULL;
	ValueCollection_t14750C19FE145094F0DE0C5874257AE3FB8FF1EB* G_B2_1 = NULL;
	Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3* G_B1_0 = NULL;
	ValueCollection_t14750C19FE145094F0DE0C5874257AE3FB8FF1EB* G_B1_1 = NULL;
	{
		// Assert.Warn(_signalHandlers.Values.SelectMany(x => x).IsEmpty(),
		//     "Found signals still registered on SignalManager");
		Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF* L_0 = __this->____signalHandlers_0;
		ValueCollection_t14750C19FE145094F0DE0C5874257AE3FB8FF1EB* L_1;
		L_1 = Dictionary_2_get_Values_m0815DC1E2AAF01134EDA89730FB730382B3CF94A(L_0, Dictionary_2_get_Values_m0815DC1E2AAF01134EDA89730FB730382B3CF94A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_il2cpp_TypeInfo_var);
		Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3* L_2 = ((U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_il2cpp_TypeInfo_var);
		U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80* L_4 = ((U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3* L_5 = (Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3*)il2cpp_codegen_object_new(Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3_il2cpp_TypeInfo_var);
		Func_2__ctor_mA800B8F6F122C0DE535A81462759E565CA28239C(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CLateDisposeU3Eb__6_0_mCA6BD8065B36C32C872E07C4F723EDFF778C18DE_RuntimeMethod_var), NULL);
		Func_2_t52E28ACE319CD498A5B763AD87839A3BB4DA33A3* L_6 = L_5;
		((U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_SelectMany_TisList_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mECAEDD9E583FB2731696DBAA7AFB08C9434CA370(G_B2_1, G_B2_0, Enumerable_SelectMany_TisList_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mECAEDD9E583FB2731696DBAA7AFB08C9434CA370_RuntimeMethod_var);
		bool L_8;
		L_8 = LinqExtensions_IsEmpty_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mB43F4A9D4E87F470A0E006218A4EF5F5B949AC9F(L_7, LinqExtensions_IsEmpty_TisISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_mB43F4A9D4E87F470A0E006218A4EF5F5B949AC9F_RuntimeMethod_var);
		Assert_Warn_mB95A6A8EF16FA1A363776E30107E3EAC3ABFE43D(L_8, _stringLiteral0657AE03216D7B62127980A8B8375B5629121F89, NULL);
		// }
		return;
	}
}
// System.Boolean Zenject.SignalManager::Trigger(Zenject.BindingId,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignalManager_Trigger_m1F3A287B1A2CEED159BDAC504CC46D6B858943BB (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalType0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC21EBDE98869168DD47D7AA98AC2A343C2B08433_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m327F0B2C77FA32715CEDCBB51C02A0EFC981896E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE8D61EDD6D8A43622AD86724EA9C57AAB8077D67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m68FDE279576C3D6719EA87AE5830386871463C60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2CD9A05CE21127C6DDC7DF2763FB4F9B447F2502_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* V_0 = NULL;
	Enumerator_t74D9C18B6BFF65E61E5BC70B22C75656674B5E0E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var handlers = GetList(signalType);
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_0 = ___signalType0;
		List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* L_1;
		L_1 = SignalManager_GetList_m94EADAC0FE87471EED207EA37E6CF673B4EA4B1A(__this, L_0, NULL);
		V_0 = L_1;
		// if (handlers.Count == 0)
		List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* L_2 = V_0;
		int32_t L_3;
		L_3 = List_1_get_Count_m2CD9A05CE21127C6DDC7DF2763FB4F9B447F2502_inline(L_2, List_1_get_Count_m2CD9A05CE21127C6DDC7DF2763FB4F9B447F2502_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// foreach (var handler in handlers)
		List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* L_4 = V_0;
		Enumerator_t74D9C18B6BFF65E61E5BC70B22C75656674B5E0E L_5;
		L_5 = List_1_GetEnumerator_m68FDE279576C3D6719EA87AE5830386871463C60(L_4, List_1_GetEnumerator_m68FDE279576C3D6719EA87AE5830386871463C60_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC21EBDE98869168DD47D7AA98AC2A343C2B08433((&V_1), Enumerator_Dispose_mC21EBDE98869168DD47D7AA98AC2A343C2B08433_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_001b_1:
			{
				// foreach (var handler in handlers)
				RuntimeObject* L_6;
				L_6 = Enumerator_get_Current_mE8D61EDD6D8A43622AD86724EA9C57AAB8077D67_inline((&V_1), Enumerator_get_Current_mE8D61EDD6D8A43622AD86724EA9C57AAB8077D67_RuntimeMethod_var);
				// handler.Execute(args);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___args1;
				InterfaceActionInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Zenject.ISignalHandler::Execute(System.Object[]) */, ISignalHandler_t5065E46D58D46B206D1A0FBCE889F9B9E9ED8703_il2cpp_TypeInfo_var, L_6, L_7);
			}

IL_0028_1:
			{
				// foreach (var handler in handlers)
				bool L_8;
				L_8 = Enumerator_MoveNext_m327F0B2C77FA32715CEDCBB51C02A0EFC981896E((&V_1), Enumerator_MoveNext_m327F0B2C77FA32715CEDCBB51C02A0EFC981896E_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Zenject.SignalManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalManager__ctor_mF767214D14E260A291A3F59C56EAA94FB7CB65C1 (SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0D9B4680D7C4F067B8F56834D97D631912B50627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly Dictionary<BindingId, List<ISignalHandler>> _signalHandlers = new Dictionary<BindingId, List<ISignalHandler>>();
		Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF* L_0 = (Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF*)il2cpp_codegen_object_new(Dictionary_2_tF070B3190B4E6771C5310302AC63AD7C97DB21CF_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0D9B4680D7C4F067B8F56834D97D631912B50627(L_0, Dictionary_2__ctor_m0D9B4680D7C4F067B8F56834D97D631912B50627_RuntimeMethod_var);
		__this->____signalHandlers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signalHandlers_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Zenject.SignalManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2117B6DFAFFD7FE3878071FA56DA798A430F595E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80* L_0 = (U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80*)il2cpp_codegen_object_new(U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB62389AE285B42A7B8795D0F23D3C1D970E11132(L_0, NULL);
		((U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Zenject.SignalManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB62389AE285B42A7B8795D0F23D3C1D970E11132 (U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.ISignalHandler> Zenject.SignalManager/<>c::<LateDispose>b__6_0(System.Collections.Generic.List`1<Zenject.ISignalHandler>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CLateDisposeU3Eb__6_0_mCA6BD8065B36C32C872E07C4F723EDFF778C18DE (U3CU3Ec_t41B03BEE41409CCA31D82799CD4D93FE95048E80* __this, List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* ___x0, const RuntimeMethod* method) 
{
	{
		// Assert.Warn(_signalHandlers.Values.SelectMany(x => x).IsEmpty(),
		List_1_t620B20B4E9AC5BA6978A629DE30D49064813D85E* L_0 = ___x0;
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
// System.Void Zenject.StaticMethodSignalHandler::.ctor(Zenject.BindingId,Zenject.SignalManager,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticMethodSignalHandler__ctor_m1231F820E5B8F7DF9A5DF22B30BF200E4E1D801B (StaticMethodSignalHandler_t0CE0BEF81B871FDCC3DF52D425A2897EF04EF9C7* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___signalId0, SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* ___manager1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___method2, const RuntimeMethod* method) 
{
	{
		// : base(signalId, manager)
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_0 = ___signalId0;
		SignalManager_t902AB48B0C2F6B425D54D9A30C51D13D97699CC4* L_1 = ___manager1;
		SignalHandlerBase__ctor_m3A4127CAEE9960E92D686E1B9CA08347194B79DB(__this, L_0, L_1, NULL);
		// _method = method;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___method2;
		__this->____method_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____method_2), (void*)L_2);
		// }
		return;
	}
}
// System.Void Zenject.StaticMethodSignalHandler::Execute(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticMethodSignalHandler_Execute_mA4FEA58D7786E904DE989A301A288F7CDC612B77 (StaticMethodSignalHandler_t0CE0BEF81B871FDCC3DF52D425A2897EF04EF9C7* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_IsEmpty_TisRuntimeObject_m07643C6CC506300ABC02726DFA8ADB4E922BEF53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.That(args.IsEmpty());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		bool L_1;
		L_1 = LinqExtensions_IsEmpty_TisRuntimeObject_m07643C6CC506300ABC02726DFA8ADB4E922BEF53((RuntimeObject*)L_0, LinqExtensions_IsEmpty_TisRuntimeObject_m07643C6CC506300ABC02726DFA8ADB4E922BEF53_RuntimeMethod_var);
		Assert_That_m83A61B69B6C128204755435348EA0C90439CBCD0(L_1, NULL);
		// _method();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->____method_2;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
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
// System.Void Zenject.InjectAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttribute__ctor_m39B920A8A529B65387DCCFC505AAD9D6BE3FE492 (InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F* __this, const RuntimeMethod* method) 
{
	{
		InjectAttributeBase__ctor_mFC442BE3A58FCC230E5C2329E1E91D8F3D764BAB(__this, NULL);
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
// System.Boolean Zenject.InjectAttributeBase::get_Optional()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InjectAttributeBase_get_Optional_m00795F7AB4BC24B675BBA10B2D0D6943FA092C07 (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3COptionalU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Zenject.InjectAttributeBase::set_Optional(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Optional_m2DB525F0CD84E7CCC5BA04CDA7A6143DFFAFE84E (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		bool L_0 = ___value0;
		__this->___U3COptionalU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Object Zenject.InjectAttributeBase::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InjectAttributeBase_get_Id_m250FF1978AC82CC02B0B187EAD1B988949D2ABD0 (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		RuntimeObject* L_0 = __this->___U3CIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Zenject.InjectAttributeBase::set_Id(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Id_m5E278C6CF85C1F6A194A610A01BCF7733E0BBA34 (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		RuntimeObject* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Zenject.InjectSources Zenject.InjectAttributeBase::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InjectAttributeBase_get_Source_m9C6D120731515051BDBF74825335ADD7C7FE352E (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CSourceU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Zenject.InjectAttributeBase::set_Source(Zenject.InjectSources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Source_mB7936A56F38FBACCCF3C156075274043E1A58341 (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		int32_t L_0 = ___value0;
		__this->___U3CSourceU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Zenject.InjectAttributeBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectAttributeBase__ctor_mFC442BE3A58FCC230E5C2329E1E91D8F3D764BAB (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, const RuntimeMethod* method) 
{
	{
		PreserveAttribute__ctor_m92F1CE428056ACBE26B2A041BF47B76708F30B36(__this, NULL);
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
// System.Void Zenject.InjectLocalAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectLocalAttribute__ctor_m1AC36FEBB73B7FA944CC6C1543C51E8E41D272F8 (InjectLocalAttribute_tBCAD986851767FC02B30F75880232912172D533E* __this, const RuntimeMethod* method) 
{
	{
		// public InjectLocalAttribute()
		InjectAttributeBase__ctor_mFC442BE3A58FCC230E5C2329E1E91D8F3D764BAB(__this, NULL);
		// Source = InjectSources.Local;
		InjectAttributeBase_set_Source_mB7936A56F38FBACCCF3C156075274043E1A58341_inline(__this, 1, NULL);
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
// System.Void Zenject.InjectOptionalAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InjectOptionalAttribute__ctor_m80A53CB9865EDD6C5B95F3440EE935BC9CD28950 (InjectOptionalAttribute_t92089F243CECC33394438DC46F192F9B95A500FA* __this, const RuntimeMethod* method) 
{
	{
		// public InjectOptionalAttribute()
		InjectAttributeBase__ctor_mFC442BE3A58FCC230E5C2329E1E91D8F3D764BAB(__this, NULL);
		// Optional = true;
		InjectAttributeBase_set_Optional_m2DB525F0CD84E7CCC5BA04CDA7A6143DFFAFE84E_inline(__this, (bool)1, NULL);
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
// System.Void Zenject.ZenjectAllowDuringValidationAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectAllowDuringValidationAttribute__ctor_mC099DA7748814CDA7F13D9B3B42A0516B6047D18 (ZenjectAllowDuringValidationAttribute_tBEFAC4FE26C46EAACFB698791563B4475E916956* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Zenject.ActionInstaller::.ctor(System.Action`1<Zenject.DiContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionInstaller__ctor_m41B4067769A9771EAE9C43DD1FFBCFD3997A9CEB (ActionInstaller_t01973575DCFE24B103632DAA2627465AA4DFA3DC* __this, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___installMethod0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Installer_1__ctor_m5DF207CD0637CD313A233538EF8827604B068888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ActionInstaller(Action<DiContainer> installMethod)
		Installer_1__ctor_m5DF207CD0637CD313A233538EF8827604B068888(__this, Installer_1__ctor_m5DF207CD0637CD313A233538EF8827604B068888_RuntimeMethod_var);
		// _installMethod = installMethod;
		Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* L_0 = ___installMethod0;
		__this->____installMethod_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____installMethod_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Zenject.ActionInstaller::InstallBindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionInstaller_InstallBindings_mE8DBE5AF37E1604567E01F7A9068C3393D115DA1 (ActionInstaller_t01973575DCFE24B103632DAA2627465AA4DFA3DC* __this, const RuntimeMethod* method) 
{
	{
		// _installMethod(Container);
		Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* L_0 = __this->____installMethod_1;
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_1;
		L_1 = InstallerBase_get_Container_m6B8334AE16BE80DB951E34255450A92F8A7D5DB2_inline(__this, NULL);
		Action_1_Invoke_mB96BF190727AD06D27AF09633E7DE0EBE3A0BC03_inline(L_0, L_1, NULL);
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
// System.Void Zenject.ExecutionOrderInstaller::.ctor(System.Collections.Generic.List`1<System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionOrderInstaller__ctor_m743DBF57A77EE3ACC16F483F85FD2CFEF8B4D1BB (ExecutionOrderInstaller_tE8943D79999952936239B341E2702BAC080E68AC* __this, List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___typeOrder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Installer_2__ctor_m78A7DEB2F8E12CE27C8E44BFD7EFE1A7A4F9D797_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ExecutionOrderInstaller(List<Type> typeOrder)
		Installer_2__ctor_m78A7DEB2F8E12CE27C8E44BFD7EFE1A7A4F9D797(__this, Installer_2__ctor_m78A7DEB2F8E12CE27C8E44BFD7EFE1A7A4F9D797_RuntimeMethod_var);
		// _typeOrder = typeOrder;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = ___typeOrder0;
		__this->____typeOrder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____typeOrder_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Zenject.ExecutionOrderInstaller::InstallBindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionOrderInstaller_InstallBindings_m56E1E27CA076F5FCD3CB2290AFEA2E2C7BADE9C5 (ExecutionOrderInstaller_tE8943D79999952936239B341E2702BAC080E68AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	{
		// int order = -1 * _typeOrder.Count;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = __this->____typeOrder_1;
		int32_t L_1;
		L_1 = List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_inline(L_0, List_1_get_Count_mEAAAAC29EC4D30D9A753C67992EED0F55407B274_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_multiply((-1), L_1));
		// foreach (var type in _typeOrder)
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_2 = __this->____typeOrder_1;
		Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 L_3;
		L_3 = List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59(L_2, List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1((&V_1), Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0035_1;
			}

IL_001c_1:
			{
				// foreach (var type in _typeOrder)
				Type_t* L_4;
				L_4 = Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_inline((&V_1), Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_RuntimeMethod_var);
				V_2 = L_4;
				// Container.BindExecutionOrder(type, order);
				DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_5;
				L_5 = InstallerBase_get_Container_m6B8334AE16BE80DB951E34255450A92F8A7D5DB2_inline(__this, NULL);
				Type_t* L_6 = V_2;
				int32_t L_7 = V_0;
				DiContainer_BindExecutionOrder_mFE62A962AF4E902012ADC51A04B2F286665AD8D7(L_5, L_6, L_7, NULL);
				// order++;
				int32_t L_8 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
			}

IL_0035_1:
			{
				// foreach (var type in _typeOrder)
				bool L_9;
				L_9 = Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877((&V_1), Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
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
// System.Void Zenject.PoolCleanupChecker::.ctor(System.Collections.Generic.List`1<Zenject.IMemoryPool>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolCleanupChecker__ctor_mD93EC4695C4B00C66A87EA62911A301BF8E2A7D8 (PoolCleanupChecker_t8C3ADDFD4B19D2E886E58B7F3F279E4B6E7AFD5F* __this, List_1_t1187A154B962750DCED10BBEBA9DB0C50B4AA8B0* ___poolFactories0, const RuntimeMethod* method) 
{
	{
		// public PoolCleanupChecker(
		//     [Inject(Optional = true, Source = InjectSources.Local)]
		//     List<IMemoryPool> poolFactories)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _poolFactories = poolFactories;
		List_1_t1187A154B962750DCED10BBEBA9DB0C50B4AA8B0* L_0 = ___poolFactories0;
		__this->____poolFactories_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poolFactories_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Zenject.PoolCleanupChecker::LateDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolCleanupChecker_LateDispose_mE3750685A7747477B931DF83652265363B3FC93B (PoolCleanupChecker_t8C3ADDFD4B19D2E886E58B7F3F279E4B6E7AFD5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4A369A78161D0DAEE3181B2FA9D766BEEEF59626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m037245F288C0405F0DF1E76CD9D61A628570BF54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m555CA28D91C56E4F343450CDD7EF36D3ADDC219E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemoryPool_t0FEAD58136C81F0EF2194A5C02CBE6E5222FAD76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m965161ABEF6554ED54E6D8132046044D332F6F6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A43CDA85B148CFB0D1B1CAB2C18DA697D1E16A6);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3A20911FBF765856D9BD863859CE99FC88309693 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// foreach (var pool in _poolFactories)
		List_1_t1187A154B962750DCED10BBEBA9DB0C50B4AA8B0* L_0 = __this->____poolFactories_0;
		Enumerator_t3A20911FBF765856D9BD863859CE99FC88309693 L_1;
		L_1 = List_1_GetEnumerator_m965161ABEF6554ED54E6D8132046044D332F6F6A(L_0, List_1_GetEnumerator_m965161ABEF6554ED54E6D8132046044D332F6F6A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4A369A78161D0DAEE3181B2FA9D766BEEEF59626((&V_0), Enumerator_Dispose_m4A369A78161D0DAEE3181B2FA9D766BEEEF59626_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004e_1;
			}

IL_000e_1:
			{
				// foreach (var pool in _poolFactories)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m555CA28D91C56E4F343450CDD7EF36D3ADDC219E_inline((&V_0), Enumerator_get_Current_m555CA28D91C56E4F343450CDD7EF36D3ADDC219E_RuntimeMethod_var);
				V_1 = L_2;
				// Assert.IsEqual(pool.NumActive, 0,
				//     "Found active objects in pool '{0}' during dispose.  Did you forget to despawn an object of type '{1}'?".Fmt(pool.GetType(), pool.ItemType));
				RuntimeObject* L_3 = V_1;
				int32_t L_4;
				L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Zenject.IMemoryPool::get_NumActive() */, IMemoryPool_t0FEAD58136C81F0EF2194A5C02CBE6E5222FAD76_il2cpp_TypeInfo_var, L_3);
				int32_t L_5 = L_4;
				RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
				int32_t L_7 = 0;
				RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
				RuntimeObject* L_11 = V_1;
				Type_t* L_12;
				L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_11, NULL);
				ArrayElementTypeCheck (L_10, L_12);
				(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_10;
				RuntimeObject* L_14 = V_1;
				Type_t* L_15;
				L_15 = InterfaceFuncInvoker0< Type_t* >::Invoke(3 /* System.Type Zenject.IMemoryPool::get_ItemType() */, IMemoryPool_t0FEAD58136C81F0EF2194A5C02CBE6E5222FAD76_il2cpp_TypeInfo_var, L_14);
				ArrayElementTypeCheck (L_13, L_15);
				(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_15);
				String_t* L_16;
				L_16 = MiscExtensions_Fmt_m2471F73DCB0E16776F46371A3A9C10FD72DAFE2D(_stringLiteral2A43CDA85B148CFB0D1B1CAB2C18DA697D1E16A6, L_13, NULL);
				Assert_IsEqual_m3A17E54DF7A2463A165909D275AF0479B8FC09B1(L_6, L_8, L_16, NULL);
			}

IL_004e_1:
			{
				// foreach (var pool in _poolFactories)
				bool L_17;
				L_17 = Enumerator_MoveNext_m037245F288C0405F0DF1E76CD9D61A628570BF54((&V_0), Enumerator_MoveNext_m037245F288C0405F0DF1E76CD9D61A628570BF54_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
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
// System.Void Zenject.ProfileBlock::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileBlock__ctor_m827492D3F291563FC692250CF815D93B1EB0D870 (ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15* __this, String_t* ___sampleName0, bool ___rootBlock1, const RuntimeMethod* method) 
{
	{
		// ProfileBlock(string sampleName, bool rootBlock)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Zenject.ProfileBlock::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileBlock__ctor_m01BF0F35EE6B94EA5C86EC38A2E3369D8AAD916F (ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15* __this, String_t* ___sampleName0, const RuntimeMethod* method) 
{
	{
		// : this(sampleName, false)
		String_t* L_0 = ___sampleName0;
		ProfileBlock__ctor_m827492D3F291563FC692250CF815D93B1EB0D870(__this, L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Text.RegularExpressions.Regex Zenject.ProfileBlock::get_ProfilePattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ProfileBlock_get_ProfilePattern_m5A90BA98F67211F4749DF92A378FE19B680809EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = ((ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15_StaticFields*)il2cpp_codegen_static_fields_for(ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15_il2cpp_TypeInfo_var))->___U3CProfilePatternU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Zenject.ProfileBlock::set_ProfilePattern(System.Text.RegularExpressions.Regex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileBlock_set_ProfilePattern_m23A64127A0AD21AA873491A1DBE7CE7DF4135766 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = ___value0;
		((ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15_StaticFields*)il2cpp_codegen_static_fields_for(ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15_il2cpp_TypeInfo_var))->___U3CProfilePatternU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15_StaticFields*)il2cpp_codegen_static_fields_for(ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15_il2cpp_TypeInfo_var))->___U3CProfilePatternU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Zenject.ProfileBlock Zenject.ProfileBlock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15* ProfileBlock_Start_m34318415E461863BFA2A20B1F8BC676188E2735E (const RuntimeMethod* method) 
{
	{
		// return null;
		return (ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15*)NULL;
	}
}
// Zenject.ProfileBlock Zenject.ProfileBlock::Start(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15* ProfileBlock_Start_mD57CF98A1339472A98E74FB6CE2821A24C0FD6B6 (String_t* ___sampleNameFormat0, RuntimeObject* ___obj11, RuntimeObject* ___obj22, const RuntimeMethod* method) 
{
	{
		// return null;
		return (ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15*)NULL;
	}
}
// Zenject.ProfileBlock Zenject.ProfileBlock::Start(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15* ProfileBlock_Start_mE5F2B7C2FD2AF9D97A653736544B944E5BC1DA73 (String_t* ___sampleNameFormat0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	{
		// return null;
		return (ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15*)NULL;
	}
}
// Zenject.ProfileBlock Zenject.ProfileBlock::Start(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15* ProfileBlock_Start_mD200F5C9050A1BED973BDF36B0633E16E9940819 (String_t* ___sampleName0, const RuntimeMethod* method) 
{
	{
		// return null;
		return (ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15*)NULL;
	}
}
// System.Void Zenject.ProfileBlock::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileBlock_Dispose_m2C90A0C2FC59F44D4352DDE37A957EEF00E05D4A (ProfileBlock_tE8B5E8107E8B7EEA0E24350B0AE20705F15ACB15* __this, const RuntimeMethod* method) 
{
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
// Zenject.ZenjectTypeInfo Zenject.TypeAnalyzer::GetInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* TypeAnalyzer_GetInfo_m0F4C93ADB3F1AFFB2B129E04B5594C955F3779D4 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB8BD2766957B69A0CF92E9F0B5AB1B636782657A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mCDDBCDF80DD1D831234154B9ACE5B5754C33C91A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A8C6825293E553A8AFF2DCC22FC7B931D434290);
		s_Il2CppMethodInitialized = true;
	}
	ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* V_0 = NULL;
	{
		// Assert.That(!type.IsAbstract(),
		//     "Tried to analyze abstract type '{0}'.  This is not currently allowed.", type);
		Type_t* L_0 = ___type0;
		bool L_1;
		L_1 = TypeExtensions_IsAbstract_m4A8BA2D60D6CB79A6A5D24946363513383C99D16(L_0, NULL);
		Type_t* L_2 = ___type0;
		Assert_That_m3E74483F729A9A222574B7C43EAAA0CDA85199A7((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), _stringLiteral7A8C6825293E553A8AFF2DCC22FC7B931D434290, L_2, NULL);
		// if (!_typeInfo.TryGetValue(type, out info))
		il2cpp_codegen_runtime_class_init_inline(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243* L_3 = ((TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_StaticFields*)il2cpp_codegen_static_fields_for(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var))->____typeInfo_0;
		Type_t* L_4 = ___type0;
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mCDDBCDF80DD1D831234154B9ACE5B5754C33C91A(L_3, L_4, (&V_0), Dictionary_2_TryGetValue_mCDDBCDF80DD1D831234154B9ACE5B5754C33C91A_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		// info = CreateTypeInfo(type);
		Type_t* L_6 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* L_7;
		L_7 = TypeAnalyzer_CreateTypeInfo_m63F38B9248EFB140C5B3CA46EC0041F7EBBE2716(L_6, NULL);
		V_0 = L_7;
		// _typeInfo.Add(type, info);
		Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243* L_8 = ((TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_StaticFields*)il2cpp_codegen_static_fields_for(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var))->____typeInfo_0;
		Type_t* L_9 = ___type0;
		ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* L_10 = V_0;
		Dictionary_2_Add_mB8BD2766957B69A0CF92E9F0B5AB1B636782657A(L_8, L_9, L_10, Dictionary_2_Add_mB8BD2766957B69A0CF92E9F0B5AB1B636782657A_RuntimeMethod_var);
	}

IL_0036:
	{
		// return info;
		ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* L_11 = V_0;
		return L_11;
	}
}
// Zenject.ZenjectTypeInfo Zenject.TypeAnalyzer::CreateTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* TypeAnalyzer_CreateTypeInfo_m63F38B9248EFB140C5B3CA46EC0041F7EBBE2716 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_mF953DE6BF23A9B0EDE47B7050D84481EAF9352B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_0 = NULL;
	{
		// var constructor = GetInjectConstructor(type);
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_1;
		L_1 = TypeAnalyzer_GetInjectConstructor_m0629549C5A38887312D425D791EE36EC54CBA605(L_0, NULL);
		V_0 = L_1;
		// return new ZenjectTypeInfo(
		//     type,
		//     GetPostInjectMethods(type),
		//     constructor,
		//     GetFieldInjectables(type).ToList(),
		//     GetPropertyInjectables(type).ToList(),
		//     GetConstructorInjectables(type, constructor).ToList());
		Type_t* L_2 = ___type0;
		Type_t* L_3 = ___type0;
		List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* L_4;
		L_4 = TypeAnalyzer_GetPostInjectMethods_m4DCC955D42A8152E482EA1EB3C7419ADCCA3086B(L_3, NULL);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_5 = V_0;
		Type_t* L_6 = ___type0;
		RuntimeObject* L_7;
		L_7 = TypeAnalyzer_GetFieldInjectables_mD9DB192EBF4038694215CAC9589DE0D9CC203167(L_6, NULL);
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_8;
		L_8 = Enumerable_ToList_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_mF953DE6BF23A9B0EDE47B7050D84481EAF9352B8(L_7, Enumerable_ToList_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_mF953DE6BF23A9B0EDE47B7050D84481EAF9352B8_RuntimeMethod_var);
		Type_t* L_9 = ___type0;
		RuntimeObject* L_10;
		L_10 = TypeAnalyzer_GetPropertyInjectables_mCAB3A78B4B7AB538BF9763664B3433E50BB6600C(L_9, NULL);
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_11;
		L_11 = Enumerable_ToList_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_mF953DE6BF23A9B0EDE47B7050D84481EAF9352B8(L_10, Enumerable_ToList_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_mF953DE6BF23A9B0EDE47B7050D84481EAF9352B8_RuntimeMethod_var);
		Type_t* L_12 = ___type0;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_13 = V_0;
		RuntimeObject* L_14;
		L_14 = TypeAnalyzer_GetConstructorInjectables_m15478351A2B4D0C57F38B0BD32B08C206E14A493(L_12, L_13, NULL);
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_15;
		L_15 = Enumerable_ToList_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_mF953DE6BF23A9B0EDE47B7050D84481EAF9352B8(L_14, Enumerable_ToList_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_mF953DE6BF23A9B0EDE47B7050D84481EAF9352B8_RuntimeMethod_var);
		ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* L_16 = (ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D*)il2cpp_codegen_object_new(ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D_il2cpp_TypeInfo_var);
		ZenjectTypeInfo__ctor_m6F91A916326D11E76E1DAC48818C197489E50F91(L_16, L_2, L_4, L_5, L_8, L_11, L_15, NULL);
		return L_16;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.TypeAnalyzer::GetConstructorInjectables(System.Type,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeAnalyzer_GetConstructorInjectables_m15478351A2B4D0C57F38B0BD32B08C206E14A493 (Type_t* ___parentType0, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___constructorInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m18A05866B0AA0E91416AD29FB59DF2993FC19DF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m87F724693AFE67D95C71A496AF4B7410F099A3D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC62621E47817065D1808718363314932F0DD09EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CGetConstructorInjectablesU3Eb__0_mC005DED5DAC9B3E2AF95156592100AAEAA3EDFB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C* L_0 = (U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m07F79109E8207A6A2FF614F55ABBEDD6CCCFEC8C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C* L_1 = V_0;
		Type_t* L_2 = ___parentType0;
		L_1->___parentType_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___parentType_0), (void*)L_2);
		// if (constructorInfo == null)
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_3 = ___constructorInfo1;
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ConstructorInfo_op_Equality_m6DD673A9263EE646773396F9D8DEE46FA48FFBF2(L_3, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return Enumerable.Empty<InjectableInfo>();
		RuntimeObject* L_5;
		L_5 = Enumerable_Empty_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m18A05866B0AA0E91416AD29FB59DF2993FC19DF0_inline(Enumerable_Empty_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m18A05866B0AA0E91416AD29FB59DF2993FC19DF0_RuntimeMethod_var);
		return L_5;
	}

IL_001c:
	{
		// return constructorInfo.GetParameters().Select(
		//     paramInfo => CreateInjectableInfoForParam(parentType, paramInfo));
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_6 = ___constructorInfo1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_7;
		L_7 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
		U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C* L_8 = V_0;
		Func_2_tC62621E47817065D1808718363314932F0DD09EA* L_9 = (Func_2_tC62621E47817065D1808718363314932F0DD09EA*)il2cpp_codegen_object_new(Func_2_tC62621E47817065D1808718363314932F0DD09EA_il2cpp_TypeInfo_var);
		Func_2__ctor_mE158FE1A173FB1579F3E9976B022979CC5527355(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CGetConstructorInjectablesU3Eb__0_mC005DED5DAC9B3E2AF95156592100AAEAA3EDFB2_RuntimeMethod_var), NULL);
		RuntimeObject* L_10;
		L_10 = Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m87F724693AFE67D95C71A496AF4B7410F099A3D3((RuntimeObject*)L_7, L_9, Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m87F724693AFE67D95C71A496AF4B7410F099A3D3_RuntimeMethod_var);
		return L_10;
	}
}
// Zenject.InjectableInfo Zenject.TypeAnalyzer::CreateInjectableInfoForParam(System.Type,System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* TypeAnalyzer_CreateInjectableInfoForParam_m1D369B0176E5282D2E424285F283791082045F16 (Type_t* ___parentType0, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___paramInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SingleOrDefault_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m1B029F6AA7575FF1F37EB07A2650F0CCA02984DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mF643C8F89091667446619CBD496EDEC554EF6B76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m808F9FADF8A4D1DEAE16041E2F3301645E1F430E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_AllAttributes_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m40555E9795982801E99FDF783EA317562051F30A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78EA9E436F801D766A6FA7A3B2073268348DB4CD);
		s_Il2CppMethodInitialized = true;
	}
	InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	RuntimeObject* G_B4_0 = NULL;
	Type_t* G_B4_1 = NULL;
	Type_t* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	RuntimeObject* G_B4_4 = NULL;
	bool G_B4_5 = false;
	RuntimeObject* G_B3_0 = NULL;
	Type_t* G_B3_1 = NULL;
	Type_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	RuntimeObject* G_B3_4 = NULL;
	bool G_B3_5 = false;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Type_t* G_B5_2 = NULL;
	Type_t* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	RuntimeObject* G_B5_5 = NULL;
	bool G_B5_6 = false;
	{
		// var injectAttributes = paramInfo.AllAttributes<InjectAttributeBase>().ToList();
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_0 = ___paramInfo1;
		RuntimeObject* L_1;
		L_1 = TypeExtensions_AllAttributes_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m40555E9795982801E99FDF783EA317562051F30A(L_0, TypeExtensions_AllAttributes_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m40555E9795982801E99FDF783EA317562051F30A_RuntimeMethod_var);
		List_1_tCBE4B2163152CB0A4722667AA65591B659F4B906* L_2;
		L_2 = Enumerable_ToList_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mF643C8F89091667446619CBD496EDEC554EF6B76(L_1, Enumerable_ToList_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mF643C8F89091667446619CBD496EDEC554EF6B76_RuntimeMethod_var);
		// Assert.That(injectAttributes.Count <= 1,
		//     "Found multiple 'Inject' attributes on type parameter '{0}' of type '{1}'.  Parameter should only have one", paramInfo.Name, parentType);
		List_1_tCBE4B2163152CB0A4722667AA65591B659F4B906* L_3 = L_2;
		int32_t L_4;
		L_4 = List_1_get_Count_m808F9FADF8A4D1DEAE16041E2F3301645E1F430E_inline(L_3, List_1_get_Count_m808F9FADF8A4D1DEAE16041E2F3301645E1F430E_RuntimeMethod_var);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_5 = ___paramInfo1;
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_5);
		Type_t* L_7 = ___parentType0;
		Assert_That_m01A6B7E62D93E7352AAB67B40C0522C03B175D52((bool)((((int32_t)((((int32_t)L_4) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral78EA9E436F801D766A6FA7A3B2073268348DB4CD, L_6, L_7, NULL);
		// var injectAttr = injectAttributes.SingleOrDefault();
		InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* L_8;
		L_8 = Enumerable_SingleOrDefault_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m1B029F6AA7575FF1F37EB07A2650F0CCA02984DC(L_3, Enumerable_SingleOrDefault_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m1B029F6AA7575FF1F37EB07A2650F0CCA02984DC_RuntimeMethod_var);
		V_0 = L_8;
		// object identifier = null;
		V_1 = NULL;
		// bool isOptional = false;
		V_2 = (bool)0;
		// InjectSources sourceType = InjectSources.Any;
		V_3 = 0;
		// if (injectAttr != null)
		InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* L_9 = V_0;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// identifier = injectAttr.Id;
		InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* L_10 = V_0;
		RuntimeObject* L_11;
		L_11 = InjectAttributeBase_get_Id_m250FF1978AC82CC02B0B187EAD1B988949D2ABD0_inline(L_10, NULL);
		V_1 = L_11;
		// isOptional = injectAttr.Optional;
		InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* L_12 = V_0;
		bool L_13;
		L_13 = InjectAttributeBase_get_Optional_m00795F7AB4BC24B675BBA10B2D0D6943FA092C07_inline(L_12, NULL);
		V_2 = L_13;
		// sourceType = injectAttr.Source;
		InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* L_14 = V_0;
		int32_t L_15;
		L_15 = InjectAttributeBase_get_Source_m9C6D120731515051BDBF74825335ADD7C7FE352E_inline(L_14, NULL);
		V_3 = L_15;
	}

IL_004c:
	{
		// bool isOptionalWithADefaultValue = (paramInfo.Attributes & ParameterAttributes.HasDefault) == ParameterAttributes.HasDefault;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_16 = ___paramInfo1;
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, L_16);
		V_4 = (bool)((((int32_t)((int32_t)((int32_t)L_17&((int32_t)4096)))) == ((int32_t)((int32_t)4096)))? 1 : 0);
		// return new InjectableInfo(
		//     isOptionalWithADefaultValue || isOptional,
		//     identifier,
		//     paramInfo.Name,
		//     paramInfo.ParameterType,
		//     parentType,
		//     null,
		//     isOptionalWithADefaultValue ? paramInfo.DefaultValue : null,
		//     sourceType);
		bool L_18 = V_4;
		bool L_19 = V_2;
		RuntimeObject* L_20 = V_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_21 = ___paramInfo1;
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_21);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_23 = ___paramInfo1;
		Type_t* L_24;
		L_24 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_23);
		Type_t* L_25 = ___parentType0;
		bool L_26 = V_4;
		G_B3_0 = NULL;
		G_B3_1 = L_25;
		G_B3_2 = L_24;
		G_B3_3 = L_22;
		G_B3_4 = L_20;
		G_B3_5 = ((bool)(((int32_t)((int32_t)L_18|(int32_t)L_19))));
		if (L_26)
		{
			G_B4_0 = NULL;
			G_B4_1 = L_25;
			G_B4_2 = L_24;
			G_B4_3 = L_22;
			G_B4_4 = L_20;
			G_B4_5 = ((bool)(((int32_t)((int32_t)L_18|(int32_t)L_19))));
			goto IL_007b;
		}
	}
	{
		G_B5_0 = NULL;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		G_B5_4 = G_B3_3;
		G_B5_5 = G_B3_4;
		G_B5_6 = G_B3_5;
		goto IL_0081;
	}

IL_007b:
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_27 = ___paramInfo1;
		RuntimeObject* L_28;
		L_28 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Object System.Reflection.ParameterInfo::get_DefaultValue() */, L_27);
		G_B5_0 = L_28;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
		G_B5_5 = G_B4_4;
		G_B5_6 = G_B4_5;
	}

IL_0081:
	{
		int32_t L_29 = V_3;
		InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* L_30 = (InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201*)il2cpp_codegen_object_new(InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_il2cpp_TypeInfo_var);
		InjectableInfo__ctor_mFDA78F7AF2EF52D23175DF56E5CCE534C226FE19(L_30, G_B5_6, G_B5_5, G_B5_4, G_B5_3, G_B5_2, (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C*)G_B5_1, G_B5_0, L_29, NULL);
		return L_30;
	}
}
// System.Collections.Generic.List`1<Zenject.PostInjectableInfo> Zenject.TypeAnalyzer::GetPostInjectMethods(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* TypeAnalyzer_GetPostInjectMethods_m4DCC955D42A8152E482EA1EB3C7419ADCCA3086B (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisType_t_m35B23F074726B58C605EC26DB7F2AE1C3A55713A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisMethodInfo_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m407B413A9800F0D83D153CD88EB4EA420FEA0C2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisType_t_m78DD34608B5C265A97ACBF43A5B80F3F518BFC42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m87F724693AFE67D95C71A496AF4B7410F099A3D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_m227D11234EAE6AAAC642BF62AD763C03A3FBC430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_mF953DE6BF23A9B0EDE47B7050D84481EAF9352B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisMethodInfo_t_m1C029DAC004C7D920CDAF7298894ABB7E768437E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisMethodInfo_t_mAA1D9863BA8B1900B6E5E8CCD11997EBA23EBCDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t71765C126395C159B2E7E865B36871B1059E8C18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC62621E47817065D1808718363314932F0DD09EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t69908BE263733D5C3989BAC671BE4067F7FE66E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF929C29F3B2D7390D81A7BC13E40D6F21A39376E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m87229AD704AC65FA52F40FFB65CB43FA725ADA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiscExtensions_Yield_TisType_t_m5DA0AF261A51C7BFCBDECB1F9A9E84CA6F0F21C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_AllAttributes_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_m665A57A66413D579B0AC8F4BB59852CF9101FF35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetPostInjectMethodsU3Eb__6_0_mC1CD417EED78558DFB83855958218831E89EFE1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetPostInjectMethodsU3Eb__1_m1250FDDFF1676C1C3871DFF1A1FB8467C66A552C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetPostInjectMethodsU3Eb__2_m824D380C1244BBF658059F8AB2C52BC008BDDC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A3297D1F0A61EE9E7172E216D036D99552F3FF4);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* V_0 = NULL;
	List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_4 = NULL;
	InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F* V_5 = NULL;
	Func_2_tC62621E47817065D1808718363314932F0DD09EA* V_6 = NULL;
	Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	int32_t G_B8_0 = 0;
	Func_2_tC62621E47817065D1808718363314932F0DD09EA* G_B10_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* G_B10_1 = NULL;
	MethodInfo_t* G_B10_2 = NULL;
	List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* G_B10_3 = NULL;
	Func_2_tC62621E47817065D1808718363314932F0DD09EA* G_B9_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* G_B9_1 = NULL;
	MethodInfo_t* G_B9_2 = NULL;
	List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* G_B9_3 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* L_0 = (U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_mDD3AA6C2635E942EDE13E2242F1A4A41860BB00D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* L_1 = V_0;
		Type_t* L_2 = ___type0;
		L_1->___type_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___type_1), (void*)L_2);
		// var methods = type.GetAllInstanceMethods()
		//     .Where(x => x.GetCustomAttributes(typeof(InjectAttribute), false).Any()).ToList();
		U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* L_3 = V_0;
		Type_t* L_4 = L_3->___type_1;
		RuntimeObject* L_5;
		L_5 = TypeExtensions_GetAllInstanceMethods_m9F7415A06FEEFBEF03835C7CF430665BE453E198(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
		Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* L_6 = ((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
		U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* L_8 = ((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* L_9 = (Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*)il2cpp_codegen_object_new(Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var);
		Func_2__ctor_m85EFD3541E8A8498FD05A6169ED11E00D408A2F0(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CGetPostInjectMethodsU3Eb__6_0_mC1CD417EED78558DFB83855958218831E89EFE1E_RuntimeMethod_var), NULL);
		Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* L_10 = L_9;
		((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_10);
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
	}

IL_0037:
	{
		RuntimeObject* L_11;
		L_11 = Enumerable_Where_TisMethodInfo_t_mAA1D9863BA8B1900B6E5E8CCD11997EBA23EBCDD(G_B2_1, G_B2_0, Enumerable_Where_TisMethodInfo_t_mAA1D9863BA8B1900B6E5E8CCD11997EBA23EBCDD_RuntimeMethod_var);
		List_1_tAA22D565EFA8D6D98AB10DE37D44553FDE22DBFB* L_12;
		L_12 = Enumerable_ToList_TisMethodInfo_t_m1C029DAC004C7D920CDAF7298894ABB7E768437E(L_11, Enumerable_ToList_TisMethodInfo_t_m1C029DAC004C7D920CDAF7298894ABB7E768437E_RuntimeMethod_var);
		// var heirarchyList = type.Yield().Concat(type.GetParentTypes()).Reverse().ToList();
		U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* L_13 = V_0;
		U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* L_14 = V_0;
		Type_t* L_15 = L_14->___type_1;
		RuntimeObject* L_16;
		L_16 = MiscExtensions_Yield_TisType_t_m5DA0AF261A51C7BFCBDECB1F9A9E84CA6F0F21C7(L_15, MiscExtensions_Yield_TisType_t_m5DA0AF261A51C7BFCBDECB1F9A9E84CA6F0F21C7_RuntimeMethod_var);
		U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* L_17 = V_0;
		Type_t* L_18 = L_17->___type_1;
		RuntimeObject* L_19;
		L_19 = TypeExtensions_GetParentTypes_mB3E14E2EE5D12A687AE1AB5D1E9DF77DBC39BE4E(L_18, NULL);
		RuntimeObject* L_20;
		L_20 = Enumerable_Concat_TisType_t_m35B23F074726B58C605EC26DB7F2AE1C3A55713A(L_16, L_19, Enumerable_Concat_TisType_t_m35B23F074726B58C605EC26DB7F2AE1C3A55713A_RuntimeMethod_var);
		RuntimeObject* L_21;
		L_21 = Enumerable_Reverse_TisType_t_m78DD34608B5C265A97ACBF43A5B80F3F518BFC42(L_20, Enumerable_Reverse_TisType_t_m78DD34608B5C265A97ACBF43A5B80F3F518BFC42_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_22;
		L_22 = Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E(L_21, Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var);
		L_13->___heirarchyList_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___heirarchyList_0), (void*)L_22);
		// var values = methods.OrderBy(x => heirarchyList.IndexOf(x.DeclaringType));
		U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* L_23 = V_0;
		Func_2_t71765C126395C159B2E7E865B36871B1059E8C18* L_24 = (Func_2_t71765C126395C159B2E7E865B36871B1059E8C18*)il2cpp_codegen_object_new(Func_2_t71765C126395C159B2E7E865B36871B1059E8C18_il2cpp_TypeInfo_var);
		Func_2__ctor_m43ED00517D31C8316E75539FD95323C8322A4FBC(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CGetPostInjectMethodsU3Eb__1_m1250FDDFF1676C1C3871DFF1A1FB8467C66A552C_RuntimeMethod_var), NULL);
		RuntimeObject* L_25;
		L_25 = Enumerable_OrderBy_TisMethodInfo_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m407B413A9800F0D83D153CD88EB4EA420FEA0C2B(L_12, L_24, Enumerable_OrderBy_TisMethodInfo_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m407B413A9800F0D83D153CD88EB4EA420FEA0C2B_RuntimeMethod_var);
		// var postInjectInfos = new List<PostInjectableInfo>();
		List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* L_26 = (List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC*)il2cpp_codegen_object_new(List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC_il2cpp_TypeInfo_var);
		List_1__ctor_m87229AD704AC65FA52F40FFB65CB43FA725ADA30(L_26, List_1__ctor_m87229AD704AC65FA52F40FFB65CB43FA725ADA30_RuntimeMethod_var);
		V_1 = L_26;
		// foreach (var methodInfo in values)
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator() */, IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C_il2cpp_TypeInfo_var, L_25);
		V_2 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0116:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_2;
					if (!L_28)
					{
						goto IL_011f;
					}
				}
				{
					RuntimeObject* L_29 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_011f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0109_1;
			}

IL_008b_1:
			{
				// foreach (var methodInfo in values)
				RuntimeObject* L_30 = V_2;
				MethodInfo_t* L_31;
				L_31 = InterfaceFuncInvoker0< MethodInfo_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current() */, IEnumerator_1_t69908BE263733D5C3989BAC671BE4067F7FE66E6_il2cpp_TypeInfo_var, L_30);
				V_3 = L_31;
				// var paramsInfo = methodInfo.GetParameters();
				MethodInfo_t* L_32 = V_3;
				ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_33;
				L_33 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_32);
				V_4 = L_33;
				// var injectAttr = methodInfo.AllAttributes<InjectAttribute>().Single();
				MethodInfo_t* L_34 = V_3;
				RuntimeObject* L_35;
				L_35 = TypeExtensions_AllAttributes_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_m665A57A66413D579B0AC8F4BB59852CF9101FF35(L_34, TypeExtensions_AllAttributes_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_m665A57A66413D579B0AC8F4BB59852CF9101FF35_RuntimeMethod_var);
				InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F* L_36;
				L_36 = Enumerable_Single_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_m227D11234EAE6AAAC642BF62AD763C03A3FBC430(L_35, Enumerable_Single_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_m227D11234EAE6AAAC642BF62AD763C03A3FBC430_RuntimeMethod_var);
				V_5 = L_36;
				// Assert.That(!injectAttr.Optional && injectAttr.Id == null && injectAttr.Source == InjectSources.Any,
				//     "Parameters of InjectAttribute do not apply to constructors and methods");
				InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F* L_37 = V_5;
				bool L_38;
				L_38 = InjectAttributeBase_get_Optional_m00795F7AB4BC24B675BBA10B2D0D6943FA092C07_inline(L_37, NULL);
				if (L_38)
				{
					goto IL_00c5_1;
				}
			}
			{
				InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F* L_39 = V_5;
				RuntimeObject* L_40;
				L_40 = InjectAttributeBase_get_Id_m250FF1978AC82CC02B0B187EAD1B988949D2ABD0_inline(L_39, NULL);
				if (L_40)
				{
					goto IL_00c5_1;
				}
			}
			{
				InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F* L_41 = V_5;
				int32_t L_42;
				L_42 = InjectAttributeBase_get_Source_m9C6D120731515051BDBF74825335ADD7C7FE352E_inline(L_41, NULL);
				G_B8_0 = ((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
				goto IL_00c6_1;
			}

IL_00c5_1:
			{
				G_B8_0 = 0;
			}

IL_00c6_1:
			{
				Assert_That_m0CA07617E2F574096CEB75250563BA2CB6349FB1((bool)G_B8_0, _stringLiteral7A3297D1F0A61EE9E7172E216D036D99552F3FF4, NULL);
				// postInjectInfos.Add(
				//     new PostInjectableInfo(
				//         methodInfo,
				//         paramsInfo.Select(paramInfo =>
				//             CreateInjectableInfoForParam(type, paramInfo)).ToList()));
				List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* L_43 = V_1;
				MethodInfo_t* L_44 = V_3;
				ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_45 = V_4;
				U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* L_46 = V_0;
				Func_2_tC62621E47817065D1808718363314932F0DD09EA* L_47 = L_46->___U3CU3E9__2_2;
				Func_2_tC62621E47817065D1808718363314932F0DD09EA* L_48 = L_47;
				G_B9_0 = L_48;
				G_B9_1 = L_45;
				G_B9_2 = L_44;
				G_B9_3 = L_43;
				if (L_48)
				{
					G_B10_0 = L_48;
					G_B10_1 = L_45;
					G_B10_2 = L_44;
					G_B10_3 = L_43;
					goto IL_00f5_1;
				}
			}
			{
				U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* L_49 = V_0;
				U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* L_50 = V_0;
				Func_2_tC62621E47817065D1808718363314932F0DD09EA* L_51 = (Func_2_tC62621E47817065D1808718363314932F0DD09EA*)il2cpp_codegen_object_new(Func_2_tC62621E47817065D1808718363314932F0DD09EA_il2cpp_TypeInfo_var);
				Func_2__ctor_mE158FE1A173FB1579F3E9976B022979CC5527355(L_51, L_50, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CGetPostInjectMethodsU3Eb__2_m824D380C1244BBF658059F8AB2C52BC008BDDC50_RuntimeMethod_var), NULL);
				Func_2_tC62621E47817065D1808718363314932F0DD09EA* L_52 = L_51;
				V_6 = L_52;
				L_49->___U3CU3E9__2_2 = L_52;
				Il2CppCodeGenWriteBarrier((void**)(&L_49->___U3CU3E9__2_2), (void*)L_52);
				Func_2_tC62621E47817065D1808718363314932F0DD09EA* L_53 = V_6;
				G_B10_0 = L_53;
				G_B10_1 = G_B9_1;
				G_B10_2 = G_B9_2;
				G_B10_3 = G_B9_3;
			}

IL_00f5_1:
			{
				RuntimeObject* L_54;
				L_54 = Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m87F724693AFE67D95C71A496AF4B7410F099A3D3((RuntimeObject*)G_B10_1, G_B10_0, Enumerable_Select_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m87F724693AFE67D95C71A496AF4B7410F099A3D3_RuntimeMethod_var);
				List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_55;
				L_55 = Enumerable_ToList_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_mF953DE6BF23A9B0EDE47B7050D84481EAF9352B8(L_54, Enumerable_ToList_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_mF953DE6BF23A9B0EDE47B7050D84481EAF9352B8_RuntimeMethod_var);
				PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434* L_56 = (PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434*)il2cpp_codegen_object_new(PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434_il2cpp_TypeInfo_var);
				PostInjectableInfo__ctor_mEBC7EEAC0C7E406E695831B971A7DDD019039E63(L_56, G_B10_2, L_55, NULL);
				List_1_Add_mF929C29F3B2D7390D81A7BC13E40D6F21A39376E_inline(G_B10_3, L_56, List_1_Add_mF929C29F3B2D7390D81A7BC13E40D6F21A39376E_RuntimeMethod_var);
			}

IL_0109_1:
			{
				// foreach (var methodInfo in values)
				RuntimeObject* L_57 = V_2;
				bool L_58;
				L_58 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_57);
				if (L_58)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_0120;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0120:
	{
		// return postInjectInfos;
		List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* L_59 = V_1;
		return L_59;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.TypeAnalyzer::GetPropertyInjectables(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeAnalyzer_GetPropertyInjectables_mCAB3A78B4B7AB538BF9763664B3433E50BB6600C (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* L_0 = (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539*)il2cpp_codegen_object_new(U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539_il2cpp_TypeInfo_var);
		U3CGetPropertyInjectablesU3Ed__7__ctor_m8BC3DC9559130CFEA03BB7444485D1E8B12ED3C0(L_0, ((int32_t)-2), NULL);
		U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* L_1 = L_0;
		Type_t* L_2 = ___type0;
		L_1->___U3CU3E3__type_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__type_4), (void*)L_2);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.TypeAnalyzer::GetFieldInjectables(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeAnalyzer_GetFieldInjectables_mD9DB192EBF4038694215CAC9589DE0D9CC203167 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* L_0 = (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738*)il2cpp_codegen_object_new(U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738_il2cpp_TypeInfo_var);
		U3CGetFieldInjectablesU3Ed__8__ctor_m73C7401AAA5CE20457F1170A71F02BB0E8284CAE(L_0, ((int32_t)-2), NULL);
		U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* L_1 = L_0;
		Type_t* L_2 = ___type0;
		L_1->___U3CU3E3__type_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__type_4), (void*)L_2);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> Zenject.TypeAnalyzer::GetAllFields(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeAnalyzer_GetAllFields_mCD54FC91ABCA1F4E165BD085BEEB27A9198AE4DC (Type_t* ___t0, int32_t ___flags1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisFieldInfo_t_m9AEDE6D6F93B3FC8B7AC51B7D87E1DDBEDDF1485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Distinct_TisFieldInfo_t_m04C394D265558D3214B0F99A5B1B4829E6428AF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisFieldInfo_t_m3F0C51FB0DC4328922A53AD75450A6D56E1A14A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (t == null)
		Type_t* L_0 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return Enumerable.Empty<FieldInfo>();
		RuntimeObject* L_2;
		L_2 = Enumerable_Empty_TisFieldInfo_t_m3F0C51FB0DC4328922A53AD75450A6D56E1A14A9_inline(Enumerable_Empty_TisFieldInfo_t_m3F0C51FB0DC4328922A53AD75450A6D56E1A14A9_RuntimeMethod_var);
		return L_2;
	}

IL_000f:
	{
		// return t.GetFields(flags).Concat(GetAllFields(t.BaseType, flags)).Distinct();
		Type_t* L_3 = ___t0;
		int32_t L_4 = ___flags1;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_5;
		L_5 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(84 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_3, L_4);
		Type_t* L_6 = ___t0;
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(107 /* System.Type System.Type::get_BaseType() */, L_6);
		int32_t L_8 = ___flags1;
		il2cpp_codegen_runtime_class_init_inline(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = TypeAnalyzer_GetAllFields_mCD54FC91ABCA1F4E165BD085BEEB27A9198AE4DC(L_7, L_8, NULL);
		RuntimeObject* L_10;
		L_10 = Enumerable_Concat_TisFieldInfo_t_m9AEDE6D6F93B3FC8B7AC51B7D87E1DDBEDDF1485((RuntimeObject*)L_5, L_9, Enumerable_Concat_TisFieldInfo_t_m9AEDE6D6F93B3FC8B7AC51B7D87E1DDBEDDF1485_RuntimeMethod_var);
		RuntimeObject* L_11;
		L_11 = Enumerable_Distinct_TisFieldInfo_t_m04C394D265558D3214B0F99A5B1B4829E6428AF7(L_10, Enumerable_Distinct_TisFieldInfo_t_m04C394D265558D3214B0F99A5B1B4829E6428AF7_RuntimeMethod_var);
		return L_11;
	}
}
// System.Action`2<System.Object,System.Object> Zenject.TypeAnalyzer::GetOnlyPropertySetter(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* TypeAnalyzer_GetOnlyPropertySetter_m44566CC9C8E77B1859B2DE6C9E9EDEA5323592D3 (Type_t* ___parentType0, String_t* ___propertyName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisFieldInfo_t_m120E54771AE0057A93898EEE26A589F0C5B5AC6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisFieldInfo_t_mDA159D274DAA88E98E2DEBCA7379ECFFA00ACD00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CGetOnlyPropertySetterU3Eb__0_m4FEEF3C40CE311FBB370177C2DDADAAB0AAF5730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CGetOnlyPropertySetterU3Eb__2_mECCEB2BAD35BAD17FEA56412489CC152D5AA553A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* V_0 = NULL;
	List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* V_1 = NULL;
	Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E* G_B3_0 = NULL;
	List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	String_t* G_B3_5 = NULL;
	Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E* G_B2_0 = NULL;
	List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	String_t* G_B2_4 = NULL;
	String_t* G_B2_5 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* L_0 = (U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10_0__ctor_mAD3933459CB2A59E72E0CD52D7164A18598F69BD(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* L_1 = V_0;
		String_t* L_2 = ___propertyName1;
		L_1->___propertyName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___propertyName_0), (void*)L_2);
		// Assert.That(parentType != null);
		Type_t* L_3 = ___parentType0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, (Type_t*)NULL, NULL);
		Assert_That_m83A61B69B6C128204755435348EA0C90439CBCD0(L_4, NULL);
		// Assert.That(!string.IsNullOrEmpty(propertyName));
		U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* L_5 = V_0;
		String_t* L_6 = L_5->___propertyName_0;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		Assert_That_m83A61B69B6C128204755435348EA0C90439CBCD0((bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0), NULL);
		// var allFields = GetAllFields(
		//     parentType, BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.FlattenHierarchy).ToList();
		Type_t* L_8 = ___parentType0;
		il2cpp_codegen_runtime_class_init_inline(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = TypeAnalyzer_GetAllFields_mCD54FC91ABCA1F4E165BD085BEEB27A9198AE4DC(L_8, ((int32_t)116), NULL);
		List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* L_10;
		L_10 = Enumerable_ToList_TisFieldInfo_t_mDA159D274DAA88E98E2DEBCA7379ECFFA00ACD00(L_9, Enumerable_ToList_TisFieldInfo_t_mDA159D274DAA88E98E2DEBCA7379ECFFA00ACD00_RuntimeMethod_var);
		V_1 = L_10;
		// var writeableFields = allFields.Where(f => f.Name == string.Format("<{0}>k__BackingField", propertyName)).ToList();
		U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* L_11 = V_0;
		List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* L_12 = V_1;
		U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* L_13 = V_0;
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_14 = (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*)il2cpp_codegen_object_new(Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var);
		Func_2__ctor_m720E8683356B22FA89D3983D974FC700BDE279A3(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CGetOnlyPropertySetterU3Eb__0_m4FEEF3C40CE311FBB370177C2DDADAAB0AAF5730_RuntimeMethod_var), NULL);
		RuntimeObject* L_15;
		L_15 = Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90(L_12, L_14, Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var);
		List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* L_16;
		L_16 = Enumerable_ToList_TisFieldInfo_t_mDA159D274DAA88E98E2DEBCA7379ECFFA00ACD00(L_15, Enumerable_ToList_TisFieldInfo_t_mDA159D274DAA88E98E2DEBCA7379ECFFA00ACD00_RuntimeMethod_var);
		L_11->___writeableFields_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___writeableFields_1), (void*)L_16);
		// if (!writeableFields.Any())
		U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* L_17 = V_0;
		List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* L_18 = L_17->___writeableFields_1;
		bool L_19;
		L_19 = Enumerable_Any_TisFieldInfo_t_m120E54771AE0057A93898EEE26A589F0C5B5AC6A(L_18, Enumerable_Any_TisFieldInfo_t_m120E54771AE0057A93898EEE26A589F0C5B5AC6A_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_00b4;
		}
	}
	{
		// throw new ZenjectException(string.Format(
		//     "Can't find backing field for get only property {0} on {1}.\r\n{2}",
		//     propertyName, parentType.FullName, string.Join(";", allFields.Select(f => f.Name).ToArray())));
		U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* L_20 = V_0;
		String_t* L_21 = L_20->___propertyName_0;
		Type_t* L_22 = ___parentType0;
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_22);
		List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* L_24 = V_1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var)));
		Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E* L_25 = ((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))))->___U3CU3E9__10_1_4;
		Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E* L_26 = L_25;
		G_B2_0 = L_26;
		G_B2_1 = L_24;
		G_B2_2 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3));
		G_B2_3 = L_23;
		G_B2_4 = L_21;
		G_B2_5 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA833A387FD4E1FEB35B3FAD864CA1A87928CA4DB));
		if (L_26)
		{
			G_B3_0 = L_26;
			G_B3_1 = L_24;
			G_B3_2 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3));
			G_B3_3 = L_23;
			G_B3_4 = L_21;
			G_B3_5 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA833A387FD4E1FEB35B3FAD864CA1A87928CA4DB));
			goto IL_009a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var)));
		U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* L_27 = ((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))))->___U3CU3E9_0;
		Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E* L_28 = (Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E_il2cpp_TypeInfo_var)));
		Func_2__ctor_m9FC86261B4A26C6B6D721971A566A0EAD8AB25F4(L_28, L_27, (intptr_t)((void*)((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CGetOnlyPropertySetterU3Eb__10_1_m039136ADA8FA89DC7259606A0A12994FE2DCE140_RuntimeMethod_var))), NULL);
		Func_2_t5D51F6431829ECE65F21B86CCE9ADC804041865E* L_29 = L_28;
		((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))))->___U3CU3E9__10_1_4 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))))->___U3CU3E9__10_1_4), (void*)L_29);
		G_B3_0 = L_29;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
		G_B3_5 = G_B2_5;
	}

IL_009a:
	{
		RuntimeObject* L_30;
		L_30 = Enumerable_Select_TisFieldInfo_t_TisString_t_m4001C29647540D7C3A0AEC2D42134CA449775B51(G_B3_1, G_B3_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Select_TisFieldInfo_t_TisString_t_m4001C29647540D7C3A0AEC2D42134CA449775B51_RuntimeMethod_var)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31;
		L_31 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var)));
		String_t* L_32;
		L_32 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B3_2, L_31, NULL);
		String_t* L_33;
		L_33 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(G_B3_5, G_B3_4, G_B3_3, L_32, NULL);
		ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9* L_34 = (ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9_il2cpp_TypeInfo_var)));
		ZenjectException__ctor_mE027D5E78D20EE15B004C923CE66BFA54A52707B(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeAnalyzer_GetOnlyPropertySetter_m44566CC9C8E77B1859B2DE6C9E9EDEA5323592D3_RuntimeMethod_var)));
	}

IL_00b4:
	{
		// return (injectable, value) => writeableFields.ForEach(f => f.SetValue(injectable, value));
		U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* L_35 = V_0;
		Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* L_36 = (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C*)il2cpp_codegen_object_new(Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C_il2cpp_TypeInfo_var);
		Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052(L_36, L_35, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CGetOnlyPropertySetterU3Eb__2_mECCEB2BAD35BAD17FEA56412489CC152D5AA553A_RuntimeMethod_var), NULL);
		return L_36;
	}
}
// Zenject.InjectableInfo Zenject.TypeAnalyzer::CreateForMember(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* TypeAnalyzer_CreateForMember_m3BDFD58DEC375EEA2153F40D6C78BCE08B6B248A (MemberInfo_t* ___memInfo0, Type_t* ___parentType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SingleOrDefault_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m1B029F6AA7575FF1F37EB07A2650F0CCA02984DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mF643C8F89091667446619CBD496EDEC554EF6B76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m808F9FADF8A4D1DEAE16041E2F3301645E1F430E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_AllAttributes_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mA16D441FFDF05076E635E15A270BBB98DBF05884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CCreateForMemberU3Eb__0_m1E7B42D20E471EACC690B20250A5BF0746DF86DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t45B39717DBA5C541CBC86278F9AA8E119EA74BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_1_U3CCreateForMemberU3Eb__1_mE3E3578F50FA35202F883510F5A31F091D237B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C26C79FFDDEF904377DCE5F0DE99E35789E52C8);
		s_Il2CppMethodInitialized = true;
	}
	InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Type_t* V_4 = NULL;
	Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* V_5 = NULL;
	U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343* V_6 = NULL;
	{
		// var injectAttributes = memInfo.AllAttributes<InjectAttributeBase>().ToList();
		MemberInfo_t* L_0 = ___memInfo0;
		RuntimeObject* L_1;
		L_1 = TypeExtensions_AllAttributes_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mA16D441FFDF05076E635E15A270BBB98DBF05884(L_0, TypeExtensions_AllAttributes_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mA16D441FFDF05076E635E15A270BBB98DBF05884_RuntimeMethod_var);
		List_1_tCBE4B2163152CB0A4722667AA65591B659F4B906* L_2;
		L_2 = Enumerable_ToList_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mF643C8F89091667446619CBD496EDEC554EF6B76(L_1, Enumerable_ToList_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_mF643C8F89091667446619CBD496EDEC554EF6B76_RuntimeMethod_var);
		// Assert.That(injectAttributes.Count <= 1,
		//     "Found multiple 'Inject' attributes on type field '{0}' of type '{1}'.  Field should only container one Inject attribute", memInfo.Name, parentType);
		List_1_tCBE4B2163152CB0A4722667AA65591B659F4B906* L_3 = L_2;
		int32_t L_4;
		L_4 = List_1_get_Count_m808F9FADF8A4D1DEAE16041E2F3301645E1F430E_inline(L_3, List_1_get_Count_m808F9FADF8A4D1DEAE16041E2F3301645E1F430E_RuntimeMethod_var);
		MemberInfo_t* L_5 = ___memInfo0;
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		Type_t* L_7 = ___parentType1;
		Assert_That_m01A6B7E62D93E7352AAB67B40C0522C03B175D52((bool)((((int32_t)((((int32_t)L_4) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral8C26C79FFDDEF904377DCE5F0DE99E35789E52C8, L_6, L_7, NULL);
		// var injectAttr = injectAttributes.SingleOrDefault();
		InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* L_8;
		L_8 = Enumerable_SingleOrDefault_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m1B029F6AA7575FF1F37EB07A2650F0CCA02984DC(L_3, Enumerable_SingleOrDefault_TisInjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_m1B029F6AA7575FF1F37EB07A2650F0CCA02984DC_RuntimeMethod_var);
		V_0 = L_8;
		// object identifier = null;
		V_1 = NULL;
		// bool isOptional = false;
		V_2 = (bool)0;
		// InjectSources sourceType = InjectSources.Any;
		V_3 = 0;
		// if (injectAttr != null)
		InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* L_9 = V_0;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// identifier = injectAttr.Id;
		InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* L_10 = V_0;
		RuntimeObject* L_11;
		L_11 = InjectAttributeBase_get_Id_m250FF1978AC82CC02B0B187EAD1B988949D2ABD0_inline(L_10, NULL);
		V_1 = L_11;
		// isOptional = injectAttr.Optional;
		InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* L_12 = V_0;
		bool L_13;
		L_13 = InjectAttributeBase_get_Optional_m00795F7AB4BC24B675BBA10B2D0D6943FA092C07_inline(L_12, NULL);
		V_2 = L_13;
		// sourceType = injectAttr.Source;
		InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* L_14 = V_0;
		int32_t L_15;
		L_15 = InjectAttributeBase_get_Source_m9C6D120731515051BDBF74825335ADD7C7FE352E_inline(L_14, NULL);
		V_3 = L_15;
	}

IL_004c:
	{
		// if (memInfo is FieldInfo)
		MemberInfo_t* L_16 = ___memInfo0;
		if (!((FieldInfo_t*)IsInstClass((RuntimeObject*)L_16, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0081;
		}
	}
	{
		U3CU3Ec__DisplayClass11_0_t45B39717DBA5C541CBC86278F9AA8E119EA74BF5* L_17 = (U3CU3Ec__DisplayClass11_0_t45B39717DBA5C541CBC86278F9AA8E119EA74BF5*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t45B39717DBA5C541CBC86278F9AA8E119EA74BF5_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_0__ctor_m954BE2FD616197CE3739F8CCE197EA3AB79C4BF1(L_17, NULL);
		// var fieldInfo = (FieldInfo)memInfo;
		U3CU3Ec__DisplayClass11_0_t45B39717DBA5C541CBC86278F9AA8E119EA74BF5* L_18 = L_17;
		MemberInfo_t* L_19 = ___memInfo0;
		L_18->___fieldInfo_0 = ((FieldInfo_t*)CastclassClass((RuntimeObject*)L_19, FieldInfo_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___fieldInfo_0), (void*)((FieldInfo_t*)CastclassClass((RuntimeObject*)L_19, FieldInfo_t_il2cpp_TypeInfo_var)));
		// setter = ((object injectable, object value) => fieldInfo.SetValue(injectable, value));
		U3CU3Ec__DisplayClass11_0_t45B39717DBA5C541CBC86278F9AA8E119EA74BF5* L_20 = L_18;
		Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* L_21 = (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C*)il2cpp_codegen_object_new(Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C_il2cpp_TypeInfo_var);
		Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CCreateForMemberU3Eb__0_m1E7B42D20E471EACC690B20250A5BF0746DF86DD_RuntimeMethod_var), NULL);
		V_5 = L_21;
		// memberType = fieldInfo.FieldType;
		FieldInfo_t* L_22 = L_20->___fieldInfo_0;
		Type_t* L_23;
		L_23 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_22);
		V_4 = L_23;
		goto IL_00e4;
	}

IL_0081:
	{
		U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343* L_24 = (U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_1__ctor_mFB8C5CDE9B1C109BAE71877BBEE877C56FBCF8A1(L_24, NULL);
		V_6 = L_24;
		// Assert.That(memInfo is PropertyInfo);
		MemberInfo_t* L_25 = ___memInfo0;
		Assert_That_m83A61B69B6C128204755435348EA0C90439CBCD0((bool)((!(((RuntimeObject*)(PropertyInfo_t*)((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_25, PropertyInfo_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		// var propInfo = (PropertyInfo)memInfo;
		U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343* L_26 = V_6;
		MemberInfo_t* L_27 = ___memInfo0;
		L_26->___propInfo_0 = ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_27, PropertyInfo_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___propInfo_0), (void*)((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_27, PropertyInfo_t_il2cpp_TypeInfo_var)));
		// memberType = propInfo.PropertyType;
		U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343* L_28 = V_6;
		PropertyInfo_t* L_29 = L_28->___propInfo_0;
		Type_t* L_30;
		L_30 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_29);
		V_4 = L_30;
		// if (propInfo.CanWrite)
		U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343* L_31 = V_6;
		PropertyInfo_t* L_32 = L_31->___propInfo_0;
		bool L_33;
		L_33 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_32);
		if (!L_33)
		{
			goto IL_00d0;
		}
	}
	{
		// setter = ((object injectable, object value) => propInfo.SetValue(injectable, value, null));
		U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343* L_34 = V_6;
		Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* L_35 = (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C*)il2cpp_codegen_object_new(Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C_il2cpp_TypeInfo_var);
		Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052(L_35, L_34, (intptr_t)((void*)U3CU3Ec__DisplayClass11_1_U3CCreateForMemberU3Eb__1_mE3E3578F50FA35202F883510F5A31F091D237B2D_RuntimeMethod_var), NULL);
		V_5 = L_35;
		goto IL_00e4;
	}

IL_00d0:
	{
		// setter = GetOnlyPropertySetter(parentType, propInfo.Name);
		Type_t* L_36 = ___parentType1;
		U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343* L_37 = V_6;
		PropertyInfo_t* L_38 = L_37->___propInfo_0;
		String_t* L_39;
		L_39 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_38);
		il2cpp_codegen_runtime_class_init_inline(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* L_40;
		L_40 = TypeAnalyzer_GetOnlyPropertySetter_m44566CC9C8E77B1859B2DE6C9E9EDEA5323592D3(L_36, L_39, NULL);
		V_5 = L_40;
	}

IL_00e4:
	{
		// return new InjectableInfo(
		//     isOptional,
		//     identifier,
		//     memInfo.Name,
		//     memberType,
		//     parentType,
		//     setter,
		//     null,
		//     sourceType);
		bool L_41 = V_2;
		RuntimeObject* L_42 = V_1;
		MemberInfo_t* L_43 = ___memInfo0;
		String_t* L_44;
		L_44 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		Type_t* L_45 = V_4;
		Type_t* L_46 = ___parentType1;
		Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* L_47 = V_5;
		int32_t L_48 = V_3;
		InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* L_49 = (InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201*)il2cpp_codegen_object_new(InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_il2cpp_TypeInfo_var);
		InjectableInfo__ctor_mFDA78F7AF2EF52D23175DF56E5CCE534C226FE19(L_49, L_41, L_42, L_44, L_45, L_46, L_47, NULL, L_48, NULL);
		return L_49;
	}
}
// System.Reflection.ConstructorInfo Zenject.TypeAnalyzer::GetInjectConstructor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* TypeAnalyzer_GetInjectConstructor_m0629549C5A38887312D425D791EE36EC54CBA605 (Type_t* ___parentType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SingleOrDefault_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_mFCD77DA5BEDB80CD993C7649718314870686003A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m8EA9B635BFA7C329D4148DF66995F7A096C746D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_HasMoreThan_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m10DA62F47B76A012E5DDA569901E60C01CB4B809_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_IsEmpty_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m957B332A72BB2AD1774B2DEA5D6EE2F923FDD778_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_OnlyOrDefault_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m8EF30D0618F6FC9E9CC26552A4432A77844C4854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetInjectConstructorU3Eb__12_0_mF2EA0C8B8405978CEFA65C7E90DC1DA980F173E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetInjectConstructorU3Eb__12_1_mF1FD8A90B7A4218327A99470E54162BAF06DA501_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* V_0 = NULL;
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_1 = NULL;
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_2 = NULL;
	Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* G_B5_0 = NULL;
	ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* G_B5_1 = NULL;
	Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* G_B4_0 = NULL;
	ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* G_B4_1 = NULL;
	Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* G_B9_0 = NULL;
	ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* G_B9_1 = NULL;
	Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* G_B8_0 = NULL;
	ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* G_B8_1 = NULL;
	{
		// var constructors = parentType.Constructors();
		Type_t* L_0 = ___parentType0;
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_1;
		L_1 = TypeExtensions_Constructors_mD6382C00BFFF854332BC7BF3DEC8CA89F9E88A3C(L_0, NULL);
		V_0 = L_1;
		// if (constructors.IsEmpty())
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_2 = V_0;
		bool L_3;
		L_3 = LinqExtensions_IsEmpty_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m957B332A72BB2AD1774B2DEA5D6EE2F923FDD778((RuntimeObject*)L_2, LinqExtensions_IsEmpty_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m957B332A72BB2AD1774B2DEA5D6EE2F923FDD778_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL;
	}

IL_0011:
	{
		// if (constructors.HasMoreThan(1))
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_4 = V_0;
		bool L_5;
		L_5 = LinqExtensions_HasMoreThan_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m10DA62F47B76A012E5DDA569901E60C01CB4B809((RuntimeObject*)L_4, 1, LinqExtensions_HasMoreThan_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m10DA62F47B76A012E5DDA569901E60C01CB4B809_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0088;
		}
	}
	{
		// var explicitConstructor = (from c in constructors where c.HasAttribute<InjectAttribute>() select c).SingleOrDefault();
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
		Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* L_7 = ((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_5;
		Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* L_8 = L_7;
		G_B4_0 = L_8;
		G_B4_1 = L_6;
		if (L_8)
		{
			G_B5_0 = L_8;
			G_B5_1 = L_6;
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
		U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* L_9 = ((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* L_10 = (Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C*)il2cpp_codegen_object_new(Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C_il2cpp_TypeInfo_var);
		Func_2__ctor_m7871710CD540E478649F02E1BC07A13BF5D774D2(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CGetInjectConstructorU3Eb__12_0_mF2EA0C8B8405978CEFA65C7E90DC1DA980F173E4_RuntimeMethod_var), NULL);
		Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* L_11 = L_10;
		((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_5), (void*)L_11);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_003a:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Where_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m8EA9B635BFA7C329D4148DF66995F7A096C746D9((RuntimeObject*)G_B5_1, G_B5_0, Enumerable_Where_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m8EA9B635BFA7C329D4148DF66995F7A096C746D9_RuntimeMethod_var);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_13;
		L_13 = Enumerable_SingleOrDefault_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_mFCD77DA5BEDB80CD993C7649718314870686003A(L_12, Enumerable_SingleOrDefault_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_mFCD77DA5BEDB80CD993C7649718314870686003A_RuntimeMethod_var);
		V_1 = L_13;
		// if (explicitConstructor != null)
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4(L_14, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0050;
		}
	}
	{
		// return explicitConstructor;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_16 = V_1;
		return L_16;
	}

IL_0050:
	{
		// var singlePublicConstructor = constructors.Where(x => !x.IsPrivate).OnlyOrDefault();
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
		Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* L_18 = ((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__12_1_6;
		Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* L_19 = L_18;
		G_B8_0 = L_19;
		G_B8_1 = L_17;
		if (L_19)
		{
			G_B9_0 = L_19;
			G_B9_1 = L_17;
			goto IL_0070;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
		U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* L_20 = ((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* L_21 = (Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C*)il2cpp_codegen_object_new(Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C_il2cpp_TypeInfo_var);
		Func_2__ctor_m7871710CD540E478649F02E1BC07A13BF5D774D2(L_21, L_20, (intptr_t)((void*)U3CU3Ec_U3CGetInjectConstructorU3Eb__12_1_mF1FD8A90B7A4218327A99470E54162BAF06DA501_RuntimeMethod_var), NULL);
		Func_2_tF43743677DC8EC7ECF5575F75E3C0CB6CE4EE70C* L_22 = L_21;
		((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__12_1_6 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__12_1_6), (void*)L_22);
		G_B9_0 = L_22;
		G_B9_1 = G_B8_1;
	}

IL_0070:
	{
		RuntimeObject* L_23;
		L_23 = Enumerable_Where_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m8EA9B635BFA7C329D4148DF66995F7A096C746D9((RuntimeObject*)G_B9_1, G_B9_0, Enumerable_Where_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m8EA9B635BFA7C329D4148DF66995F7A096C746D9_RuntimeMethod_var);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_24;
		L_24 = LinqExtensions_OnlyOrDefault_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m8EF30D0618F6FC9E9CC26552A4432A77844C4854(L_23, LinqExtensions_OnlyOrDefault_TisConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_m8EF30D0618F6FC9E9CC26552A4432A77844C4854_RuntimeMethod_var);
		V_2 = L_24;
		// if (singlePublicConstructor != null)
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_25 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4(L_25, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		if (!L_26)
		{
			goto IL_0086;
		}
	}
	{
		// return singlePublicConstructor;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_27 = V_2;
		return L_27;
	}

IL_0086:
	{
		// return null;
		return (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL;
	}

IL_0088:
	{
		// return constructors[0];
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_28 = V_0;
		int32_t L_29 = 0;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		return L_30;
	}
}
// System.Void Zenject.TypeAnalyzer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeAnalyzer__cctor_m3531C63E86F117D8693824CF8DD316DCC2D2DB68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB8323C7B23E4D89188A6FFF8E4596EA9159907EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<Type, ZenjectTypeInfo> _typeInfo = new Dictionary<Type, ZenjectTypeInfo>();
		Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243* L_0 = (Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243*)il2cpp_codegen_object_new(Dictionary_2_t6CB183560BC41A5C8AA335A9ADFEB773E7B6D243_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB8323C7B23E4D89188A6FFF8E4596EA9159907EA(L_0, Dictionary_2__ctor_mB8323C7B23E4D89188A6FFF8E4596EA9159907EA_RuntimeMethod_var);
		((TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_StaticFields*)il2cpp_codegen_static_fields_for(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var))->____typeInfo_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_StaticFields*)il2cpp_codegen_static_fields_for(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var))->____typeInfo_0), (void*)L_0);
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
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m07F79109E8207A6A2FF614F55ABBEDD6CCCFEC8C (U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Zenject.InjectableInfo Zenject.TypeAnalyzer/<>c__DisplayClass4_0::<GetConstructorInjectables>b__0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* U3CU3Ec__DisplayClass4_0_U3CGetConstructorInjectablesU3Eb__0_mC005DED5DAC9B3E2AF95156592100AAEAA3EDFB2 (U3CU3Ec__DisplayClass4_0_t26C777F34DF9EA3684FC3BF4BAD0CAB473FD318C* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___paramInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// paramInfo => CreateInjectableInfoForParam(parentType, paramInfo));
		Type_t* L_0 = __this->___parentType_0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_1 = ___paramInfo0;
		il2cpp_codegen_runtime_class_init_inline(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* L_2;
		L_2 = TypeAnalyzer_CreateInjectableInfoForParam_m1D369B0176E5282D2E424285F283791082045F16(L_0, L_1, NULL);
		return L_2;
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
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mDD3AA6C2635E942EDE13E2242F1A4A41860BB00D (U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Zenject.TypeAnalyzer/<>c__DisplayClass6_0::<GetPostInjectMethods>b__1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass6_0_U3CGetPostInjectMethodsU3Eb__1_m1250FDDFF1676C1C3871DFF1A1FB8467C66A552C (U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* __this, MethodInfo_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m1F056354847C31B867863E86AAEBF49A0EF4DA4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var values = methods.OrderBy(x => heirarchyList.IndexOf(x.DeclaringType));
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = __this->___heirarchyList_0;
		MethodInfo_t* L_1 = ___x0;
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_m1F056354847C31B867863E86AAEBF49A0EF4DA4D(L_0, L_2, List_1_IndexOf_m1F056354847C31B867863E86AAEBF49A0EF4DA4D_RuntimeMethod_var);
		return L_3;
	}
}
// Zenject.InjectableInfo Zenject.TypeAnalyzer/<>c__DisplayClass6_0::<GetPostInjectMethods>b__2(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* U3CU3Ec__DisplayClass6_0_U3CGetPostInjectMethodsU3Eb__2_m824D380C1244BBF658059F8AB2C52BC008BDDC50 (U3CU3Ec__DisplayClass6_0_t3CBFF3784C88D3834E0EC818F9637011F85851BF* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___paramInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateInjectableInfoForParam(type, paramInfo)).ToList()));
		Type_t* L_0 = __this->___type_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_1 = ___paramInfo0;
		il2cpp_codegen_runtime_class_init_inline(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* L_2;
		L_2 = TypeAnalyzer_CreateInjectableInfoForParam_m1D369B0176E5282D2E424285F283791082045F16(L_0, L_1, NULL);
		return L_2;
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
// System.Void Zenject.TypeAnalyzer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m519E8959EC8771BBC06A404197437DA22C4CCD73 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* L_0 = (U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05*)il2cpp_codegen_object_new(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD4F15AAB203127AB6C67559EA09C5E8ECEEADE68(L_0, NULL);
		((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Zenject.TypeAnalyzer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD4F15AAB203127AB6C67559EA09C5E8ECEEADE68 (U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Zenject.TypeAnalyzer/<>c::<GetPostInjectMethods>b__6_0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetPostInjectMethodsU3Eb__6_0_mC1CD417EED78558DFB83855958218831E89EFE1E (U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* __this, MethodInfo_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => x.GetCustomAttributes(typeof(InjectAttribute), false).Any()).ToList();
		MethodInfo_t* L_0 = ___x0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (InjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)0);
		bool L_4;
		L_4 = Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847((RuntimeObject*)L_3, Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean Zenject.TypeAnalyzer/<>c::<GetPropertyInjectables>b__7_0(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetPropertyInjectablesU3Eb__7_0_m83F44AEA58526B52EA682178D2E7A671A8D24DEF (U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* __this, PropertyInfo_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => x.HasAttribute(typeof(InjectAttributeBase)));
		PropertyInfo_t* L_0 = ___x0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		bool L_5;
		L_5 = TypeExtensions_HasAttribute_mC50DA3D76BFE618249BC1AE1B55F1E5C39793F59(L_0, L_2, NULL);
		return L_5;
	}
}
// System.Boolean Zenject.TypeAnalyzer/<>c::<GetFieldInjectables>b__8_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetFieldInjectablesU3Eb__8_0_m8785DD3DCA527FC16B42E831D2E5BE4589057F67 (U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* __this, FieldInfo_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => x.HasAttribute(typeof(InjectAttributeBase)));
		FieldInfo_t* L_0 = ___x0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		bool L_5;
		L_5 = TypeExtensions_HasAttribute_mC50DA3D76BFE618249BC1AE1B55F1E5C39793F59(L_0, L_2, NULL);
		return L_5;
	}
}
// System.String Zenject.TypeAnalyzer/<>c::<GetOnlyPropertySetter>b__10_1(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetOnlyPropertySetterU3Eb__10_1_m039136ADA8FA89DC7259606A0A12994FE2DCE140 (U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* __this, FieldInfo_t* ___f0, const RuntimeMethod* method) 
{
	{
		// propertyName, parentType.FullName, string.Join(";", allFields.Select(f => f.Name).ToArray())));
		FieldInfo_t* L_0 = ___f0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Boolean Zenject.TypeAnalyzer/<>c::<GetInjectConstructor>b__12_0(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetInjectConstructorU3Eb__12_0_mF2EA0C8B8405978CEFA65C7E90DC1DA980F173E4 (U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* __this, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_HasAttribute_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_mBDE3F4FAED2226425AFC987BE67C6C1E4526142B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var explicitConstructor = (from c in constructors where c.HasAttribute<InjectAttribute>() select c).SingleOrDefault();
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_0 = ___c0;
		bool L_1;
		L_1 = TypeExtensions_HasAttribute_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_mBDE3F4FAED2226425AFC987BE67C6C1E4526142B(L_0, TypeExtensions_HasAttribute_TisInjectAttribute_t205B46665DB86473EE03439571950DCADAD8338F_mBDE3F4FAED2226425AFC987BE67C6C1E4526142B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Zenject.TypeAnalyzer/<>c::<GetInjectConstructor>b__12_1(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetInjectConstructorU3Eb__12_1_mF1FD8A90B7A4218327A99470E54162BAF06DA501 (U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* __this, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___x0, const RuntimeMethod* method) 
{
	{
		// var singlePublicConstructor = constructors.Where(x => !x.IsPrivate).OnlyOrDefault();
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_0 = ___x0;
		bool L_1;
		L_1 = MethodBase_get_IsPrivate_m0818D64C8361CC0FE0DD77AFBBEA0B9BC37E8549(L_0, NULL);
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
// System.Void Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertyInjectablesU3Ed__7__ctor_m8BC3DC9559130CFEA03BB7444485D1E8B12ED3C0 (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertyInjectablesU3Ed__7_System_IDisposable_Dispose_m064C0E461E200577FC34E4EF685EDDA90593A096 (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetPropertyInjectablesU3Ed__7_U3CU3Em__Finally1_m3A7A02C3B031B65445F74CEB1CD7803C9E62FBAB(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetPropertyInjectablesU3Ed__7_MoveNext_m8A408C109F50B35FD865032217A80F16F6985FE2 (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4F5FCDEAC3CEC5489B3CEE5871FC5F9D22C281EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5DB30F59007139D6E8222133A68763E967465D72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetPropertyInjectablesU3Eb__7_0_m83F44AEA58526B52EA682178D2E7A671A8D24DEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	PropertyInfo_t* V_3 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00b1:
			{// begin fault (depth: 1)
				U3CGetPropertyInjectablesU3Ed__7_System_IDisposable_Dispose_m064C0E461E200577FC34E4EF685EDDA90593A096(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_008b_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00b8;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var propInfos = type.GetAllInstanceProperties()
				//     .Where(x => x.HasAttribute(typeof(InjectAttributeBase)));
				Type_t* L_3 = __this->___type_3;
				RuntimeObject* L_4;
				L_4 = TypeExtensions_GetAllInstanceProperties_mDD8F3AF1FEC5571A4BD67A9A1705500FE939D80E(L_3, NULL);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
				Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_5 = ((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_2;
				Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_6 = L_5;
				G_B4_0 = L_6;
				G_B4_1 = L_4;
				if (L_6)
				{
					G_B5_0 = L_6;
					G_B5_1 = L_4;
					goto IL_0046_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
				U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* L_7 = ((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_8 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
				Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CGetPropertyInjectablesU3Eb__7_0_m83F44AEA58526B52EA682178D2E7A671A8D24DEF_RuntimeMethod_var), NULL);
				Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_9 = L_8;
				((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_2 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_2), (void*)L_9);
				G_B5_0 = L_9;
				G_B5_1 = G_B4_1;
			}

IL_0046_1:
			{
				RuntimeObject* L_10;
				L_10 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC(G_B5_1, G_B5_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
				V_2 = L_10;
				// foreach (var propInfo in propInfos)
				RuntimeObject* L_11 = V_2;
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t4F5FCDEAC3CEC5489B3CEE5871FC5F9D22C281EE_il2cpp_TypeInfo_var, L_11);
				__this->___U3CU3E7__wrap1_5 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_5), (void*)L_12);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0093_1;
			}

IL_0062_1:
			{
				// foreach (var propInfo in propInfos)
				RuntimeObject* L_13 = __this->___U3CU3E7__wrap1_5;
				PropertyInfo_t* L_14;
				L_14 = InterfaceFuncInvoker0< PropertyInfo_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t5DB30F59007139D6E8222133A68763E967465D72_il2cpp_TypeInfo_var, L_13);
				V_3 = L_14;
				// yield return CreateForMember(propInfo, type);
				PropertyInfo_t* L_15 = V_3;
				Type_t* L_16 = __this->___type_3;
				il2cpp_codegen_runtime_class_init_inline(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
				InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* L_17;
				L_17 = TypeAnalyzer_CreateForMember_m3BDFD58DEC375EEA2153F40D6C78BCE08B6B248A(L_15, L_16, NULL);
				__this->___U3CU3E2__current_1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00b8;
			}

IL_008b_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0093_1:
			{
				// foreach (var propInfo in propInfos)
				RuntimeObject* L_18 = __this->___U3CU3E7__wrap1_5;
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_0062_1;
				}
			}
			{
				U3CGetPropertyInjectablesU3Ed__7_U3CU3Em__Finally1_m3A7A02C3B031B65445F74CEB1CD7803C9E62FBAB(__this, NULL);
				__this->___U3CU3E7__wrap1_5 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_5), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00b8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b8:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertyInjectablesU3Ed__7_U3CU3Em__Finally1_m3A7A02C3B031B65445F74CEB1CD7803C9E62FBAB (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_5;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_5;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Zenject.InjectableInfo Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::System.Collections.Generic.IEnumerator<Zenject.InjectableInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* U3CGetPropertyInjectablesU3Ed__7_System_Collections_Generic_IEnumeratorU3CZenject_InjectableInfoU3E_get_Current_mD8FBADCD4C2234E792AD18F821B7ECCE8D2110E7 (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, const RuntimeMethod* method) 
{
	{
		InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetPropertyInjectablesU3Ed__7_System_Collections_IEnumerator_Reset_m88536A50806C4473FBFE44498F7746D1A0985715 (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetPropertyInjectablesU3Ed__7_System_Collections_IEnumerator_Reset_m88536A50806C4473FBFE44498F7746D1A0985715_RuntimeMethod_var)));
	}
}
// System.Object Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPropertyInjectablesU3Ed__7_System_Collections_IEnumerator_get_Current_m5B70C8AF6151CFB97C1B7542C6A13798D299538B (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, const RuntimeMethod* method) 
{
	{
		InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Zenject.InjectableInfo> Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::System.Collections.Generic.IEnumerable<Zenject.InjectableInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPropertyInjectablesU3Ed__7_System_Collections_Generic_IEnumerableU3CZenject_InjectableInfoU3E_GetEnumerator_m91E92B15F466FC7DD11D5CFAA6DDF14CB767E91B (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* L_3 = (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539*)il2cpp_codegen_object_new(U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539_il2cpp_TypeInfo_var);
		U3CGetPropertyInjectablesU3Ed__7__ctor_m8BC3DC9559130CFEA03BB7444485D1E8B12ED3C0(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* L_4 = V_0;
		Type_t* L_5 = __this->___U3CU3E3__type_4;
		L_4->___type_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___type_3), (void*)L_5);
		U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Zenject.TypeAnalyzer/<GetPropertyInjectables>d__7::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetPropertyInjectablesU3Ed__7_System_Collections_IEnumerable_GetEnumerator_mB6F24D58AC4A62EC30353909F728C52CDD26701E (U3CGetPropertyInjectablesU3Ed__7_t5D491E3F06B193CFB5DD020674E7D8B37C0FC539* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetPropertyInjectablesU3Ed__7_System_Collections_Generic_IEnumerableU3CZenject_InjectableInfoU3E_GetEnumerator_m91E92B15F466FC7DD11D5CFAA6DDF14CB767E91B(__this, NULL);
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
// System.Void Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFieldInjectablesU3Ed__8__ctor_m73C7401AAA5CE20457F1170A71F02BB0E8284CAE (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFieldInjectablesU3Ed__8_System_IDisposable_Dispose_m2B0A43ED6E76C70778CB42FAA6BCAEB24BF19E16 (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetFieldInjectablesU3Ed__8_U3CU3Em__Finally1_m3D57B177FE3AB65B9909B56E48C0AE090F715850(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetFieldInjectablesU3Ed__8_MoveNext_m4A07BDD2798C31A6AB44C9A26E5B12C4AD49C7B5 (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD1E868EC4EE9679F2F2D4F9F10CEAB9153B8C991_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetFieldInjectablesU3Eb__8_0_m8785DD3DCA527FC16B42E831D2E5BE4589057F67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	FieldInfo_t* V_3 = NULL;
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00b1:
			{// begin fault (depth: 1)
				U3CGetFieldInjectablesU3Ed__8_System_IDisposable_Dispose_m2B0A43ED6E76C70778CB42FAA6BCAEB24BF19E16(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_008b_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00b8;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var fieldInfos = type.GetAllInstanceFields()
				//     .Where(x => x.HasAttribute(typeof(InjectAttributeBase)));
				Type_t* L_3 = __this->___type_3;
				RuntimeObject* L_4;
				L_4 = TypeExtensions_GetAllInstanceFields_m2D537D936FDD5E2A34C6160D866C731B86F5E144(L_3, NULL);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
				Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_5 = ((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_3;
				Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_6 = L_5;
				G_B4_0 = L_6;
				G_B4_1 = L_4;
				if (L_6)
				{
					G_B5_0 = L_6;
					G_B5_1 = L_4;
					goto IL_0046_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var);
				U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05* L_7 = ((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_8 = (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*)il2cpp_codegen_object_new(Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var);
				Func_2__ctor_m720E8683356B22FA89D3983D974FC700BDE279A3(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CGetFieldInjectablesU3Eb__8_0_m8785DD3DCA527FC16B42E831D2E5BE4589057F67_RuntimeMethod_var), NULL);
				Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_9 = L_8;
				((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_3 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF36E50B0CC576EA3F69F332107A5B1D928259F05_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_3), (void*)L_9);
				G_B5_0 = L_9;
				G_B5_1 = G_B4_1;
			}

IL_0046_1:
			{
				RuntimeObject* L_10;
				L_10 = Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90(G_B5_1, G_B5_0, Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var);
				V_2 = L_10;
				// foreach (var fieldInfo in fieldInfos)
				RuntimeObject* L_11 = V_2;
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1_il2cpp_TypeInfo_var, L_11);
				__this->___U3CU3E7__wrap1_5 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_5), (void*)L_12);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0093_1;
			}

IL_0062_1:
			{
				// foreach (var fieldInfo in fieldInfos)
				RuntimeObject* L_13 = __this->___U3CU3E7__wrap1_5;
				FieldInfo_t* L_14;
				L_14 = InterfaceFuncInvoker0< FieldInfo_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_tD1E868EC4EE9679F2F2D4F9F10CEAB9153B8C991_il2cpp_TypeInfo_var, L_13);
				V_3 = L_14;
				// yield return CreateForMember(fieldInfo, type);
				FieldInfo_t* L_15 = V_3;
				Type_t* L_16 = __this->___type_3;
				il2cpp_codegen_runtime_class_init_inline(TypeAnalyzer_t5608F6CEEBD8EC454F612E92B112E197EF40E306_il2cpp_TypeInfo_var);
				InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* L_17;
				L_17 = TypeAnalyzer_CreateForMember_m3BDFD58DEC375EEA2153F40D6C78BCE08B6B248A(L_15, L_16, NULL);
				__this->___U3CU3E2__current_1 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00b8;
			}

IL_008b_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0093_1:
			{
				// foreach (var fieldInfo in fieldInfos)
				RuntimeObject* L_18 = __this->___U3CU3E7__wrap1_5;
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_0062_1;
				}
			}
			{
				U3CGetFieldInjectablesU3Ed__8_U3CU3Em__Finally1_m3D57B177FE3AB65B9909B56E48C0AE090F715850(__this, NULL);
				__this->___U3CU3E7__wrap1_5 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_5), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00b8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b8:
	{
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFieldInjectablesU3Ed__8_U3CU3Em__Finally1_m3D57B177FE3AB65B9909B56E48C0AE090F715850 (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_5;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_5;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Zenject.InjectableInfo Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::System.Collections.Generic.IEnumerator<Zenject.InjectableInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* U3CGetFieldInjectablesU3Ed__8_System_Collections_Generic_IEnumeratorU3CZenject_InjectableInfoU3E_get_Current_m8B29095681FA0514B9A7EC7A06C5740B37D253FF (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, const RuntimeMethod* method) 
{
	{
		InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFieldInjectablesU3Ed__8_System_Collections_IEnumerator_Reset_mF288797C9180DABE306CF7B5813D8E2B63F5EA71 (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetFieldInjectablesU3Ed__8_System_Collections_IEnumerator_Reset_mF288797C9180DABE306CF7B5813D8E2B63F5EA71_RuntimeMethod_var)));
	}
}
// System.Object Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFieldInjectablesU3Ed__8_System_Collections_IEnumerator_get_Current_mBB3F36338798480F92A370420ED7EF43A331CC39 (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, const RuntimeMethod* method) 
{
	{
		InjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Zenject.InjectableInfo> Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::System.Collections.Generic.IEnumerable<Zenject.InjectableInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFieldInjectablesU3Ed__8_System_Collections_Generic_IEnumerableU3CZenject_InjectableInfoU3E_GetEnumerator_m6E6350EAE290270DFC6554994FD4DC9DE0F34AF3 (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* L_3 = (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738*)il2cpp_codegen_object_new(U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738_il2cpp_TypeInfo_var);
		U3CGetFieldInjectablesU3Ed__8__ctor_m73C7401AAA5CE20457F1170A71F02BB0E8284CAE(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* L_4 = V_0;
		Type_t* L_5 = __this->___U3CU3E3__type_4;
		L_4->___type_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___type_3), (void*)L_5);
		U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Zenject.TypeAnalyzer/<GetFieldInjectables>d__8::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFieldInjectablesU3Ed__8_System_Collections_IEnumerable_GetEnumerator_m137129785EB253BA8EE4B35DCD6C95D612BFA6C8 (U3CGetFieldInjectablesU3Ed__8_t46601250486E7760BB399407B41B5A05D50CD738* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetFieldInjectablesU3Ed__8_System_Collections_Generic_IEnumerableU3CZenject_InjectableInfoU3E_GetEnumerator_m6E6350EAE290270DFC6554994FD4DC9DE0F34AF3(__this, NULL);
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
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mAD3933459CB2A59E72E0CD52D7164A18598F69BD (U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Zenject.TypeAnalyzer/<>c__DisplayClass10_0::<GetOnlyPropertySetter>b__0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CGetOnlyPropertySetterU3Eb__0_m4FEEF3C40CE311FBB370177C2DDADAAB0AAF5730 (U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* __this, FieldInfo_t* ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA00507757DC3B7E80550592F47FC777DA207F289);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var writeableFields = allFields.Where(f => f.Name == string.Format("<{0}>k__BackingField", propertyName)).ToList();
		FieldInfo_t* L_0 = ___f0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->___propertyName_0;
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralA00507757DC3B7E80550592F47FC777DA207F289, L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass10_0::<GetOnlyPropertySetter>b__2(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CGetOnlyPropertySetterU3Eb__2_mECCEB2BAD35BAD17FEA56412489CC152D5AA553A (U3CU3Ec__DisplayClass10_0_t3FC850707BCF2DAFCE276A484A4F826C348A3150* __this, RuntimeObject* ___injectable0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t85BF1C5A502E06C64F55E4BBB10F5147C08A24B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m38AD404A2BBC86B65806EC531DAD25DB6E4AA1E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_1_U3CGetOnlyPropertySetterU3Eb__3_mC2FB7C315558B1DF213427245D5FF4A75098A55A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481* L_0 = (U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10_1__ctor_m112FCC140EE50412F5D1CEDC794109255FF72F94(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481* L_1 = V_0;
		RuntimeObject* L_2 = ___injectable0;
		L_1->___injectable_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___injectable_0), (void*)L_2);
		U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481* L_3 = V_0;
		RuntimeObject* L_4 = ___value1;
		L_3->___value_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___value_1), (void*)L_4);
		// return (injectable, value) => writeableFields.ForEach(f => f.SetValue(injectable, value));
		List_1_t2EC26D0ED018C658813F1744B58498EF88D4A3C7* L_5 = __this->___writeableFields_1;
		U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481* L_6 = V_0;
		Action_1_t85BF1C5A502E06C64F55E4BBB10F5147C08A24B1* L_7 = (Action_1_t85BF1C5A502E06C64F55E4BBB10F5147C08A24B1*)il2cpp_codegen_object_new(Action_1_t85BF1C5A502E06C64F55E4BBB10F5147C08A24B1_il2cpp_TypeInfo_var);
		Action_1__ctor_m819B21F3E857F07609D5D714AACCE865BC1D071B(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass10_1_U3CGetOnlyPropertySetterU3Eb__3_mC2FB7C315558B1DF213427245D5FF4A75098A55A_RuntimeMethod_var), NULL);
		List_1_ForEach_m38AD404A2BBC86B65806EC531DAD25DB6E4AA1E4(L_5, L_7, List_1_ForEach_m38AD404A2BBC86B65806EC531DAD25DB6E4AA1E4_RuntimeMethod_var);
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
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass10_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_1__ctor_m112FCC140EE50412F5D1CEDC794109255FF72F94 (U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass10_1::<GetOnlyPropertySetter>b__3(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_1_U3CGetOnlyPropertySetterU3Eb__3_mC2FB7C315558B1DF213427245D5FF4A75098A55A (U3CU3Ec__DisplayClass10_1_t887A145775934E34E9222A973B803DA4553B9481* __this, FieldInfo_t* ___f0, const RuntimeMethod* method) 
{
	{
		// return (injectable, value) => writeableFields.ForEach(f => f.SetValue(injectable, value));
		FieldInfo_t* L_0 = ___f0;
		RuntimeObject* L_1 = __this->___injectable_0;
		RuntimeObject* L_2 = __this->___value_1;
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_0, L_1, L_2, NULL);
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
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m954BE2FD616197CE3739F8CCE197EA3AB79C4BF1 (U3CU3Ec__DisplayClass11_0_t45B39717DBA5C541CBC86278F9AA8E119EA74BF5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass11_0::<CreateForMember>b__0(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CCreateForMemberU3Eb__0_m1E7B42D20E471EACC690B20250A5BF0746DF86DD (U3CU3Ec__DisplayClass11_0_t45B39717DBA5C541CBC86278F9AA8E119EA74BF5* __this, RuntimeObject* ___injectable0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// setter = ((object injectable, object value) => fieldInfo.SetValue(injectable, value));
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		RuntimeObject* L_1 = ___injectable0;
		RuntimeObject* L_2 = ___value1;
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_0, L_1, L_2, NULL);
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
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass11_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_1__ctor_mFB8C5CDE9B1C109BAE71877BBEE877C56FBCF8A1 (U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Zenject.TypeAnalyzer/<>c__DisplayClass11_1::<CreateForMember>b__1(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_1_U3CCreateForMemberU3Eb__1_mE3E3578F50FA35202F883510F5A31F091D237B2D (U3CU3Ec__DisplayClass11_1_tCAB2769275E7C2F9F634B3745D0F783A0F3E1343* __this, RuntimeObject* ___injectable0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// setter = ((object injectable, object value) => propInfo.SetValue(injectable, value, null));
		PropertyInfo_t* L_0 = __this->___propInfo_0;
		RuntimeObject* L_1 = ___injectable0;
		RuntimeObject* L_2 = ___value1;
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(23 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_0, L_1, L_2, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
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
// System.Collections.Generic.List`1<Zenject.TypeValuePair> Zenject.ValidationUtil::CreateDefaultArgs(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE4CB9AB1202E30A4175B37378F6F0A884213B6FB* ValidationUtil_CreateDefaultArgs_m7544ACF9668D019AFB13B91B0C5505D22D3D1C96 (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argTypes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisType_t_TisTypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_mDD0B5BF2E4E680E301D665A2D0B88C9A0CFE3930_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisTypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_m4C470C506595FC06B36EC76ED179219F68DD34EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateDefaultArgsU3Eb__0_0_mBC80ADDCABDA8589CE842C330612A01BA05E32CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629* G_B2_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B2_1 = NULL;
	Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629* G_B1_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B1_1 = NULL;
	{
		// return argTypes.Select(x => new TypeValuePair(x, x.GetDefaultValue())).ToList();
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___argTypes0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_il2cpp_TypeInfo_var);
		Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629* L_1 = ((U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_il2cpp_TypeInfo_var);
		U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F* L_3 = ((U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629* L_4 = (Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629*)il2cpp_codegen_object_new(Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629_il2cpp_TypeInfo_var);
		Func_2__ctor_m700F8BCE2DC5DE51EB0DCB5B3792297791C7FB9A(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CCreateDefaultArgsU3Eb__0_0_mBC80ADDCABDA8589CE842C330612A01BA05E32CA_RuntimeMethod_var), NULL);
		Func_2_tF18549C2A02DF6402CA849F9E3A169245E280629* L_5 = L_4;
		((U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisType_t_TisTypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_mDD0B5BF2E4E680E301D665A2D0B88C9A0CFE3930((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisType_t_TisTypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_mDD0B5BF2E4E680E301D665A2D0B88C9A0CFE3930_RuntimeMethod_var);
		List_1_tE4CB9AB1202E30A4175B37378F6F0A884213B6FB* L_7;
		L_7 = Enumerable_ToList_TisTypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_m4C470C506595FC06B36EC76ED179219F68DD34EE(L_6, Enumerable_ToList_TisTypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_m4C470C506595FC06B36EC76ED179219F68DD34EE_RuntimeMethod_var);
		return L_7;
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
// System.Void Zenject.ValidationUtil/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA85DB628A9DC3FBBCEA1DFB5065EF7C3106F8A01 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F* L_0 = (U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F*)il2cpp_codegen_object_new(U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m120140ED9E39CA4D797B5A0BA45E8CEC72B01255(L_0, NULL);
		((U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Zenject.ValidationUtil/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m120140ED9E39CA4D797B5A0BA45E8CEC72B01255 (U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Zenject.TypeValuePair Zenject.ValidationUtil/<>c::<CreateDefaultArgs>b__0_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A* U3CU3Ec_U3CCreateDefaultArgsU3Eb__0_0_mBC80ADDCABDA8589CE842C330612A01BA05E32CA (U3CU3Ec_t0584B604B5147618884DC5E469B309AACDCA038F* __this, Type_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return argTypes.Select(x => new TypeValuePair(x, x.GetDefaultValue())).ToList();
		Type_t* L_0 = ___x0;
		Type_t* L_1 = ___x0;
		RuntimeObject* L_2;
		L_2 = TypeExtensions_GetDefaultValue_m29FE2D568664EB1CB40CC6B2407DAD6755E41613(L_1, NULL);
		TypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A* L_3 = (TypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A*)il2cpp_codegen_object_new(TypeValuePair_t04DA8B5F4582C3E29C64C8EB007B11D66637967A_il2cpp_TypeInfo_var);
		TypeValuePair__ctor_mB1A5D813B999244E16187F290D2E6C74AC39961C(L_3, L_0, L_2, NULL);
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
// System.Void Zenject.ZenAutoInjecter::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenAutoInjecter_Construct_m1DB00EC167112DE161AC4A7D058F2D4ED5BA227F (ZenAutoInjecter_t3DAFF7852AA15BFFF5395DA6A23D2BA25C648FB9* __this, const RuntimeMethod* method) 
{
	{
		// if (!_hasStarted)
		bool L_0 = __this->____hasStarted_5;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw Assert.CreateException(
		//     "ZenAutoInjecter was injected!  Do not use ZenAutoInjecter for objects that are instantiated through zenject or which exist in the initial scene hierarchy");
		ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9* L_1;
		L_1 = Assert_CreateException_mAAD6DA0A595CA31D78D49B154C2A7749DDFAF343(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D35009E18A15CB7584F10CFB9BF2C2733DFD0BB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZenAutoInjecter_Construct_m1DB00EC167112DE161AC4A7D058F2D4ED5BA227F_RuntimeMethod_var)));
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Zenject.ZenAutoInjecter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenAutoInjecter_Start_mBA87214953D5C43CF14FBB3C51B89B70A374A3A4 (ZenAutoInjecter_t3DAFF7852AA15BFFF5395DA6A23D2BA25C648FB9* __this, const RuntimeMethod* method) 
{
	{
		// _hasStarted = true;
		__this->____hasStarted_5 = (bool)1;
		// LookupContainer().InjectGameObject(this.gameObject);
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_0;
		L_0 = ZenAutoInjecter_LookupContainer_mEBC6647FC2A4A9DE3A12BA588F2BFFEC0EC7C346(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		DiContainer_InjectGameObject_m39A61E50E6A45030E87BFCCB0E1006BEC0BAFAAF(L_0, L_1, NULL);
		// }
		return;
	}
}
// Zenject.DiContainer Zenject.ZenAutoInjecter::LookupContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* ZenAutoInjecter_LookupContainer_mEBC6647FC2A4A9DE3A12BA588F2BFFEC0EC7C346 (ZenAutoInjecter_t3DAFF7852AA15BFFF5395DA6A23D2BA25C648FB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerSources_t3E0F8969ECB86611F1AAF8FEE47710898A2B2CC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainer_Resolve_TisSceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56_mAE036D230C80FD5081A68BB54669DB6939E506D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_containerSource == ContainerSources.ProjectContext)
		int32_t L_0 = __this->____containerSource_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		// return ProjectContext.Instance.Container;
		ProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825* L_1;
		L_1 = ProjectContext_get_Instance_m31E3E1B48D8830D4445DE17E483CA4FB37D93B31(NULL);
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_2;
		L_2 = VirtualFuncInvoker0< DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* >::Invoke(4 /* Zenject.DiContainer Zenject.Context::get_Container() */, L_1);
		return L_2;
	}

IL_0014:
	{
		// Assert.IsEqual(_containerSource, ContainerSources.SceneContext);
		int32_t L_3 = __this->____containerSource_4;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(ContainerSources_t3E0F8969ECB86611F1AAF8FEE47710898A2B2CC2_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = 0;
		RuntimeObject* L_7 = Box(ContainerSources_t3E0F8969ECB86611F1AAF8FEE47710898A2B2CC2_il2cpp_TypeInfo_var, &L_6);
		Assert_IsEqual_mED53223A9DF123AF6720159D70F0DDB0F6A9C6A3(L_5, L_7, NULL);
		// return ProjectContext.Instance.Container.Resolve<SceneContextRegistry>()
		//     .GetSceneContextForScene(this.gameObject.scene).Container;
		ProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825* L_8;
		L_8 = ProjectContext_get_Instance_m31E3E1B48D8830D4445DE17E483CA4FB37D93B31(NULL);
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_9;
		L_9 = VirtualFuncInvoker0< DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* >::Invoke(4 /* Zenject.DiContainer Zenject.Context::get_Container() */, L_8);
		SceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56* L_10;
		L_10 = DiContainer_Resolve_TisSceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56_mAE036D230C80FD5081A68BB54669DB6939E506D7(L_9, DiContainer_Resolve_TisSceneContextRegistry_tD354D79057A76B95A6D6F01471DAC17B6EBD6A56_mAE036D230C80FD5081A68BB54669DB6939E506D7_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_12;
		L_12 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_11, NULL);
		SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_13;
		L_13 = SceneContextRegistry_GetSceneContextForScene_m93CA181B161E476B38759D3AA8102B548EB8E278(L_10, L_12, NULL);
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_14;
		L_14 = VirtualFuncInvoker0< DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* >::Invoke(4 /* Zenject.DiContainer Zenject.Context::get_Container() */, L_13);
		return L_14;
	}
}
// System.Void Zenject.ZenAutoInjecter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenAutoInjecter__ctor_m03CE83F81FC9029AE025D60DADAF8E562B166E70 (ZenAutoInjecter_t3DAFF7852AA15BFFF5395DA6A23D2BA25C648FB9* __this, const RuntimeMethod* method) 
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
// System.Void Zenject.ZenjectException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectException__ctor_mE027D5E78D20EE15B004C923CE66BFA54A52707B (ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(message)
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Zenject.ZenjectException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectException__ctor_m7A43E23DAF25DA9F70A2D0F476F66EAABA02D952 (ZenjectException_t1192A870501C6AC1719FF7A6182FE34169C7A6D9* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(message, innerException)
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void Zenject.ZenjectSceneLoader::.ctor(Zenject.SceneContext,Zenject.ProjectKernel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectSceneLoader__ctor_m362204AF96C2359D77867F21FBDDA0A1876B82A5 (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* ___sceneRoot0, ProjectKernel_t995911BE6D433E9F016917A4B1638126A90D8EBD* ___projectKernel1, const RuntimeMethod* method) 
{
	{
		// public ZenjectSceneLoader(
		//     SceneContext sceneRoot,
		//     ProjectKernel projectKernel)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _projectKernel = projectKernel;
		ProjectKernel_t995911BE6D433E9F016917A4B1638126A90D8EBD* L_0 = ___projectKernel1;
		__this->____projectKernel_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____projectKernel_0), (void*)L_0);
		// _sceneContainer = sceneRoot.Container;
		SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_1 = ___sceneRoot0;
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_2;
		L_2 = VirtualFuncInvoker0< DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* >::Invoke(4 /* Zenject.DiContainer Zenject.Context::get_Container() */, L_1);
		__this->____sceneContainer_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sceneContainer_1), (void*)L_2);
		// }
		return;
	}
}
// System.Void Zenject.ZenjectSceneLoader::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectSceneLoader_LoadScene_m806F83CE7A3BE01692AE49FD0E809AFB0496E0A5 (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	{
		// LoadScene(sceneName, LoadSceneMode.Single);
		String_t* L_0 = ___sceneName0;
		ZenjectSceneLoader_LoadScene_m3481F714913CD094FEE4713E9BB0B3D61F3CE00A(__this, L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void Zenject.ZenjectSceneLoader::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectSceneLoader_LoadScene_m3481F714913CD094FEE4713E9BB0B3D61F3CE00A (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, const RuntimeMethod* method) 
{
	{
		// LoadScene(sceneName, loadMode, null);
		String_t* L_0 = ___sceneName0;
		int32_t L_1 = ___loadMode1;
		ZenjectSceneLoader_LoadScene_mF97BC3656717743EF4701A25280EB76E448C2EF7(__this, L_0, L_1, (Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Zenject.ZenjectSceneLoader::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectSceneLoader_LoadScene_mF97BC3656717743EF4701A25280EB76E448C2EF7 (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings2, const RuntimeMethod* method) 
{
	{
		// LoadScene(sceneName, loadMode, extraBindings, LoadSceneRelationship.None);
		String_t* L_0 = ___sceneName0;
		int32_t L_1 = ___loadMode1;
		Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* L_2 = ___extraBindings2;
		ZenjectSceneLoader_LoadScene_m528284FA92FEB47A3203B14D4DE1C30C3CECAD93(__this, L_0, L_1, L_2, 0, NULL);
		// }
		return;
	}
}
// System.Void Zenject.ZenjectSceneLoader::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>,Zenject.LoadSceneRelationship)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectSceneLoader_LoadScene_m528284FA92FEB47A3203B14D4DE1C30C3CECAD93 (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings2, int32_t ___containerMode3, const RuntimeMethod* method) 
{
	{
		// LoadScene(sceneName, loadMode, extraBindings, containerMode, null);
		String_t* L_0 = ___sceneName0;
		int32_t L_1 = ___loadMode1;
		Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* L_2 = ___extraBindings2;
		int32_t L_3 = ___containerMode3;
		ZenjectSceneLoader_LoadScene_m4236AAB75AAA96FE49F9D9D3C8AE9A03E6FBDB8B(__this, L_0, L_1, L_2, L_3, (Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Zenject.ZenjectSceneLoader::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>,Zenject.LoadSceneRelationship,System.Action`1<Zenject.DiContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectSceneLoader_LoadScene_m4236AAB75AAA96FE49F9D9D3C8AE9A03E6FBDB8B (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings2, int32_t ___containerMode3, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindingsLate4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21535F5C39DF909FA40E00126F39C7152AB21669);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PrepareForLoadScene(loadMode, extraBindings, extraBindingsLate, containerMode);
		int32_t L_0 = ___loadMode1;
		Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* L_1 = ___extraBindings2;
		Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* L_2 = ___extraBindingsLate4;
		int32_t L_3 = ___containerMode3;
		ZenjectSceneLoader_PrepareForLoadScene_m56DFA9E873491F5E2FF42115E068CE83BA54F2D2(__this, L_0, L_1, L_2, L_3, NULL);
		// Assert.That(Application.CanStreamedLevelBeLoaded(sceneName),
		//     "Unable to load scene '{0}'", sceneName);
		String_t* L_4 = ___sceneName0;
		bool L_5;
		L_5 = Application_CanStreamedLevelBeLoaded_mC3B7683DBAB183CFBEEDB2025580E1754B920BD4(L_4, NULL);
		String_t* L_6 = ___sceneName0;
		Assert_That_m3E74483F729A9A222574B7C43EAAA0CDA85199A7(L_5, _stringLiteral21535F5C39DF909FA40E00126F39C7152AB21669, L_6, NULL);
		// SceneManager.LoadScene(sceneName, loadMode);
		String_t* L_7 = ___sceneName0;
		int32_t L_8 = ___loadMode1;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(L_7, L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.AsyncOperation Zenject.ZenjectSceneLoader::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ZenjectSceneLoader_LoadSceneAsync_m3F59C120480A06318D6E49BDCE574180218FE7BA (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	{
		// return LoadSceneAsync(sceneName, LoadSceneMode.Single);
		String_t* L_0 = ___sceneName0;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_1;
		L_1 = ZenjectSceneLoader_LoadSceneAsync_m9A1A9C9B6C582021B3CC1DF34B2D29E6F2896FD7(__this, L_0, 0, NULL);
		return L_1;
	}
}
// UnityEngine.AsyncOperation Zenject.ZenjectSceneLoader::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ZenjectSceneLoader_LoadSceneAsync_m9A1A9C9B6C582021B3CC1DF34B2D29E6F2896FD7 (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, const RuntimeMethod* method) 
{
	{
		// return LoadSceneAsync(sceneName, loadMode, null);
		String_t* L_0 = ___sceneName0;
		int32_t L_1 = ___loadMode1;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_2;
		L_2 = ZenjectSceneLoader_LoadSceneAsync_mADC6D2F6B07B63EB0DEE01BF720722893DA956FC(__this, L_0, L_1, (Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8*)NULL, NULL);
		return L_2;
	}
}
// UnityEngine.AsyncOperation Zenject.ZenjectSceneLoader::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ZenjectSceneLoader_LoadSceneAsync_mADC6D2F6B07B63EB0DEE01BF720722893DA956FC (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings2, const RuntimeMethod* method) 
{
	{
		// return LoadSceneAsync(sceneName, loadMode, extraBindings, LoadSceneRelationship.None);
		String_t* L_0 = ___sceneName0;
		int32_t L_1 = ___loadMode1;
		Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* L_2 = ___extraBindings2;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_3;
		L_3 = ZenjectSceneLoader_LoadSceneAsync_m253625CA12413F9B41430FE4676150647FADD8E4(__this, L_0, L_1, L_2, 0, NULL);
		return L_3;
	}
}
// UnityEngine.AsyncOperation Zenject.ZenjectSceneLoader::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>,Zenject.LoadSceneRelationship)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ZenjectSceneLoader_LoadSceneAsync_m253625CA12413F9B41430FE4676150647FADD8E4 (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings2, int32_t ___containerMode3, const RuntimeMethod* method) 
{
	{
		// return LoadSceneAsync(
		//     sceneName, loadMode, extraBindings, containerMode, null);
		String_t* L_0 = ___sceneName0;
		int32_t L_1 = ___loadMode1;
		Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* L_2 = ___extraBindings2;
		int32_t L_3 = ___containerMode3;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4;
		L_4 = ZenjectSceneLoader_LoadSceneAsync_mA833C4284EA9AC25A1C27A4B74EACF24FF9257FB(__this, L_0, L_1, L_2, L_3, (Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8*)NULL, NULL);
		return L_4;
	}
}
// UnityEngine.AsyncOperation Zenject.ZenjectSceneLoader::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>,Zenject.LoadSceneRelationship,System.Action`1<Zenject.DiContainer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ZenjectSceneLoader_LoadSceneAsync_mA833C4284EA9AC25A1C27A4B74EACF24FF9257FB (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, String_t* ___sceneName0, int32_t ___loadMode1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings2, int32_t ___containerMode3, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindingsLate4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21535F5C39DF909FA40E00126F39C7152AB21669);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PrepareForLoadScene(loadMode, extraBindings, extraBindingsLate, containerMode);
		int32_t L_0 = ___loadMode1;
		Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* L_1 = ___extraBindings2;
		Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* L_2 = ___extraBindingsLate4;
		int32_t L_3 = ___containerMode3;
		ZenjectSceneLoader_PrepareForLoadScene_m56DFA9E873491F5E2FF42115E068CE83BA54F2D2(__this, L_0, L_1, L_2, L_3, NULL);
		// Assert.That(Application.CanStreamedLevelBeLoaded(sceneName),
		//     "Unable to load scene '{0}'", sceneName);
		String_t* L_4 = ___sceneName0;
		bool L_5;
		L_5 = Application_CanStreamedLevelBeLoaded_mC3B7683DBAB183CFBEEDB2025580E1754B920BD4(L_4, NULL);
		String_t* L_6 = ___sceneName0;
		Assert_That_m3E74483F729A9A222574B7C43EAAA0CDA85199A7(L_5, _stringLiteral21535F5C39DF909FA40E00126F39C7152AB21669, L_6, NULL);
		// return SceneManager.LoadSceneAsync(sceneName, loadMode);
		String_t* L_7 = ___sceneName0;
		int32_t L_8 = ___loadMode1;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_9;
		L_9 = SceneManager_LoadSceneAsync_m29D55D2C6CB7A019B26DA3F44C0881FF6AC491EC(L_7, L_8, NULL);
		return L_9;
	}
}
// System.Void Zenject.ZenjectSceneLoader::PrepareForLoadScene(UnityEngine.SceneManagement.LoadSceneMode,System.Action`1<Zenject.DiContainer>,System.Action`1<Zenject.DiContainer>,Zenject.LoadSceneRelationship)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectSceneLoader_PrepareForLoadScene_m56DFA9E873491F5E2FF42115E068CE83BA54F2D2 (ZenjectSceneLoader_t135B82F20A24D62FE8219F4C3143C80039DCA25C* __this, int32_t ___loadMode0, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindings1, Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* ___extraBindingsLate2, int32_t ___containerMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiContainerU5BU5D_t5FA4C878B60C69868A9D2192B4D63D4925F49038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadSceneRelationship_t7616F264B3266B6F976690ADE485DDAB6EB4224F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (loadMode == LoadSceneMode.Single)
		int32_t L_0 = ___loadMode0;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		// Assert.IsEqual(containerMode, LoadSceneRelationship.None);
		int32_t L_1 = ___containerMode3;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(LoadSceneRelationship_t7616F264B3266B6F976690ADE485DDAB6EB4224F_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = 0;
		RuntimeObject* L_5 = Box(LoadSceneRelationship_t7616F264B3266B6F976690ADE485DDAB6EB4224F_il2cpp_TypeInfo_var, &L_4);
		Assert_IsEqual_mED53223A9DF123AF6720159D70F0DDB0F6A9C6A3(L_3, L_5, NULL);
		// _projectKernel.ForceUnloadAllScenes();
		ProjectKernel_t995911BE6D433E9F016917A4B1638126A90D8EBD* L_6 = __this->____projectKernel_0;
		ProjectKernel_ForceUnloadAllScenes_m5E8BCA8E89F35DCD0E758F9BE544AA6CD28AC201(L_6, (bool)0, NULL);
	}

IL_0021:
	{
		// if (containerMode == LoadSceneRelationship.None)
		int32_t L_7 = ___containerMode3;
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		// SceneContext.ParentContainers = null;
		((SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_StaticFields*)il2cpp_codegen_static_fields_for(SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_il2cpp_TypeInfo_var))->___ParentContainers_14 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_StaticFields*)il2cpp_codegen_static_fields_for(SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_il2cpp_TypeInfo_var))->___ParentContainers_14), (void*)(RuntimeObject*)NULL);
		goto IL_006a;
	}

IL_002d:
	{
		// else if (containerMode == LoadSceneRelationship.Child)
		int32_t L_8 = ___containerMode3;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0048;
		}
	}
	{
		// SceneContext.ParentContainers = new DiContainer[] { _sceneContainer };
		DiContainerU5BU5D_t5FA4C878B60C69868A9D2192B4D63D4925F49038* L_9 = (DiContainerU5BU5D_t5FA4C878B60C69868A9D2192B4D63D4925F49038*)(DiContainerU5BU5D_t5FA4C878B60C69868A9D2192B4D63D4925F49038*)SZArrayNew(DiContainerU5BU5D_t5FA4C878B60C69868A9D2192B4D63D4925F49038_il2cpp_TypeInfo_var, (uint32_t)1);
		DiContainerU5BU5D_t5FA4C878B60C69868A9D2192B4D63D4925F49038* L_10 = L_9;
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_11 = __this->____sceneContainer_1;
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D*)L_11);
		((SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_StaticFields*)il2cpp_codegen_static_fields_for(SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_il2cpp_TypeInfo_var))->___ParentContainers_14 = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_StaticFields*)il2cpp_codegen_static_fields_for(SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_il2cpp_TypeInfo_var))->___ParentContainers_14), (void*)(RuntimeObject*)L_10);
		goto IL_006a;
	}

IL_0048:
	{
		// Assert.IsEqual(containerMode, LoadSceneRelationship.Sibling);
		int32_t L_12 = ___containerMode3;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(LoadSceneRelationship_t7616F264B3266B6F976690ADE485DDAB6EB4224F_il2cpp_TypeInfo_var, &L_13);
		int32_t L_15 = 2;
		RuntimeObject* L_16 = Box(LoadSceneRelationship_t7616F264B3266B6F976690ADE485DDAB6EB4224F_il2cpp_TypeInfo_var, &L_15);
		Assert_IsEqual_mED53223A9DF123AF6720159D70F0DDB0F6A9C6A3(L_14, L_16, NULL);
		// SceneContext.ParentContainers = _sceneContainer.ParentContainers;
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_17 = __this->____sceneContainer_1;
		RuntimeObject* L_18;
		L_18 = DiContainer_get_ParentContainers_m0614507A32CB4D8382BB174CB30B3B288F18106C_inline(L_17, NULL);
		((SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_StaticFields*)il2cpp_codegen_static_fields_for(SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_il2cpp_TypeInfo_var))->___ParentContainers_14 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_StaticFields*)il2cpp_codegen_static_fields_for(SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_il2cpp_TypeInfo_var))->___ParentContainers_14), (void*)L_18);
	}

IL_006a:
	{
		// SceneContext.ExtraBindingsInstallMethod = extraBindings;
		Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* L_19 = ___extraBindings1;
		((SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_StaticFields*)il2cpp_codegen_static_fields_for(SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_il2cpp_TypeInfo_var))->___ExtraBindingsInstallMethod_12 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_StaticFields*)il2cpp_codegen_static_fields_for(SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_il2cpp_TypeInfo_var))->___ExtraBindingsInstallMethod_12), (void*)L_19);
		// SceneContext.ExtraBindingsLateInstallMethod = extraBindingsLate;
		Action_1_tA566F2322083532E75E06C1479BCB7DE7F3793A8* L_20 = ___extraBindingsLate2;
		((SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_StaticFields*)il2cpp_codegen_static_fields_for(SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_il2cpp_TypeInfo_var))->___ExtraBindingsLateInstallMethod_13 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_StaticFields*)il2cpp_codegen_static_fields_for(SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_il2cpp_TypeInfo_var))->___ExtraBindingsLateInstallMethod_13), (void*)L_20);
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
// System.Void Zenject.PostInjectableInfo::.ctor(System.Reflection.MethodInfo,System.Collections.Generic.List`1<Zenject.InjectableInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostInjectableInfo__ctor_mEBC7EEAC0C7E406E695831B971A7DDD019039E63 (PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434* __this, MethodInfo_t* ___methodInfo0, List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* ___injectableInfo1, const RuntimeMethod* method) 
{
	{
		// public PostInjectableInfo(
		//     MethodInfo methodInfo, List<InjectableInfo> injectableInfo)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _methodInfo = methodInfo;
		MethodInfo_t* L_0 = ___methodInfo0;
		__this->____methodInfo_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____methodInfo_0), (void*)L_0);
		// _injectableInfo = injectableInfo;
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_1 = ___injectableInfo1;
		__this->____injectableInfo_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____injectableInfo_1), (void*)L_1);
		// }
		return;
	}
}
// System.Reflection.MethodInfo Zenject.PostInjectableInfo::get_MethodInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PostInjectableInfo_get_MethodInfo_mDC7315DA19BCE55C69F563C27B88DFE831940FA2 (PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434* __this, const RuntimeMethod* method) 
{
	{
		// get { return _methodInfo; }
		MethodInfo_t* L_0 = __this->____methodInfo_0;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.PostInjectableInfo::get_InjectableInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PostInjectableInfo_get_InjectableInfo_mF5EBDF92A43E7C3AF715D45CEF9068CBFEAE693A (PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434* __this, const RuntimeMethod* method) 
{
	{
		// get { return _injectableInfo; }
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_0 = __this->____injectableInfo_1;
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
// System.Void Zenject.ZenjectTypeInfo::.ctor(System.Type,System.Collections.Generic.List`1<Zenject.PostInjectableInfo>,System.Reflection.ConstructorInfo,System.Collections.Generic.List`1<Zenject.InjectableInfo>,System.Collections.Generic.List`1<Zenject.InjectableInfo>,System.Collections.Generic.List`1<Zenject.InjectableInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenjectTypeInfo__ctor_m6F91A916326D11E76E1DAC48818C197489E50F91 (ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* __this, Type_t* ___typeAnalyzed0, List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* ___postInjectMethods1, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___injectConstructor2, List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* ___fieldInjectables3, List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* ___propertyInjectables4, List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* ___constructorInjectables5, const RuntimeMethod* method) 
{
	{
		// public ZenjectTypeInfo(
		//     Type typeAnalyzed,
		//     List<PostInjectableInfo> postInjectMethods,
		//     ConstructorInfo injectConstructor,
		//     List<InjectableInfo> fieldInjectables,
		//     List<InjectableInfo> propertyInjectables,
		//     List<InjectableInfo> constructorInjectables)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _postInjectMethods = postInjectMethods;
		List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* L_0 = ___postInjectMethods1;
		__this->____postInjectMethods_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____postInjectMethods_0), (void*)L_0);
		// _fieldInjectables = fieldInjectables;
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_1 = ___fieldInjectables3;
		__this->____fieldInjectables_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fieldInjectables_2), (void*)L_1);
		// _propertyInjectables = propertyInjectables;
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_2 = ___propertyInjectables4;
		__this->____propertyInjectables_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyInjectables_3), (void*)L_2);
		// _constructorInjectables = constructorInjectables;
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_3 = ___constructorInjectables5;
		__this->____constructorInjectables_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____constructorInjectables_1), (void*)L_3);
		// _injectConstructor = injectConstructor;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_4 = ___injectConstructor2;
		__this->____injectConstructor_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____injectConstructor_4), (void*)L_4);
		// _typeAnalyzed = typeAnalyzed;
		Type_t* L_5 = ___typeAnalyzed0;
		__this->____typeAnalyzed_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____typeAnalyzed_5), (void*)L_5);
		// }
		return;
	}
}
// System.Type Zenject.ZenjectTypeInfo::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ZenjectTypeInfo_get_Type_mB4B0B05C816358239A89509B178514BAA540AD1D (ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* __this, const RuntimeMethod* method) 
{
	{
		// get { return _typeAnalyzed; }
		Type_t* L_0 = __this->____typeAnalyzed_5;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.PostInjectableInfo> Zenject.ZenjectTypeInfo::get_PostInjectMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenjectTypeInfo_get_PostInjectMethods_m6660CEF443110BFE911FC613E7706A114BDDB124 (ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* __this, const RuntimeMethod* method) 
{
	{
		// get { return _postInjectMethods; }
		List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* L_0 = __this->____postInjectMethods_0;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.ZenjectTypeInfo::get_AllInjectables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenjectTypeInfo_get_AllInjectables_m2469F156A7C3E605144D9B5460409D2DF4CE2458 (ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m64315434DB7EAF42E2A44B55EF9285E16E08DA63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisPostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m84785C4F7BDC740687D990C0E637370A9FB10FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7A911A55255256022EB742741E520F8931A733CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_AllInjectablesU3Eb__12_0_mE3B01BA9553D8A055899AE43A12DDF16D2CE1AE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t7A911A55255256022EB742741E520F8931A733CC* G_B2_0 = NULL;
	List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	Func_2_t7A911A55255256022EB742741E520F8931A733CC* G_B1_0 = NULL;
	List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	{
		// return _constructorInjectables.Concat(_fieldInjectables).Concat(_propertyInjectables)
		//     .Concat(_postInjectMethods.SelectMany(x => x.InjectableInfo));
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_0 = __this->____constructorInjectables_1;
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_1 = __this->____fieldInjectables_2;
		RuntimeObject* L_2;
		L_2 = Enumerable_Concat_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m64315434DB7EAF42E2A44B55EF9285E16E08DA63(L_0, L_1, Enumerable_Concat_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m64315434DB7EAF42E2A44B55EF9285E16E08DA63_RuntimeMethod_var);
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_3 = __this->____propertyInjectables_3;
		RuntimeObject* L_4;
		L_4 = Enumerable_Concat_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m64315434DB7EAF42E2A44B55EF9285E16E08DA63(L_2, L_3, Enumerable_Concat_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m64315434DB7EAF42E2A44B55EF9285E16E08DA63_RuntimeMethod_var);
		List_1_t5A1567B8EF93732A8DC3A6184C7818728B7929FC* L_5 = __this->____postInjectMethods_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_il2cpp_TypeInfo_var);
		Func_2_t7A911A55255256022EB742741E520F8931A733CC* L_6 = ((U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1;
		Func_2_t7A911A55255256022EB742741E520F8931A733CC* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		G_B1_2 = L_4;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			G_B2_2 = L_4;
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_il2cpp_TypeInfo_var);
		U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176* L_8 = ((U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7A911A55255256022EB742741E520F8931A733CC* L_9 = (Func_2_t7A911A55255256022EB742741E520F8931A733CC*)il2cpp_codegen_object_new(Func_2_t7A911A55255256022EB742741E520F8931A733CC_il2cpp_TypeInfo_var);
		Func_2__ctor_mD47FAD4D5024765677D13E0A6B3918BAF4B0D405(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3Cget_AllInjectablesU3Eb__12_0_mE3B01BA9553D8A055899AE43A12DDF16D2CE1AE0_RuntimeMethod_var), NULL);
		Func_2_t7A911A55255256022EB742741E520F8931A733CC* L_10 = L_9;
		((U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1), (void*)L_10);
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0041:
	{
		RuntimeObject* L_11;
		L_11 = Enumerable_SelectMany_TisPostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m84785C4F7BDC740687D990C0E637370A9FB10FB3(G_B2_1, G_B2_0, Enumerable_SelectMany_TisPostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m84785C4F7BDC740687D990C0E637370A9FB10FB3_RuntimeMethod_var);
		RuntimeObject* L_12;
		L_12 = Enumerable_Concat_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m64315434DB7EAF42E2A44B55EF9285E16E08DA63(G_B2_2, L_11, Enumerable_Concat_TisInjectableInfo_t2FAB3BA0D59DA6E3D6190E459A57D6131AEF5201_m64315434DB7EAF42E2A44B55EF9285E16E08DA63_RuntimeMethod_var);
		return L_12;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.ZenjectTypeInfo::get_FieldInjectables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenjectTypeInfo_get_FieldInjectables_mB58246750FF702EB06157CFCA7A887D567A28559 (ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fieldInjectables; }
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_0 = __this->____fieldInjectables_2;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.ZenjectTypeInfo::get_PropertyInjectables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenjectTypeInfo_get_PropertyInjectables_mF72AB195EC687278DB3BB04380A4A83A5B8F3C81 (ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* __this, const RuntimeMethod* method) 
{
	{
		// get { return _propertyInjectables; }
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_0 = __this->____propertyInjectables_3;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.ZenjectTypeInfo::get_ConstructorInjectables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenjectTypeInfo_get_ConstructorInjectables_mC3AAE537E0E560076BB59EEA95F0CFA8C3BBB045 (ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* __this, const RuntimeMethod* method) 
{
	{
		// get { return _constructorInjectables; }
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_0 = __this->____constructorInjectables_1;
		return L_0;
	}
}
// System.Reflection.ConstructorInfo Zenject.ZenjectTypeInfo::get_InjectConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ZenjectTypeInfo_get_InjectConstructor_m4E0D9B88F3A7945EE5D2743DBEEFC27BF941D0AA (ZenjectTypeInfo_t6B3FD49C85E462A8240FD5F3D4C8C46DCFA7761D* __this, const RuntimeMethod* method) 
{
	{
		// get { return _injectConstructor; }
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_0 = __this->____injectConstructor_4;
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
// System.Void Zenject.ZenjectTypeInfo/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1C17EDC87CB541891E41E80D3CAAB6E24C88C9FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176* L_0 = (U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176*)il2cpp_codegen_object_new(U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE7F813473998F25F8A6015C3E1D47415ABCF9903(L_0, NULL);
		((U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Zenject.ZenjectTypeInfo/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE7F813473998F25F8A6015C3E1D47415ABCF9903 (U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo> Zenject.ZenjectTypeInfo/<>c::<get_AllInjectables>b__12_0(Zenject.PostInjectableInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3Cget_AllInjectablesU3Eb__12_0_mE3B01BA9553D8A055899AE43A12DDF16D2CE1AE0 (U3CU3Ec_t8B55670204DDE66064293A118BB69E6BC74DA176* __this, PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434* ___x0, const RuntimeMethod* method) 
{
	{
		// .Concat(_postInjectMethods.SelectMany(x => x.InjectableInfo));
		PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434* L_0 = ___x0;
		RuntimeObject* L_1;
		L_1 = PostInjectableInfo_get_InjectableInfo_mF5EBDF92A43E7C3AF715D45CEF9068CBFEAE693A_inline(L_0, NULL);
		return L_1;
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
// System.Void Zenject.ValidationMarker::.ctor(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationMarker__ctor_m662FDE909CDD331DA1263B5182E593A143E2FEDC (ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C* __this, Type_t* ___markedType0, bool ___instantiateFailed1, const RuntimeMethod* method) 
{
	{
		// public ValidationMarker(
		//     Type markedType, bool instantiateFailed)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// MarkedType = markedType;
		Type_t* L_0 = ___markedType0;
		ValidationMarker_set_MarkedType_mC430D15A1D0E0EF31DFF62C48A7C4C60239A8E7E_inline(__this, L_0, NULL);
		// InstantiateFailed = instantiateFailed;
		bool L_1 = ___instantiateFailed1;
		ValidationMarker_set_InstantiateFailed_mE33C5E11A58F4FFB578745B7CA0ED16992C9656D_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Zenject.ValidationMarker::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationMarker__ctor_m1E106EBDC89DD48BD1671FB8B5941F56E811CB7D (ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C* __this, Type_t* ___markedType0, const RuntimeMethod* method) 
{
	{
		// : this(markedType, false)
		Type_t* L_0 = ___markedType0;
		ValidationMarker__ctor_m662FDE909CDD331DA1263B5182E593A143E2FEDC(__this, L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean Zenject.ValidationMarker::get_InstantiateFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValidationMarker_get_InstantiateFailed_m43313B0636DBC2D977FF328C0CEACE4E11120676 (ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CInstantiateFailedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Zenject.ValidationMarker::set_InstantiateFailed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationMarker_set_InstantiateFailed_mE33C5E11A58F4FFB578745B7CA0ED16992C9656D (ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___value0;
		__this->___U3CInstantiateFailedU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Type Zenject.ValidationMarker::get_MarkedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ValidationMarker_get_MarkedType_m007124A290F570AE01787A7A4A4A74CE66411CC8 (ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Type_t* L_0 = __this->___U3CMarkedTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Zenject.ValidationMarker::set_MarkedType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationMarker_set_MarkedType_mC430D15A1D0E0EF31DFF62C48A7C4C60239A8E7E (ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		Type_t* L_0 = ___value0;
		__this->___U3CMarkedTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMarkedTypeU3Ek__BackingField_1), (void*)L_0);
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
// System.Boolean Zenject.Internal.ZenUtilInternal::IsNull(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZenUtilInternal_IsNull_m9EECC89B4A449CBB73EF8A725974A39BE366F047 (RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		// return obj == null || obj.Equals(null);
		RuntimeObject* L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_1, NULL);
		return L_2;
	}

IL_000b:
	{
		return (bool)1;
	}
}
// System.Boolean Zenject.Internal.ZenUtilInternal::AreFunctionsEqual(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZenUtilInternal_AreFunctionsEqual_mEB893924FDD6F4CE5DD2AA4B7D32D89652842624 (Delegate_t* ___left0, Delegate_t* ___right1, const RuntimeMethod* method) 
{
	{
		// return left.Target == right.Target && left.Method() == right.Method();
		Delegate_t* L_0 = ___left0;
		RuntimeObject* L_1;
		L_1 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_0, NULL);
		Delegate_t* L_2 = ___right1;
		RuntimeObject* L_3;
		L_3 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_2, NULL);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		Delegate_t* L_4 = ___left0;
		MethodInfo_t* L_5;
		L_5 = TypeExtensions_Method_m942C7846981011AFDD9A0A31C655520D2E1D5BE4(L_4, NULL);
		Delegate_t* L_6 = ___right1;
		MethodInfo_t* L_7;
		L_7 = TypeExtensions_Method_m942C7846981011AFDD9A0A31C655520D2E1D5BE4(L_6, NULL);
		bool L_8;
		L_8 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_5, L_7, NULL);
		return L_8;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Int32 Zenject.Internal.ZenUtilInternal::GetInheritanceDelta(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZenUtilInternal_GetInheritanceDelta_m5F54EA60357475A7DCDC10C22A2A6C086E9A9C70 (Type_t* ___derived0, Type_t* ___parent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t* V_1 = NULL;
	{
		// Assert.That(derived.DerivesFromOrEqual(parent));
		Type_t* L_0 = ___derived0;
		Type_t* L_1 = ___parent1;
		bool L_2;
		L_2 = TypeExtensions_DerivesFromOrEqual_m6BFB2950495FF37C00DFC4F74534E7850293C210(L_0, L_1, NULL);
		Assert_That_m83A61B69B6C128204755435348EA0C90439CBCD0(L_2, NULL);
		// if (parent.IsInterface())
		Type_t* L_3 = ___parent1;
		bool L_4;
		L_4 = TypeExtensions_IsInterface_m535252AC61E4AF086957C76571817E3602A130B7(L_3, NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0016:
	{
		// if (derived == parent)
		Type_t* L_5 = ___derived0;
		Type_t* L_6 = ___parent1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0021;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0021:
	{
		// int distance = 1;
		V_0 = 1;
		// Type child = derived;
		Type_t* L_8 = ___derived0;
		V_1 = L_8;
		goto IL_002b;
	}

IL_0027:
	{
		// distance++;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002b:
	{
		// while ((child = child.BaseType()) != parent)
		Type_t* L_10 = V_1;
		Type_t* L_11;
		L_11 = TypeExtensions_BaseType_mA964FE843A6999379B93BE824D517E09B78FD044(L_10, NULL);
		Type_t* L_12 = L_11;
		V_1 = L_12;
		Type_t* L_13 = ___parent1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_12, L_13, NULL);
		if (L_14)
		{
			goto IL_0027;
		}
	}
	{
		// return distance;
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.SceneContext> Zenject.Internal.ZenUtilInternal::GetAllSceneContexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenUtilInternal_GetAllSceneContexts_m83B2831EF26DA4C50C8216CCE4E2FE87C6464507 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* L_0 = (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4*)il2cpp_codegen_object_new(U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4_il2cpp_TypeInfo_var);
		U3CGetAllSceneContextsU3Ed__3__ctor_mBCFB2BB083C5C4CDABBB5C3DD75C4CACF5672440(L_0, ((int32_t)-2), NULL);
		return L_0;
	}
}
// System.Void Zenject.Internal.ZenUtilInternal::GetInjectableMonoBehaviours(UnityEngine.SceneManagement.Scene,System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenUtilInternal_GetInjectableMonoBehaviours_mE1AD61093FC53EA68389CAE90449863962D8BAE8 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ___monoBehaviours1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBF08A45CFD58B2A76F18AFEE729870000EDAF4FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// foreach (var rootObj in GetRootGameObjects(scene))
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___scene0;
		RuntimeObject* L_1;
		L_1 = ZenUtilInternal_GetRootGameObjects_mA45CC84DE67FC7E1DBDA14D68FB6AB2927E4D47E(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>::GetEnumerator() */, IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0038;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0038:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_000e_1:
			{
				// foreach (var rootObj in GetRootGameObjects(scene))
				RuntimeObject* L_5 = V_0;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
				L_6 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>::get_Current() */, IEnumerator_1_tBF08A45CFD58B2A76F18AFEE729870000EDAF4FC_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// if (rootObj != null)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_8;
				L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_8)
				{
					goto IL_0025_1;
				}
			}
			{
				// GetInjectableMonoBehaviours(rootObj, monoBehaviours);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
				List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* L_10 = ___monoBehaviours1;
				ZenUtilInternal_GetInjectableMonoBehaviours_m9BE7B0A558CCA2CD75C911FB46519BEFB2F665AA(L_9, L_10, NULL);
			}

IL_0025_1:
			{
				// foreach (var rootObj in GetRootGameObjects(scene))
				RuntimeObject* L_11 = V_0;
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Zenject.Internal.ZenUtilInternal::GetInjectableMonoBehaviours(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenUtilInternal_GetInjectableMonoBehaviours_m9BE7B0A558CCA2CD75C911FB46519BEFB2F665AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* ___injectableComponents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0CFAE58E748FAFFB98501EFAE1703F6F39E8BE72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0D16ECB497C9DF4D43F0E90CDB7987F5CB7CA446_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_DerivesFromOrEqual_TisGameObjectContext_tA110077B8B5A087C1CE15C7C266B19DA70049160_m5EB55130BA73417C20DDCEABBB024041BC23D3A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* V_0 = NULL;
	int32_t V_1 = 0;
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* V_2 = NULL;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	int32_t V_5 = 0;
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* V_6 = NULL;
	{
		// if (gameObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// var monoBehaviours = gameObject.GetComponents<MonoBehaviour>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___gameObject0;
		MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* L_3;
		L_3 = GameObject_GetComponents_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0CFAE58E748FAFFB98501EFAE1703F6F39E8BE72(L_2, GameObject_GetComponents_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0CFAE58E748FAFFB98501EFAE1703F6F39E8BE72_RuntimeMethod_var);
		V_0 = L_3;
		// for (int i = 0; i < monoBehaviours.Length; i++)
		V_1 = 0;
		goto IL_003b;
	}

IL_0015:
	{
		// var monoBehaviour = monoBehaviours[i];
		MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// if (monoBehaviour != null
		//     && monoBehaviour.GetType().DerivesFromOrEqual<GameObjectContext>())
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_8 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_10 = V_2;
		Type_t* L_11;
		L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_10, NULL);
		bool L_12;
		L_12 = TypeExtensions_DerivesFromOrEqual_TisGameObjectContext_tA110077B8B5A087C1CE15C7C266B19DA70049160_m5EB55130BA73417C20DDCEABBB024041BC23D3A6(L_11, TypeExtensions_DerivesFromOrEqual_TisGameObjectContext_tA110077B8B5A087C1CE15C7C266B19DA70049160_m5EB55130BA73417C20DDCEABBB024041BC23D3A6_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0037;
		}
	}
	{
		// injectableComponents.Add(monoBehaviour);
		List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* L_13 = ___injectableComponents1;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_14 = V_2;
		List_1_Add_m0D16ECB497C9DF4D43F0E90CDB7987F5CB7CA446_inline(L_13, L_14, List_1_Add_m0D16ECB497C9DF4D43F0E90CDB7987F5CB7CA446_RuntimeMethod_var);
		// return;
		return;
	}

IL_0037:
	{
		// for (int i = 0; i < monoBehaviours.Length; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003b:
	{
		// for (int i = 0; i < monoBehaviours.Length; i++)
		int32_t L_16 = V_1;
		MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// for (int i = 0; i < gameObject.transform.childCount; i++)
		V_3 = 0;
		goto IL_006e;
	}

IL_0045:
	{
		// var child = gameObject.transform.GetChild(i);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = ___gameObject0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		int32_t L_20 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_19, L_20, NULL);
		V_4 = L_21;
		// if (child != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_006a;
		}
	}
	{
		// GetInjectableMonoBehaviours(child.gameObject, injectableComponents);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* L_26 = ___injectableComponents1;
		ZenUtilInternal_GetInjectableMonoBehaviours_m9BE7B0A558CCA2CD75C911FB46519BEFB2F665AA(L_25, L_26, NULL);
	}

IL_006a:
	{
		// for (int i = 0; i < gameObject.transform.childCount; i++)
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_006e:
	{
		// for (int i = 0; i < gameObject.transform.childCount; i++)
		int32_t L_28 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = ___gameObject0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		int32_t L_31;
		L_31 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_30, NULL);
		if ((((int32_t)L_28) < ((int32_t)L_31)))
		{
			goto IL_0045;
		}
	}
	{
		// for (int i = 0; i < monoBehaviours.Length; i++)
		V_5 = 0;
		goto IL_00ad;
	}

IL_0081:
	{
		// var monoBehaviour = monoBehaviours[i];
		MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* L_32 = V_0;
		int32_t L_33 = V_5;
		int32_t L_34 = L_33;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_6 = L_35;
		// if (monoBehaviour != null
		//     && IsInjectableMonoBehaviourType(monoBehaviour.GetType()))
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_36 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_00a7;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_38 = V_6;
		Type_t* L_39;
		L_39 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_38, NULL);
		bool L_40;
		L_40 = ZenUtilInternal_IsInjectableMonoBehaviourType_m683FBB8F1A30855DFF2B4186B505370662E8DDDC(L_39, NULL);
		if (!L_40)
		{
			goto IL_00a7;
		}
	}
	{
		// injectableComponents.Add(monoBehaviour);
		List_1_tCB9190A56C65FD59CE07C6A0EA71F30067A43D81* L_41 = ___injectableComponents1;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_42 = V_6;
		List_1_Add_m0D16ECB497C9DF4D43F0E90CDB7987F5CB7CA446_inline(L_41, L_42, List_1_Add_m0D16ECB497C9DF4D43F0E90CDB7987F5CB7CA446_RuntimeMethod_var);
	}

IL_00a7:
	{
		// for (int i = 0; i < monoBehaviours.Length; i++)
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ad:
	{
		// for (int i = 0; i < monoBehaviours.Length; i++)
		int32_t L_44 = V_5;
		MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* L_45 = V_0;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_0081;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Zenject.Internal.ZenUtilInternal::IsInjectableMonoBehaviourType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZenUtilInternal_IsInjectableMonoBehaviourType_m683FBB8F1A30855DFF2B4186B505370662E8DDDC (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_DerivesFrom_TisMonoInstaller_tF7394A53721F75A3A34C20082903328321552D20_mC75D550E5AF6F01AD1B1E54213BB94D839A338B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A53977DBEC9B77F6494B4D291E1205A97B43808);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type != null && !type.DerivesFrom<MonoInstaller>()
		//     // Don't bother performing reflection operations on unity classes since they are guaranteed not to use zenject
		//     && (type.Namespace == null || !type.Namespace.StartsWith("UnityEngine."));
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_2 = ___type0;
		bool L_3;
		L_3 = TypeExtensions_DerivesFrom_TisMonoInstaller_tF7394A53721F75A3A34C20082903328321552D20_mC75D550E5AF6F01AD1B1E54213BB94D839A338B0(L_2, TypeExtensions_DerivesFrom_TisMonoInstaller_tF7394A53721F75A3A34C20082903328321552D20_mC75D550E5AF6F01AD1B1E54213BB94D839A338B0_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_4 = ___type0;
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Type::get_Namespace() */, L_4);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		Type_t* L_6 = ___type0;
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Type::get_Namespace() */, L_6);
		bool L_8;
		L_8 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_7, _stringLiteral0A53977DBEC9B77F6494B4D291E1205A97B43808, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_002d:
	{
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> Zenject.Internal.ZenUtilInternal::GetRootGameObjects(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZenUtilInternal_GetRootGameObjects_mA45CC84DE67FC7E1DBDA14D68FB6AB2927E4D47E (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m4AC829827FA2EDC2185B8554E788741789A97DA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_FindObjectsOfTypeAll_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8F4E76E85D7C2CEF6EEDBC4E39C568AE65BC01D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetRootGameObjectsU3Eb__7_0_mC67F876FB5CDD32C57127D6F627FFA5273E105B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CGetRootGameObjectsU3Eb__1_m17942BF19512D70FDC9652871D3A8169851497DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560* V_0 = NULL;
	Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* G_B3_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B3_1 = NULL;
	Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* G_B2_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B2_1 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560* L_0 = (U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_0__ctor_m9890DDA45656976832FFD33874954B88BDED9B1E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560* L_1 = V_0;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2 = ___scene0;
		L_1->___scene_0 = L_2;
		// if (scene.isLoaded)
		U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560* L_3 = V_0;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_4 = (&L_3->___scene_0);
		bool L_5;
		L_5 = Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC(L_4, NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// return scene.GetRootGameObjects()
		//     .Where(x => x.GetComponent<ProjectContext>() == null);
		U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560* L_6 = V_0;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_7 = (&L_6->___scene_0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8;
		L_8 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var);
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_9 = ((U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_2;
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_10 = L_9;
		G_B2_0 = L_10;
		G_B2_1 = L_8;
		if (L_10)
		{
			G_B3_0 = L_10;
			G_B3_1 = L_8;
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var);
		U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3* L_11 = ((U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_12 = (Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C*)il2cpp_codegen_object_new(Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C_il2cpp_TypeInfo_var);
		Func_2__ctor_m9EDB1EDE49108C1136C6B0DD3DD5D2F843F5936E(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CGetRootGameObjectsU3Eb__7_0_mC67F876FB5CDD32C57127D6F627FFA5273E105B9_RuntimeMethod_var), NULL);
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_13 = L_12;
		((U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_2), (void*)L_13);
		G_B3_0 = L_13;
		G_B3_1 = G_B2_1;
	}

IL_0044:
	{
		RuntimeObject* L_14;
		L_14 = Enumerable_Where_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m4AC829827FA2EDC2185B8554E788741789A97DA4((RuntimeObject*)G_B3_1, G_B3_0, Enumerable_Where_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m4AC829827FA2EDC2185B8554E788741789A97DA4_RuntimeMethod_var);
		return L_14;
	}

IL_004a:
	{
		// return Resources.FindObjectsOfTypeAll<GameObject>()
		//     .Where(x => x.transform.parent == null
		//         && x.GetComponent<ProjectContext>() == null
		//         && x.scene == scene);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15;
		L_15 = Resources_FindObjectsOfTypeAll_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8F4E76E85D7C2CEF6EEDBC4E39C568AE65BC01D3(Resources_FindObjectsOfTypeAll_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8F4E76E85D7C2CEF6EEDBC4E39C568AE65BC01D3_RuntimeMethod_var);
		U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560* L_16 = V_0;
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_17 = (Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C*)il2cpp_codegen_object_new(Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C_il2cpp_TypeInfo_var);
		Func_2__ctor_m9EDB1EDE49108C1136C6B0DD3DD5D2F843F5936E(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CGetRootGameObjectsU3Eb__1_m17942BF19512D70FDC9652871D3A8169851497DF_RuntimeMethod_var), NULL);
		RuntimeObject* L_18;
		L_18 = Enumerable_Where_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m4AC829827FA2EDC2185B8554E788741789A97DA4((RuntimeObject*)L_15, L_17, Enumerable_Where_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m4AC829827FA2EDC2185B8554E788741789A97DA4_RuntimeMethod_var);
		return L_18;
	}
}
// System.Void Zenject.Internal.ZenUtilInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZenUtilInternal__ctor_mED308B2C7D9B2DFCA1B6BAC68AA5BB7A6799A0E5 (ZenUtilInternal_tE43BA8A707652E95F7822C823FDFD9ED91A1F4D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Zenject.Internal.ZenUtilInternal/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEF8EF5E7162B4547EB8106390AFC2EF9B16682B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3* L_0 = (U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3*)il2cpp_codegen_object_new(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2159F49D3CCC8ED300518BE01881AE07D60F18FA(L_0, NULL);
		((U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Zenject.Internal.ZenUtilInternal/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2159F49D3CCC8ED300518BE01881AE07D60F18FA (U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Zenject.SceneContext> Zenject.Internal.ZenUtilInternal/<>c::<GetAllSceneContexts>b__3_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetAllSceneContextsU3Eb__3_0_m9A73DB4A9369BEFD45F7FBE1A33A958AECD84F4D (U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m0F6A82CA8D0F852039A19EF19334743D469FB044_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .SelectMany(root => root.GetComponentsInChildren<SceneContext>()).ToList();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___root0;
		SceneContextU5BU5D_tB07CF537D54DA9E1CB105F3EBA725E51EAF87611* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m0F6A82CA8D0F852039A19EF19334743D469FB044(L_0, GameObject_GetComponentsInChildren_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m0F6A82CA8D0F852039A19EF19334743D469FB044_RuntimeMethod_var);
		return (RuntimeObject*)L_1;
	}
}
// System.Boolean Zenject.Internal.ZenUtilInternal/<>c::<GetRootGameObjects>b__7_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetRootGameObjectsU3Eb__7_0_mC67F876FB5CDD32C57127D6F627FFA5273E105B9 (U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825_m57CE0FF9883F4EF8649BC783D01562DF4358265A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => x.GetComponent<ProjectContext>() == null);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___x0;
		ProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825* L_1;
		L_1 = GameObject_GetComponent_TisProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825_m57CE0FF9883F4EF8649BC783D01562DF4358265A(L_0, GameObject_GetComponent_TisProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825_m57CE0FF9883F4EF8649BC783D01562DF4358265A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
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
// System.Void Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllSceneContextsU3Ed__3__ctor_mBCFB2BB083C5C4CDABBB5C3DD75C4CACF5672440 (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllSceneContextsU3Ed__3_System_IDisposable_Dispose_m2803EA7B0988F31D99F5458F38ACC3A1CA23B3E5 (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetAllSceneContextsU3Ed__3_U3CU3Em__Finally1_mDE84DA488168CD2B4B1988DCA5263B304004D1C4(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllSceneContextsU3Ed__3_MoveNext_mCE650297965799BFB1293B6E3234C963C1191DE4 (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m564646418ABB7E4A2C9EF71CDF481F557419481C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m28330046613BB44CD7B11CEA4DD98DAB585BB0F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t80FA8C12E50004BDAC9E4244C00383855E527395_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBC12B12B96ECDA29A046F7F27F267286BE754EFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqExtensions_IsEmpty_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m917355CF3B38D9108B83E4E4ED9D339C39B39C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBC3CB4555B314F4B8D25BF94DC78A7B0F4BE1EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3A86B341493CE9799916D9223A98543B829D9BF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetAllSceneContextsU3Eb__3_0_m9A73DB4A9369BEFD45F7FBE1A33A958AECD84F4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BC5A066D2B60F19507DE6B9044D0AC239DEECA7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927* V_3 = NULL;
	Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D* G_B6_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B6_1 = NULL;
	Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D* G_B5_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B5_1 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00d9:
			{// begin fault (depth: 1)
				U3CGetAllSceneContextsU3Ed__3_System_IDisposable_Dispose_m2803EA7B0988F31D99F5458F38ACC3A1CA23B3E5(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0018_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_00b0_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00e0;
			}

IL_0018_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (var scene in UnityUtil.AllLoadedScenes)
				RuntimeObject* L_3;
				L_3 = UnityUtil_get_AllLoadedScenes_m303F83A1E4CF00ED18DC6D7B668E8736FC77A5A7(NULL);
				RuntimeObject* L_4;
				L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SceneManagement.Scene>::GetEnumerator() */, IEnumerable_1_t80FA8C12E50004BDAC9E4244C00383855E527395_il2cpp_TypeInfo_var, L_3);
				__this->___U3CU3E7__wrap1_3 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)L_4);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_00b8_1;
			}

IL_0039_1:
			{
				// foreach (var scene in UnityUtil.AllLoadedScenes)
				RuntimeObject* L_5 = __this->___U3CU3E7__wrap1_3;
				Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6;
				L_6 = InterfaceFuncInvoker0< Scene_tA1DC762B79745EB5140F054C884855B922318356 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.SceneManagement.Scene>::get_Current() */, IEnumerator_1_tBC12B12B96ECDA29A046F7F27F267286BE754EFA_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				// var contexts = scene.GetRootGameObjects()
				//     .SelectMany(root => root.GetComponentsInChildren<SceneContext>()).ToList();
				GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7;
				L_7 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B((&V_2), NULL);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var);
				Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D* L_8 = ((U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
				Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D* L_9 = L_8;
				G_B5_0 = L_9;
				G_B5_1 = L_7;
				if (L_9)
				{
					G_B6_0 = L_9;
					G_B6_1 = L_7;
					goto IL_006b_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var);
				U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3* L_10 = ((U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D* L_11 = (Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D*)il2cpp_codegen_object_new(Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D_il2cpp_TypeInfo_var);
				Func_2__ctor_m53F9AB0453F5B10C8C21D06BA261FEEDCF23DB80(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CGetAllSceneContextsU3Eb__3_0_m9A73DB4A9369BEFD45F7FBE1A33A958AECD84F4D_RuntimeMethod_var), NULL);
				Func_2_t46B2F559D7BA6C6A6876325B7A22EEF6346E384D* L_12 = L_11;
				((U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD8289F1E8485E1C09BBF31BCB0980320D825F9D3_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_12);
				G_B6_0 = L_12;
				G_B6_1 = G_B5_1;
			}

IL_006b_1:
			{
				RuntimeObject* L_13;
				L_13 = Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m564646418ABB7E4A2C9EF71CDF481F557419481C((RuntimeObject*)G_B6_1, G_B6_0, Enumerable_SelectMany_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m564646418ABB7E4A2C9EF71CDF481F557419481C_RuntimeMethod_var);
				List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927* L_14;
				L_14 = Enumerable_ToList_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m28330046613BB44CD7B11CEA4DD98DAB585BB0F6(L_13, Enumerable_ToList_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m28330046613BB44CD7B11CEA4DD98DAB585BB0F6_RuntimeMethod_var);
				V_3 = L_14;
				// if (contexts.IsEmpty())
				List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927* L_15 = V_3;
				bool L_16;
				L_16 = LinqExtensions_IsEmpty_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m917355CF3B38D9108B83E4E4ED9D339C39B39C9E(L_15, LinqExtensions_IsEmpty_TisSceneContext_t01BB7377306BEAAD06BC268E33054720B8995154_m917355CF3B38D9108B83E4E4ED9D339C39B39C9E_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00b8_1;
				}
			}
			{
				// Assert.That(contexts.Count == 1,
				//     "Found multiple scene contexts in scene '{0}'", scene.name);
				List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927* L_17 = V_3;
				int32_t L_18;
				L_18 = List_1_get_Count_mBC3CB4555B314F4B8D25BF94DC78A7B0F4BE1EB1_inline(L_17, List_1_get_Count_mBC3CB4555B314F4B8D25BF94DC78A7B0F4BE1EB1_RuntimeMethod_var);
				String_t* L_19;
				L_19 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
				Assert_That_m3E74483F729A9A222574B7C43EAAA0CDA85199A7((bool)((((int32_t)L_18) == ((int32_t)1))? 1 : 0), _stringLiteral8BC5A066D2B60F19507DE6B9044D0AC239DEECA7, L_19, NULL);
				// yield return contexts[0];
				List_1_tF2D938CFF5857A7A79668C5B16AA61B311555927* L_20 = V_3;
				SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_21;
				L_21 = List_1_get_Item_m3A86B341493CE9799916D9223A98543B829D9BF1(L_20, 0, List_1_get_Item_m3A86B341493CE9799916D9223A98543B829D9BF1_RuntimeMethod_var);
				__this->___U3CU3E2__current_1 = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00e0;
			}

IL_00b0_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_00b8_1:
			{
				// foreach (var scene in UnityUtil.AllLoadedScenes)
				RuntimeObject* L_22 = __this->___U3CU3E7__wrap1_3;
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0039_1;
				}
			}
			{
				U3CGetAllSceneContextsU3Ed__3_U3CU3Em__Finally1_mDE84DA488168CD2B4B1988DCA5263B304004D1C4(__this, NULL);
				__this->___U3CU3E7__wrap1_3 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00e0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e0:
	{
		bool L_24 = V_0;
		return L_24;
	}
}
// System.Void Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllSceneContextsU3Ed__3_U3CU3Em__Finally1_mDE84DA488168CD2B4B1988DCA5263B304004D1C4 (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_3;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Zenject.SceneContext Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::System.Collections.Generic.IEnumerator<Zenject.SceneContext>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* U3CGetAllSceneContextsU3Ed__3_System_Collections_Generic_IEnumeratorU3CZenject_SceneContextU3E_get_Current_m25656852442FFCAF2AF109A4B24FCC151F192F8A (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, const RuntimeMethod* method) 
{
	{
		SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllSceneContextsU3Ed__3_System_Collections_IEnumerator_Reset_m5710B74FB71793A695EF8BDDF5922D40765B065D (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllSceneContextsU3Ed__3_System_Collections_IEnumerator_Reset_m5710B74FB71793A695EF8BDDF5922D40765B065D_RuntimeMethod_var)));
	}
}
// System.Object Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllSceneContextsU3Ed__3_System_Collections_IEnumerator_get_Current_m53824ADC678878CD2E714F0115B2DFB3674BDFC0 (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, const RuntimeMethod* method) 
{
	{
		SceneContext_t01BB7377306BEAAD06BC268E33054720B8995154* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Zenject.SceneContext> Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::System.Collections.Generic.IEnumerable<Zenject.SceneContext>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllSceneContextsU3Ed__3_System_Collections_Generic_IEnumerableU3CZenject_SceneContextU3E_GetEnumerator_m1D0A854E63470B6E3C3410F2802BCBAC0ED5ABF5 (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* L_3 = (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4*)il2cpp_codegen_object_new(U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4_il2cpp_TypeInfo_var);
		U3CGetAllSceneContextsU3Ed__3__ctor_mBCFB2BB083C5C4CDABBB5C3DD75C4CACF5672440(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Zenject.Internal.ZenUtilInternal/<GetAllSceneContexts>d__3::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllSceneContextsU3Ed__3_System_Collections_IEnumerable_GetEnumerator_m83E14525E57D95E527844E2B7CB425F66583589F (U3CGetAllSceneContextsU3Ed__3_t3A6B8CC9BF144DD2AE233F397912C40260787AB4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllSceneContextsU3Ed__3_System_Collections_Generic_IEnumerableU3CZenject_SceneContextU3E_GetEnumerator_m1D0A854E63470B6E3C3410F2802BCBAC0ED5ABF5(__this, NULL);
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
// System.Void Zenject.Internal.ZenUtilInternal/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m9890DDA45656976832FFD33874954B88BDED9B1E (U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Zenject.Internal.ZenUtilInternal/<>c__DisplayClass7_0::<GetRootGameObjects>b__1(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3CGetRootGameObjectsU3Eb__1_m17942BF19512D70FDC9652871D3A8169851497DF (U3CU3Ec__DisplayClass7_0_tD090263B3CD40B0F9CE94C54F8EC153A63943560* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825_m57CE0FF9883F4EF8649BC783D01562DF4358265A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => x.transform.parent == null
		//     && x.GetComponent<ProjectContext>() == null
		//     && x.scene == scene);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___x0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___x0;
		ProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825* L_5;
		L_5 = GameObject_GetComponent_TisProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825_m57CE0FF9883F4EF8649BC783D01562DF4358265A(L_4, GameObject_GetComponent_TisProjectContext_tC55FD0A9C5AA7FFD4273F8DA14B6D8F97F85F825_m57CE0FF9883F4EF8649BC783D01562DF4358265A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___x0;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_8;
		L_8 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_7, NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_9 = __this->___scene_0;
		bool L_10;
		L_10 = Scene_op_Equality_m9FC9CA5FAE2FF94568EC2AB878B64ED8DC53CF68(L_8, L_9, NULL);
		return L_10;
	}

IL_0033:
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
// System.Void RedBlueGames.NotNull.NotNullViolation::.ctor(System.Reflection.FieldInfo,UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullViolation__ctor_m5BC2908490AEBFD4FE93E56CEA0B6E3EA7DDF80F (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, FieldInfo_t* ___fieldInfo0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___sourceMB1, const RuntimeMethod* method) 
{
	{
		// public NotNullViolation(FieldInfo fieldInfo, MonoBehaviour sourceMB)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.FieldInfo = fieldInfo;
		FieldInfo_t* L_0 = ___fieldInfo0;
		NotNullViolation_set_FieldInfo_m489123F63860EB13AE0E5FDFF89AE339741E5EE8_inline(__this, L_0, NULL);
		// this.SourceMonoBehaviour = sourceMB;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = ___sourceMB1;
		NotNullViolation_set_SourceMonoBehaviour_m88DA2CEB32E5F51EF0C768E1E42FE6FDC3D72E06_inline(__this, L_1, NULL);
		// this.ErrorGameObject = sourceMB.gameObject;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = ___sourceMB1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NotNullViolation_set_ErrorGameObject_m8FA7F995FA92BC2FD3777575744823B9937FCB49_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Reflection.FieldInfo RedBlueGames.NotNull.NotNullViolation::get_FieldInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* NotNullViolation_get_FieldInfo_m076D421DE002EEF1B41D8361DE97DFE9202C625A (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, const RuntimeMethod* method) 
{
	{
		// public FieldInfo FieldInfo { get; set; }
		FieldInfo_t* L_0 = __this->___U3CFieldInfoU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void RedBlueGames.NotNull.NotNullViolation::set_FieldInfo(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullViolation_set_FieldInfo_m489123F63860EB13AE0E5FDFF89AE339741E5EE8 (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, FieldInfo_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public FieldInfo FieldInfo { get; set; }
		FieldInfo_t* L_0 = ___value0;
		__this->___U3CFieldInfoU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFieldInfoU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject RedBlueGames.NotNull.NotNullViolation::get_ErrorGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* NotNullViolation_get_ErrorGameObject_m43C51798655B4B4BBCB30D312BC21CD656939E00 (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject ErrorGameObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CErrorGameObjectU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void RedBlueGames.NotNull.NotNullViolation::set_ErrorGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullViolation_set_ErrorGameObject_m8FA7F995FA92BC2FD3777575744823B9937FCB49 (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject ErrorGameObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CErrorGameObjectU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorGameObjectU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// UnityEngine.MonoBehaviour RedBlueGames.NotNull.NotNullViolation::get_SourceMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* NotNullViolation_get_SourceMonoBehaviour_m86E23D4672C02EB71B011B1B3707B2166EF4979E (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, const RuntimeMethod* method) 
{
	{
		// public MonoBehaviour SourceMonoBehaviour { get; set; }
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___U3CSourceMonoBehaviourU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void RedBlueGames.NotNull.NotNullViolation::set_SourceMonoBehaviour(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullViolation_set_SourceMonoBehaviour_m88DA2CEB32E5F51EF0C768E1E42FE6FDC3D72E06 (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___value0, const RuntimeMethod* method) 
{
	{
		// public MonoBehaviour SourceMonoBehaviour { get; set; }
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___value0;
		__this->___U3CSourceMonoBehaviourU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSourceMonoBehaviourU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String RedBlueGames.NotNull.NotNullViolation::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotNullViolation_get_FullName_m9F7269BEBB4FA43866E5FA0C7245E68F36CD2C5A (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// Transform currentParent = this.ErrorGameObject.transform.parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = NotNullViolation_get_ErrorGameObject_m43C51798655B4B4BBCB30D312BC21CD656939E00_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		V_0 = L_2;
		// string fullName = this.ErrorGameObject.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = NotNullViolation_get_ErrorGameObject_m43C51798655B4B4BBCB30D312BC21CD656939E00_inline(__this, NULL);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		V_1 = L_4;
		goto IL_0042;
	}

IL_001f:
	{
		// fullName = currentParent.gameObject.name + "/" + fullName;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8 = V_1;
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_7, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_8, NULL);
		V_1 = L_9;
		// currentParent = currentParent.transform.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_11, NULL);
		V_0 = L_12;
	}

IL_0042:
	{
		// while (currentParent != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_14)
		{
			goto IL_001f;
		}
	}
	{
		// return fullName;
		String_t* L_15 = V_1;
		return L_15;
	}
}
// System.String RedBlueGames.NotNull.NotNullViolation::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotNullViolation_ToString_mB103262E4B2F3738F943474BA401FB95E6E69453 (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDC8F96BC8D3A322AE3FD87A66DF249F5EE9A6F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("[NotNullViolation: Field={0}, FullName={1}]", this.FieldInfo.Name, this.FullName);
		FieldInfo_t* L_0;
		L_0 = NotNullViolation_get_FieldInfo_m076D421DE002EEF1B41D8361DE97DFE9202C625A_inline(__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = NotNullViolation_get_FullName_m9F7269BEBB4FA43866E5FA0C7245E68F36CD2C5A(__this, NULL);
		String_t* L_3;
		L_3 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralDDC8F96BC8D3A322AE3FD87A66DF249F5EE9A6F8, L_1, L_2, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MonoKernel_get_IsDestroyed_m2A7029FFC8F6D46080B8837117F377BA437139F8_inline (MonoKernel_t17B8E893D7B1CD6DE6AF939AB5B47379B56F502D* __this, const RuntimeMethod* method) 
{
	{
		// get { return _isDestroyed; }
		bool L_0 = __this->____isDestroyed_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BindInfo_get_Identifier_m06AD5B204DE0C4AB1B9B304AD9DF81594A976519_inline (BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		RuntimeObject* L_0 = __this->___U3CIdentifierU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignalBase_set_SignalId_mD4E7B4BC08FB5D6C18F9B32E88C5F9C86D40984A_inline (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_0 = ___value0;
		__this->___U3CSignalIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignalIdU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignalBase_set_Settings_m4806ADA4377060EEE6D9F5D77070F80C5E7337B7_inline (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		SignalSettings_t86103A7EF331D7AD514AAC2FEFD0ADA25A53EAD1* L_0 = ___value0;
		__this->___U3CSettingsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSettingsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* SignalBase_get_SignalId_m1C7CB1A15F3DA4C876B3A67C005BA4671C7E4D57_inline (SignalBase_t10A3C8C863BCE03867E70DE5CE5720220DDAC869* __this, const RuntimeMethod* method) 
{
	{
		// get;
		BindingId_tC72250CE5CFBD65F074D4E1AB5555A9B968096DB* L_0 = __this->___U3CSignalIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* NonLazyBinder_get_BindInfo_mEED382479D9C4DCE644F684AF11856E018C63DB9_inline (NonLazyBinder_t9FD4DEB05CE8E09EE16E5566508D881816228AF0* __this, const RuntimeMethod* method) 
{
	{
		// get;
		BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* L_0 = __this->___U3CBindInfoU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BindInfo_set_Identifier_mE1B8B64FDF1E21B08E67BB5156E4ED5835096901_inline (BindInfo_t39961BDDAAFBC4A2BB2D35AC10A0946A49AFDEAA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		RuntimeObject* L_0 = ___value0;
		__this->___U3CIdentifierU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdentifierU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BindFinalizerWrapper_set_SubFinalizer_m7A57D41B3A2592B0663624D3497567FD687645B6_inline (BindFinalizerWrapper_t5E04829BA3A8F4CE5D2A82414E99C5B3B05FF920* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// set { _subFinalizer = value; }
		RuntimeObject* L_0 = ___value0;
		__this->____subFinalizer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subFinalizer_0), (void*)L_0);
		// set { _subFinalizer = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SignalHandlerBinder_get_Identifier_m0F09FAA2891555F3A8EE732920FE787E5AA19497_inline (SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF* __this, const RuntimeMethod* method) 
{
	{
		// get;
		RuntimeObject* L_0 = __this->___U3CIdentifierU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignalHandlerBinder_set_Identifier_m62FA977B2E991AF7BB6A589E2B54F3ED85E0AEA7_inline (SignalHandlerBinder_tF6FC17B3780BD7BA471F56273B2AC5EC7C293CAF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		RuntimeObject* L_0 = ___value0;
		__this->___U3CIdentifierU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdentifierU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Source_mB7936A56F38FBACCCF3C156075274043E1A58341_inline (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		int32_t L_0 = ___value0;
		__this->___U3CSourceU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InjectAttributeBase_set_Optional_m2DB525F0CD84E7CCC5BA04CDA7A6143DFFAFE84E_inline (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		bool L_0 = ___value0;
		__this->___U3COptionalU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* InstallerBase_get_Container_m6B8334AE16BE80DB951E34255450A92F8A7D5DB2_inline (InstallerBase_t96B3BE01124AD212055DEE639E0DB966D2465EBC* __this, const RuntimeMethod* method) 
{
	{
		// get { return _container; }
		DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* L_0 = __this->____container_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InjectAttributeBase_get_Id_m250FF1978AC82CC02B0B187EAD1B988949D2ABD0_inline (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		RuntimeObject* L_0 = __this->___U3CIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InjectAttributeBase_get_Optional_m00795F7AB4BC24B675BBA10B2D0D6943FA092C07_inline (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3COptionalU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InjectAttributeBase_get_Source_m9C6D120731515051BDBF74825335ADD7C7FE352E_inline (InjectAttributeBase_tD88E8C211C741F9FF99C8CFC19640006AEE6BEEA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CSourceU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DiContainer_get_ParentContainers_m0614507A32CB4D8382BB174CB30B3B288F18106C_inline (DiContainer_t55A17231927F5448C7604C3B69C92E6D5E47AA2D* __this, const RuntimeMethod* method) 
{
	{
		// get { return _parentContainers; }
		List_1_tBAB5173AA04562C93B884EBAB822FE5471345CE8* L_0 = __this->____parentContainers_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PostInjectableInfo_get_InjectableInfo_mF5EBDF92A43E7C3AF715D45CEF9068CBFEAE693A_inline (PostInjectableInfo_t9BA432E1318D4A98C8DC45887FFF6FFB3EFBA434* __this, const RuntimeMethod* method) 
{
	{
		// get { return _injectableInfo; }
		List_1_t874B1DF89758723ACF1C31F1890CBDF64C841219* L_0 = __this->____injectableInfo_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidationMarker_set_MarkedType_mC430D15A1D0E0EF31DFF62C48A7C4C60239A8E7E_inline (ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		Type_t* L_0 = ___value0;
		__this->___U3CMarkedTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMarkedTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidationMarker_set_InstantiateFailed_mE33C5E11A58F4FFB578745B7CA0ED16992C9656D_inline (ValidationMarker_t23C9103325C88320C405CF895AE110143B28083C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___value0;
		__this->___U3CInstantiateFailedU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_target_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotNullViolation_set_FieldInfo_m489123F63860EB13AE0E5FDFF89AE339741E5EE8_inline (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, FieldInfo_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public FieldInfo FieldInfo { get; set; }
		FieldInfo_t* L_0 = ___value0;
		__this->___U3CFieldInfoU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFieldInfoU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotNullViolation_set_SourceMonoBehaviour_m88DA2CEB32E5F51EF0C768E1E42FE6FDC3D72E06_inline (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___value0, const RuntimeMethod* method) 
{
	{
		// public MonoBehaviour SourceMonoBehaviour { get; set; }
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___value0;
		__this->___U3CSourceMonoBehaviourU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSourceMonoBehaviourU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotNullViolation_set_ErrorGameObject_m8FA7F995FA92BC2FD3777575744823B9937FCB49_inline (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject ErrorGameObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CErrorGameObjectU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorGameObjectU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* NotNullViolation_get_ErrorGameObject_m43C51798655B4B4BBCB30D312BC21CD656939E00_inline (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject ErrorGameObject { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CErrorGameObjectU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldInfo_t* NotNullViolation_get_FieldInfo_m076D421DE002EEF1B41D8361DE97DFE9202C625A_inline (NotNullViolation_t3D97787834A66BF094128066539F41B45A1EE6B2* __this, const RuntimeMethod* method) 
{
	{
		// public FieldInfo FieldInfo { get; set; }
		FieldInfo_t* L_0 = __this->___U3CFieldInfoU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_mA90CDE158774C34A28C07CEEA9E9EA2A61618238_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		return (RuntimeObject*)L_0;
	}
}
