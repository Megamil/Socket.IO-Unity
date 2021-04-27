#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Concurrent.ConcurrentDictionary`2<Quobject.EngineIoClientDotNet.ComponentEmitter.IListener,Quobject.EngineIoClientDotNet.ComponentEmitter.IListener>
struct ConcurrentDictionary_2_tEDC84FB15D2C1A56669F185542CE594C4C4533D0;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Quobject.SocketIoClientDotNet.Client.IAck>
struct ConcurrentDictionary_2_t955CB3348AAA4908F0E3C5FE34D2A2852B3C8534;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Collections.Generic.List`1<Quobject.EngineIoClientDotNet.ComponentEmitter.IListener>>
struct ConcurrentDictionary_2_tFD94D487D9EEFE6FB725944B75644105F32F6B61;
// Quobject.SocketIoClientDotNet.Collections.Concurrent.ConcurrentQueue`1<System.Collections.Generic.List`1<System.Object>>
struct ConcurrentQueue_1_t1F8811B3149BCB713B63D3542F107177A630B803;
// Quobject.SocketIoClientDotNet.Collections.Concurrent.ConcurrentQueue`1<Quobject.SocketIoClientDotNet.Parser.Packet>
struct ConcurrentQueue_1_t4FF42BEEC174D52C4C376491CB1DE004F0F1768A;
// Quobject.SocketIoClientDotNet.Collections.Concurrent.ConcurrentQueue`1<Quobject.SocketIoClientDotNet.Client.On/IHandle>
struct ConcurrentQueue_1_t3517931A4262D8E03E3FBFABDF5A77633F8838D8;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_t6CEED8910660964668522055C0010B575E62C702;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// ChatEvents
struct ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B;
// ChatScene
struct ChatScene_tC0C5440E8AED8D53AC32487AEDBF7E76C92B1AD5;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Quobject.EngineIoClientDotNet.ComponentEmitter.Emitter
struct Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// Quobject.SocketIoClientDotNet.Client.Manager
struct Manager_t7D4F3E334CB35EBFD5CC42638B6B28E3E4D50A2A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// Quobject.SocketIoClientDotNet.Client.Socket
struct Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888;
// SocketScript
struct SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityThread
struct UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// initChat
struct initChat_t81E37B2B44DA855E223219D91E0CA4CBA71939A6;
// requestChat
struct requestChat_tAA9DC23796BFE120AF9AE08002CB0BBE2E33F8CD;
// responseChat
struct responseChat_tF96C4C581575ACB52577280B8054F578C0C05402;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// SocketScript/<>c
struct U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678;
// SocketScript/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tF12CFFB9108327321C0C92FCFB3785F23D4094CF;
// UnityThread/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IO_t30053304A0A869772C263CAA1C3924A691B588F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tF12CFFB9108327321C0C92FCFB3785F23D4094CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* initChat_t81E37B2B44DA855E223219D91E0CA4CBA71939A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* requestChat_tAA9DC23796BFE120AF9AE08002CB0BBE2E33F8CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral04961AF525F9368A8AA744FE98A313E1DE5CEDBC;
IL2CPP_EXTERN_C String_t* _stringLiteral418BD05E22030814CA12822E83DB8549A1DAE704;
IL2CPP_EXTERN_C String_t* _stringLiteral44BD96A2A226DDF3449B0616CE3823777B99C038;
IL2CPP_EXTERN_C String_t* _stringLiteral51C3FE3EEAE57AA711652101210C227DA3B09131;
IL2CPP_EXTERN_C String_t* _stringLiteralBB43AE1B53CF305AA1ED0FB41C4EF18D10A3605F;
IL2CPP_EXTERN_C String_t* _stringLiteralCA7F6D885E16FD936B282C5FFAE0F8ADA0E2E43A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF28A5F9AA02BE66688DDC0377515AAC0CBE0033;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatScene_newChat_m65B91D45D1579C59CC325BDAF72368937E10A1AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_m11C0C48336D0FBC8668748FCD27BB9A9DECAC96C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mBBB388BF3B565DBE642E7A820CF44C8C54422528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisresponseChat_tF96C4C581575ACB52577280B8054F578C0C05402_m8D9BFC06926CC875BFA5F0CE1CD2027B114C3569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mDD681AFD6615F2444E8D636B6BE216DB8188C053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketScript_U3CStartU3Eb__3_0_m33B765038F5C2A72CCA8D31086832A45C39B0187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketScript_U3CsocketListenerU3Eb__5_0_m6B4292BC8D5C240E26F3883A9A48FCCCE306D548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketScript_sendChat_mD3AAD49F63A87DBDE5A611075B6A98E791E2C704_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CsocketListenerU3Eb__5_1_mD28120605AEE6D6E758643FA647B158E65E78B72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CexecuteCoroutineU3Eb__0_mC54ED731AE66D35AD5252B2B7B71DE0EBCE66FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CsocketListenerU3Eb__2_mCA78AA6D0CB8B9429D2CD44D9426B2E3EC72DE29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityThread_executeInFixedUpdate_mFACE16996AAA19E7ADDAB8FA8CA18B56684E1449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityThread_executeInLateUpdate_mB2EC436C13983185E80920E7E8F00355B0987450_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityThread_executeInUpdate_mA5C09375FFF47F6B68D2FEB5DB550FF0D1780E22_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____items_1)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields, ____emptyArray_5)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Constants
struct Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02  : public RuntimeObject
{
public:

public:
};

struct Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields
{
public:
	// System.String Constants::URL_SOCKET
	String_t* ___URL_SOCKET_0;
	// System.String Constants::ON_NEWCHAT
	String_t* ___ON_NEWCHAT_1;
	// System.String Constants::EMIT_INITCHAT
	String_t* ___EMIT_INITCHAT_2;
	// System.String Constants::EMIT_CHAT
	String_t* ___EMIT_CHAT_3;

public:
	inline static int32_t get_offset_of_URL_SOCKET_0() { return static_cast<int32_t>(offsetof(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields, ___URL_SOCKET_0)); }
	inline String_t* get_URL_SOCKET_0() const { return ___URL_SOCKET_0; }
	inline String_t** get_address_of_URL_SOCKET_0() { return &___URL_SOCKET_0; }
	inline void set_URL_SOCKET_0(String_t* value)
	{
		___URL_SOCKET_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___URL_SOCKET_0), (void*)value);
	}

	inline static int32_t get_offset_of_ON_NEWCHAT_1() { return static_cast<int32_t>(offsetof(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields, ___ON_NEWCHAT_1)); }
	inline String_t* get_ON_NEWCHAT_1() const { return ___ON_NEWCHAT_1; }
	inline String_t** get_address_of_ON_NEWCHAT_1() { return &___ON_NEWCHAT_1; }
	inline void set_ON_NEWCHAT_1(String_t* value)
	{
		___ON_NEWCHAT_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ON_NEWCHAT_1), (void*)value);
	}

	inline static int32_t get_offset_of_EMIT_INITCHAT_2() { return static_cast<int32_t>(offsetof(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields, ___EMIT_INITCHAT_2)); }
	inline String_t* get_EMIT_INITCHAT_2() const { return ___EMIT_INITCHAT_2; }
	inline String_t** get_address_of_EMIT_INITCHAT_2() { return &___EMIT_INITCHAT_2; }
	inline void set_EMIT_INITCHAT_2(String_t* value)
	{
		___EMIT_INITCHAT_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EMIT_INITCHAT_2), (void*)value);
	}

	inline static int32_t get_offset_of_EMIT_CHAT_3() { return static_cast<int32_t>(offsetof(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields, ___EMIT_CHAT_3)); }
	inline String_t* get_EMIT_CHAT_3() const { return ___EMIT_CHAT_3; }
	inline String_t** get_address_of_EMIT_CHAT_3() { return &___EMIT_CHAT_3; }
	inline void set_EMIT_CHAT_3(String_t* value)
	{
		___EMIT_CHAT_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EMIT_CHAT_3), (void*)value);
	}
};


// Quobject.EngineIoClientDotNet.ComponentEmitter.Emitter
struct Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Collections.Generic.List`1<Quobject.EngineIoClientDotNet.ComponentEmitter.IListener>> Quobject.EngineIoClientDotNet.ComponentEmitter.Emitter::callbacks
	ConcurrentDictionary_2_tFD94D487D9EEFE6FB725944B75644105F32F6B61 * ___callbacks_0;
	// System.Collections.Concurrent.ConcurrentDictionary`2<Quobject.EngineIoClientDotNet.ComponentEmitter.IListener,Quobject.EngineIoClientDotNet.ComponentEmitter.IListener> Quobject.EngineIoClientDotNet.ComponentEmitter.Emitter::_onceCallbacks
	ConcurrentDictionary_2_tEDC84FB15D2C1A56669F185542CE594C4C4533D0 * ____onceCallbacks_1;

public:
	inline static int32_t get_offset_of_callbacks_0() { return static_cast<int32_t>(offsetof(Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25, ___callbacks_0)); }
	inline ConcurrentDictionary_2_tFD94D487D9EEFE6FB725944B75644105F32F6B61 * get_callbacks_0() const { return ___callbacks_0; }
	inline ConcurrentDictionary_2_tFD94D487D9EEFE6FB725944B75644105F32F6B61 ** get_address_of_callbacks_0() { return &___callbacks_0; }
	inline void set_callbacks_0(ConcurrentDictionary_2_tFD94D487D9EEFE6FB725944B75644105F32F6B61 * value)
	{
		___callbacks_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbacks_0), (void*)value);
	}

	inline static int32_t get_offset_of__onceCallbacks_1() { return static_cast<int32_t>(offsetof(Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25, ____onceCallbacks_1)); }
	inline ConcurrentDictionary_2_tEDC84FB15D2C1A56669F185542CE594C4C4533D0 * get__onceCallbacks_1() const { return ____onceCallbacks_1; }
	inline ConcurrentDictionary_2_tEDC84FB15D2C1A56669F185542CE594C4C4533D0 ** get_address_of__onceCallbacks_1() { return &____onceCallbacks_1; }
	inline void set__onceCallbacks_1(ConcurrentDictionary_2_tEDC84FB15D2C1A56669F185542CE594C4C4533D0 * value)
	{
		____onceCallbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onceCallbacks_1), (void*)value);
	}
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// initChat
struct initChat_t81E37B2B44DA855E223219D91E0CA4CBA71939A6  : public RuntimeObject
{
public:
	// System.String initChat::nameUser
	String_t* ___nameUser_0;

public:
	inline static int32_t get_offset_of_nameUser_0() { return static_cast<int32_t>(offsetof(initChat_t81E37B2B44DA855E223219D91E0CA4CBA71939A6, ___nameUser_0)); }
	inline String_t* get_nameUser_0() const { return ___nameUser_0; }
	inline String_t** get_address_of_nameUser_0() { return &___nameUser_0; }
	inline void set_nameUser_0(String_t* value)
	{
		___nameUser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameUser_0), (void*)value);
	}
};


// requestChat
struct requestChat_tAA9DC23796BFE120AF9AE08002CB0BBE2E33F8CD  : public RuntimeObject
{
public:
	// System.String requestChat::chat
	String_t* ___chat_0;

public:
	inline static int32_t get_offset_of_chat_0() { return static_cast<int32_t>(offsetof(requestChat_tAA9DC23796BFE120AF9AE08002CB0BBE2E33F8CD, ___chat_0)); }
	inline String_t* get_chat_0() const { return ___chat_0; }
	inline String_t** get_address_of_chat_0() { return &___chat_0; }
	inline void set_chat_0(String_t* value)
	{
		___chat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chat_0), (void*)value);
	}
};


// responseChat
struct responseChat_tF96C4C581575ACB52577280B8054F578C0C05402  : public RuntimeObject
{
public:
	// System.Boolean responseChat::status
	bool ___status_0;
	// System.String responseChat::msg
	String_t* ___msg_1;
	// System.String responseChat::chat
	String_t* ___chat_2;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(responseChat_tF96C4C581575ACB52577280B8054F578C0C05402, ___status_0)); }
	inline bool get_status_0() const { return ___status_0; }
	inline bool* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(bool value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_msg_1() { return static_cast<int32_t>(offsetof(responseChat_tF96C4C581575ACB52577280B8054F578C0C05402, ___msg_1)); }
	inline String_t* get_msg_1() const { return ___msg_1; }
	inline String_t** get_address_of_msg_1() { return &___msg_1; }
	inline void set_msg_1(String_t* value)
	{
		___msg_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_1), (void*)value);
	}

	inline static int32_t get_offset_of_chat_2() { return static_cast<int32_t>(offsetof(responseChat_tF96C4C581575ACB52577280B8054F578C0C05402, ___chat_2)); }
	inline String_t* get_chat_2() const { return ___chat_2; }
	inline String_t** get_address_of_chat_2() { return &___chat_2; }
	inline void set_chat_2(String_t* value)
	{
		___chat_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chat_2), (void*)value);
	}
};


// SocketScript/<>c
struct U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_StaticFields
{
public:
	// SocketScript/<>c SocketScript/<>c::<>9
	U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678 * ___U3CU3E9_0;
	// System.Action`1<System.Object> SocketScript/<>c::<>9__5_1
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___U3CU3E9__5_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_StaticFields, ___U3CU3E9__5_1_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_U3CU3E9__5_1_1() const { return ___U3CU3E9__5_1_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_U3CU3E9__5_1_1() { return &___U3CU3E9__5_1_1; }
	inline void set_U3CU3E9__5_1_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___U3CU3E9__5_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_1_1), (void*)value);
	}
};


// SocketScript/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tF12CFFB9108327321C0C92FCFB3785F23D4094CF  : public RuntimeObject
{
public:
	// responseChat SocketScript/<>c__DisplayClass5_0::response
	responseChat_tF96C4C581575ACB52577280B8054F578C0C05402 * ___response_0;

public:
	inline static int32_t get_offset_of_response_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tF12CFFB9108327321C0C92FCFB3785F23D4094CF, ___response_0)); }
	inline responseChat_tF96C4C581575ACB52577280B8054F578C0C05402 * get_response_0() const { return ___response_0; }
	inline responseChat_tF96C4C581575ACB52577280B8054F578C0C05402 ** get_address_of_response_0() { return &___response_0; }
	inline void set_response_0(responseChat_tF96C4C581575ACB52577280B8054F578C0C05402 * value)
	{
		___response_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___response_0), (void*)value);
	}
};


// UnityThread/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator UnityThread/<>c__DisplayClass12_0::action
	RuntimeObject* ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63, ___action_0)); }
	inline RuntimeObject* get_action_0() const { return ___action_0; }
	inline RuntimeObject** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(RuntimeObject* value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
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


// Quobject.SocketIoClientDotNet.Client.Socket
struct Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888  : public Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25
{
public:
	// System.Boolean Quobject.SocketIoClientDotNet.Client.Socket::Connected
	bool ___Connected_14;
	// System.Int32 Quobject.SocketIoClientDotNet.Client.Socket::Ids
	int32_t ___Ids_15;
	// System.String Quobject.SocketIoClientDotNet.Client.Socket::Nsp
	String_t* ___Nsp_16;
	// Quobject.SocketIoClientDotNet.Client.Manager Quobject.SocketIoClientDotNet.Client.Socket::_io
	Manager_t7D4F3E334CB35EBFD5CC42638B6B28E3E4D50A2A * ____io_17;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Quobject.SocketIoClientDotNet.Client.IAck> Quobject.SocketIoClientDotNet.Client.Socket::Acks
	ConcurrentDictionary_2_t955CB3348AAA4908F0E3C5FE34D2A2852B3C8534 * ___Acks_18;
	// Quobject.SocketIoClientDotNet.Collections.Concurrent.ConcurrentQueue`1<Quobject.SocketIoClientDotNet.Client.On/IHandle> Quobject.SocketIoClientDotNet.Client.Socket::Subs
	ConcurrentQueue_1_t3517931A4262D8E03E3FBFABDF5A77633F8838D8 * ___Subs_19;
	// Quobject.SocketIoClientDotNet.Collections.Concurrent.ConcurrentQueue`1<System.Collections.Generic.List`1<System.Object>> Quobject.SocketIoClientDotNet.Client.Socket::ReceiveBuffer
	ConcurrentQueue_1_t1F8811B3149BCB713B63D3542F107177A630B803 * ___ReceiveBuffer_20;
	// Quobject.SocketIoClientDotNet.Collections.Concurrent.ConcurrentQueue`1<Quobject.SocketIoClientDotNet.Parser.Packet> Quobject.SocketIoClientDotNet.Client.Socket::SendBuffer
	ConcurrentQueue_1_t4FF42BEEC174D52C4C376491CB1DE004F0F1768A * ___SendBuffer_21;

public:
	inline static int32_t get_offset_of_Connected_14() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888, ___Connected_14)); }
	inline bool get_Connected_14() const { return ___Connected_14; }
	inline bool* get_address_of_Connected_14() { return &___Connected_14; }
	inline void set_Connected_14(bool value)
	{
		___Connected_14 = value;
	}

	inline static int32_t get_offset_of_Ids_15() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888, ___Ids_15)); }
	inline int32_t get_Ids_15() const { return ___Ids_15; }
	inline int32_t* get_address_of_Ids_15() { return &___Ids_15; }
	inline void set_Ids_15(int32_t value)
	{
		___Ids_15 = value;
	}

	inline static int32_t get_offset_of_Nsp_16() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888, ___Nsp_16)); }
	inline String_t* get_Nsp_16() const { return ___Nsp_16; }
	inline String_t** get_address_of_Nsp_16() { return &___Nsp_16; }
	inline void set_Nsp_16(String_t* value)
	{
		___Nsp_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Nsp_16), (void*)value);
	}

	inline static int32_t get_offset_of__io_17() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888, ____io_17)); }
	inline Manager_t7D4F3E334CB35EBFD5CC42638B6B28E3E4D50A2A * get__io_17() const { return ____io_17; }
	inline Manager_t7D4F3E334CB35EBFD5CC42638B6B28E3E4D50A2A ** get_address_of__io_17() { return &____io_17; }
	inline void set__io_17(Manager_t7D4F3E334CB35EBFD5CC42638B6B28E3E4D50A2A * value)
	{
		____io_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____io_17), (void*)value);
	}

	inline static int32_t get_offset_of_Acks_18() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888, ___Acks_18)); }
	inline ConcurrentDictionary_2_t955CB3348AAA4908F0E3C5FE34D2A2852B3C8534 * get_Acks_18() const { return ___Acks_18; }
	inline ConcurrentDictionary_2_t955CB3348AAA4908F0E3C5FE34D2A2852B3C8534 ** get_address_of_Acks_18() { return &___Acks_18; }
	inline void set_Acks_18(ConcurrentDictionary_2_t955CB3348AAA4908F0E3C5FE34D2A2852B3C8534 * value)
	{
		___Acks_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Acks_18), (void*)value);
	}

	inline static int32_t get_offset_of_Subs_19() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888, ___Subs_19)); }
	inline ConcurrentQueue_1_t3517931A4262D8E03E3FBFABDF5A77633F8838D8 * get_Subs_19() const { return ___Subs_19; }
	inline ConcurrentQueue_1_t3517931A4262D8E03E3FBFABDF5A77633F8838D8 ** get_address_of_Subs_19() { return &___Subs_19; }
	inline void set_Subs_19(ConcurrentQueue_1_t3517931A4262D8E03E3FBFABDF5A77633F8838D8 * value)
	{
		___Subs_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Subs_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveBuffer_20() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888, ___ReceiveBuffer_20)); }
	inline ConcurrentQueue_1_t1F8811B3149BCB713B63D3542F107177A630B803 * get_ReceiveBuffer_20() const { return ___ReceiveBuffer_20; }
	inline ConcurrentQueue_1_t1F8811B3149BCB713B63D3542F107177A630B803 ** get_address_of_ReceiveBuffer_20() { return &___ReceiveBuffer_20; }
	inline void set_ReceiveBuffer_20(ConcurrentQueue_1_t1F8811B3149BCB713B63D3542F107177A630B803 * value)
	{
		___ReceiveBuffer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveBuffer_20), (void*)value);
	}

	inline static int32_t get_offset_of_SendBuffer_21() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888, ___SendBuffer_21)); }
	inline ConcurrentQueue_1_t4FF42BEEC174D52C4C376491CB1DE004F0F1768A * get_SendBuffer_21() const { return ___SendBuffer_21; }
	inline ConcurrentQueue_1_t4FF42BEEC174D52C4C376491CB1DE004F0F1768A ** get_address_of_SendBuffer_21() { return &___SendBuffer_21; }
	inline void set_SendBuffer_21(ConcurrentQueue_1_t4FF42BEEC174D52C4C376491CB1DE004F0F1768A * value)
	{
		___SendBuffer_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendBuffer_21), (void*)value);
	}
};

struct Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields
{
public:
	// System.String Quobject.SocketIoClientDotNet.Client.Socket::EVENT_CONNECT
	String_t* ___EVENT_CONNECT_2;
	// System.String Quobject.SocketIoClientDotNet.Client.Socket::EVENT_DISCONNECT
	String_t* ___EVENT_DISCONNECT_3;
	// System.String Quobject.SocketIoClientDotNet.Client.Socket::EVENT_ERROR
	String_t* ___EVENT_ERROR_4;
	// System.String Quobject.SocketIoClientDotNet.Client.Socket::EVENT_MESSAGE
	String_t* ___EVENT_MESSAGE_5;
	// System.String Quobject.SocketIoClientDotNet.Client.Socket::EVENT_CONNECT_ERROR
	String_t* ___EVENT_CONNECT_ERROR_6;
	// System.String Quobject.SocketIoClientDotNet.Client.Socket::EVENT_CONNECT_TIMEOUT
	String_t* ___EVENT_CONNECT_TIMEOUT_7;
	// System.String Quobject.SocketIoClientDotNet.Client.Socket::EVENT_RECONNECT
	String_t* ___EVENT_RECONNECT_8;
	// System.String Quobject.SocketIoClientDotNet.Client.Socket::EVENT_RECONNECT_ERROR
	String_t* ___EVENT_RECONNECT_ERROR_9;
	// System.String Quobject.SocketIoClientDotNet.Client.Socket::EVENT_RECONNECT_FAILED
	String_t* ___EVENT_RECONNECT_FAILED_10;
	// System.String Quobject.SocketIoClientDotNet.Client.Socket::EVENT_RECONNECT_ATTEMPT
	String_t* ___EVENT_RECONNECT_ATTEMPT_11;
	// System.String Quobject.SocketIoClientDotNet.Client.Socket::EVENT_RECONNECTING
	String_t* ___EVENT_RECONNECTING_12;
	// System.Collections.Generic.List`1<System.String> Quobject.SocketIoClientDotNet.Client.Socket::Events
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___Events_13;

public:
	inline static int32_t get_offset_of_EVENT_CONNECT_2() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields, ___EVENT_CONNECT_2)); }
	inline String_t* get_EVENT_CONNECT_2() const { return ___EVENT_CONNECT_2; }
	inline String_t** get_address_of_EVENT_CONNECT_2() { return &___EVENT_CONNECT_2; }
	inline void set_EVENT_CONNECT_2(String_t* value)
	{
		___EVENT_CONNECT_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EVENT_CONNECT_2), (void*)value);
	}

	inline static int32_t get_offset_of_EVENT_DISCONNECT_3() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields, ___EVENT_DISCONNECT_3)); }
	inline String_t* get_EVENT_DISCONNECT_3() const { return ___EVENT_DISCONNECT_3; }
	inline String_t** get_address_of_EVENT_DISCONNECT_3() { return &___EVENT_DISCONNECT_3; }
	inline void set_EVENT_DISCONNECT_3(String_t* value)
	{
		___EVENT_DISCONNECT_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EVENT_DISCONNECT_3), (void*)value);
	}

	inline static int32_t get_offset_of_EVENT_ERROR_4() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields, ___EVENT_ERROR_4)); }
	inline String_t* get_EVENT_ERROR_4() const { return ___EVENT_ERROR_4; }
	inline String_t** get_address_of_EVENT_ERROR_4() { return &___EVENT_ERROR_4; }
	inline void set_EVENT_ERROR_4(String_t* value)
	{
		___EVENT_ERROR_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EVENT_ERROR_4), (void*)value);
	}

	inline static int32_t get_offset_of_EVENT_MESSAGE_5() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields, ___EVENT_MESSAGE_5)); }
	inline String_t* get_EVENT_MESSAGE_5() const { return ___EVENT_MESSAGE_5; }
	inline String_t** get_address_of_EVENT_MESSAGE_5() { return &___EVENT_MESSAGE_5; }
	inline void set_EVENT_MESSAGE_5(String_t* value)
	{
		___EVENT_MESSAGE_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EVENT_MESSAGE_5), (void*)value);
	}

	inline static int32_t get_offset_of_EVENT_CONNECT_ERROR_6() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields, ___EVENT_CONNECT_ERROR_6)); }
	inline String_t* get_EVENT_CONNECT_ERROR_6() const { return ___EVENT_CONNECT_ERROR_6; }
	inline String_t** get_address_of_EVENT_CONNECT_ERROR_6() { return &___EVENT_CONNECT_ERROR_6; }
	inline void set_EVENT_CONNECT_ERROR_6(String_t* value)
	{
		___EVENT_CONNECT_ERROR_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EVENT_CONNECT_ERROR_6), (void*)value);
	}

	inline static int32_t get_offset_of_EVENT_CONNECT_TIMEOUT_7() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields, ___EVENT_CONNECT_TIMEOUT_7)); }
	inline String_t* get_EVENT_CONNECT_TIMEOUT_7() const { return ___EVENT_CONNECT_TIMEOUT_7; }
	inline String_t** get_address_of_EVENT_CONNECT_TIMEOUT_7() { return &___EVENT_CONNECT_TIMEOUT_7; }
	inline void set_EVENT_CONNECT_TIMEOUT_7(String_t* value)
	{
		___EVENT_CONNECT_TIMEOUT_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EVENT_CONNECT_TIMEOUT_7), (void*)value);
	}

	inline static int32_t get_offset_of_EVENT_RECONNECT_8() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields, ___EVENT_RECONNECT_8)); }
	inline String_t* get_EVENT_RECONNECT_8() const { return ___EVENT_RECONNECT_8; }
	inline String_t** get_address_of_EVENT_RECONNECT_8() { return &___EVENT_RECONNECT_8; }
	inline void set_EVENT_RECONNECT_8(String_t* value)
	{
		___EVENT_RECONNECT_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EVENT_RECONNECT_8), (void*)value);
	}

	inline static int32_t get_offset_of_EVENT_RECONNECT_ERROR_9() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields, ___EVENT_RECONNECT_ERROR_9)); }
	inline String_t* get_EVENT_RECONNECT_ERROR_9() const { return ___EVENT_RECONNECT_ERROR_9; }
	inline String_t** get_address_of_EVENT_RECONNECT_ERROR_9() { return &___EVENT_RECONNECT_ERROR_9; }
	inline void set_EVENT_RECONNECT_ERROR_9(String_t* value)
	{
		___EVENT_RECONNECT_ERROR_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EVENT_RECONNECT_ERROR_9), (void*)value);
	}

	inline static int32_t get_offset_of_EVENT_RECONNECT_FAILED_10() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields, ___EVENT_RECONNECT_FAILED_10)); }
	inline String_t* get_EVENT_RECONNECT_FAILED_10() const { return ___EVENT_RECONNECT_FAILED_10; }
	inline String_t** get_address_of_EVENT_RECONNECT_FAILED_10() { return &___EVENT_RECONNECT_FAILED_10; }
	inline void set_EVENT_RECONNECT_FAILED_10(String_t* value)
	{
		___EVENT_RECONNECT_FAILED_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EVENT_RECONNECT_FAILED_10), (void*)value);
	}

	inline static int32_t get_offset_of_EVENT_RECONNECT_ATTEMPT_11() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields, ___EVENT_RECONNECT_ATTEMPT_11)); }
	inline String_t* get_EVENT_RECONNECT_ATTEMPT_11() const { return ___EVENT_RECONNECT_ATTEMPT_11; }
	inline String_t** get_address_of_EVENT_RECONNECT_ATTEMPT_11() { return &___EVENT_RECONNECT_ATTEMPT_11; }
	inline void set_EVENT_RECONNECT_ATTEMPT_11(String_t* value)
	{
		___EVENT_RECONNECT_ATTEMPT_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EVENT_RECONNECT_ATTEMPT_11), (void*)value);
	}

	inline static int32_t get_offset_of_EVENT_RECONNECTING_12() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields, ___EVENT_RECONNECTING_12)); }
	inline String_t* get_EVENT_RECONNECTING_12() const { return ___EVENT_RECONNECTING_12; }
	inline String_t** get_address_of_EVENT_RECONNECTING_12() { return &___EVENT_RECONNECTING_12; }
	inline void set_EVENT_RECONNECTING_12(String_t* value)
	{
		___EVENT_RECONNECTING_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EVENT_RECONNECTING_12), (void*)value);
	}

	inline static int32_t get_offset_of_Events_13() { return static_cast<int32_t>(offsetof(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields, ___Events_13)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_Events_13() const { return ___Events_13; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_Events_13() { return &___Events_13; }
	inline void set_Events_13(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___Events_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Events_13), (void*)value);
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
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

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
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


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// ChatEvents
struct ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<System.String> ChatEvents::onNewChat
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onNewChat_5;
	// System.Action`1<System.String> ChatEvents::onSendChat
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___onSendChat_6;

public:
	inline static int32_t get_offset_of_onNewChat_5() { return static_cast<int32_t>(offsetof(ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B, ___onNewChat_5)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onNewChat_5() const { return ___onNewChat_5; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onNewChat_5() { return &___onNewChat_5; }
	inline void set_onNewChat_5(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onNewChat_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNewChat_5), (void*)value);
	}

	inline static int32_t get_offset_of_onSendChat_6() { return static_cast<int32_t>(offsetof(ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B, ___onSendChat_6)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_onSendChat_6() const { return ___onSendChat_6; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_onSendChat_6() { return &___onSendChat_6; }
	inline void set_onSendChat_6(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___onSendChat_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSendChat_6), (void*)value);
	}
};

struct ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_StaticFields
{
public:
	// ChatEvents ChatEvents::current
	ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * ___current_4;

public:
	inline static int32_t get_offset_of_current_4() { return static_cast<int32_t>(offsetof(ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_StaticFields, ___current_4)); }
	inline ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * get_current_4() const { return ___current_4; }
	inline ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B ** get_address_of_current_4() { return &___current_4; }
	inline void set_current_4(ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * value)
	{
		___current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_4), (void*)value);
	}
};


// ChatScene
struct ChatScene_tC0C5440E8AED8D53AC32487AEDBF7E76C92B1AD5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ChatScene::chatTextView
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___chatTextView_4;
	// UnityEngine.GameObject ChatScene::inputChat
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___inputChat_5;

public:
	inline static int32_t get_offset_of_chatTextView_4() { return static_cast<int32_t>(offsetof(ChatScene_tC0C5440E8AED8D53AC32487AEDBF7E76C92B1AD5, ___chatTextView_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_chatTextView_4() const { return ___chatTextView_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_chatTextView_4() { return &___chatTextView_4; }
	inline void set_chatTextView_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___chatTextView_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chatTextView_4), (void*)value);
	}

	inline static int32_t get_offset_of_inputChat_5() { return static_cast<int32_t>(offsetof(ChatScene_tC0C5440E8AED8D53AC32487AEDBF7E76C92B1AD5, ___inputChat_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_inputChat_5() const { return ___inputChat_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_inputChat_5() { return &___inputChat_5; }
	inline void set_inputChat_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___inputChat_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputChat_5), (void*)value);
	}
};


// SocketScript
struct SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Quobject.SocketIoClientDotNet.Client.Socket SocketScript::socket
	Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 * ___socket_4;
	// System.Boolean SocketScript::isConnected
	bool ___isConnected_5;

public:
	inline static int32_t get_offset_of_socket_4() { return static_cast<int32_t>(offsetof(SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665, ___socket_4)); }
	inline Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 * get_socket_4() const { return ___socket_4; }
	inline Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 ** get_address_of_socket_4() { return &___socket_4; }
	inline void set_socket_4(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 * value)
	{
		___socket_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_4), (void*)value);
	}

	inline static int32_t get_offset_of_isConnected_5() { return static_cast<int32_t>(offsetof(SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665, ___isConnected_5)); }
	inline bool get_isConnected_5() const { return ___isConnected_5; }
	inline bool* get_address_of_isConnected_5() { return &___isConnected_5; }
	inline void set_isConnected_5(bool value)
	{
		___isConnected_5 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityThread
struct UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<System.Action> UnityThread::actionCopiedQueueUpdateFunc
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___actionCopiedQueueUpdateFunc_6;
	// System.Collections.Generic.List`1<System.Action> UnityThread::actionCopiedQueueLateUpdateFunc
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___actionCopiedQueueLateUpdateFunc_9;
	// System.Collections.Generic.List`1<System.Action> UnityThread::actionCopiedQueueFixedUpdateFunc
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___actionCopiedQueueFixedUpdateFunc_12;

public:
	inline static int32_t get_offset_of_actionCopiedQueueUpdateFunc_6() { return static_cast<int32_t>(offsetof(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A, ___actionCopiedQueueUpdateFunc_6)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_actionCopiedQueueUpdateFunc_6() const { return ___actionCopiedQueueUpdateFunc_6; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_actionCopiedQueueUpdateFunc_6() { return &___actionCopiedQueueUpdateFunc_6; }
	inline void set_actionCopiedQueueUpdateFunc_6(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___actionCopiedQueueUpdateFunc_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionCopiedQueueUpdateFunc_6), (void*)value);
	}

	inline static int32_t get_offset_of_actionCopiedQueueLateUpdateFunc_9() { return static_cast<int32_t>(offsetof(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A, ___actionCopiedQueueLateUpdateFunc_9)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_actionCopiedQueueLateUpdateFunc_9() const { return ___actionCopiedQueueLateUpdateFunc_9; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_actionCopiedQueueLateUpdateFunc_9() { return &___actionCopiedQueueLateUpdateFunc_9; }
	inline void set_actionCopiedQueueLateUpdateFunc_9(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___actionCopiedQueueLateUpdateFunc_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionCopiedQueueLateUpdateFunc_9), (void*)value);
	}

	inline static int32_t get_offset_of_actionCopiedQueueFixedUpdateFunc_12() { return static_cast<int32_t>(offsetof(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A, ___actionCopiedQueueFixedUpdateFunc_12)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_actionCopiedQueueFixedUpdateFunc_12() const { return ___actionCopiedQueueFixedUpdateFunc_12; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_actionCopiedQueueFixedUpdateFunc_12() { return &___actionCopiedQueueFixedUpdateFunc_12; }
	inline void set_actionCopiedQueueFixedUpdateFunc_12(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___actionCopiedQueueFixedUpdateFunc_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionCopiedQueueFixedUpdateFunc_12), (void*)value);
	}
};

struct UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields
{
public:
	// UnityThread UnityThread::instance
	UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * ___instance_4;
	// System.Collections.Generic.List`1<System.Action> UnityThread::actionQueuesUpdateFunc
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___actionQueuesUpdateFunc_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UnityThread::noActionQueueToExecuteUpdateFunc
	bool ___noActionQueueToExecuteUpdateFunc_7;
	// System.Collections.Generic.List`1<System.Action> UnityThread::actionQueuesLateUpdateFunc
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___actionQueuesLateUpdateFunc_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UnityThread::noActionQueueToExecuteLateUpdateFunc
	bool ___noActionQueueToExecuteLateUpdateFunc_10;
	// System.Collections.Generic.List`1<System.Action> UnityThread::actionQueuesFixedUpdateFunc
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___actionQueuesFixedUpdateFunc_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UnityThread::noActionQueueToExecuteFixedUpdateFunc
	bool ___noActionQueueToExecuteFixedUpdateFunc_13;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields, ___instance_4)); }
	inline UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * get_instance_4() const { return ___instance_4; }
	inline UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_actionQueuesUpdateFunc_5() { return static_cast<int32_t>(offsetof(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields, ___actionQueuesUpdateFunc_5)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_actionQueuesUpdateFunc_5() const { return ___actionQueuesUpdateFunc_5; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_actionQueuesUpdateFunc_5() { return &___actionQueuesUpdateFunc_5; }
	inline void set_actionQueuesUpdateFunc_5(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___actionQueuesUpdateFunc_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionQueuesUpdateFunc_5), (void*)value);
	}

	inline static int32_t get_offset_of_noActionQueueToExecuteUpdateFunc_7() { return static_cast<int32_t>(offsetof(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields, ___noActionQueueToExecuteUpdateFunc_7)); }
	inline bool get_noActionQueueToExecuteUpdateFunc_7() const { return ___noActionQueueToExecuteUpdateFunc_7; }
	inline bool* get_address_of_noActionQueueToExecuteUpdateFunc_7() { return &___noActionQueueToExecuteUpdateFunc_7; }
	inline void set_noActionQueueToExecuteUpdateFunc_7(bool value)
	{
		___noActionQueueToExecuteUpdateFunc_7 = value;
	}

	inline static int32_t get_offset_of_actionQueuesLateUpdateFunc_8() { return static_cast<int32_t>(offsetof(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields, ___actionQueuesLateUpdateFunc_8)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_actionQueuesLateUpdateFunc_8() const { return ___actionQueuesLateUpdateFunc_8; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_actionQueuesLateUpdateFunc_8() { return &___actionQueuesLateUpdateFunc_8; }
	inline void set_actionQueuesLateUpdateFunc_8(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___actionQueuesLateUpdateFunc_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionQueuesLateUpdateFunc_8), (void*)value);
	}

	inline static int32_t get_offset_of_noActionQueueToExecuteLateUpdateFunc_10() { return static_cast<int32_t>(offsetof(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields, ___noActionQueueToExecuteLateUpdateFunc_10)); }
	inline bool get_noActionQueueToExecuteLateUpdateFunc_10() const { return ___noActionQueueToExecuteLateUpdateFunc_10; }
	inline bool* get_address_of_noActionQueueToExecuteLateUpdateFunc_10() { return &___noActionQueueToExecuteLateUpdateFunc_10; }
	inline void set_noActionQueueToExecuteLateUpdateFunc_10(bool value)
	{
		___noActionQueueToExecuteLateUpdateFunc_10 = value;
	}

	inline static int32_t get_offset_of_actionQueuesFixedUpdateFunc_11() { return static_cast<int32_t>(offsetof(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields, ___actionQueuesFixedUpdateFunc_11)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_actionQueuesFixedUpdateFunc_11() const { return ___actionQueuesFixedUpdateFunc_11; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_actionQueuesFixedUpdateFunc_11() { return &___actionQueuesFixedUpdateFunc_11; }
	inline void set_actionQueuesFixedUpdateFunc_11(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___actionQueuesFixedUpdateFunc_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionQueuesFixedUpdateFunc_11), (void*)value);
	}

	inline static int32_t get_offset_of_noActionQueueToExecuteFixedUpdateFunc_13() { return static_cast<int32_t>(offsetof(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields, ___noActionQueueToExecuteFixedUpdateFunc_13)); }
	inline bool get_noActionQueueToExecuteFixedUpdateFunc_13() const { return ___noActionQueueToExecuteFixedUpdateFunc_13; }
	inline bool* get_address_of_noActionQueueToExecuteFixedUpdateFunc_13() { return &___noActionQueueToExecuteFixedUpdateFunc_13; }
	inline void set_noActionQueueToExecuteFixedUpdateFunc_13(bool value)
	{
		___noActionQueueToExecuteFixedUpdateFunc_13 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnEndEdit
	EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnSubmit_33;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_34;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_36;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_38;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_39;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_41;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_42;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_45;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_46;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_47;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_48;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_49;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_50;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_51;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_52;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_53;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_54;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_55;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_59;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_62;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_63;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_64;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_65;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_66;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_67;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_68;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_70;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSubmit_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnSubmit_33)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnSubmit_33() const { return ___m_OnSubmit_33; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnSubmit_33() { return &___m_OnSubmit_33; }
	inline void set_m_OnSubmit_33(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnSubmit_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSubmit_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_34)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_34() const { return ___m_OnValueChanged_34; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_34() { return &___m_OnValueChanged_34; }
	inline void set_m_OnValueChanged_34(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_35)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_35() const { return ___m_OnValidateInput_35; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_35() { return &___m_OnValidateInput_35; }
	inline void set_m_OnValidateInput_35(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_36)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_36() const { return ___m_CaretColor_36; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_36() { return &___m_CaretColor_36; }
	inline void set_m_CaretColor_36(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_37)); }
	inline bool get_m_CustomCaretColor_37() const { return ___m_CustomCaretColor_37; }
	inline bool* get_address_of_m_CustomCaretColor_37() { return &___m_CustomCaretColor_37; }
	inline void set_m_CustomCaretColor_37(bool value)
	{
		___m_CustomCaretColor_37 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_38)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_38() const { return ___m_SelectionColor_38; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_38() { return &___m_SelectionColor_38; }
	inline void set_m_SelectionColor_38(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_38 = value;
	}

	inline static int32_t get_offset_of_m_Text_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_39)); }
	inline String_t* get_m_Text_39() const { return ___m_Text_39; }
	inline String_t** get_address_of_m_Text_39() { return &___m_Text_39; }
	inline void set_m_Text_39(String_t* value)
	{
		___m_Text_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_40)); }
	inline float get_m_CaretBlinkRate_40() const { return ___m_CaretBlinkRate_40; }
	inline float* get_address_of_m_CaretBlinkRate_40() { return &___m_CaretBlinkRate_40; }
	inline void set_m_CaretBlinkRate_40(float value)
	{
		___m_CaretBlinkRate_40 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_41)); }
	inline int32_t get_m_CaretWidth_41() const { return ___m_CaretWidth_41; }
	inline int32_t* get_address_of_m_CaretWidth_41() { return &___m_CaretWidth_41; }
	inline void set_m_CaretWidth_41(int32_t value)
	{
		___m_CaretWidth_41 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_42)); }
	inline bool get_m_ReadOnly_42() const { return ___m_ReadOnly_42; }
	inline bool* get_address_of_m_ReadOnly_42() { return &___m_ReadOnly_42; }
	inline void set_m_ReadOnly_42(bool value)
	{
		___m_ReadOnly_42 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_43)); }
	inline bool get_m_ShouldActivateOnSelect_43() const { return ___m_ShouldActivateOnSelect_43; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_43() { return &___m_ShouldActivateOnSelect_43; }
	inline void set_m_ShouldActivateOnSelect_43(bool value)
	{
		___m_ShouldActivateOnSelect_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_44)); }
	inline int32_t get_m_CaretPosition_44() const { return ___m_CaretPosition_44; }
	inline int32_t* get_address_of_m_CaretPosition_44() { return &___m_CaretPosition_44; }
	inline void set_m_CaretPosition_44(int32_t value)
	{
		___m_CaretPosition_44 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_45)); }
	inline int32_t get_m_CaretSelectPosition_45() const { return ___m_CaretSelectPosition_45; }
	inline int32_t* get_address_of_m_CaretSelectPosition_45() { return &___m_CaretSelectPosition_45; }
	inline void set_m_CaretSelectPosition_45(int32_t value)
	{
		___m_CaretSelectPosition_45 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_46)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_46() const { return ___caretRectTrans_46; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_46() { return &___caretRectTrans_46; }
	inline void set_caretRectTrans_46(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_47)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_47() const { return ___m_CursorVerts_47; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_47() { return &___m_CursorVerts_47; }
	inline void set_m_CursorVerts_47(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_48)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_48() const { return ___m_InputTextCache_48; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_48() { return &___m_InputTextCache_48; }
	inline void set_m_InputTextCache_48(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_49)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_49() const { return ___m_CachedInputRenderer_49; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_49() { return &___m_CachedInputRenderer_49; }
	inline void set_m_CachedInputRenderer_49(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_50)); }
	inline bool get_m_PreventFontCallback_50() const { return ___m_PreventFontCallback_50; }
	inline bool* get_address_of_m_PreventFontCallback_50() { return &___m_PreventFontCallback_50; }
	inline void set_m_PreventFontCallback_50(bool value)
	{
		___m_PreventFontCallback_50 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_51)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_51() const { return ___m_Mesh_51; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_51() { return &___m_Mesh_51; }
	inline void set_m_Mesh_51(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_52)); }
	inline bool get_m_AllowInput_52() const { return ___m_AllowInput_52; }
	inline bool* get_address_of_m_AllowInput_52() { return &___m_AllowInput_52; }
	inline void set_m_AllowInput_52(bool value)
	{
		___m_AllowInput_52 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_53)); }
	inline bool get_m_ShouldActivateNextUpdate_53() const { return ___m_ShouldActivateNextUpdate_53; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_53() { return &___m_ShouldActivateNextUpdate_53; }
	inline void set_m_ShouldActivateNextUpdate_53(bool value)
	{
		___m_ShouldActivateNextUpdate_53 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_54)); }
	inline bool get_m_UpdateDrag_54() const { return ___m_UpdateDrag_54; }
	inline bool* get_address_of_m_UpdateDrag_54() { return &___m_UpdateDrag_54; }
	inline void set_m_UpdateDrag_54(bool value)
	{
		___m_UpdateDrag_54 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_55() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_55)); }
	inline bool get_m_DragPositionOutOfBounds_55() const { return ___m_DragPositionOutOfBounds_55; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_55() { return &___m_DragPositionOutOfBounds_55; }
	inline void set_m_DragPositionOutOfBounds_55(bool value)
	{
		___m_DragPositionOutOfBounds_55 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_58)); }
	inline bool get_m_CaretVisible_58() const { return ___m_CaretVisible_58; }
	inline bool* get_address_of_m_CaretVisible_58() { return &___m_CaretVisible_58; }
	inline void set_m_CaretVisible_58(bool value)
	{
		___m_CaretVisible_58 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_59)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_59() const { return ___m_BlinkCoroutine_59; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_59() { return &___m_BlinkCoroutine_59; }
	inline void set_m_BlinkCoroutine_59(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_60)); }
	inline float get_m_BlinkStartTime_60() const { return ___m_BlinkStartTime_60; }
	inline float* get_address_of_m_BlinkStartTime_60() { return &___m_BlinkStartTime_60; }
	inline void set_m_BlinkStartTime_60(float value)
	{
		___m_BlinkStartTime_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_61)); }
	inline int32_t get_m_DrawStart_61() const { return ___m_DrawStart_61; }
	inline int32_t* get_address_of_m_DrawStart_61() { return &___m_DrawStart_61; }
	inline void set_m_DrawStart_61(int32_t value)
	{
		___m_DrawStart_61 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_62)); }
	inline int32_t get_m_DrawEnd_62() const { return ___m_DrawEnd_62; }
	inline int32_t* get_address_of_m_DrawEnd_62() { return &___m_DrawEnd_62; }
	inline void set_m_DrawEnd_62(int32_t value)
	{
		___m_DrawEnd_62 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_63)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_63() const { return ___m_DragCoroutine_63; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_63() { return &___m_DragCoroutine_63; }
	inline void set_m_DragCoroutine_63(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_64)); }
	inline String_t* get_m_OriginalText_64() const { return ___m_OriginalText_64; }
	inline String_t** get_address_of_m_OriginalText_64() { return &___m_OriginalText_64; }
	inline void set_m_OriginalText_64(String_t* value)
	{
		___m_OriginalText_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_65)); }
	inline bool get_m_WasCanceled_65() const { return ___m_WasCanceled_65; }
	inline bool* get_address_of_m_WasCanceled_65() { return &___m_WasCanceled_65; }
	inline void set_m_WasCanceled_65(bool value)
	{
		___m_WasCanceled_65 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_66)); }
	inline bool get_m_HasDoneFocusTransition_66() const { return ___m_HasDoneFocusTransition_66; }
	inline bool* get_address_of_m_HasDoneFocusTransition_66() { return &___m_HasDoneFocusTransition_66; }
	inline void set_m_HasDoneFocusTransition_66(bool value)
	{
		___m_HasDoneFocusTransition_66 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_67)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_67() const { return ___m_WaitForSecondsRealtime_67; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_67() { return &___m_WaitForSecondsRealtime_67; }
	inline void set_m_WaitForSecondsRealtime_67(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_68() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_68)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_68() const { return ___m_TouchKeyboardAllowsInPlaceEditing_68; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_68() { return &___m_TouchKeyboardAllowsInPlaceEditing_68; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_68(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_68 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_70() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_70)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_70() const { return ___m_ProcessingEvent_70; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_70() { return &___m_ProcessingEvent_70; }
	inline void set_m_ProcessingEvent_70(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_70), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m0D27CDCE1DE6E1E9BB00B10E6C47205041209B3F_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m1F74BC3B29E63392FBC9312D0AE74CC7B1C143A5_gshared (String_t* ___json0, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mAAE01A16F138CEC8E1965D322EFB6A7045FE76F2_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ChatEvents::add_onNewChat(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEvents_add_onNewChat_mF0B608FC3DB4BFBE73BC0B4F56F94CC76E2E22A6 (ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mBBB388BF3B565DBE642E7A820CF44C8C54422528 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.InputField>()
inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Void ChatEvents::sendChat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEvents_sendChat_mD20FCD3F1A3920E33445819A92AEB2FA3705A251 (ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityThread::initUnityThread(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_initUnityThread_m7E1BB70A89DB1C3B71BA23F5486E2DB4ED78FFC6 (bool ___visible0, const RuntimeMethod* method);
// System.Void ChatEvents::add_onSendChat(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEvents_add_onSendChat_mB52B3B00C2491F86F2B179F79B9E2EC130097917 (ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityThread::executeInUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_executeInUpdate_mA5C09375FFF47F6B68D2FEB5DB550FF0D1780E22 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// Quobject.SocketIoClientDotNet.Client.Socket Quobject.SocketIoClientDotNet.Client.IO::Socket(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 * IO_Socket_mBD725C88EB77037F5176CA89F61927DB779DFC74 (String_t* ___uri0, const RuntimeMethod* method);
// Quobject.EngineIoClientDotNet.ComponentEmitter.Emitter Quobject.EngineIoClientDotNet.ComponentEmitter.Emitter::On(System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25 * Emitter_On_mAE9BFC99624D2D0A25BCBE26E30D9D6700A82611 (Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25 * __this, String_t* ___eventString0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___fn1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// Quobject.EngineIoClientDotNet.ComponentEmitter.Emitter Quobject.EngineIoClientDotNet.ComponentEmitter.Emitter::On(System.String,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25 * Emitter_On_m83518A08DFB3FC6E5A1C93BCD71E2749B6E413D9 (Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25 * __this, String_t* ___eventString0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___fn1, const RuntimeMethod* method);
// System.Void requestChat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void requestChat__ctor_mF3E83A0BE032ADD3739B2D8D39388E5A4247B76F (requestChat_tAA9DC23796BFE120AF9AE08002CB0BBE2E33F8CD * __this, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void SocketScript::connectSocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketScript_connectSocket_m9B10BB4E8815FDDE5622E685AAF24FE2A4696695 (SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665 * __this, const RuntimeMethod* method);
// System.Void SocketScript::socketListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketScript_socketListener_m1A0E01E22B5EF5A822DBEA1C5A4E045E75CED79C (SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665 * __this, const RuntimeMethod* method);
// System.Void initChat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void initChat__ctor_mB421D52D70966BF12A66D4AC3D4243C6F107315C (initChat_t81E37B2B44DA855E223219D91E0CA4CBA71939A6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityThread>()
inline UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * GameObject_AddComponent_TisUnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_m11C0C48336D0FBC8668748FCD27BB9A9DECAC96C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityThread/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mCA38F8709513598A4839C7108CA09166ECAF0EEF (U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
inline void List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mDD681AFD6615F2444E8D636B6BE216DB8188C053 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m0D27CDCE1DE6E1E9BB00B10E6C47205041209B3F_gshared)(__this, ___collection0, method);
}
// !0 System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void SocketScript/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0D08A9EF68D5B83EAA11036BB017D40406CE0A2 (U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678 * __this, const RuntimeMethod* method);
// System.Void SocketScript/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m4CDC29D9546ACC4D4870691484553571480B7B34 (U3CU3Ec__DisplayClass5_0_tF12CFFB9108327321C0C92FCFB3785F23D4094CF * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<responseChat>(System.String)
inline responseChat_tF96C4C581575ACB52577280B8054F578C0C05402 * JsonUtility_FromJson_TisresponseChat_tF96C4C581575ACB52577280B8054F578C0C05402_m8D9BFC06926CC875BFA5F0CE1CD2027B114C3569 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  responseChat_tF96C4C581575ACB52577280B8054F578C0C05402 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m1F74BC3B29E63392FBC9312D0AE74CC7B1C143A5_gshared)(___json0, method);
}
// System.Void ChatEvents::newChat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEvents_newChat_mED004064A61CFC80F7C29C535BFE02413F2B523D (ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void ChatEvents::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEvents_Awake_m85FB48658A068CAB44EA8F0510A261CFB7141AE1 (ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void Awake() { current = this; }
		((ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_StaticFields*)il2cpp_codegen_static_fields_for(ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_il2cpp_TypeInfo_var))->set_current_4(__this);
		// private void Awake() { current = this; }
		return;
	}
}
// System.Void ChatEvents::add_onNewChat(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEvents_add_onNewChat_mF0B608FC3DB4BFBE73BC0B4F56F94CC76E2E22A6 (ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_2 = NULL;
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_onNewChat_5();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var));
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** L_5 = __this->get_address_of_onNewChat_5();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = V_2;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_7 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *>((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_9 = V_0;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_9) == ((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ChatEvents::remove_onNewChat(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEvents_remove_onNewChat_m79970E44053C51542F6D8EE3B495211C25AC8CDC (ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_2 = NULL;
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_onNewChat_5();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var));
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** L_5 = __this->get_address_of_onNewChat_5();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = V_2;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_7 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *>((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_9 = V_0;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_9) == ((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ChatEvents::add_onSendChat(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEvents_add_onSendChat_mB52B3B00C2491F86F2B179F79B9E2EC130097917 (ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_2 = NULL;
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_onSendChat_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var));
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** L_5 = __this->get_address_of_onSendChat_6();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = V_2;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_7 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *>((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_9 = V_0;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_9) == ((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ChatEvents::remove_onSendChat(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEvents_remove_onSendChat_m5216E5A7FF8D0DA5B9B6BDFDC4C770A4A3036FFD (ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * __this, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_2 = NULL;
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_onSendChat_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var));
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** L_5 = __this->get_address_of_onSendChat_6();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = V_2;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_7 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *>((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_9 = V_0;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_9) == ((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ChatEvents::newChat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEvents_newChat_mED004064A61CFC80F7C29C535BFE02413F2B523D (ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onNewChat != null) { onNewChat(name); }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_onNewChat_5();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (onNewChat != null) { onNewChat(name); }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = __this->get_onNewChat_5();
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_1, L_2, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void ChatEvents::sendChat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEvents_sendChat_mD20FCD3F1A3920E33445819A92AEB2FA3705A251 (ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onSendChat != null) { onSendChat(name); }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_onSendChat_6();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (onSendChat != null) { onSendChat(name); }
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = __this->get_onSendChat_6();
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1(L_1, L_2, /*hidden argument*/Action_1_Invoke_mBF157FC77ED7B1B47EE2F7C6E51DE0E9EFB197C1_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void ChatEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEvents__ctor_mA15299F7A2400688B04681BBAB8D70C67DC46CE7 (ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ChatScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatScene_Start_m17475913ACA41C0FAEB9100855DD81D5C3322C2D (ChatScene_tC0C5440E8AED8D53AC32487AEDBF7E76C92B1AD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatScene_newChat_m65B91D45D1579C59CC325BDAF72368937E10A1AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChatEvents.current.onNewChat += newChat;
		ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * L_0 = ((ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_StaticFields*)il2cpp_codegen_static_fields_for(ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_il2cpp_TypeInfo_var))->get_current_4();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_1, __this, (intptr_t)((intptr_t)ChatScene_newChat_m65B91D45D1579C59CC325BDAF72368937E10A1AD_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		NullCheck(L_0);
		ChatEvents_add_onNewChat_mF0B608FC3DB4BFBE73BC0B4F56F94CC76E2E22A6(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChatScene::newChat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatScene_newChat_m65B91D45D1579C59CC325BDAF72368937E10A1AD (ChatScene_tC0C5440E8AED8D53AC32487AEDBF7E76C92B1AD5 * __this, String_t* ___chat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mBBB388BF3B565DBE642E7A820CF44C8C54422528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44BD96A2A226DDF3449B0616CE3823777B99C038);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("New chat: "+chat);
		String_t* L_0 = ___chat0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral44BD96A2A226DDF3449B0616CE3823777B99C038, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// this.chatTextView.GetComponent<Text>().text += "\n"+chat;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_chatTextView_4();
		NullCheck(L_2);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3;
		L_3 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mBBB388BF3B565DBE642E7A820CF44C8C54422528(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mBBB388BF3B565DBE642E7A820CF44C8C54422528_RuntimeMethod_var);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = L_3;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_4);
		String_t* L_6 = ___chat0;
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_5, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void ChatScene::sendChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatScene_sendChat_m9332E222A364FFD99D8388FDB15E9479960384AE (ChatScene_tC0C5440E8AED8D53AC32487AEDBF7E76C92B1AD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChatEvents.current.sendChat(this.inputChat.GetComponent<InputField>().text);
		ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * L_0 = ((ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_StaticFields*)il2cpp_codegen_static_fields_for(ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_il2cpp_TypeInfo_var))->get_current_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_inputChat_5();
		NullCheck(L_1);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2;
		L_2 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8(L_1, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		ChatEvents_sendChat_mD20FCD3F1A3920E33445819A92AEB2FA3705A251(L_0, L_3, /*hidden argument*/NULL);
		// this.inputChat.GetComponent<InputField>().text = "";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_inputChat_5();
		NullCheck(L_4);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_5;
		L_5 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8(L_4, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8_RuntimeMethod_var);
		NullCheck(L_5);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChatScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatScene__ctor_m4F7E5864A87223A582F4D2379E05E5318EA21D6A (ChatScene_tC0C5440E8AED8D53AC32487AEDBF7E76C92B1AD5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Constants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constants__cctor_m89B40C11188D8A59C77A27ADDDA950493F7F0904 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral418BD05E22030814CA12822E83DB8549A1DAE704);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB43AE1B53CF305AA1ED0FB41C4EF18D10A3605F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA7F6D885E16FD936B282C5FFAE0F8ADA0E2E43A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF28A5F9AA02BE66688DDC0377515AAC0CBE0033);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string URL_SOCKET = "http://192.168.2.77:8090";
		((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->set_URL_SOCKET_0(_stringLiteralDF28A5F9AA02BE66688DDC0377515AAC0CBE0033);
		// public static string ON_NEWCHAT = "newchat";
		((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->set_ON_NEWCHAT_1(_stringLiteral418BD05E22030814CA12822E83DB8549A1DAE704);
		// public static string EMIT_INITCHAT = "initchat";
		((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->set_EMIT_INITCHAT_2(_stringLiteralBB43AE1B53CF305AA1ED0FB41C4EF18D10A3605F);
		// public static string EMIT_CHAT = "sendchat";
		((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->set_EMIT_CHAT_3(_stringLiteralCA7F6D885E16FD936B282C5FFAE0F8ADA0E2E43A);
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
// System.Void SocketScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketScript_Awake_m7280A7AAAA08AF59470992A86A535E3B9E880E6F (SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityThread.initUnityThread();
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		UnityThread_initUnityThread_m7E1BB70A89DB1C3B71BA23F5486E2DB4ED78FFC6((bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SocketScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketScript_Start_mE2B43AC6FD8B782B87750B7DC184421AA20C315F (SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketScript_U3CStartU3Eb__3_0_m33B765038F5C2A72CCA8D31086832A45C39B0187_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketScript_sendChat_mD3AAD49F63A87DBDE5A611075B6A98E791E2C704_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChatEvents.current.onSendChat += sendChat;
		ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * L_0 = ((ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_StaticFields*)il2cpp_codegen_static_fields_for(ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_il2cpp_TypeInfo_var))->get_current_4();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_1, __this, (intptr_t)((intptr_t)SocketScript_sendChat_mD3AAD49F63A87DBDE5A611075B6A98E791E2C704_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		NullCheck(L_0);
		ChatEvents_add_onSendChat_mB52B3B00C2491F86F2B179F79B9E2EC130097917(L_0, L_1, /*hidden argument*/NULL);
		// UnityThread.executeInUpdate(() =>
		// {
		//     this.connectSocket();
		//     this.socketListener();
		// });
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)SocketScript_U3CStartU3Eb__3_0_m33B765038F5C2A72CCA8D31086832A45C39B0187_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		UnityThread_executeInUpdate_mA5C09375FFF47F6B68D2FEB5DB550FF0D1780E22(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SocketScript::connectSocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketScript_connectSocket_m9B10BB4E8815FDDE5622E685AAF24FE2A4696695 (SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IO_t30053304A0A869772C263CAA1C3924A691B588F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (socket == null)
		Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 * L_0 = __this->get_socket_4();
		if (L_0)
		{
			goto IL_0030;
		}
	}

IL_0008:
	try
	{// begin try (depth: 1)
		// Debug.Log(Constants.URL_SOCKET);
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_URL_SOCKET_0();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// socket = IO.Socket(Constants.URL_SOCKET);
		String_t* L_2 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_URL_SOCKET_0();
		IL2CPP_RUNTIME_CLASS_INIT(IO_t30053304A0A869772C263CAA1C3924A691B588F3_il2cpp_TypeInfo_var);
		Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 * L_3;
		L_3 = IO_Socket_mBD725C88EB77037F5176CA89F61927DB779DFC74(L_2, /*hidden argument*/NULL);
		__this->set_socket_4(L_3);
		// }
		goto IL_0030;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{// begin catch(System.Exception)
		// Debug.Log(e.ToString());
		NullCheck(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0030;
	}// end catch (depth: 1)

IL_0030:
	{
		// }
		return;
	}
}
// System.Void SocketScript::socketListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketScript_socketListener_m1A0E01E22B5EF5A822DBEA1C5A4E045E75CED79C (SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketScript_U3CsocketListenerU3Eb__5_0_m6B4292BC8D5C240E26F3883A9A48FCCCE306D548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CsocketListenerU3Eb__5_1_mD28120605AEE6D6E758643FA647B158E65E78B72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 * G_B2_2 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 * G_B1_2 = NULL;
	{
		// socket.On(Socket.EVENT_CONNECT, () =>
		// {
		//     if(!isConnected)
		//     {
		//         initChat obj = new initChat();
		//         obj.nameUser = "User Unity";
		//         string jsonData = JsonUtility.ToJson(obj);
		// 
		//         socket.Emit(Constants.EMIT_INITCHAT, jsonData);
		//         isConnected = true;
		//     }
		// });
		Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 * L_0 = __this->get_socket_4();
		IL2CPP_RUNTIME_CLASS_INIT(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_StaticFields*)il2cpp_codegen_static_fields_for(Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888_il2cpp_TypeInfo_var))->get_EVENT_CONNECT_2();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)SocketScript_U3CsocketListenerU3Eb__5_0_m6B4292BC8D5C240E26F3883A9A48FCCCE306D548_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25 * L_3;
		L_3 = Emitter_On_mAE9BFC99624D2D0A25BCBE26E30D9D6700A82611(L_0, L_1, L_2, /*hidden argument*/NULL);
		// socket.On(Constants.ON_NEWCHAT, data =>
		// {
		//     Debug.Log(data.ToString());
		//     responseChat response = JsonUtility.FromJson<responseChat>(data.ToString());
		//     UnityThread.executeInUpdate(() =>
		//     {
		//         ChatEvents.current.newChat(response.chat);
		//     });
		// 
		// });
		Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 * L_4 = __this->get_socket_4();
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_ON_NEWCHAT_1();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_il2cpp_TypeInfo_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_6 = ((U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_il2cpp_TypeInfo_var))->get_U3CU3E9__5_1_1();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		G_B1_2 = L_4;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			G_B2_2 = L_4;
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_il2cpp_TypeInfo_var);
		U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678 * L_8 = ((U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_9 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3CsocketListenerU3Eb__5_1_mD28120605AEE6D6E758643FA647B158E65E78B72_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_10 = L_9;
		((U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_il2cpp_TypeInfo_var))->set_U3CU3E9__5_1_1(L_10);
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0047:
	{
		NullCheck(G_B2_2);
		Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25 * L_11;
		L_11 = Emitter_On_m83518A08DFB3FC6E5A1C93BCD71E2749B6E413D9(G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SocketScript::sendChat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketScript_sendChat_mD3AAD49F63A87DBDE5A611075B6A98E791E2C704 (SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665 * __this, String_t* ___chat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&requestChat_tAA9DC23796BFE120AF9AE08002CB0BBE2E33F8CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// requestChat obj = new requestChat();
		requestChat_tAA9DC23796BFE120AF9AE08002CB0BBE2E33F8CD * L_0 = (requestChat_tAA9DC23796BFE120AF9AE08002CB0BBE2E33F8CD *)il2cpp_codegen_object_new(requestChat_tAA9DC23796BFE120AF9AE08002CB0BBE2E33F8CD_il2cpp_TypeInfo_var);
		requestChat__ctor_mF3E83A0BE032ADD3739B2D8D39388E5A4247B76F(L_0, /*hidden argument*/NULL);
		// obj.chat = chat;
		requestChat_tAA9DC23796BFE120AF9AE08002CB0BBE2E33F8CD * L_1 = L_0;
		String_t* L_2 = ___chat0;
		NullCheck(L_1);
		L_1->set_chat_0(L_2);
		// string jsonData = JsonUtility.ToJson(obj);
		String_t* L_3;
		L_3 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		// socket.Emit(Constants.EMIT_CHAT, jsonData);
		Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 * L_4 = __this->get_socket_4();
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_EMIT_CHAT_3();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_4);
		Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25 * L_9;
		L_9 = VirtualFuncInvoker2< Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25 *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* Quobject.EngineIoClientDotNet.ComponentEmitter.Emitter Quobject.EngineIoClientDotNet.ComponentEmitter.Emitter::Emit(System.String,System.Object[]) */, L_4, L_5, L_7);
		// }
		return;
	}
}
// System.Void SocketScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketScript__ctor_m26402964D768819B5A01E51D007A65D881F5B03B (SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocketScript::<Start>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketScript_U3CStartU3Eb__3_0_m33B765038F5C2A72CCA8D31086832A45C39B0187 (SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665 * __this, const RuntimeMethod* method)
{
	{
		// this.connectSocket();
		SocketScript_connectSocket_m9B10BB4E8815FDDE5622E685AAF24FE2A4696695(__this, /*hidden argument*/NULL);
		// this.socketListener();
		SocketScript_socketListener_m1A0E01E22B5EF5A822DBEA1C5A4E045E75CED79C(__this, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void SocketScript::<socketListener>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketScript_U3CsocketListenerU3Eb__5_0_m6B4292BC8D5C240E26F3883A9A48FCCCE306D548 (SocketScript_t57075B59E8A14AB28B0F854F1C8906034DCE2665 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C3FE3EEAE57AA711652101210C227DA3B09131);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&initChat_t81E37B2B44DA855E223219D91E0CA4CBA71939A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if(!isConnected)
		bool L_0 = __this->get_isConnected_5();
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		// initChat obj = new initChat();
		initChat_t81E37B2B44DA855E223219D91E0CA4CBA71939A6 * L_1 = (initChat_t81E37B2B44DA855E223219D91E0CA4CBA71939A6 *)il2cpp_codegen_object_new(initChat_t81E37B2B44DA855E223219D91E0CA4CBA71939A6_il2cpp_TypeInfo_var);
		initChat__ctor_mB421D52D70966BF12A66D4AC3D4243C6F107315C(L_1, /*hidden argument*/NULL);
		// obj.nameUser = "User Unity";
		initChat_t81E37B2B44DA855E223219D91E0CA4CBA71939A6 * L_2 = L_1;
		NullCheck(L_2);
		L_2->set_nameUser_0(_stringLiteral51C3FE3EEAE57AA711652101210C227DA3B09131);
		// string jsonData = JsonUtility.ToJson(obj);
		String_t* L_3;
		L_3 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// socket.Emit(Constants.EMIT_INITCHAT, jsonData);
		Socket_t7F3B19754C2EB65E7790540E4661DCC264EC0888 * L_4 = __this->get_socket_4();
		IL2CPP_RUNTIME_CLASS_INIT(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var);
		String_t* L_5 = ((Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02_il2cpp_TypeInfo_var))->get_EMIT_INITCHAT_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_4);
		Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25 * L_9;
		L_9 = VirtualFuncInvoker2< Emitter_t1DD116FB899CB22D447145975F87F24E813E2F25 *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* Quobject.EngineIoClientDotNet.ComponentEmitter.Emitter Quobject.EngineIoClientDotNet.ComponentEmitter.Emitter::Emit(System.String,System.Object[]) */, L_4, L_5, L_7);
		// isConnected = true;
		__this->set_isConnected_5((bool)1);
	}

IL_0040:
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
// System.Void UnityThread::initUnityThread(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_initUnityThread_m7E1BB70A89DB1C3B71BA23F5486E2DB4ED78FFC6 (bool ___visible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_m11C0C48336D0FBC8668748FCD27BB9A9DECAC96C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04961AF525F9368A8AA744FE98A313E1DE5CEDBC);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * L_0 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// GameObject obj = new GameObject("MainThreadExecuter");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_3, _stringLiteral04961AF525F9368A8AA744FE98A313E1DE5CEDBC, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (!visible)
		bool L_4 = ___visible0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		// obj.hideFlags = HideFlags.HideAndDontSave;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		NullCheck(L_5);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_5, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002b:
	{
		// DontDestroyOnLoad(obj);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_6, /*hidden argument*/NULL);
		// instance = obj.AddComponent<UnityThread>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_0;
		NullCheck(L_7);
		UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * L_8;
		L_8 = GameObject_AddComponent_TisUnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_m11C0C48336D0FBC8668748FCD27BB9A9DECAC96C(L_7, /*hidden argument*/GameObject_AddComponent_TisUnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_m11C0C48336D0FBC8668748FCD27BB9A9DECAC96C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_instance_4(L_8);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void UnityThread::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_Awake_m929F7BC8C4524B19FD779D6CA21D8EF8E06772E0 (UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityThread::executeCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_executeCoroutine_mC5F0503C5441FC8618E3F702BCB5FA9C01BBE5C8 (RuntimeObject* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CexecuteCoroutineU3Eb__0_mC54ED731AE66D35AD5252B2B7B71DE0EBCE66FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63 * L_0 = (U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass12_0__ctor_mCA38F8709513598A4839C7108CA09166ECAF0EEF(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63 * L_1 = V_0;
		RuntimeObject* L_2 = ___action0;
		NullCheck(L_1);
		L_1->set_action_0(L_2);
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * L_3 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// executeInUpdate(() => instance.StartCoroutine(action));
		U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CexecuteCoroutineU3Eb__0_mC54ED731AE66D35AD5252B2B7B71DE0EBCE66FEE_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		UnityThread_executeInUpdate_mA5C09375FFF47F6B68D2FEB5DB550FF0D1780E22(L_6, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void UnityThread::executeInUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_executeInUpdate_mA5C09375FFF47F6B68D2FEB5DB550FF0D1780E22 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (action == null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("action");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityThread_executeInUpdate_mA5C09375FFF47F6B68D2FEB5DB550FF0D1780E22_RuntimeMethod_var)));
	}

IL_000e:
	{
		// lock (actionQueuesUpdateFunc)
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesUpdateFunc_5();
		V_0 = L_2;
		V_1 = (bool)0;
	}

IL_0016:
	try
	{// begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
		// actionQueuesUpdateFunc.Add(action);
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesUpdateFunc_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = ___action0;
		NullCheck(L_4);
		List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24(L_4, L_5, /*hidden argument*/List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24_RuntimeMethod_var);
		// noActionQueueToExecuteUpdateFunc = false;
		il2cpp_codegen_memory_barrier();
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_noActionQueueToExecuteUpdateFunc_7(0);
		// }
		IL2CPP_LEAVE(0x3D, FINALLY_0033);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{// begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_003c;
			}
		}

IL_0036:
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(51)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityThread::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_Update_m4B2985C59168E230793AC0390462B694A949213D (UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mDD681AFD6615F2444E8D636B6BE216DB8188C053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (noActionQueueToExecuteUpdateFunc)
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		bool L_0 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_noActionQueueToExecuteUpdateFunc_7();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
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
		// actionCopiedQueueUpdateFunc.Clear();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_1 = __this->get_actionCopiedQueueUpdateFunc_6();
		NullCheck(L_1);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_1, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		// lock (actionQueuesUpdateFunc)
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesUpdateFunc_5();
		V_0 = L_2;
		V_1 = (bool)0;
	}

IL_001d:
	try
	{// begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
		// actionCopiedQueueUpdateFunc.AddRange(actionQueuesUpdateFunc);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = __this->get_actionCopiedQueueUpdateFunc_6();
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_5 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesUpdateFunc_5();
		NullCheck(L_4);
		List_1_AddRange_mDD681AFD6615F2444E8D636B6BE216DB8188C053(L_4, L_5, /*hidden argument*/List_1_AddRange_mDD681AFD6615F2444E8D636B6BE216DB8188C053_RuntimeMethod_var);
		// actionQueuesUpdateFunc.Clear();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_6 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesUpdateFunc_5();
		NullCheck(L_6);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_6, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		// noActionQueueToExecuteUpdateFunc = true;
		il2cpp_codegen_memory_barrier();
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_noActionQueueToExecuteUpdateFunc_7(1);
		// }
		IL2CPP_LEAVE(0x53, FINALLY_0049);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{// begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0052;
			}
		}

IL_004c:
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0052:
		{
			IL2CPP_END_FINALLY(73)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// for (int i = 0; i < actionCopiedQueueUpdateFunc.Count; i++)
		V_2 = 0;
		goto IL_006c;
	}

IL_0057:
	{
		// actionCopiedQueueUpdateFunc[i].Invoke();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_9 = __this->get_actionCopiedQueueUpdateFunc_6();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11;
		L_11 = List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_RuntimeMethod_var);
		NullCheck(L_11);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_11, /*hidden argument*/NULL);
		// for (int i = 0; i < actionCopiedQueueUpdateFunc.Count; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_006c:
	{
		// for (int i = 0; i < actionCopiedQueueUpdateFunc.Count; i++)
		int32_t L_13 = V_2;
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_14 = __this->get_actionCopiedQueueUpdateFunc_6();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline(L_14, /*hidden argument*/List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0057;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityThread::executeInLateUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_executeInLateUpdate_mB2EC436C13983185E80920E7E8F00355B0987450 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (action == null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("action");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityThread_executeInLateUpdate_mB2EC436C13983185E80920E7E8F00355B0987450_RuntimeMethod_var)));
	}

IL_000e:
	{
		// lock (actionQueuesLateUpdateFunc)
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesLateUpdateFunc_8();
		V_0 = L_2;
		V_1 = (bool)0;
	}

IL_0016:
	try
	{// begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
		// actionQueuesLateUpdateFunc.Add(action);
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesLateUpdateFunc_8();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = ___action0;
		NullCheck(L_4);
		List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24(L_4, L_5, /*hidden argument*/List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24_RuntimeMethod_var);
		// noActionQueueToExecuteLateUpdateFunc = false;
		il2cpp_codegen_memory_barrier();
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_noActionQueueToExecuteLateUpdateFunc_10(0);
		// }
		IL2CPP_LEAVE(0x3D, FINALLY_0033);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{// begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_003c;
			}
		}

IL_0036:
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(51)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityThread::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_LateUpdate_m3D56F4EC0E45FC83EE2472B74A4C2C2E4FCD643E (UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mDD681AFD6615F2444E8D636B6BE216DB8188C053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (noActionQueueToExecuteLateUpdateFunc)
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		bool L_0 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_noActionQueueToExecuteLateUpdateFunc_10();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
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
		// actionCopiedQueueLateUpdateFunc.Clear();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_1 = __this->get_actionCopiedQueueLateUpdateFunc_9();
		NullCheck(L_1);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_1, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		// lock (actionQueuesLateUpdateFunc)
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesLateUpdateFunc_8();
		V_0 = L_2;
		V_1 = (bool)0;
	}

IL_001d:
	try
	{// begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
		// actionCopiedQueueLateUpdateFunc.AddRange(actionQueuesLateUpdateFunc);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = __this->get_actionCopiedQueueLateUpdateFunc_9();
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_5 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesLateUpdateFunc_8();
		NullCheck(L_4);
		List_1_AddRange_mDD681AFD6615F2444E8D636B6BE216DB8188C053(L_4, L_5, /*hidden argument*/List_1_AddRange_mDD681AFD6615F2444E8D636B6BE216DB8188C053_RuntimeMethod_var);
		// actionQueuesLateUpdateFunc.Clear();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_6 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesLateUpdateFunc_8();
		NullCheck(L_6);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_6, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		// noActionQueueToExecuteLateUpdateFunc = true;
		il2cpp_codegen_memory_barrier();
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_noActionQueueToExecuteLateUpdateFunc_10(1);
		// }
		IL2CPP_LEAVE(0x53, FINALLY_0049);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{// begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0052;
			}
		}

IL_004c:
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0052:
		{
			IL2CPP_END_FINALLY(73)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// for (int i = 0; i < actionCopiedQueueLateUpdateFunc.Count; i++)
		V_2 = 0;
		goto IL_006c;
	}

IL_0057:
	{
		// actionCopiedQueueLateUpdateFunc[i].Invoke();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_9 = __this->get_actionCopiedQueueLateUpdateFunc_9();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11;
		L_11 = List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_RuntimeMethod_var);
		NullCheck(L_11);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_11, /*hidden argument*/NULL);
		// for (int i = 0; i < actionCopiedQueueLateUpdateFunc.Count; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_006c:
	{
		// for (int i = 0; i < actionCopiedQueueLateUpdateFunc.Count; i++)
		int32_t L_13 = V_2;
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_14 = __this->get_actionCopiedQueueLateUpdateFunc_9();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline(L_14, /*hidden argument*/List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0057;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityThread::executeInFixedUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_executeInFixedUpdate_mFACE16996AAA19E7ADDAB8FA8CA18B56684E1449 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (action == null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___action0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("action");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityThread_executeInFixedUpdate_mFACE16996AAA19E7ADDAB8FA8CA18B56684E1449_RuntimeMethod_var)));
	}

IL_000e:
	{
		// lock (actionQueuesFixedUpdateFunc)
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesFixedUpdateFunc_11();
		V_0 = L_2;
		V_1 = (bool)0;
	}

IL_0016:
	try
	{// begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
		// actionQueuesFixedUpdateFunc.Add(action);
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesFixedUpdateFunc_11();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = ___action0;
		NullCheck(L_4);
		List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24(L_4, L_5, /*hidden argument*/List_1_Add_m8AE79EC2CE04C828830778BB7860C821C3AF4D24_RuntimeMethod_var);
		// noActionQueueToExecuteFixedUpdateFunc = false;
		il2cpp_codegen_memory_barrier();
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_noActionQueueToExecuteFixedUpdateFunc_13(0);
		// }
		IL2CPP_LEAVE(0x3D, FINALLY_0033);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{// begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_003c;
			}
		}

IL_0036:
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(51)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UnityThread::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_FixedUpdate_m899EB37D52E22DFC8D7A25517005EA47CA75F789 (UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mDD681AFD6615F2444E8D636B6BE216DB8188C053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (noActionQueueToExecuteFixedUpdateFunc)
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		bool L_0 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_noActionQueueToExecuteFixedUpdateFunc_13();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
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
		// actionCopiedQueueFixedUpdateFunc.Clear();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_1 = __this->get_actionCopiedQueueFixedUpdateFunc_12();
		NullCheck(L_1);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_1, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		// lock (actionQueuesFixedUpdateFunc)
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesFixedUpdateFunc_11();
		V_0 = L_2;
		V_1 = (bool)0;
	}

IL_001d:
	try
	{// begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
		// actionCopiedQueueFixedUpdateFunc.AddRange(actionQueuesFixedUpdateFunc);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = __this->get_actionCopiedQueueFixedUpdateFunc_12();
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_5 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesFixedUpdateFunc_11();
		NullCheck(L_4);
		List_1_AddRange_mDD681AFD6615F2444E8D636B6BE216DB8188C053(L_4, L_5, /*hidden argument*/List_1_AddRange_mDD681AFD6615F2444E8D636B6BE216DB8188C053_RuntimeMethod_var);
		// actionQueuesFixedUpdateFunc.Clear();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_6 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_actionQueuesFixedUpdateFunc_11();
		NullCheck(L_6);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_6, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		// noActionQueueToExecuteFixedUpdateFunc = true;
		il2cpp_codegen_memory_barrier();
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_noActionQueueToExecuteFixedUpdateFunc_13(1);
		// }
		IL2CPP_LEAVE(0x53, FINALLY_0049);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{// begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0052;
			}
		}

IL_004c:
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0052:
		{
			IL2CPP_END_FINALLY(73)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// for (int i = 0; i < actionCopiedQueueFixedUpdateFunc.Count; i++)
		V_2 = 0;
		goto IL_006c;
	}

IL_0057:
	{
		// actionCopiedQueueFixedUpdateFunc[i].Invoke();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_9 = __this->get_actionCopiedQueueFixedUpdateFunc_12();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11;
		L_11 = List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m5A0FDCA39AD94F1DB9A64D80B088EF7D87411022_RuntimeMethod_var);
		NullCheck(L_11);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_11, /*hidden argument*/NULL);
		// for (int i = 0; i < actionCopiedQueueFixedUpdateFunc.Count; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_006c:
	{
		// for (int i = 0; i < actionCopiedQueueFixedUpdateFunc.Count; i++)
		int32_t L_13 = V_2;
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_14 = __this->get_actionCopiedQueueFixedUpdateFunc_12();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline(L_14, /*hidden argument*/List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0057;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityThread::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread_OnDisable_m6D06210991C8967233FEC58E1B4C6A1E1F5506B2 (UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == this)
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * L_0 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, __this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = null;
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_instance_4((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A *)NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void UnityThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread__ctor_mB026097B94171032E79AC8414172E7D573BC7B34 (UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<System.Action> actionCopiedQueueUpdateFunc = new List<System.Action>();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_0, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		__this->set_actionCopiedQueueUpdateFunc_6(L_0);
		// List<System.Action> actionCopiedQueueLateUpdateFunc = new List<System.Action>();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_1 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_1, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		__this->set_actionCopiedQueueLateUpdateFunc_9(L_1);
		// List<System.Action> actionCopiedQueueFixedUpdateFunc = new List<System.Action>();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_2, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		__this->set_actionCopiedQueueFixedUpdateFunc_12(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityThread::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThread__cctor_m5062DAB784BFA1BC30459D64C0BD0D473F96E6DC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static UnityThread instance = null;
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_instance_4((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A *)NULL);
		// private static List<System.Action> actionQueuesUpdateFunc = new List<Action>();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_0, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_actionQueuesUpdateFunc_5(L_0);
		// private volatile static bool noActionQueueToExecuteUpdateFunc = true;
		il2cpp_codegen_memory_barrier();
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_noActionQueueToExecuteUpdateFunc_7(1);
		// private static List<System.Action> actionQueuesLateUpdateFunc = new List<Action>();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_1 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_1, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_actionQueuesLateUpdateFunc_8(L_1);
		// private volatile static bool noActionQueueToExecuteLateUpdateFunc = true;
		il2cpp_codegen_memory_barrier();
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_noActionQueueToExecuteLateUpdateFunc_10(1);
		// private static List<System.Action> actionQueuesFixedUpdateFunc = new List<Action>();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_2, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_actionQueuesFixedUpdateFunc_11(L_2);
		// private volatile static bool noActionQueueToExecuteFixedUpdateFunc = true;
		il2cpp_codegen_memory_barrier();
		((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->set_noActionQueueToExecuteFixedUpdateFunc_13(1);
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
// System.Void initChat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void initChat__ctor_mB421D52D70966BF12A66D4AC3D4243C6F107315C (initChat_t81E37B2B44DA855E223219D91E0CA4CBA71939A6 * __this, const RuntimeMethod* method)
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
// System.Void requestChat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void requestChat__ctor_mF3E83A0BE032ADD3739B2D8D39388E5A4247B76F (requestChat_tAA9DC23796BFE120AF9AE08002CB0BBE2E33F8CD * __this, const RuntimeMethod* method)
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
// System.Void responseChat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void responseChat__ctor_mEAD0FA49F9A9A133122D11466D6A034118C93110 (responseChat_tF96C4C581575ACB52577280B8054F578C0C05402 * __this, const RuntimeMethod* method)
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
// System.Void SocketScript/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB07F98C726976DB41D97DD9F8330FAE2BD7B6ED5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678 * L_0 = (U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678 *)il2cpp_codegen_object_new(U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE0D08A9EF68D5B83EAA11036BB017D40406CE0A2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SocketScript/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0D08A9EF68D5B83EAA11036BB017D40406CE0A2 (U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocketScript/<>c::<socketListener>b__5_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CsocketListenerU3Eb__5_1_mD28120605AEE6D6E758643FA647B158E65E78B72 (U3CU3Ec_t0E9A1A55F1A3B1BEED247799EE83FD8F65733678 * __this, RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisresponseChat_tF96C4C581575ACB52577280B8054F578C0C05402_m8D9BFC06926CC875BFA5F0CE1CD2027B114C3569_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CsocketListenerU3Eb__2_mCA78AA6D0CB8B9429D2CD44D9426B2E3EC72DE29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tF12CFFB9108327321C0C92FCFB3785F23D4094CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass5_0_tF12CFFB9108327321C0C92FCFB3785F23D4094CF * L_0 = (U3CU3Ec__DisplayClass5_0_tF12CFFB9108327321C0C92FCFB3785F23D4094CF *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tF12CFFB9108327321C0C92FCFB3785F23D4094CF_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_m4CDC29D9546ACC4D4870691484553571480B7B34(L_0, /*hidden argument*/NULL);
		// Debug.Log(data.ToString());
		RuntimeObject * L_1 = ___data0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// responseChat response = JsonUtility.FromJson<responseChat>(data.ToString());
		U3CU3Ec__DisplayClass5_0_tF12CFFB9108327321C0C92FCFB3785F23D4094CF * L_3 = L_0;
		RuntimeObject * L_4 = ___data0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		responseChat_tF96C4C581575ACB52577280B8054F578C0C05402 * L_6;
		L_6 = JsonUtility_FromJson_TisresponseChat_tF96C4C581575ACB52577280B8054F578C0C05402_m8D9BFC06926CC875BFA5F0CE1CD2027B114C3569(L_5, /*hidden argument*/JsonUtility_FromJson_TisresponseChat_tF96C4C581575ACB52577280B8054F578C0C05402_m8D9BFC06926CC875BFA5F0CE1CD2027B114C3569_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_response_0(L_6);
		// UnityThread.executeInUpdate(() =>
		// {
		//     ChatEvents.current.newChat(response.chat);
		// });
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_7, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3CsocketListenerU3Eb__2_mCA78AA6D0CB8B9429D2CD44D9426B2E3EC72DE29_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		UnityThread_executeInUpdate_mA5C09375FFF47F6B68D2FEB5DB550FF0D1780E22(L_7, /*hidden argument*/NULL);
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
// System.Void SocketScript/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m4CDC29D9546ACC4D4870691484553571480B7B34 (U3CU3Ec__DisplayClass5_0_tF12CFFB9108327321C0C92FCFB3785F23D4094CF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SocketScript/<>c__DisplayClass5_0::<socketListener>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CsocketListenerU3Eb__2_mCA78AA6D0CB8B9429D2CD44D9426B2E3EC72DE29 (U3CU3Ec__DisplayClass5_0_tF12CFFB9108327321C0C92FCFB3785F23D4094CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ChatEvents.current.newChat(response.chat);
		ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B * L_0 = ((ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_StaticFields*)il2cpp_codegen_static_fields_for(ChatEvents_t7BB2B2CCA1B50F361D5E06348B4F61EFA1AA071B_il2cpp_TypeInfo_var))->get_current_4();
		responseChat_tF96C4C581575ACB52577280B8054F578C0C05402 * L_1 = __this->get_response_0();
		NullCheck(L_1);
		String_t* L_2 = L_1->get_chat_2();
		NullCheck(L_0);
		ChatEvents_newChat_mED004064A61CFC80F7C29C535BFE02413F2B523D(L_0, L_2, /*hidden argument*/NULL);
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
// System.Void UnityThread/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mCA38F8709513598A4839C7108CA09166ECAF0EEF (U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityThread/<>c__DisplayClass12_0::<executeCoroutine>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CexecuteCoroutineU3Eb__0_mC54ED731AE66D35AD5252B2B7B71DE0EBCE66FEE (U3CU3Ec__DisplayClass12_0_t942BA12B202E70079D8B79ED42A1984B1961BA63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// executeInUpdate(() => instance.StartCoroutine(action));
		IL2CPP_RUNTIME_CLASS_INIT(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var);
		UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A * L_0 = ((UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_StaticFields*)il2cpp_codegen_static_fields_for(UnityThread_t1E9372D9058727DF149C46B4FC8D637F3BE3322A_il2cpp_TypeInfo_var))->get_instance_4();
		RuntimeObject* L_1 = __this->get_action_0();
		NullCheck(L_0);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
