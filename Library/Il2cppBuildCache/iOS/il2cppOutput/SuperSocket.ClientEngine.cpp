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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// SuperSocket.ClientEngine.ConcurrentBatchQueue`1<System.ArraySegment`1<System.Byte>>
struct ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// SuperSocket.ClientEngine.ConcurrentBatchQueue`1/Entity<System.ArraySegment`1<System.Byte>>
struct Entity_t18F756F56FDD123D8F9B1BBC64B934873A2DD501;
// System.EventHandler`1<SuperSocket.ClientEngine.DataEventArgs>
struct EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116;
// System.EventHandler`1<SuperSocket.ClientEngine.ErrorEventArgs>
struct EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>
struct EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE;
// System.Func`2<System.ArraySegment`1<System.Byte>,System.Boolean>
struct Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20;
// SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>>
struct IBatchQueue_1_t60A34A395E3F81B73077DA78E17CB1C52A5F0BBA;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t883859B252A9C2EBF5E5132DE4284CC61456ADAA;
// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>
struct List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B;
// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>
struct PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A;
// System.ArraySegment`1<System.Byte>[]
struct ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// SuperSocket.ClientEngine.AsyncTcpSession
struct AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA;
// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608;
// SuperSocket.ClientEngine.AuthenticatedStreamTcpSession
struct AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// SuperSocket.ClientEngine.ClientSession
struct ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217;
// SuperSocket.ClientEngine.ConnectedCallback
struct ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79;
// SuperSocket.ClientEngine.DataEventArgs
struct DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Net.DnsEndPoint
struct DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// SuperSocket.ClientEngine.ErrorEventArgs
struct ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Mono.Security.Interface.IMonoSslStream
struct IMonoSslStream_t50FAA118318E74D7A4C370A3C3B4D8ADAF40C56E;
// System.IOAsyncCallback
struct IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E;
// SuperSocket.ClientEngine.IProxyConnector
struct IProxyConnector_tAB9DC155066A62440571FACDEFBD2B9945E55ADC;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// SuperSocket.ClientEngine.ProxyEventArgs
struct ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9;
// SuperSocket.ClientEngine.SecurityOption
struct SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8;
// System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4;
// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88;
// System.Net.Security.SslStream
struct SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49;
// SuperSocket.ClientEngine.SslStreamTcpSession
struct SslStreamTcpSession_t6F5491B6CE11807B11B492E18D625A39E54CF927;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// SuperSocket.ClientEngine.TcpClientSession
struct TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE;
// SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState
struct StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8;
// SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken
struct ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51;
// SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState
struct DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// SuperSocket.ClientEngine.TcpClientSession/<>c
struct U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Extensions_tAAAA539F31BCAD2A184958D855439E29B13949E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBatchQueue_1_t60A34A395E3F81B73077DA78E17CB1C52A5F0BBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProxyConnector_tAB9DC155066A62440571FACDEFBD2B9945E55ADC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicePointManager_tD9336F95A52899746A9008AF4A3505363FD2C2AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SslPolicyErrors_t4C4942B3C78507D4E6891DBEFE60043B285CFBE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05474CCD25939434932FCDF695AE5E55E456BBBE;
IL2CPP_EXTERN_C String_t* _stringLiteral23BD664C9380D0D43279CDEC5524917A4EDF97B9;
IL2CPP_EXTERN_C String_t* _stringLiteral25FAD9DCD5ED1669E6DD4141D9104B9837A8617F;
IL2CPP_EXTERN_C String_t* _stringLiteral42A96B26D32D43C2A582DD6B88CB2AEAC07214CD;
IL2CPP_EXTERN_C String_t* _stringLiteral5580C906D339DEB6DB744ECDFE0D63AAAD4A851D;
IL2CPP_EXTERN_C String_t* _stringLiteral58D2BDFF5B409ECE88D3A160453177AC48918C1F;
IL2CPP_EXTERN_C String_t* _stringLiteral8325B4D1F0CCCFC8664C40D56B573FB6FF1D2E75;
IL2CPP_EXTERN_C String_t* _stringLiteral834388900DDE3A532DC52E38FD6C30B1EAD86A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral925498484C22459972B4E49EC60DD267E180AFBA;
IL2CPP_EXTERN_C String_t* _stringLiteralA9A99CC761E2CB91E2370DFDEEE6A4CB64952140;
IL2CPP_EXTERN_C String_t* _stringLiteralAB3B8C26754F93715BD6B0CC860819B3480316A6;
IL2CPP_EXTERN_C String_t* _stringLiteralC77060BFDCA3E6D381803D899265B5012FFFEE31;
IL2CPP_EXTERN_C String_t* _stringLiteralD1E270CA14C4008A5702888CAB42400E2F53D420;
IL2CPP_EXTERN_C String_t* _stringLiteralEBA0C3BB5E3C1CD683A7D2040C039F6DEA8426FD;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_mF26B478B4569926D5CE8B3E90266C0E70EBE2048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTcpSession_Sending_Completed_mF6F36EE5FB5213745E8C111AE14BF2BFD3D7A56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticatedStreamTcpSession_OnDataRead_mD1C11D50AFB2634B6A8970FE64207469B1465FF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticatedStreamTcpSession_OnWriteComplete_mB3B7E27BBE4EBA1253C7F35E9B7487EA08A52686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentBatchQueue_1__ctor_mE8F6B0BBE0E74E9650ABAE3D54C2FD4F1C18042A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectAsyncExtension_OnGetHostAddresses_m87B92B9CFA2E678782D219827A4823DF5A8C9262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectAsyncExtension_SocketAsyncEventCompleted_mA415D29E56B7306BD1C69C5FC7DF45F0026A2165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectAsyncExtension_SocketConnectCompleted_mD90E67B341ED167DE11CA538736B4AA17249837B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m742C9508BC456A5ECD2DDDA6F8ED7620FB4EE904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mFBB65AE07928BC124B0B98A547BDFEA098A007F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m573CCCB8E58EF2FE9A29E8BAB201EED1556A27E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m5E03CA82E377D33E4286358264510BF49F222F84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m31A1D0D8653FF8734375FE9618A4A4EBDC5AEA26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m37AE8419D9BEAA421FDB484724C5EA53408083C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PosList_1__ctor_m101452CF8F103AF5F7E4D8259E78656EDB5BD348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PosList_1_get_Position_mAF8492F7B689C1F3D01EFC59C5C1C610DD4673EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PosList_1_set_Position_m48317C2D54D46618883B9482B716E84A4CBFDE0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStreamTcpSession_OnAuthenticated_mB9C4EF4F41B37AD9F00F75B71469934B1128F720_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStreamTcpSession_StartAuthenticatedStream_m9A17AFA07F9F0CBB78EC05BBFDFD5D1DD48864D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStreamTcpSession_ValidateRemoteCertificate_mA52002C0EE3ABB845103093F95ED9DAD1CB9D698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_Connect_m2D8FC94CC3E897E4DFC9EC02363F3E11CA7DB128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_ProcessConnect_m05912F04EAAB5ADEFC91DAB0157C40EC6F1E9563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_Proxy_Completed_m1B4B0B404227A07B9B403BDC1F1879A4ED119B7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_TrySend_m44DE65D393A92D2FF671B8FB33ED261FD59AA29F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_set_LocalEndPoint_m633EA91A175D06E083D506C0605279B0AB2CFDA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TcpClientSession_set_ReceiveBufferSize_m07EC50828788F2B7EBBCCA0C9CDF7EE8AECAFF91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetSendingQueueU3Eb__24_0_mECC47E20380858BC950C296D3DE52BD528A58384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB776A4BBA777C35C64C6917C258F38B782D97BBE 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>
struct List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B, ____items_1)); }
	inline ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* get__items_1() const { return ____items_1; }
	inline ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B_StaticFields, ____emptyArray_5)); }
	inline ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.CollectionBase
struct CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB, ___list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_list_0() const { return ___list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// SuperSocket.ClientEngine.ConnectAsyncExtension
struct ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE  : public RuntimeObject
{
public:

public:
};

struct ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_StaticFields
{
public:
	// System.Reflection.MethodInfo SuperSocket.ClientEngine.ConnectAsyncExtension::m_ConnectMethod
	MethodInfo_t * ___m_ConnectMethod_0;
	// System.Boolean SuperSocket.ClientEngine.ConnectAsyncExtension::m_OSSupportsIPv4
	bool ___m_OSSupportsIPv4_1;

public:
	inline static int32_t get_offset_of_m_ConnectMethod_0() { return static_cast<int32_t>(offsetof(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_StaticFields, ___m_ConnectMethod_0)); }
	inline MethodInfo_t * get_m_ConnectMethod_0() const { return ___m_ConnectMethod_0; }
	inline MethodInfo_t ** get_address_of_m_ConnectMethod_0() { return &___m_ConnectMethod_0; }
	inline void set_m_ConnectMethod_0(MethodInfo_t * value)
	{
		___m_ConnectMethod_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectMethod_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_OSSupportsIPv4_1() { return static_cast<int32_t>(offsetof(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_StaticFields, ___m_OSSupportsIPv4_1)); }
	inline bool get_m_OSSupportsIPv4_1() const { return ___m_OSSupportsIPv4_1; }
	inline bool* get_address_of_m_OSSupportsIPv4_1() { return &___m_OSSupportsIPv4_1; }
	inline void set_m_OSSupportsIPv4_1(bool value)
	{
		___m_OSSupportsIPv4_1 = value;
	}
};


// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// SuperSocket.ClientEngine.Extensions
struct Extensions_tAAAA539F31BCAD2A184958D855439E29B13949E1  : public RuntimeObject
{
public:

public:
};

struct Extensions_tAAAA539F31BCAD2A184958D855439E29B13949E1_StaticFields
{
public:
	// System.Random SuperSocket.ClientEngine.Extensions::m_Random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___m_Random_0;

public:
	inline static int32_t get_offset_of_m_Random_0() { return static_cast<int32_t>(offsetof(Extensions_tAAAA539F31BCAD2A184958D855439E29B13949E1_StaticFields, ___m_Random_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_m_Random_0() const { return ___m_Random_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_m_Random_0() { return &___m_Random_0; }
	inline void set_m_Random_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___m_Random_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Random_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
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

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * ___impl_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_3;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___impl_0)); }
	inline X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * get_impl_0() const { return ___impl_0; }
	inline X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509CertificateImpl_t921DFC48C47654AE30F0DABDF84567C95C0B1219 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_0), (void*)value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_issuer_name_2() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___issuer_name_2)); }
	inline String_t* get_issuer_name_2() const { return ___issuer_name_2; }
	inline String_t** get_address_of_issuer_name_2() { return &___issuer_name_2; }
	inline void set_issuer_name_2(String_t* value)
	{
		___issuer_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_subject_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553, ___subject_name_3)); }
	inline String_t* get_subject_name_3() const { return ___subject_name_3; }
	inline String_t** get_address_of_subject_name_3() { return &___subject_name_3; }
	inline void set_subject_name_3(String_t* value)
	{
		___subject_name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_name_3), (void*)value);
	}
};


// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE * ___impl_0;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37, ___impl_0)); }
	inline X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE * get_impl_0() const { return ___impl_0; }
	inline X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509ChainImpl_tAA54C8F65F2922D9BAB911D37EFFCD7A95A92AEE * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_0), (void*)value);
	}
};


// SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState
struct StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8  : public RuntimeObject
{
public:
	// System.Net.Security.AuthenticatedStream SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::<Stream>k__BackingField
	AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * ___U3CStreamU3Ek__BackingField_0;
	// System.Net.Sockets.Socket SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::<Client>k__BackingField
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___U3CClientU3Ek__BackingField_1;
	// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::<SendingItems>k__BackingField
	PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * ___U3CSendingItemsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CStreamU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8, ___U3CStreamU3Ek__BackingField_0)); }
	inline AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * get_U3CStreamU3Ek__BackingField_0() const { return ___U3CStreamU3Ek__BackingField_0; }
	inline AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 ** get_address_of_U3CStreamU3Ek__BackingField_0() { return &___U3CStreamU3Ek__BackingField_0; }
	inline void set_U3CStreamU3Ek__BackingField_0(AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * value)
	{
		___U3CStreamU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStreamU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8, ___U3CClientU3Ek__BackingField_1)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_U3CClientU3Ek__BackingField_1() const { return ___U3CClientU3Ek__BackingField_1; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_U3CClientU3Ek__BackingField_1() { return &___U3CClientU3Ek__BackingField_1; }
	inline void set_U3CClientU3Ek__BackingField_1(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___U3CClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSendingItemsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8, ___U3CSendingItemsU3Ek__BackingField_2)); }
	inline PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * get_U3CSendingItemsU3Ek__BackingField_2() const { return ___U3CSendingItemsU3Ek__BackingField_2; }
	inline PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A ** get_address_of_U3CSendingItemsU3Ek__BackingField_2() { return &___U3CSendingItemsU3Ek__BackingField_2; }
	inline void set_U3CSendingItemsU3Ek__BackingField_2(PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * value)
	{
		___U3CSendingItemsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSendingItemsU3Ek__BackingField_2), (void*)value);
	}
};


// SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken
struct ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51  : public RuntimeObject
{
public:
	// System.Object SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::<State>k__BackingField
	RuntimeObject * ___U3CStateU3Ek__BackingField_0;
	// SuperSocket.ClientEngine.ConnectedCallback SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::<Callback>k__BackingField
	ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___U3CCallbackU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51, ___U3CStateU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CStateU3Ek__BackingField_0() const { return ___U3CStateU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CStateU3Ek__BackingField_0() { return &___U3CStateU3Ek__BackingField_0; }
	inline void set_U3CStateU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CStateU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStateU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCallbackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51, ___U3CCallbackU3Ek__BackingField_1)); }
	inline ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * get_U3CCallbackU3Ek__BackingField_1() const { return ___U3CCallbackU3Ek__BackingField_1; }
	inline ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 ** get_address_of_U3CCallbackU3Ek__BackingField_1() { return &___U3CCallbackU3Ek__BackingField_1; }
	inline void set_U3CCallbackU3Ek__BackingField_1(ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * value)
	{
		___U3CCallbackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCallbackU3Ek__BackingField_1), (void*)value);
	}
};


// SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState
struct DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC  : public RuntimeObject
{
public:
	// System.Net.IPAddress[] SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::<Addresses>k__BackingField
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* ___U3CAddressesU3Ek__BackingField_0;
	// System.Int32 SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::<NextAddressIndex>k__BackingField
	int32_t ___U3CNextAddressIndexU3Ek__BackingField_1;
	// System.Int32 SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_2;
	// System.Net.Sockets.Socket SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::<Socket4>k__BackingField
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___U3CSocket4U3Ek__BackingField_3;
	// System.Net.Sockets.Socket SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::<Socket6>k__BackingField
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___U3CSocket6U3Ek__BackingField_4;
	// System.Object SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::<State>k__BackingField
	RuntimeObject * ___U3CStateU3Ek__BackingField_5;
	// SuperSocket.ClientEngine.ConnectedCallback SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::<Callback>k__BackingField
	ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___U3CCallbackU3Ek__BackingField_6;
	// System.Net.EndPoint SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::<LocalEndPoint>k__BackingField
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___U3CLocalEndPointU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CAddressesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC, ___U3CAddressesU3Ek__BackingField_0)); }
	inline IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* get_U3CAddressesU3Ek__BackingField_0() const { return ___U3CAddressesU3Ek__BackingField_0; }
	inline IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB** get_address_of_U3CAddressesU3Ek__BackingField_0() { return &___U3CAddressesU3Ek__BackingField_0; }
	inline void set_U3CAddressesU3Ek__BackingField_0(IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* value)
	{
		___U3CAddressesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAddressesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNextAddressIndexU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC, ___U3CNextAddressIndexU3Ek__BackingField_1)); }
	inline int32_t get_U3CNextAddressIndexU3Ek__BackingField_1() const { return ___U3CNextAddressIndexU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CNextAddressIndexU3Ek__BackingField_1() { return &___U3CNextAddressIndexU3Ek__BackingField_1; }
	inline void set_U3CNextAddressIndexU3Ek__BackingField_1(int32_t value)
	{
		___U3CNextAddressIndexU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPortU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC, ___U3CPortU3Ek__BackingField_2)); }
	inline int32_t get_U3CPortU3Ek__BackingField_2() const { return ___U3CPortU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPortU3Ek__BackingField_2() { return &___U3CPortU3Ek__BackingField_2; }
	inline void set_U3CPortU3Ek__BackingField_2(int32_t value)
	{
		___U3CPortU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CSocket4U3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC, ___U3CSocket4U3Ek__BackingField_3)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_U3CSocket4U3Ek__BackingField_3() const { return ___U3CSocket4U3Ek__BackingField_3; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_U3CSocket4U3Ek__BackingField_3() { return &___U3CSocket4U3Ek__BackingField_3; }
	inline void set_U3CSocket4U3Ek__BackingField_3(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___U3CSocket4U3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocket4U3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocket6U3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC, ___U3CSocket6U3Ek__BackingField_4)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_U3CSocket6U3Ek__BackingField_4() const { return ___U3CSocket6U3Ek__BackingField_4; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_U3CSocket6U3Ek__BackingField_4() { return &___U3CSocket6U3Ek__BackingField_4; }
	inline void set_U3CSocket6U3Ek__BackingField_4(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___U3CSocket6U3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocket6U3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC, ___U3CStateU3Ek__BackingField_5)); }
	inline RuntimeObject * get_U3CStateU3Ek__BackingField_5() const { return ___U3CStateU3Ek__BackingField_5; }
	inline RuntimeObject ** get_address_of_U3CStateU3Ek__BackingField_5() { return &___U3CStateU3Ek__BackingField_5; }
	inline void set_U3CStateU3Ek__BackingField_5(RuntimeObject * value)
	{
		___U3CStateU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStateU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCallbackU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC, ___U3CCallbackU3Ek__BackingField_6)); }
	inline ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * get_U3CCallbackU3Ek__BackingField_6() const { return ___U3CCallbackU3Ek__BackingField_6; }
	inline ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 ** get_address_of_U3CCallbackU3Ek__BackingField_6() { return &___U3CCallbackU3Ek__BackingField_6; }
	inline void set_U3CCallbackU3Ek__BackingField_6(ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * value)
	{
		___U3CCallbackU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCallbackU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalEndPointU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC, ___U3CLocalEndPointU3Ek__BackingField_7)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_U3CLocalEndPointU3Ek__BackingField_7() const { return ___U3CLocalEndPointU3Ek__BackingField_7; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_U3CLocalEndPointU3Ek__BackingField_7() { return &___U3CLocalEndPointU3Ek__BackingField_7; }
	inline void set_U3CLocalEndPointU3Ek__BackingField_7(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___U3CLocalEndPointU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalEndPointU3Ek__BackingField_7), (void*)value);
	}
};


// SuperSocket.ClientEngine.TcpClientSession/<>c
struct U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_StaticFields
{
public:
	// SuperSocket.ClientEngine.TcpClientSession/<>c SuperSocket.ClientEngine.TcpClientSession/<>c::<>9
	U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62 * ___U3CU3E9_0;
	// System.Func`2<System.ArraySegment`1<System.Byte>,System.Boolean> SuperSocket.ClientEngine.TcpClientSession/<>c::<>9__24_0
	Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * ___U3CU3E9__24_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_StaticFields, ___U3CU3E9__24_0_1)); }
	inline Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * get_U3CU3E9__24_0_1() const { return ___U3CU3E9__24_0_1; }
	inline Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 ** get_address_of_U3CU3E9__24_0_1() { return &___U3CU3E9__24_0_1; }
	inline void set_U3CU3E9__24_0_1(Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * value)
	{
		___U3CU3E9__24_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_0_1), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>
struct PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A  : public List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B
{
public:
	// System.Int32 SuperSocket.ClientEngine.PosList`1::<Position>k__BackingField
	int32_t ___U3CPositionU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A, ___U3CPositionU3Ek__BackingField_6)); }
	inline int32_t get_U3CPositionU3Ek__BackingField_6() const { return ___U3CPositionU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CPositionU3Ek__BackingField_6() { return &___U3CPositionU3Ek__BackingField_6; }
	inline void set_U3CPositionU3Ek__BackingField_6(int32_t value)
	{
		___U3CPositionU3Ek__BackingField_6 = value;
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


// SuperSocket.ClientEngine.DataEventArgs
struct DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Byte[] SuperSocket.ClientEngine.DataEventArgs::<Data>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CDataU3Ek__BackingField_1;
	// System.Int32 SuperSocket.ClientEngine.DataEventArgs::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_2;
	// System.Int32 SuperSocket.ClientEngine.DataEventArgs::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276, ___U3CDataU3Ek__BackingField_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CDataU3Ek__BackingField_1() const { return ___U3CDataU3Ek__BackingField_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CDataU3Ek__BackingField_1() { return &___U3CDataU3Ek__BackingField_1; }
	inline void set_U3CDataU3Ek__BackingField_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CDataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276, ___U3COffsetU3Ek__BackingField_2)); }
	inline int32_t get_U3COffsetU3Ek__BackingField_2() const { return ___U3COffsetU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3COffsetU3Ek__BackingField_2() { return &___U3COffsetU3Ek__BackingField_2; }
	inline void set_U3COffsetU3Ek__BackingField_2(int32_t value)
	{
		___U3COffsetU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276, ___U3CLengthU3Ek__BackingField_3)); }
	inline int32_t get_U3CLengthU3Ek__BackingField_3() const { return ___U3CLengthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CLengthU3Ek__BackingField_3() { return &___U3CLengthU3Ek__BackingField_3; }
	inline void set_U3CLengthU3Ek__BackingField_3(int32_t value)
	{
		___U3CLengthU3Ek__BackingField_3 = value;
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

// SuperSocket.ClientEngine.ErrorEventArgs
struct ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Exception SuperSocket.ClientEngine.ErrorEventArgs::<Exception>k__BackingField
	Exception_t * ___U3CExceptionU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CExceptionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16, ___U3CExceptionU3Ek__BackingField_1)); }
	inline Exception_t * get_U3CExceptionU3Ek__BackingField_1() const { return ___U3CExceptionU3Ek__BackingField_1; }
	inline Exception_t ** get_address_of_U3CExceptionU3Ek__BackingField_1() { return &___U3CExceptionU3Ek__BackingField_1; }
	inline void set_U3CExceptionU3Ek__BackingField_1(Exception_t * value)
	{
		___U3CExceptionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExceptionU3Ek__BackingField_1), (void*)value);
	}
};


// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E  : public EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___m_Address_0;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_1;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Address_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_m_Address_0() const { return ___m_Address_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___m_Address_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Port_1)); }
	inline int32_t get_m_Port_1() const { return ___m_Port_1; }
	inline int32_t* get_address_of_m_Port_1() { return &___m_Port_1; }
	inline void set_m_Port_1(int32_t value)
	{
		___m_Port_1 = value;
	}
};

struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___IPv6Any_3;

public:
	inline static int32_t get_offset_of_Any_2() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___Any_2)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_Any_2() const { return ___Any_2; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_Any_2() { return &___Any_2; }
	inline void set_Any_2(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___Any_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_2), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_3() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___IPv6Any_3)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_IPv6Any_3() const { return ___IPv6Any_3; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_IPv6Any_3() { return &___IPv6Any_3; }
	inline void set_IPv6Any_3(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___IPv6Any_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_3), (void*)value);
	}
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


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// SuperSocket.ClientEngine.ProxyEventArgs
struct ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Boolean SuperSocket.ClientEngine.ProxyEventArgs::<Connected>k__BackingField
	bool ___U3CConnectedU3Ek__BackingField_1;
	// System.Net.Sockets.Socket SuperSocket.ClientEngine.ProxyEventArgs::<Socket>k__BackingField
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___U3CSocketU3Ek__BackingField_2;
	// System.Exception SuperSocket.ClientEngine.ProxyEventArgs::<Exception>k__BackingField
	Exception_t * ___U3CExceptionU3Ek__BackingField_3;
	// System.String SuperSocket.ClientEngine.ProxyEventArgs::<TargetHostName>k__BackingField
	String_t* ___U3CTargetHostNameU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CConnectedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577, ___U3CConnectedU3Ek__BackingField_1)); }
	inline bool get_U3CConnectedU3Ek__BackingField_1() const { return ___U3CConnectedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CConnectedU3Ek__BackingField_1() { return &___U3CConnectedU3Ek__BackingField_1; }
	inline void set_U3CConnectedU3Ek__BackingField_1(bool value)
	{
		___U3CConnectedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSocketU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577, ___U3CSocketU3Ek__BackingField_2)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_U3CSocketU3Ek__BackingField_2() const { return ___U3CSocketU3Ek__BackingField_2; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_U3CSocketU3Ek__BackingField_2() { return &___U3CSocketU3Ek__BackingField_2; }
	inline void set_U3CSocketU3Ek__BackingField_2(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___U3CSocketU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExceptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577, ___U3CExceptionU3Ek__BackingField_3)); }
	inline Exception_t * get_U3CExceptionU3Ek__BackingField_3() const { return ___U3CExceptionU3Ek__BackingField_3; }
	inline Exception_t ** get_address_of_U3CExceptionU3Ek__BackingField_3() { return &___U3CExceptionU3Ek__BackingField_3; }
	inline void set_U3CExceptionU3Ek__BackingField_3(Exception_t * value)
	{
		___U3CExceptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExceptionU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTargetHostNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577, ___U3CTargetHostNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CTargetHostNameU3Ek__BackingField_4() const { return ___U3CTargetHostNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CTargetHostNameU3Ek__BackingField_4() { return &___U3CTargetHostNameU3Ek__BackingField_4; }
	inline void set_U3CTargetHostNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CTargetHostNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetHostNameU3Ek__BackingField_4), (void*)value);
	}
};


// System.Threading.SpinWait
struct SpinWait_tEBEEDAE5AEEBBDDEA635932A22308A8398C9AED9 
{
public:
	// System.Int32 System.Threading.SpinWait::m_count
	int32_t ___m_count_0;

public:
	inline static int32_t get_offset_of_m_count_0() { return static_cast<int32_t>(offsetof(SpinWait_tEBEEDAE5AEEBBDDEA635932A22308A8398C9AED9, ___m_count_0)); }
	inline int32_t get_m_count_0() const { return ___m_count_0; }
	inline int32_t* get_address_of_m_count_0() { return &___m_count_0; }
	inline void set_m_count_0(int32_t value)
	{
		___m_count_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// SuperSocket.ClientEngine.ConcurrentBatchQueue`1<System.ArraySegment`1<System.Byte>>
struct ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE  : public RuntimeObject
{
public:
	// System.Object SuperSocket.ClientEngine.ConcurrentBatchQueue`1::m_Entity
	RuntimeObject * ___m_Entity_0;
	// SuperSocket.ClientEngine.ConcurrentBatchQueue`1/Entity<T> SuperSocket.ClientEngine.ConcurrentBatchQueue`1::m_BackEntity
	Entity_t18F756F56FDD123D8F9B1BBC64B934873A2DD501 * ___m_BackEntity_1;
	// System.Func`2<T,System.Boolean> SuperSocket.ClientEngine.ConcurrentBatchQueue`1::m_NullValidator
	Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * ___m_NullValidator_3;

public:
	inline static int32_t get_offset_of_m_Entity_0() { return static_cast<int32_t>(offsetof(ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE, ___m_Entity_0)); }
	inline RuntimeObject * get_m_Entity_0() const { return ___m_Entity_0; }
	inline RuntimeObject ** get_address_of_m_Entity_0() { return &___m_Entity_0; }
	inline void set_m_Entity_0(RuntimeObject * value)
	{
		___m_Entity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Entity_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_BackEntity_1() { return static_cast<int32_t>(offsetof(ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE, ___m_BackEntity_1)); }
	inline Entity_t18F756F56FDD123D8F9B1BBC64B934873A2DD501 * get_m_BackEntity_1() const { return ___m_BackEntity_1; }
	inline Entity_t18F756F56FDD123D8F9B1BBC64B934873A2DD501 ** get_address_of_m_BackEntity_1() { return &___m_BackEntity_1; }
	inline void set_m_BackEntity_1(Entity_t18F756F56FDD123D8F9B1BBC64B934873A2DD501 * value)
	{
		___m_BackEntity_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BackEntity_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_NullValidator_3() { return static_cast<int32_t>(offsetof(ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE, ___m_NullValidator_3)); }
	inline Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * get_m_NullValidator_3() const { return ___m_NullValidator_3; }
	inline Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 ** get_address_of_m_NullValidator_3() { return &___m_NullValidator_3; }
	inline void set_m_NullValidator_3(Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * value)
	{
		___m_NullValidator_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NullValidator_3), (void*)value);
	}
};

struct ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE_StaticFields
{
public:
	// T SuperSocket.ClientEngine.ConcurrentBatchQueue`1::m_Null
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE_StaticFields, ___m_Null_2)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_m_Null_2() const { return ___m_Null_2; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___m_Null_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Null_2))->____array_0), (void*)NULL);
	}
};


// System.Net.Sockets.AddressFamily
struct AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.IO.Stream System.Net.Security.AuthenticatedStream::_InnerStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____InnerStream_4;
	// System.Boolean System.Net.Security.AuthenticatedStream::_LeaveStreamOpen
	bool ____LeaveStreamOpen_5;

public:
	inline static int32_t get_offset_of__InnerStream_4() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608, ____InnerStream_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__InnerStream_4() const { return ____InnerStream_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__InnerStream_4() { return &____InnerStream_4; }
	inline void set__InnerStream_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____InnerStream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____InnerStream_4), (void*)value);
	}

	inline static int32_t get_offset_of__LeaveStreamOpen_5() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608, ____LeaveStreamOpen_5)); }
	inline bool get__LeaveStreamOpen_5() const { return ____LeaveStreamOpen_5; }
	inline bool* get_address_of__LeaveStreamOpen_5() { return &____LeaveStreamOpen_5; }
	inline void set__LeaveStreamOpen_5(bool value)
	{
		____LeaveStreamOpen_5 = value;
	}
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


// SuperSocket.ClientEngine.ClientSession
struct ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket SuperSocket.ClientEngine.ClientSession::<Client>k__BackingField
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___U3CClientU3Ek__BackingField_0;
	// System.Net.EndPoint SuperSocket.ClientEngine.ClientSession::<LocalEndPoint>k__BackingField
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___U3CLocalEndPointU3Ek__BackingField_1;
	// System.Boolean SuperSocket.ClientEngine.ClientSession::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_2;
	// System.Boolean SuperSocket.ClientEngine.ClientSession::<NoDelay>k__BackingField
	bool ___U3CNoDelayU3Ek__BackingField_3;
	// System.Int32 SuperSocket.ClientEngine.ClientSession::<SendingQueueSize>k__BackingField
	int32_t ___U3CSendingQueueSizeU3Ek__BackingField_4;
	// System.EventHandler SuperSocket.ClientEngine.ClientSession::m_Closed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___m_Closed_5;
	// System.EventHandler`1<SuperSocket.ClientEngine.ErrorEventArgs> SuperSocket.ClientEngine.ClientSession::m_Error
	EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * ___m_Error_6;
	// System.EventHandler SuperSocket.ClientEngine.ClientSession::m_Connected
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___m_Connected_7;
	// System.EventHandler`1<SuperSocket.ClientEngine.DataEventArgs> SuperSocket.ClientEngine.ClientSession::m_DataReceived
	EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * ___m_DataReceived_8;
	// SuperSocket.ClientEngine.DataEventArgs SuperSocket.ClientEngine.ClientSession::m_DataArgs
	DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * ___m_DataArgs_9;
	// System.Int32 SuperSocket.ClientEngine.ClientSession::<ReceiveBufferSize>k__BackingField
	int32_t ___U3CReceiveBufferSizeU3Ek__BackingField_10;
	// SuperSocket.ClientEngine.IProxyConnector SuperSocket.ClientEngine.ClientSession::<Proxy>k__BackingField
	RuntimeObject* ___U3CProxyU3Ek__BackingField_11;
	// System.ArraySegment`1<System.Byte> SuperSocket.ClientEngine.ClientSession::<Buffer>k__BackingField
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___U3CBufferU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___U3CClientU3Ek__BackingField_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_U3CClientU3Ek__BackingField_0() const { return ___U3CClientU3Ek__BackingField_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_U3CClientU3Ek__BackingField_0() { return &___U3CClientU3Ek__BackingField_0; }
	inline void set_U3CClientU3Ek__BackingField_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___U3CClientU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalEndPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___U3CLocalEndPointU3Ek__BackingField_1)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_U3CLocalEndPointU3Ek__BackingField_1() const { return ___U3CLocalEndPointU3Ek__BackingField_1; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_U3CLocalEndPointU3Ek__BackingField_1() { return &___U3CLocalEndPointU3Ek__BackingField_1; }
	inline void set_U3CLocalEndPointU3Ek__BackingField_1(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___U3CLocalEndPointU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalEndPointU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsConnectedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___U3CIsConnectedU3Ek__BackingField_2)); }
	inline bool get_U3CIsConnectedU3Ek__BackingField_2() const { return ___U3CIsConnectedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsConnectedU3Ek__BackingField_2() { return &___U3CIsConnectedU3Ek__BackingField_2; }
	inline void set_U3CIsConnectedU3Ek__BackingField_2(bool value)
	{
		___U3CIsConnectedU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNoDelayU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___U3CNoDelayU3Ek__BackingField_3)); }
	inline bool get_U3CNoDelayU3Ek__BackingField_3() const { return ___U3CNoDelayU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CNoDelayU3Ek__BackingField_3() { return &___U3CNoDelayU3Ek__BackingField_3; }
	inline void set_U3CNoDelayU3Ek__BackingField_3(bool value)
	{
		___U3CNoDelayU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CSendingQueueSizeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___U3CSendingQueueSizeU3Ek__BackingField_4)); }
	inline int32_t get_U3CSendingQueueSizeU3Ek__BackingField_4() const { return ___U3CSendingQueueSizeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CSendingQueueSizeU3Ek__BackingField_4() { return &___U3CSendingQueueSizeU3Ek__BackingField_4; }
	inline void set_U3CSendingQueueSizeU3Ek__BackingField_4(int32_t value)
	{
		___U3CSendingQueueSizeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_m_Closed_5() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___m_Closed_5)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_m_Closed_5() const { return ___m_Closed_5; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_m_Closed_5() { return &___m_Closed_5; }
	inline void set_m_Closed_5(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___m_Closed_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Closed_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Error_6() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___m_Error_6)); }
	inline EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * get_m_Error_6() const { return ___m_Error_6; }
	inline EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B ** get_address_of_m_Error_6() { return &___m_Error_6; }
	inline void set_m_Error_6(EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * value)
	{
		___m_Error_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Error_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Connected_7() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___m_Connected_7)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_m_Connected_7() const { return ___m_Connected_7; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_m_Connected_7() { return &___m_Connected_7; }
	inline void set_m_Connected_7(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___m_Connected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Connected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_DataReceived_8() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___m_DataReceived_8)); }
	inline EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * get_m_DataReceived_8() const { return ___m_DataReceived_8; }
	inline EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 ** get_address_of_m_DataReceived_8() { return &___m_DataReceived_8; }
	inline void set_m_DataReceived_8(EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * value)
	{
		___m_DataReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DataArgs_9() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___m_DataArgs_9)); }
	inline DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * get_m_DataArgs_9() const { return ___m_DataArgs_9; }
	inline DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 ** get_address_of_m_DataArgs_9() { return &___m_DataArgs_9; }
	inline void set_m_DataArgs_9(DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * value)
	{
		___m_DataArgs_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataArgs_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReceiveBufferSizeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___U3CReceiveBufferSizeU3Ek__BackingField_10)); }
	inline int32_t get_U3CReceiveBufferSizeU3Ek__BackingField_10() const { return ___U3CReceiveBufferSizeU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CReceiveBufferSizeU3Ek__BackingField_10() { return &___U3CReceiveBufferSizeU3Ek__BackingField_10; }
	inline void set_U3CReceiveBufferSizeU3Ek__BackingField_10(int32_t value)
	{
		___U3CReceiveBufferSizeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CProxyU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___U3CProxyU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CProxyU3Ek__BackingField_11() const { return ___U3CProxyU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CProxyU3Ek__BackingField_11() { return &___U3CProxyU3Ek__BackingField_11; }
	inline void set_U3CProxyU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CProxyU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBufferU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217, ___U3CBufferU3Ek__BackingField_12)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_U3CBufferU3Ek__BackingField_12() const { return ___U3CBufferU3Ek__BackingField_12; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_U3CBufferU3Ek__BackingField_12() { return &___U3CBufferU3Ek__BackingField_12; }
	inline void set_U3CBufferU3Ek__BackingField_12(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___U3CBufferU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CBufferU3Ek__BackingField_12))->____array_0), (void*)NULL);
	}
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_StreamSocket_4;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_7;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_9;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_11;

public:
	inline static int32_t get_offset_of_m_StreamSocket_4() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_StreamSocket_4)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_StreamSocket_4() const { return ___m_StreamSocket_4; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_StreamSocket_4() { return &___m_StreamSocket_4; }
	inline void set_m_StreamSocket_4(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_StreamSocket_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamSocket_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Readable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Readable_5)); }
	inline bool get_m_Readable_5() const { return ___m_Readable_5; }
	inline bool* get_address_of_m_Readable_5() { return &___m_Readable_5; }
	inline void set_m_Readable_5(bool value)
	{
		___m_Readable_5 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Writeable_6)); }
	inline bool get_m_Writeable_6() const { return ___m_Writeable_6; }
	inline bool* get_address_of_m_Writeable_6() { return &___m_Writeable_6; }
	inline void set_m_Writeable_6(bool value)
	{
		___m_Writeable_6 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_7() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_OwnsSocket_7)); }
	inline bool get_m_OwnsSocket_7() const { return ___m_OwnsSocket_7; }
	inline bool* get_address_of_m_OwnsSocket_7() { return &___m_OwnsSocket_7; }
	inline void set_m_OwnsSocket_7(bool value)
	{
		___m_OwnsSocket_7 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_8() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CloseTimeout_8)); }
	inline int32_t get_m_CloseTimeout_8() const { return ___m_CloseTimeout_8; }
	inline int32_t* get_address_of_m_CloseTimeout_8() { return &___m_CloseTimeout_8; }
	inline void set_m_CloseTimeout_8(int32_t value)
	{
		___m_CloseTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_9() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CleanedUp_9)); }
	inline bool get_m_CleanedUp_9() const { return ___m_CleanedUp_9; }
	inline bool* get_address_of_m_CleanedUp_9() { return &___m_CleanedUp_9; }
	inline void set_m_CleanedUp_9(bool value)
	{
		___m_CleanedUp_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_10() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentReadTimeout_10)); }
	inline int32_t get_m_CurrentReadTimeout_10() const { return ___m_CurrentReadTimeout_10; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_10() { return &___m_CurrentReadTimeout_10; }
	inline void set_m_CurrentReadTimeout_10(int32_t value)
	{
		___m_CurrentReadTimeout_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentWriteTimeout_11)); }
	inline int32_t get_m_CurrentWriteTimeout_11() const { return ___m_CurrentWriteTimeout_11; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_11() { return &___m_CurrentWriteTimeout_11; }
	inline void set_m_CurrentWriteTimeout_11(int32_t value)
	{
		___m_CurrentWriteTimeout_11 = value;
	}
};


// System.Net.Sockets.ProtocolType
struct ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Net.Sockets.SocketAsyncOperation
struct SocketAsyncOperation_t0890927B3DA60787C0316D3E8EB64F68496B683D 
{
public:
	// System.Int32 System.Net.Sockets.SocketAsyncOperation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketAsyncOperation_t0890927B3DA60787C0316D3E8EB64F68496B683D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketError
struct SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketFlags
struct SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_tF0B10EB763B26956198DACD9942489DC65D8B248, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketOptionLevel
struct SocketOptionLevel_t327BD9E938613DD6C851CAD83E98A28D1B4A1480 
{
public:
	// System.Int32 System.Net.Sockets.SocketOptionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketOptionLevel_t327BD9E938613DD6C851CAD83E98A28D1B4A1480, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketOptionName
struct SocketOptionName_t8EB415D7F363805FA71B40CC79CD46561C4884A2 
{
public:
	// System.Int32 System.Net.Sockets.SocketOptionName::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketOptionName_t8EB415D7F363805FA71B40CC79CD46561C4884A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketShutdown
struct SocketShutdown_t92BC55A4D6F6BD753560418E043AAF6F418D589B 
{
public:
	// System.Int32 System.Net.Sockets.SocketShutdown::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketShutdown_t92BC55A4D6F6BD753560418E043AAF6F418D589B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Security.SslPolicyErrors
struct SslPolicyErrors_t4C4942B3C78507D4E6891DBEFE60043B285CFBE4 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t4C4942B3C78507D4E6891DBEFE60043B285CFBE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Authentication.SslProtocols
struct SslProtocols_tF8B65D359D2670DCDA2BDF3677A9E7217FC3DA68 
{
public:
	// System.Int32 System.Security.Authentication.SslProtocols::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SslProtocols_tF8B65D359D2670DCDA2BDF3677A9E7217FC3DA68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct X509ChainStatusFlags_t16F457BB24891840519B66C39DE91268909174F9 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t16F457BB24891840519B66C39DE91268909174F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.DnsEndPoint
struct DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497  : public EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA
{
public:
	// System.String System.Net.DnsEndPoint::m_Host
	String_t* ___m_Host_0;
	// System.Int32 System.Net.DnsEndPoint::m_Port
	int32_t ___m_Port_1;
	// System.Net.Sockets.AddressFamily System.Net.DnsEndPoint::m_Family
	int32_t ___m_Family_2;

public:
	inline static int32_t get_offset_of_m_Host_0() { return static_cast<int32_t>(offsetof(DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497, ___m_Host_0)); }
	inline String_t* get_m_Host_0() const { return ___m_Host_0; }
	inline String_t** get_address_of_m_Host_0() { return &___m_Host_0; }
	inline void set_m_Host_0(String_t* value)
	{
		___m_Host_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Host_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_1() { return static_cast<int32_t>(offsetof(DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497, ___m_Port_1)); }
	inline int32_t get_m_Port_1() const { return ___m_Port_1; }
	inline int32_t* get_address_of_m_Port_1() { return &___m_Port_1; }
	inline void set_m_Port_1(int32_t value)
	{
		___m_Port_1 = value;
	}

	inline static int32_t get_offset_of_m_Family_2() { return static_cast<int32_t>(offsetof(DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497, ___m_Family_2)); }
	inline int32_t get_m_Family_2() const { return ___m_Family_2; }
	inline int32_t* get_address_of_m_Family_2() { return &___m_Family_2; }
	inline void set_m_Family_2(int32_t value)
	{
		___m_Family_2 = value;
	}
};


// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
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

// SuperSocket.ClientEngine.SecurityOption
struct SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17  : public RuntimeObject
{
public:
	// System.Security.Authentication.SslProtocols SuperSocket.ClientEngine.SecurityOption::<EnabledSslProtocols>k__BackingField
	int32_t ___U3CEnabledSslProtocolsU3Ek__BackingField_0;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection SuperSocket.ClientEngine.SecurityOption::<Certificates>k__BackingField
	X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___U3CCertificatesU3Ek__BackingField_1;
	// System.Boolean SuperSocket.ClientEngine.SecurityOption::<AllowUnstrustedCertificate>k__BackingField
	bool ___U3CAllowUnstrustedCertificateU3Ek__BackingField_2;
	// System.Boolean SuperSocket.ClientEngine.SecurityOption::<AllowNameMismatchCertificate>k__BackingField
	bool ___U3CAllowNameMismatchCertificateU3Ek__BackingField_3;
	// System.Boolean SuperSocket.ClientEngine.SecurityOption::<AllowCertificateChainErrors>k__BackingField
	bool ___U3CAllowCertificateChainErrorsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEnabledSslProtocolsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17, ___U3CEnabledSslProtocolsU3Ek__BackingField_0)); }
	inline int32_t get_U3CEnabledSslProtocolsU3Ek__BackingField_0() const { return ___U3CEnabledSslProtocolsU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CEnabledSslProtocolsU3Ek__BackingField_0() { return &___U3CEnabledSslProtocolsU3Ek__BackingField_0; }
	inline void set_U3CEnabledSslProtocolsU3Ek__BackingField_0(int32_t value)
	{
		___U3CEnabledSslProtocolsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CCertificatesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17, ___U3CCertificatesU3Ek__BackingField_1)); }
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * get_U3CCertificatesU3Ek__BackingField_1() const { return ___U3CCertificatesU3Ek__BackingField_1; }
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B ** get_address_of_U3CCertificatesU3Ek__BackingField_1() { return &___U3CCertificatesU3Ek__BackingField_1; }
	inline void set_U3CCertificatesU3Ek__BackingField_1(X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * value)
	{
		___U3CCertificatesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCertificatesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAllowUnstrustedCertificateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17, ___U3CAllowUnstrustedCertificateU3Ek__BackingField_2)); }
	inline bool get_U3CAllowUnstrustedCertificateU3Ek__BackingField_2() const { return ___U3CAllowUnstrustedCertificateU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CAllowUnstrustedCertificateU3Ek__BackingField_2() { return &___U3CAllowUnstrustedCertificateU3Ek__BackingField_2; }
	inline void set_U3CAllowUnstrustedCertificateU3Ek__BackingField_2(bool value)
	{
		___U3CAllowUnstrustedCertificateU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CAllowNameMismatchCertificateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17, ___U3CAllowNameMismatchCertificateU3Ek__BackingField_3)); }
	inline bool get_U3CAllowNameMismatchCertificateU3Ek__BackingField_3() const { return ___U3CAllowNameMismatchCertificateU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CAllowNameMismatchCertificateU3Ek__BackingField_3() { return &___U3CAllowNameMismatchCertificateU3Ek__BackingField_3; }
	inline void set_U3CAllowNameMismatchCertificateU3Ek__BackingField_3(bool value)
	{
		___U3CAllowNameMismatchCertificateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAllowCertificateChainErrorsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17, ___U3CAllowCertificateChainErrorsU3Ek__BackingField_4)); }
	inline bool get_U3CAllowCertificateChainErrorsU3Ek__BackingField_4() const { return ___U3CAllowCertificateChainErrorsU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CAllowCertificateChainErrorsU3Ek__BackingField_4() { return &___U3CAllowCertificateChainErrorsU3Ek__BackingField_4; }
	inline void set_U3CAllowCertificateChainErrorsU3Ek__BackingField_4(bool value)
	{
		___U3CAllowCertificateChainErrorsU3Ek__BackingField_4 = value;
	}
};


// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_22;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_Handle_13)); }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_13), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___seed_endpoint_14)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ReadSem_15)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_15), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___WriteSem_16)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_16), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}

	inline static int32_t get_offset_of_ID_22() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ID_22)); }
	inline int32_t get_ID_22() const { return ___ID_22; }
	inline int32_t* get_address_of_ID_22() { return &___ID_22; }
	inline void set_ID_22(int32_t value)
	{
		___ID_22 = value;
	}
};

struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___AcceptAsyncCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptCallback_24;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptReceiveCallback_25;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ConnectAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginConnectCallback_27;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___DisconnectAsyncCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginDisconnectCallback_29;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveAsyncCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveGenericCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveFromAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveFromCallback_34;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendAsyncCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginSendGenericCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendToAsyncCallback_37;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_23() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___AcceptAsyncCallback_23)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_AcceptAsyncCallback_23() const { return ___AcceptAsyncCallback_23; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_AcceptAsyncCallback_23() { return &___AcceptAsyncCallback_23; }
	inline void set_AcceptAsyncCallback_23(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___AcceptAsyncCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_24() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptCallback_24)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptCallback_24() const { return ___BeginAcceptCallback_24; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptCallback_24() { return &___BeginAcceptCallback_24; }
	inline void set_BeginAcceptCallback_24(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_25() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptReceiveCallback_25)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptReceiveCallback_25() const { return ___BeginAcceptReceiveCallback_25; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptReceiveCallback_25() { return &___BeginAcceptReceiveCallback_25; }
	inline void set_BeginAcceptReceiveCallback_25(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptReceiveCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ConnectAsyncCallback_26)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ConnectAsyncCallback_26() const { return ___ConnectAsyncCallback_26; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ConnectAsyncCallback_26() { return &___ConnectAsyncCallback_26; }
	inline void set_ConnectAsyncCallback_26(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ConnectAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_27() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginConnectCallback_27)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginConnectCallback_27() const { return ___BeginConnectCallback_27; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginConnectCallback_27() { return &___BeginConnectCallback_27; }
	inline void set_BeginConnectCallback_27(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginConnectCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_28() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___DisconnectAsyncCallback_28)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_DisconnectAsyncCallback_28() const { return ___DisconnectAsyncCallback_28; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_DisconnectAsyncCallback_28() { return &___DisconnectAsyncCallback_28; }
	inline void set_DisconnectAsyncCallback_28(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___DisconnectAsyncCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_29() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginDisconnectCallback_29)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginDisconnectCallback_29() const { return ___BeginDisconnectCallback_29; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginDisconnectCallback_29() { return &___BeginDisconnectCallback_29; }
	inline void set_BeginDisconnectCallback_29(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginDisconnectCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_30() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveAsyncCallback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveAsyncCallback_30() const { return ___ReceiveAsyncCallback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveAsyncCallback_30() { return &___ReceiveAsyncCallback_30; }
	inline void set_ReceiveAsyncCallback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveAsyncCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_31() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveCallback_31)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveCallback_31() const { return ___BeginReceiveCallback_31; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveCallback_31() { return &___BeginReceiveCallback_31; }
	inline void set_BeginReceiveCallback_31(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_32() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveGenericCallback_32)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveGenericCallback_32() const { return ___BeginReceiveGenericCallback_32; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveGenericCallback_32() { return &___BeginReceiveGenericCallback_32; }
	inline void set_BeginReceiveGenericCallback_32(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveGenericCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveFromAsyncCallback_33)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveFromAsyncCallback_33() const { return ___ReceiveFromAsyncCallback_33; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveFromAsyncCallback_33() { return &___ReceiveFromAsyncCallback_33; }
	inline void set_ReceiveFromAsyncCallback_33(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveFromAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_34() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveFromCallback_34)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveFromCallback_34() const { return ___BeginReceiveFromCallback_34; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveFromCallback_34() { return &___BeginReceiveFromCallback_34; }
	inline void set_BeginReceiveFromCallback_34(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveFromCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_35() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendAsyncCallback_35)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendAsyncCallback_35() const { return ___SendAsyncCallback_35; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendAsyncCallback_35() { return &___SendAsyncCallback_35; }
	inline void set_SendAsyncCallback_35(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendAsyncCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_36() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginSendGenericCallback_36)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginSendGenericCallback_36() const { return ___BeginSendGenericCallback_36; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginSendGenericCallback_36() { return &___BeginSendGenericCallback_36; }
	inline void set_BeginSendGenericCallback_36(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginSendGenericCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_37() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendToAsyncCallback_37)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendToAsyncCallback_37() const { return ___SendToAsyncCallback_37; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendToAsyncCallback_37() { return &___SendToAsyncCallback_37; }
	inline void set_SendToAsyncCallback_37(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendToAsyncCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_37), (void*)value);
	}
};


// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::disposed
	bool ___disposed_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.SocketAsyncEventArgs::in_progress
	int32_t ___in_progress_2;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::remote_ep
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remote_ep_3;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::current_socket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___current_socket_4;
	// System.Net.Sockets.SocketAsyncResult System.Net.Sockets.SocketAsyncEventArgs::socket_async_result
	SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4 * ___socket_async_result_5;
	// System.Exception System.Net.Sockets.SocketAsyncEventArgs::<ConnectByNameError>k__BackingField
	Exception_t * ___U3CConnectByNameErrorU3Ek__BackingField_6;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::<AcceptSocket>k__BackingField
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___U3CAcceptSocketU3Ek__BackingField_7;
	// System.Byte[] System.Net.Sockets.SocketAsyncEventArgs::<Buffer>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CBufferU3Ek__BackingField_8;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::m_BufferList
	RuntimeObject* ___m_BufferList_9;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<BytesTransferred>k__BackingField
	int32_t ___U3CBytesTransferredU3Ek__BackingField_10;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_11;
	// System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.SocketAsyncEventArgs::<LastOperation>k__BackingField
	int32_t ___U3CLastOperationU3Ek__BackingField_12;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_13;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<SendPacketsSendSize>k__BackingField
	int32_t ___U3CSendPacketsSendSizeU3Ek__BackingField_14;
	// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::<SocketError>k__BackingField
	int32_t ___U3CSocketErrorU3Ek__BackingField_15;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncEventArgs::<SocketFlags>k__BackingField
	int32_t ___U3CSocketFlagsU3Ek__BackingField_16;
	// System.Object System.Net.Sockets.SocketAsyncEventArgs::<UserToken>k__BackingField
	RuntimeObject * ___U3CUserTokenU3Ek__BackingField_17;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.SocketAsyncEventArgs::Completed
	EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE * ___Completed_18;

public:
	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_in_progress_2() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___in_progress_2)); }
	inline int32_t get_in_progress_2() const { return ___in_progress_2; }
	inline int32_t* get_address_of_in_progress_2() { return &___in_progress_2; }
	inline void set_in_progress_2(int32_t value)
	{
		___in_progress_2 = value;
	}

	inline static int32_t get_offset_of_remote_ep_3() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___remote_ep_3)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_remote_ep_3() const { return ___remote_ep_3; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_remote_ep_3() { return &___remote_ep_3; }
	inline void set_remote_ep_3(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___remote_ep_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remote_ep_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_socket_4() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___current_socket_4)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_current_socket_4() const { return ___current_socket_4; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_current_socket_4() { return &___current_socket_4; }
	inline void set_current_socket_4(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___current_socket_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_socket_4), (void*)value);
	}

	inline static int32_t get_offset_of_socket_async_result_5() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___socket_async_result_5)); }
	inline SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4 * get_socket_async_result_5() const { return ___socket_async_result_5; }
	inline SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4 ** get_address_of_socket_async_result_5() { return &___socket_async_result_5; }
	inline void set_socket_async_result_5(SocketAsyncResult_t42111E1C73DAF0D017E77B414BE79A2A837E56B4 * value)
	{
		___socket_async_result_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_async_result_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectByNameErrorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___U3CConnectByNameErrorU3Ek__BackingField_6)); }
	inline Exception_t * get_U3CConnectByNameErrorU3Ek__BackingField_6() const { return ___U3CConnectByNameErrorU3Ek__BackingField_6; }
	inline Exception_t ** get_address_of_U3CConnectByNameErrorU3Ek__BackingField_6() { return &___U3CConnectByNameErrorU3Ek__BackingField_6; }
	inline void set_U3CConnectByNameErrorU3Ek__BackingField_6(Exception_t * value)
	{
		___U3CConnectByNameErrorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectByNameErrorU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAcceptSocketU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___U3CAcceptSocketU3Ek__BackingField_7)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_U3CAcceptSocketU3Ek__BackingField_7() const { return ___U3CAcceptSocketU3Ek__BackingField_7; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_U3CAcceptSocketU3Ek__BackingField_7() { return &___U3CAcceptSocketU3Ek__BackingField_7; }
	inline void set_U3CAcceptSocketU3Ek__BackingField_7(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___U3CAcceptSocketU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAcceptSocketU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBufferU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___U3CBufferU3Ek__BackingField_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CBufferU3Ek__BackingField_8() const { return ___U3CBufferU3Ek__BackingField_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CBufferU3Ek__BackingField_8() { return &___U3CBufferU3Ek__BackingField_8; }
	inline void set_U3CBufferU3Ek__BackingField_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CBufferU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBufferU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_BufferList_9() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___m_BufferList_9)); }
	inline RuntimeObject* get_m_BufferList_9() const { return ___m_BufferList_9; }
	inline RuntimeObject** get_address_of_m_BufferList_9() { return &___m_BufferList_9; }
	inline void set_m_BufferList_9(RuntimeObject* value)
	{
		___m_BufferList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BufferList_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBytesTransferredU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___U3CBytesTransferredU3Ek__BackingField_10)); }
	inline int32_t get_U3CBytesTransferredU3Ek__BackingField_10() const { return ___U3CBytesTransferredU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CBytesTransferredU3Ek__BackingField_10() { return &___U3CBytesTransferredU3Ek__BackingField_10; }
	inline void set_U3CBytesTransferredU3Ek__BackingField_10(int32_t value)
	{
		___U3CBytesTransferredU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___U3CCountU3Ek__BackingField_11)); }
	inline int32_t get_U3CCountU3Ek__BackingField_11() const { return ___U3CCountU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_11() { return &___U3CCountU3Ek__BackingField_11; }
	inline void set_U3CCountU3Ek__BackingField_11(int32_t value)
	{
		___U3CCountU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CLastOperationU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___U3CLastOperationU3Ek__BackingField_12)); }
	inline int32_t get_U3CLastOperationU3Ek__BackingField_12() const { return ___U3CLastOperationU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CLastOperationU3Ek__BackingField_12() { return &___U3CLastOperationU3Ek__BackingField_12; }
	inline void set_U3CLastOperationU3Ek__BackingField_12(int32_t value)
	{
		___U3CLastOperationU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___U3COffsetU3Ek__BackingField_13)); }
	inline int32_t get_U3COffsetU3Ek__BackingField_13() const { return ___U3COffsetU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3COffsetU3Ek__BackingField_13() { return &___U3COffsetU3Ek__BackingField_13; }
	inline void set_U3COffsetU3Ek__BackingField_13(int32_t value)
	{
		___U3COffsetU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CSendPacketsSendSizeU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___U3CSendPacketsSendSizeU3Ek__BackingField_14)); }
	inline int32_t get_U3CSendPacketsSendSizeU3Ek__BackingField_14() const { return ___U3CSendPacketsSendSizeU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CSendPacketsSendSizeU3Ek__BackingField_14() { return &___U3CSendPacketsSendSizeU3Ek__BackingField_14; }
	inline void set_U3CSendPacketsSendSizeU3Ek__BackingField_14(int32_t value)
	{
		___U3CSendPacketsSendSizeU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CSocketErrorU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___U3CSocketErrorU3Ek__BackingField_15)); }
	inline int32_t get_U3CSocketErrorU3Ek__BackingField_15() const { return ___U3CSocketErrorU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CSocketErrorU3Ek__BackingField_15() { return &___U3CSocketErrorU3Ek__BackingField_15; }
	inline void set_U3CSocketErrorU3Ek__BackingField_15(int32_t value)
	{
		___U3CSocketErrorU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CSocketFlagsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___U3CSocketFlagsU3Ek__BackingField_16)); }
	inline int32_t get_U3CSocketFlagsU3Ek__BackingField_16() const { return ___U3CSocketFlagsU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CSocketFlagsU3Ek__BackingField_16() { return &___U3CSocketFlagsU3Ek__BackingField_16; }
	inline void set_U3CSocketFlagsU3Ek__BackingField_16(int32_t value)
	{
		___U3CSocketFlagsU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CUserTokenU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___U3CUserTokenU3Ek__BackingField_17)); }
	inline RuntimeObject * get_U3CUserTokenU3Ek__BackingField_17() const { return ___U3CUserTokenU3Ek__BackingField_17; }
	inline RuntimeObject ** get_address_of_U3CUserTokenU3Ek__BackingField_17() { return &___U3CUserTokenU3Ek__BackingField_17; }
	inline void set_U3CUserTokenU3Ek__BackingField_17(RuntimeObject * value)
	{
		___U3CUserTokenU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserTokenU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_Completed_18() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8, ___Completed_18)); }
	inline EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE * get_Completed_18() const { return ___Completed_18; }
	inline EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE ** get_address_of_Completed_18() { return &___Completed_18; }
	inline void set_Completed_18(EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE * value)
	{
		___Completed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Completed_18), (void*)value);
	}
};


// System.Net.Security.SslStream
struct SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49  : public AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608
{
public:
	// Mono.Security.Interface.MonoTlsProvider System.Net.Security.SslStream::provider
	MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * ___provider_6;
	// Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::impl
	RuntimeObject* ___impl_7;

public:
	inline static int32_t get_offset_of_provider_6() { return static_cast<int32_t>(offsetof(SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49, ___provider_6)); }
	inline MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * get_provider_6() const { return ___provider_6; }
	inline MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 ** get_address_of_provider_6() { return &___provider_6; }
	inline void set_provider_6(MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * value)
	{
		___provider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___provider_6), (void*)value);
	}

	inline static int32_t get_offset_of_impl_7() { return static_cast<int32_t>(offsetof(SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49, ___impl_7)); }
	inline RuntimeObject* get_impl_7() const { return ___impl_7; }
	inline RuntimeObject** get_address_of_impl_7() { return &___impl_7; }
	inline void set_impl_7(RuntimeObject* value)
	{
		___impl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_7), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// SuperSocket.ClientEngine.TcpClientSession
struct TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF  : public ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217
{
public:
	// System.String SuperSocket.ClientEngine.TcpClientSession::<HostName>k__BackingField
	String_t* ___U3CHostNameU3Ek__BackingField_13;
	// System.Boolean SuperSocket.ClientEngine.TcpClientSession::m_InConnecting
	bool ___m_InConnecting_14;
	// SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.TcpClientSession::m_SendingQueue
	RuntimeObject* ___m_SendingQueue_15;
	// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.TcpClientSession::m_SendingItems
	PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * ___m_SendingItems_16;
	// System.Int32 SuperSocket.ClientEngine.TcpClientSession::m_IsSending
	int32_t ___m_IsSending_17;

public:
	inline static int32_t get_offset_of_U3CHostNameU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF, ___U3CHostNameU3Ek__BackingField_13)); }
	inline String_t* get_U3CHostNameU3Ek__BackingField_13() const { return ___U3CHostNameU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CHostNameU3Ek__BackingField_13() { return &___U3CHostNameU3Ek__BackingField_13; }
	inline void set_U3CHostNameU3Ek__BackingField_13(String_t* value)
	{
		___U3CHostNameU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHostNameU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_InConnecting_14() { return static_cast<int32_t>(offsetof(TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF, ___m_InConnecting_14)); }
	inline bool get_m_InConnecting_14() const { return ___m_InConnecting_14; }
	inline bool* get_address_of_m_InConnecting_14() { return &___m_InConnecting_14; }
	inline void set_m_InConnecting_14(bool value)
	{
		___m_InConnecting_14 = value;
	}

	inline static int32_t get_offset_of_m_SendingQueue_15() { return static_cast<int32_t>(offsetof(TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF, ___m_SendingQueue_15)); }
	inline RuntimeObject* get_m_SendingQueue_15() const { return ___m_SendingQueue_15; }
	inline RuntimeObject** get_address_of_m_SendingQueue_15() { return &___m_SendingQueue_15; }
	inline void set_m_SendingQueue_15(RuntimeObject* value)
	{
		___m_SendingQueue_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SendingQueue_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_SendingItems_16() { return static_cast<int32_t>(offsetof(TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF, ___m_SendingItems_16)); }
	inline PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * get_m_SendingItems_16() const { return ___m_SendingItems_16; }
	inline PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A ** get_address_of_m_SendingItems_16() { return &___m_SendingItems_16; }
	inline void set_m_SendingItems_16(PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * value)
	{
		___m_SendingItems_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SendingItems_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsSending_17() { return static_cast<int32_t>(offsetof(TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF, ___m_IsSending_17)); }
	inline int32_t get_m_IsSending_17() const { return ___m_IsSending_17; }
	inline int32_t* get_address_of_m_IsSending_17() { return &___m_IsSending_17; }
	inline void set_m_IsSending_17(int32_t value)
	{
		___m_IsSending_17 = value;
	}
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


// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB 
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___info_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};

// System.EventHandler`1<SuperSocket.ClientEngine.DataEventArgs>
struct EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<SuperSocket.ClientEngine.ErrorEventArgs>
struct EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>
struct EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.ArraySegment`1<System.Byte>,System.Boolean>
struct Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20  : public MulticastDelegate_t
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


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// SuperSocket.ClientEngine.AsyncTcpSession
struct AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA  : public TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF
{
public:
	// System.Net.Sockets.SocketAsyncEventArgs SuperSocket.ClientEngine.AsyncTcpSession::m_SocketEventArgs
	SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___m_SocketEventArgs_18;
	// System.Net.Sockets.SocketAsyncEventArgs SuperSocket.ClientEngine.AsyncTcpSession::m_SocketEventArgsSend
	SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___m_SocketEventArgsSend_19;

public:
	inline static int32_t get_offset_of_m_SocketEventArgs_18() { return static_cast<int32_t>(offsetof(AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA, ___m_SocketEventArgs_18)); }
	inline SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * get_m_SocketEventArgs_18() const { return ___m_SocketEventArgs_18; }
	inline SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 ** get_address_of_m_SocketEventArgs_18() { return &___m_SocketEventArgs_18; }
	inline void set_m_SocketEventArgs_18(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * value)
	{
		___m_SocketEventArgs_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SocketEventArgs_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_SocketEventArgsSend_19() { return static_cast<int32_t>(offsetof(AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA, ___m_SocketEventArgsSend_19)); }
	inline SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * get_m_SocketEventArgsSend_19() const { return ___m_SocketEventArgsSend_19; }
	inline SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 ** get_address_of_m_SocketEventArgsSend_19() { return &___m_SocketEventArgsSend_19; }
	inline void set_m_SocketEventArgsSend_19(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * value)
	{
		___m_SocketEventArgsSend_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SocketEventArgsSend_19), (void*)value);
	}
};


// SuperSocket.ClientEngine.AuthenticatedStreamTcpSession
struct AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F  : public TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF
{
public:
	// System.Net.Security.AuthenticatedStream SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::m_Stream
	AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * ___m_Stream_18;
	// SuperSocket.ClientEngine.SecurityOption SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::<Security>k__BackingField
	SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * ___U3CSecurityU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_m_Stream_18() { return static_cast<int32_t>(offsetof(AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F, ___m_Stream_18)); }
	inline AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * get_m_Stream_18() const { return ___m_Stream_18; }
	inline AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 ** get_address_of_m_Stream_18() { return &___m_Stream_18; }
	inline void set_m_Stream_18(AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * value)
	{
		___m_Stream_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stream_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSecurityU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F, ___U3CSecurityU3Ek__BackingField_19)); }
	inline SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * get_U3CSecurityU3Ek__BackingField_19() const { return ___U3CSecurityU3Ek__BackingField_19; }
	inline SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 ** get_address_of_U3CSecurityU3Ek__BackingField_19() { return &___U3CSecurityU3Ek__BackingField_19; }
	inline void set_U3CSecurityU3Ek__BackingField_19(SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * value)
	{
		___U3CSecurityU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSecurityU3Ek__BackingField_19), (void*)value);
	}
};


// SuperSocket.ClientEngine.ConnectedCallback
struct ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// System.Runtime.InteropServices.ExternalException
struct ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947  : public MulticastDelegate_t
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


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// SuperSocket.ClientEngine.SslStreamTcpSession
struct SslStreamTcpSession_t6F5491B6CE11807B11B492E18D625A39E54CF927  : public AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F
{
public:

public:
};


// System.ComponentModel.Win32Exception
struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950  : public ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// System.Net.Sockets.SocketException
struct SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88  : public Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88, ___m_EndPoint_20)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
	}
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
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * m_Items[1];

public:
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  m_Items[1];

public:
	inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
	inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
};
// System.ArraySegment`1<System.Byte>[]
struct ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  m_Items[1];

public:
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____array_0), (void*)NULL);
	}
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____array_0), (void*)NULL);
	}
};


// !0[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mF26B478B4569926D5CE8B3E90266C0E70EBE2048_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_gshared_inline (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  List_1_get_Item_m37AE8419D9BEAA421FDB484724C5EA53408083C5_gshared_inline (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PosList_1_get_Position_mAF8492F7B689C1F3D01EFC59C5C1C610DD4673EC_gshared_inline (PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>::set_Position(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PosList_1_set_Position_m48317C2D54D46618883B9482B716E84A4CBFDE0A_gshared_inline (PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_m6146E375BDA235BCEABAD74EC6EC5DE71258097F_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.Func`2<System.ArraySegment`1<System.Byte>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m5E03CA82E377D33E4286358264510BF49F222F84_gshared (Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConcurrentBatchQueue`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Int32,System.Func`2<T,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentBatchQueue_1__ctor_mE8F6B0BBE0E74E9650ABAE3D54C2FD4F1C18042A_gshared (ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE * __this, int32_t ___capacity0, Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * ___nullValidator1, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PosList_1__ctor_m101452CF8F103AF5F7E4D8259E78656EDB5BD348_gshared (PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m31A1D0D8653FF8734375FE9618A4A4EBDC5AEA26_gshared (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, const RuntimeMethod* method);

// System.Void SuperSocket.ClientEngine.TcpClientSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession__ctor_m28CE7E7AC18AB82AF34D7B37D625C50DDB97D51D (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method);
// System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.SocketAsyncEventArgs::get_LastOperation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_LastOperation_m2E3C39FE596AC2BB2CAABE05F7735AB855005C60_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.TcpClientSession::ProcessConnect(System.Net.Sockets.Socket,System.Object,System.Net.Sockets.SocketAsyncEventArgs,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_ProcessConnect_m05912F04EAAB5ADEFC91DAB0157C40EC6F1E9563 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket0, RuntimeObject * ___state1, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e2, Exception_t * ___exception3, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::ProcessReceive(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_ProcessReceive_m4BB421F7A61C0BCC6B15EEE610DC502FB834F588 (AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA * __this, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e0, const RuntimeMethod* method);
// System.ArraySegment`1<System.Byte> SuperSocket.ClientEngine.ClientSession::get_Buffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ClientSession_get_Buffer_m6ABE509ACE175953B6358B64FE6B35D9ED9C0C72_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_gshared_inline)(__this, method);
}
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[])
inline void ArraySegment_1__ctor_mF26B478B4569926D5CE8B3E90266C0E70EBE2048 (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))ArraySegment_1__ctor_mF26B478B4569926D5CE8B3E90266C0E70EBE2048_gshared)(__this, ___array0, method);
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_Buffer(System.ArraySegment`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_Buffer_m9DDFE03F87EB62AD5A3E3766AD55137BF2B424B5_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___value0, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline)(__this, method);
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SetBuffer(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_SetBuffer_m1A18C96BCD477DB524704D598EA2A649607BA9CD (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::StartReceive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_StartReceive_mCEB33E61D429C0B742AE73029E00B3D286A5D84E (AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA * __this, const RuntimeMethod* method);
// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::get_SocketError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method);
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::EnsureSocketClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_EnsureSocketClosed_m28DE2652AEF3191E68EC2A2DCBBABD3EC49C50D7 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method);
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableSocketError(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_IsIgnorableSocketError_mE6F317F4D3B4F3BF1C3EE7DE995C38F33C517701 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, int32_t ___errorCode0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * __this, int32_t ___errorCode0, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_BytesTransferred()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_BytesTransferred_mAAD1FC9BBD56566DD5A44693A86567C98CE227F2_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method);
// System.Byte[] System.Net.Sockets.SocketAsyncEventArgs::get_Buffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SocketAsyncEventArgs_get_Buffer_mDC32727C0A79D1058F425A4E864F2157592774A0_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_Offset_m0F2F4D062E9FD7D4C2A8446AE1E82B8EC2E925F8_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method);
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ClientSession::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::ReceiveAsync(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_ReceiveAsync_m60E3D3ACB572A8D4E23B8F9D15063B37441F93EC (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e0, const RuntimeMethod* method);
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::EnsureSocketClosed(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_EnsureSocketClosed_mE91CF66B286F2D30FC77ACC1D6EBB4D81545415B (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___prevClient0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.SocketAsyncEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs__ctor_mCDC163ABCAC5FFF7AF8B1660DFAFB1FA128546AC (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818 (EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::add_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_add_Completed_m424A0DFB6FE947B980C160A66695B53FBE1E027A (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE * ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Count()
inline int32_t List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_inline (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B *, const RuntimeMethod*))List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_gshared_inline)(__this, method);
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BufferList(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_BufferList_m76894ECDBD829514662C0FE2B9D0D6BD673E5442 (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::get_Item(System.Int32)
inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  List_1_get_Item_m37AE8419D9BEAA421FDB484724C5EA53408083C5_inline (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  (*) (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B *, int32_t, const RuntimeMethod*))List_1_get_Item_m37AE8419D9BEAA421FDB484724C5EA53408083C5_gshared_inline)(__this, ___index0, method);
}
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::get_BufferList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SocketAsyncEventArgs_get_BufferList_m9D092791A306A913589F89972006F1234170EC1A_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::SendAsync(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_SendAsync_m8884E47593FC56BB014C1080F05A745F681D4D85 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::Sending_Completed(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_Sending_Completed_mF6F36EE5FB5213745E8C111AE14BF2BFD3D7A56D (AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA * __this, RuntimeObject * ___sender0, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e1, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.TcpClientSession::OnSendingCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_OnSendingCompleted_m920607133785F8FEFF0D2B12221EFB2F0C9661A7 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_Dispose_m3DBF8461B4A792A6DEDF567964587CCEA75AFA63 (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ClientSession::OnClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_OnClosed_mADF9FDB2020D6CDE11C5FD9D306BB9B4B8A2A74B (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::BeginRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_BeginRead_m392261682BF4640B05FBED754EB8D3E02F9754EB (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, const RuntimeMethod* method);
// System.Net.Security.AuthenticatedStream SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::get_Stream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * StreamAsyncState_get_Stream_mD5901E2655DDA2B5502321319052DFA9AB79496D_inline (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Net.Sockets.Socket SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * StreamAsyncState_get_Client_m2AC6851BE9773B315D6E4FA3433D8B9BDD7FE0C2_inline (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::StartRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_StartRead_m7ECC7923058760A4915F463C545DF72455971D57 (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamAsyncState__ctor_mA235E4B2F7C971A14E3964FD1F5762E25B390ED5 (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::set_Stream(System.Net.Security.AuthenticatedStream)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StreamAsyncState_set_Stream_m37E50C01B969EE8AA1EB5A2B2B8FE9D239BB47CD_inline (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * ___value0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::set_Client(System.Net.Sockets.Socket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StreamAsyncState_set_Client_mB4BB7810ED3AEC095FFC37D80E5EE5CF486C1969_inline (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method);
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_IsIgnorableException_mA04974BDE3E32F3C0C92B46046E0BC47C7FF6B49 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, Exception_t * ___e0, const RuntimeMethod* method);
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method);
// System.Int32 SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>::get_Position()
inline int32_t PosList_1_get_Position_mAF8492F7B689C1F3D01EFC59C5C1C610DD4673EC_inline (PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A *, const RuntimeMethod*))PosList_1_get_Position_mAF8492F7B689C1F3D01EFC59C5C1C610DD4673EC_gshared_inline)(__this, method);
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::set_SendingItems(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StreamAsyncState_set_SendingItems_mF3487A1DC50A47CBB04B038D7EBADADCB9F3C1EF_inline (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * ___value0, const RuntimeMethod* method);
// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::get_SendingItems()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * StreamAsyncState_get_SendingItems_mFBBD6528D0859620E8DD3A912200C4764D60F74B_inline (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>::set_Position(System.Int32)
inline void PosList_1_set_Position_m48317C2D54D46618883B9482B716E84A4CBFDE0A_inline (PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A *, int32_t, const RuntimeMethod*))PosList_1_set_Position_m48317C2D54D46618883B9482B716E84A4CBFDE0A_gshared_inline)(__this, ___value0, method);
}
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.TcpClientSession::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_Close_m088015E002F7EFC9A873BC3E9B9660127698B57E (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.DataEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEventArgs__ctor_mE351A0B8787CF107AA55D3E44DF2079B34731808 (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1 (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Void SuperSocket.ClientEngine.ClientSession::Send(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_Send_m31A07782E7F96E75529168E151B590C26FE1522D (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, const RuntimeMethod* method);
// System.Void System.Threading.SpinWait::SpinOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinWait_SpinOnce_m79A8F770ED24E400B6AEFA421A33084CA54E59DB (SpinWait_tEBEEDAE5AEEBBDDEA635932A22308A8398C9AED9 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ClientSession::set_IsConnected(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_IsConnected_m882DE5E63A6A2959B16FB0F347B284FA666980D3_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ErrorEventArgs::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventArgs__ctor_m6062A3E1102F3AC72EC69648E19076503EE5F56F (ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<SuperSocket.ClientEngine.ErrorEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mFBB65AE07928BC124B0B98A547BDFEA098A007F4 (EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * __this, RuntimeObject * ___sender0, ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B *, RuntimeObject *, ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16 *, const RuntimeMethod*))EventHandler_1_Invoke_m6146E375BDA235BCEABAD74EC6EC5DE71258097F_gshared)(__this, ___sender0, ___e1, method);
}
// System.Boolean System.Net.Sockets.Socket::get_NoDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_NoDelay_m025012617D4FE56DDB6F53D975426DA5E7CFB307 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Boolean SuperSocket.ClientEngine.ClientSession::get_NoDelay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ClientSession_get_NoDelay_mB0446493218E0E39CEBA8CE498815505C2788A5C_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_NoDelay_m34DCB8BF5275A85E1687308D0D016E860F229732 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.DataEventArgs::set_Data(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataEventArgs_set_Data_mFE76476F7FF4BF81FF7497C9D653DF0EA99EAE00_inline (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.DataEventArgs::set_Offset(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataEventArgs_set_Offset_mF56217D3C5F5B00A064FBE11F50E0E5EF6B3E7CC_inline (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.DataEventArgs::set_Length(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataEventArgs_set_Length_m76CF827ACCC01F9FD0BC8353F9760A73C584C5D9_inline (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<SuperSocket.ClientEngine.DataEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m742C9508BC456A5ECD2DDDA6F8ED7620FB4EE904 (EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * __this, RuntimeObject * ___sender0, DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 *, RuntimeObject *, DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 *, const RuntimeMethod*))EventHandler_1_Invoke_m6146E375BDA235BCEABAD74EC6EC5DE71258097F_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.Net.Sockets.SocketAsyncEventArgs::remove_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_remove_Completed_mD5DA6CA668FB35C4D5EB9507E4941838C5DC6B55 (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE * ___value0, const RuntimeMethod* method);
// System.Object System.Net.Sockets.SocketAsyncEventArgs::get_UserToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SocketAsyncEventArgs_get_UserToken_mD64FA7C6DD325D8151B87483B472295C06001C18_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_UserToken(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_UserToken_m1425D948CDABF59C68EB0387345609075104CB9A_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// SuperSocket.ClientEngine.ConnectedCallback SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::get_Callback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ConnectToken_get_Callback_m5C05EDA8A646DF8C02E21A6349B4B6ED67269878_inline (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, const RuntimeMethod* method);
// System.Object SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * ConnectToken_get_State_m4590924F7AE1A44EC7D4ACCC95ECC921763954E3_inline (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectedCallback::Invoke(System.Net.Sockets.Socket,System.Object,System.Net.Sockets.SocketAsyncEventArgs,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedCallback_Invoke_m284F5F98D195B3D4831701E235A97088C102EAC0 (ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket0, RuntimeObject * ___state1, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e2, Exception_t * ___exception3, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToken__ctor_mB5B35DD45999737362F7DE229426900C4DF4A760 (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::set_State(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectToken_set_State_mA7B357C63863CC8B6DF900ED812051FDAD7277D7_inline (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::set_Callback(SuperSocket.ClientEngine.ConnectedCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectToken_set_Callback_mE4AB781FD4BE12B92DE82EF917534491F5473A75_inline (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_RemoteEndPoint(System.Net.EndPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_RemoteEndPoint_m1B58594089E482C5A9E5332C65B82B50C577FB2E_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method);
// System.String System.Net.DnsEndPoint::get_Host()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DnsEndPoint_get_Host_m79C22972AE712EDE787E1264BA9A4358BFDC4948_inline (DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsConnectState__ctor_m2270B634EBFCE5CD09EA05360FA69026B528E1EE (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method);
// System.Int32 System.Net.DnsEndPoint::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DnsEndPoint_get_Port_m12A68BE961FF2F6CB6AC5E164A380697A01537EB_inline (DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_Port(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_Port_mB70EEDE5D546B7B9FCEF3BBDD6B538A462326E94_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_Callback(SuperSocket.ClientEngine.ConnectedCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_Callback_mD70AFEF3A22FD1C4D89896098947EA238BE2AF05_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___value0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_State(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_State_m73631A555DD98D238441336B00016022068386DA_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_LocalEndPoint(System.Net.EndPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_LocalEndPoint_m141EDF088B55E66D3BFCD781FFAC17FA9B9D01F4_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Dns::BeginGetHostAddresses(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dns_BeginGetHostAddresses_mF3F4008C496455AEC35B3D2DEDA58406FA8F98A3 (String_t* ___hostNameOrAddress0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___requestCallback1, RuntimeObject * ___state2, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::OnGetHostAddresses(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_OnGetHostAddresses_m87B92B9CFA2E678782D219827A4823DF5A8C9262 (RuntimeObject* ___result0, const RuntimeMethod* method);
// System.Net.Sockets.SocketAsyncEventArgs SuperSocket.ClientEngine.ConnectAsyncExtension::CreateSocketAsyncEventArgs(System.Net.EndPoint,SuperSocket.ClientEngine.ConnectedCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ConnectAsyncExtension_CreateSocketAsyncEventArgs_m7419AF78D7D78E471C91900E4AC9A8A5F7BCE272 (EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEndPoint0, ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___callback1, RuntimeObject * ___state2, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_ExclusiveAddressUse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_ExclusiveAddressUse_mBC7C7EF17DAFE59D002780B2CAC633E808BFDDCA (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Bind_m4DFEFA3F8C6E95586D02BCF311D8A1D5A449B217 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___localEP0, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::ConnectAsync(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_ConnectAsync_m45385739FB761D2765257FE45494123CE0FCEC7E (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e0, const RuntimeMethod* method);
// System.Int32 SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_NextAddressIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DnsConnectState_get_NextAddressIndex_m8445F87CF702B1734CDFFDAD640D72069CC28B09_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method);
// System.Net.IPAddress[] SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_Addresses()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* DnsConnectState_get_Addresses_mC16DF7CA0CB8C1459D6C13E9F0D6156DA50AE6EC_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_Socket6()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * DnsConnectState_get_Socket6_m3B549B97A735ACD08B52AB01CC4C19ECAAAD14BA_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method);
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_Socket4()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * DnsConnectState_get_Socket4_mA2663052378AC68F3786FD988855C3EF1FFA0473_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_NextAddressIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_NextAddressIndex_mFE8861E8AB4DD658C552EE158B65412682248D60_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_OSSupportsIPv6_mA6770B91BF46256850B2F2E09058B86538051728 (const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_Socket6(System.Net.Sockets.Socket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_Socket6_m47D70887BEAD11AAC9F1B1CCF5FD8A22F33EED7B_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_Socket4(System.Net.Sockets.Socket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_Socket4_m7DDF1C2023324D7B4AB453CA9284AD23140A9283_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method);
// System.Net.IPAddress[] System.Net.Dns::EndGetHostAddresses(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* Dns_EndGetHostAddresses_mEAF1498417D0C8AF5C21A09D02B126DCC474B931 (RuntimeObject* ___asyncResult0, const RuntimeMethod* method);
// SuperSocket.ClientEngine.ConnectedCallback SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_Callback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * DnsConnectState_get_Callback_mD3B746CDB99124AF6A0440F1C5AD435FB02377F7_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method);
// System.Object SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DnsConnectState_get_State_mF1125B44C18DA64A8C5E9CBD98947895A4BFBD4B_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_Addresses(System.Net.IPAddress[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_Addresses_m9C68973C556572300086D0EC5BD133B611A0D49E_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* ___value0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::CreateAttempSocket(SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_CreateAttempSocket_mF85B2FD36C9B01BBA2AB2CFBDEDA4B9B40593C3E (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * ___connectState0, const RuntimeMethod* method);
// System.Net.IPAddress SuperSocket.ClientEngine.ConnectAsyncExtension::GetNextAddress(SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState,System.Net.Sockets.Socket&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ConnectAsyncExtension_GetNextAddress_mBA210315BA3A7130094F8E111327BAAAB2C35F43 (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * ___state0, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** ___attempSocket1, const RuntimeMethod* method);
// System.Net.EndPoint SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_LocalEndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * DnsConnectState_get_LocalEndPoint_mA4159C0CF7502F2CA1DD5FA6CB45BBE22220FEAD_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method);
// System.Int32 SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DnsConnectState_get_Port_m40CCF8DB4D40297464F3FB743D7286FB65B4B60F_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321 (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::SocketConnectCompleted(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_SocketConnectCompleted_mD90E67B341ED167DE11CA538736B4AA17249837B (RuntimeObject * ___sender0, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e1, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::ClearSocketAsyncEventArgs(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_ClearSocketAsyncEventArgs_m210494DAC87BF2307C394E57DA8DEBA7DCC45355 (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketError(System.Net.Sockets.SocketError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_SocketError_mE909DB5DBC90065720B35ACB8B382DA175976533_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_m3C862A51D0B10889115A9EB53CBBDC7C3883D26F (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962 (PropertyInfo_t * ___left0, PropertyInfo_t * ___right1, const RuntimeMethod* method);
// System.String System.Environment::GetEnvironmentVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetEnvironmentVariable_mBDE19BD883E2D01AEA6DD1667D5E97941558C7A3 (String_t* ___variable0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mDE1DAA5D330E9C975AC6423FC2D06862637BE68D (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.Boolean SuperSocket.ClientEngine.ConnectAsyncExtension::PreferDnsInAdvance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectAsyncExtension_PreferDnsInAdvance_m47224B74FB2F2EC25816B8B6D863218AA5D1D408 (const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::ConnectAsyncInternal(System.Net.EndPoint,System.Net.EndPoint,SuperSocket.ClientEngine.ConnectedCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_ConnectAsyncInternal_mDFA385F8870651347BA267F63026B324E70F72EB (EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEndPoint0, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___localEndPoint1, ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___callback2, RuntimeObject * ___state3, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ErrorEventArgs::set_Exception(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorEventArgs_set_Exception_m1D3851397C88AC8E6B0EF608812B66E25A395489_inline (ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16 * __this, Exception_t * ___value0, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Security.Authentication.SslProtocols SuperSocket.ClientEngine.SecurityOption::GetDefaultProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecurityOption_GetDefaultProtocol_mB876665506E632066947CF94EB83C7097298601C (const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m038CE3FFE670E8DC426728EE334DF915BC3F1644 (X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.SecurityOption::.ctor(System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption__ctor_m3BBA09DC349743D72013DF79BA10C56A89631D06 (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, int32_t ___enabledSslProtocols0, X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___certificates1, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.SecurityOption::set_EnabledSslProtocols(System.Security.Authentication.SslProtocols)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecurityOption_set_EnabledSslProtocols_mFAA548B8BB8C2E4C42A5FDFD54F8F261A0B69DFB_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.SecurityOption::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecurityOption_set_Certificates_m2F112056C2F3B1D5EAE777FF7486A21C46750B0B_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___value0, const RuntimeMethod* method);
// SuperSocket.ClientEngine.SecurityOption SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::get_Security()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * AuthenticatedStreamTcpSession_get_Security_m0C60019E3BAA1AEBDCFC98136EAC06455ACA86AC_inline (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStream__ctor_mF3FEC9C4DAA15E863B119F17F9EACE740ECD8E2C (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket0, const RuntimeMethod* method);
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCertificateValidationCallback__ctor_mDBCF893D0A540CB506F5547807525625F5CBA4C4 (RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream__ctor_mDE2A5EC03984D2F7A4AB6DDE2A4A160E9CA80BC3 (SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___innerStream0, bool ___leaveInnerStreamOpen1, RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947 * ___userCertificateValidationCallback2, const RuntimeMethod* method);
// System.String SuperSocket.ClientEngine.TcpClientSession::get_HostName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TcpClientSession_get_HostName_m198841102572BEC40B5D58F2B1BC2D1A27CBCB2A_inline (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method);
// System.Security.Cryptography.X509Certificates.X509CertificateCollection SuperSocket.ClientEngine.SecurityOption::get_Certificates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * SecurityOption_get_Certificates_mDF98442668F723A36F05FEA9C9DF036E580442D6_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method);
// System.Security.Authentication.SslProtocols SuperSocket.ClientEngine.SecurityOption::get_EnabledSslProtocols()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SecurityOption_get_EnabledSslProtocols_mC67E29D7825383EE284B3A5A213C6AD830498EF5_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::OnAuthenticatedStreamConnected(System.Net.Security.AuthenticatedStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_OnAuthenticatedStreamConnected_mF4BEF476E099E2151B10F5AA0774AEBE7FC55539 (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * ___stream0, const RuntimeMethod* method);
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947 * ServicePointManager_get_ServerCertificateValidationCallback_mD7D467E327DE91749C46DB4804C7CE350E772220 (const RuntimeMethod* method);
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RemoteCertificateValidationCallback_Invoke_m30A34C33A46909FAA60703A2EFF0C41F6E7B6C14 (RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947 * __this, RuntimeObject * ___sender0, X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 * ___certificate1, X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37 * ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method);
// System.Boolean SuperSocket.ClientEngine.SecurityOption::get_AllowNameMismatchCertificate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowNameMismatchCertificate_m9C8C0D8E36E82AC5DF1B626AFB274C62D520677A_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method);
// System.Boolean SuperSocket.ClientEngine.SecurityOption::get_AllowCertificateChainErrors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowCertificateChainErrors_m994514E78915351BEA59C01EAC67552F5C78F59E_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method);
// System.Boolean SuperSocket.ClientEngine.SecurityOption::get_AllowUnstrustedCertificate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowUnstrustedCertificate_m75F52EF0ED821D3955EED0980865D255BD323D9A_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method);
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::get_ChainStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* X509Chain_get_ChainStatus_m6A7953596419B8771027AF87588CA9C0431A55F1 (X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37 * __this, const RuntimeMethod* method);
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate_get_Subject_m05BD9B12969EFAEF1C7768C77000FA996BEB7698 (X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 * __this, const RuntimeMethod* method);
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate_get_Issuer_m00F8980D271BBE14B0936E78F159D6B88F5E531E (X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t X509ChainStatus_get_Status_m9CEF146523C133BCB62660CCC230D45AC9872EEA_inline (X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession__ctor_mF0295D008545BBE693760782E1EC3A79AFD66FEC (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ClientSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession__ctor_mB36D935E34F45BDDFDB23F1ADB05897092BDCE28 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method);
// System.Net.EndPoint SuperSocket.ClientEngine.ClientSession::get_LocalEndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ClientSession_get_LocalEndPoint_m6EA2BFAEC45DB329EF789B0AA20C1126AD502800_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method);
// System.Boolean SuperSocket.ClientEngine.ClientSession::get_IsConnected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ClientSession_get_IsConnected_m6E0F03DFD15D38C2AE9087B8E483248A09D735D1_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ClientSession::set_LocalEndPoint(System.Net.EndPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_LocalEndPoint_mFED480DDDB13B750D3C6337C34393CC6F45D0C6D_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method);
// System.Int32 SuperSocket.ClientEngine.ClientSession::get_ReceiveBufferSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClientSession_get_ReceiveBufferSize_m545843846BD8C2970F368BC0AB0B0E6BA1988328_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ClientSession::set_ReceiveBufferSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_ReceiveBufferSize_mB027A46A4C64EB6D10FA7ECF766CE4121FF724D2_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.TcpClientSession::set_HostName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TcpClientSession_set_HostName_m5D3A2900BDB3269603DA2FE4F9F157DF08C80092_inline (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, String_t* ___value0, const RuntimeMethod* method);
// SuperSocket.ClientEngine.IProxyConnector SuperSocket.ClientEngine.ClientSession::get_Proxy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ClientSession_get_Proxy_m9C1A3802B3F6B4EC6DD72EA9E0FE044B9E3D5C87_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m573CCCB8E58EF2FE9A29E8BAB201EED1556A27E1 (EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void SuperSocket.ClientEngine.ConnectedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedCallback__ctor_mB524B6129528CCAAC4E659E11E3BD0F6D89BECFF (ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::ConnectAsync(System.Net.EndPoint,System.Net.EndPoint,SuperSocket.ClientEngine.ConnectedCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_ConnectAsync_mEF094A4E83537833B776A153C92166646867C4C1 (EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEndPoint0, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___localEndPoint1, ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___callback2, RuntimeObject * ___state3, const RuntimeMethod* method);
// System.Boolean SuperSocket.ClientEngine.ProxyEventArgs::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProxyEventArgs_get_Connected_mF4CFA44DABF5A34E2614B7D5CAC6520BAEF68F33_inline (ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * __this, const RuntimeMethod* method);
// System.String SuperSocket.ClientEngine.ProxyEventArgs::get_TargetHostName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProxyEventArgs_get_TargetHostName_m9E804725558FAE12AE71A819F97A4D2961DDB54C_inline (ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * __this, const RuntimeMethod* method);
// System.Void System.Net.DnsEndPoint::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsEndPoint__ctor_mD22387F2DA472FACB116570DFB0393D41FCE85CD (DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * __this, String_t* ___host0, int32_t ___port1, const RuntimeMethod* method);
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ProxyEventArgs::get_Socket()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ProxyEventArgs_get_Socket_m6114CF2949452B98D28C8E23523D534B76CC0BFF_inline (ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * __this, const RuntimeMethod* method);
// System.Exception SuperSocket.ClientEngine.ProxyEventArgs::get_Exception()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * ProxyEventArgs_get_Exception_m60FBEDC0FECB1125C0F1F280B932937B7471E15D_inline (ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Socket_GetSocketOption_m58A866C87F4B09F2A8C3DA71635C8DA17836520D (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___optionLevel0, int32_t ___optionName1, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.ClientSession::set_Client(System.Net.Sockets.Socket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_Client_m36C1061314434D2AFE42AF88D4E3BCBADA4BD392_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * Socket_get_LocalEndPoint_m327EB4A6DD9260037F648B5ABA719BB305D40EB0 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::get_RemoteEndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * SocketAsyncEventArgs_get_RemoteEndPoint_mCBC537A463D8EA8C7F1BAAFDCB5110EC581DE7CB_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.String SuperSocket.ClientEngine.TcpClientSession::GetHostOfEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TcpClientSession_GetHostOfEndPoint_m3D91F4051B55F23A6D362A0A174CEAB5983554E2 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___endPoint0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_SetSocketOption_m0C098DE4E3F030FD9856E00F34199C28335641D5 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___optionLevel0, int32_t ___optionName1, bool ___optionValue2, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Shutdown(System.Net.Sockets.SocketShutdown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Shutdown_mCDFA7A9F9A008900F122E422F7A95B06CF54827F (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___how0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Int32 SuperSocket.ClientEngine.ClientSession::get_SendingQueueSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClientSession_get_SendingQueueSize_m569289FFB7626ED9DFB3609D2DC67BD8BEE44A79_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Func`2<System.ArraySegment`1<System.Byte>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5E03CA82E377D33E4286358264510BF49F222F84 (Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5E03CA82E377D33E4286358264510BF49F222F84_gshared)(__this, ___object0, ___method1, method);
}
// System.Void SuperSocket.ClientEngine.ConcurrentBatchQueue`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Int32,System.Func`2<T,System.Boolean>)
inline void ConcurrentBatchQueue_1__ctor_mE8F6B0BBE0E74E9650ABAE3D54C2FD4F1C18042A (ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE * __this, int32_t ___capacity0, Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * ___nullValidator1, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE *, int32_t, Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 *, const RuntimeMethod*))ConcurrentBatchQueue_1__ctor_mE8F6B0BBE0E74E9650ABAE3D54C2FD4F1C18042A_gshared)(__this, ___capacity0, ___nullValidator1, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>::.ctor()
inline void PosList_1__ctor_m101452CF8F103AF5F7E4D8259E78656EDB5BD348 (PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * __this, const RuntimeMethod* method)
{
	((  void (*) (PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A *, const RuntimeMethod*))PosList_1__ctor_m101452CF8F103AF5F7E4D8259E78656EDB5BD348_gshared)(__this, method);
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::DetectConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_DetectConnected_m0121D894ACC9821F1D48B8696D20E99CA1777352 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method);
// SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.TcpClientSession::GetSendingQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TcpClientSession_GetSendingQueue_mEFE2EE0302927C6808EB1DD5FD3841C7FB126FE0 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void SuperSocket.ClientEngine.TcpClientSession::DequeueSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_DequeueSend_m56A1250B577D63B71DCC258F133125A6AEA065F5 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method);
// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.TcpClientSession::GetSendingItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * TcpClientSession_GetSendingItems_m978C3BBEC0B9310DF04F38EC15AB00667F1D7DAD (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ArraySegment`1<System.Byte>>::Clear()
inline void List_1_Clear_m31A1D0D8653FF8734375FE9618A4A4EBDC5AEA26 (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B *, const RuntimeMethod*))List_1_Clear_m31A1D0D8653FF8734375FE9618A4A4EBDC5AEA26_gshared)(__this, method);
}
// System.Void SuperSocket.ClientEngine.TcpClientSession/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m309356C4543C2A1D4ACF0E94BCACA955BBC478BC (U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62 * __this, const RuntimeMethod* method);
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
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession__ctor_m179D2D9848DC5EEB7F885B00569126A44E65B400 (AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA * __this, const RuntimeMethod* method)
{
	{
		TcpClientSession__ctor_m28CE7E7AC18AB82AF34D7B37D625C50DDB97D51D(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::SocketEventArgsCompleted(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_SocketEventArgsCompleted_m64D794EFA73066A950D49020D3C263C6C8AED150 (AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA * __this, RuntimeObject * ___sender0, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_0 = ___e1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SocketAsyncEventArgs_get_LastOperation_m2E3C39FE596AC2BB2CAABE05F7735AB855005C60_inline(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_2 = ___sender0;
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_3 = ___e1;
		TcpClientSession_ProcessConnect_m05912F04EAAB5ADEFC91DAB0157C40EC6F1E9563(__this, ((Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)IsInstClass((RuntimeObject*)L_2, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var)), NULL, L_3, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_4 = ___e1;
		AsyncTcpSession_ProcessReceive_m4BB421F7A61C0BCC6B15EEE610DC502FB834F588(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::OnGetSocket(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_OnGetSocket_mCB3FAA1AC0D46D1B7FF40F0133449D690172310A (AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA * __this, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mF26B478B4569926D5CE8B3E90266C0E70EBE2048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_0;
		L_0 = ClientSession_get_Buffer_m6ABE509ACE175953B6358B64FE6B35D9ED9C0C72_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_0), /*hidden argument*/ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 SuperSocket.ClientEngine.ClientSession::get_ReceiveBufferSize() */, __this);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		V_1 = ((int32_t)4096);
	}

IL_0021:
	{
		int32_t L_4 = V_1;
		VirtualActionInvoker1< int32_t >::Invoke(26 /* System.Void SuperSocket.ClientEngine.ClientSession::set_ReceiveBufferSize(System.Int32) */, __this, L_4);
		int32_t L_5 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_5);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7;
		memset((&L_7), 0, sizeof(L_7));
		ArraySegment_1__ctor_mF26B478B4569926D5CE8B3E90266C0E70EBE2048((&L_7), L_6, /*hidden argument*/ArraySegment_1__ctor_mF26B478B4569926D5CE8B3E90266C0E70EBE2048_RuntimeMethod_var);
		ClientSession_set_Buffer_m9DDFE03F87EB62AD5A3E3766AD55137BF2B424B5_inline(__this, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_8 = ___e0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_9;
		L_9 = ClientSession_get_Buffer_m6ABE509ACE175953B6358B64FE6B35D9ED9C0C72_inline(__this, /*hidden argument*/NULL);
		V_0 = L_9;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_0), /*hidden argument*/ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_11;
		L_11 = ClientSession_get_Buffer_m6ABE509ACE175953B6358B64FE6B35D9ED9C0C72_inline(__this, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12;
		L_12 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_0), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_13;
		L_13 = ClientSession_get_Buffer_m6ABE509ACE175953B6358B64FE6B35D9ED9C0C72_inline(__this, /*hidden argument*/NULL);
		V_0 = L_13;
		int32_t L_14;
		L_14 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_0), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		NullCheck(L_8);
		SocketAsyncEventArgs_SetBuffer_m1A18C96BCD477DB524704D598EA2A649607BA9CD(L_8, L_10, L_12, L_14, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_15 = ___e0;
		__this->set_m_SocketEventArgs_18(L_15);
		VirtualActionInvoker0::Invoke(21 /* System.Void SuperSocket.ClientEngine.ClientSession::OnConnected() */, __this);
		AsyncTcpSession_StartReceive_mCEB33E61D429C0B742AE73029E00B3D286A5D84E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::ProcessReceive(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_ProcessReceive_m4BB421F7A61C0BCC6B15EEE610DC502FB834F588 (AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA * __this, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_0 = ___e0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		bool L_2;
		L_2 = TcpClientSession_EnsureSocketClosed_m28DE2652AEF3191E68EC2A2DCBBABD3EC49C50D7(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		VirtualActionInvoker0::Invoke(15 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
	}

IL_0016:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_3 = ___e0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = TcpClientSession_IsIgnorableSocketError_mE6F317F4D3B4F3BF1C3EE7DE995C38F33C517701(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_6 = ___e0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline(L_6, /*hidden argument*/NULL);
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_8 = (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)il2cpp_codegen_object_new(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF(L_8, L_7, /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_8);
	}

IL_0035:
	{
		return;
	}

IL_0036:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_9 = ___e0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SocketAsyncEventArgs_get_BytesTransferred_mAAD1FC9BBD56566DD5A44693A86567C98CE227F2_inline(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004d;
		}
	}
	{
		bool L_11;
		L_11 = TcpClientSession_EnsureSocketClosed_m28DE2652AEF3191E68EC2A2DCBBABD3EC49C50D7(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		VirtualActionInvoker0::Invoke(15 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
	}

IL_004c:
	{
		return;
	}

IL_004d:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_12 = ___e0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = SocketAsyncEventArgs_get_Buffer_mDC32727C0A79D1058F425A4E864F2157592774A0_inline(L_12, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_14 = ___e0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = SocketAsyncEventArgs_get_Offset_m0F2F4D062E9FD7D4C2A8446AE1E82B8EC2E925F8_inline(L_14, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_16 = ___e0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = SocketAsyncEventArgs_get_BytesTransferred_mAAD1FC9BBD56566DD5A44693A86567C98CE227F2_inline(L_16, /*hidden argument*/NULL);
		VirtualActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Void SuperSocket.ClientEngine.ClientSession::OnDataReceived(System.Byte[],System.Int32,System.Int32) */, __this, L_13, L_15, L_17);
		AsyncTcpSession_StartReceive_mCEB33E61D429C0B742AE73029E00B3D286A5D84E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::StartReceive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_StartReceive_mCEB33E61D429C0B742AE73029E00B3D286A5D84E (AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * V_1 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0;
		L_0 = ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_1 = V_1;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
	}

IL_000c:
	try
	{// begin try (depth: 1)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = V_1;
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_3 = __this->get_m_SocketEventArgs_18();
		NullCheck(L_2);
		bool L_4;
		L_4 = Socket_ReceiveAsync_m60E3D3ACB572A8D4E23B8F9D15063B37441F93EC(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0069;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0044;
		}
		throw e;
	}

CATCH_001b:
	{// begin catch(System.Net.Sockets.SocketException)
		{
			V_2 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_5 = V_2;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_5);
			V_3 = L_6;
			int32_t L_7 = V_3;
			bool L_8;
			L_8 = TcpClientSession_IsIgnorableSocketError_mE6F317F4D3B4F3BF1C3EE7DE995C38F33C517701(__this, L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0033;
			}
		}

IL_002c:
		{
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_9 = V_2;
			VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_9);
		}

IL_0033:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_10 = V_1;
			bool L_11;
			L_11 = TcpClientSession_EnsureSocketClosed_mE91CF66B286F2D30FC77ACC1D6EBB4D81545415B(__this, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			VirtualActionInvoker0::Invoke(15 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
		}

IL_0042:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0078;
		}
	}// end catch (depth: 1)

CATCH_0044:
	{// begin catch(System.Exception)
		{
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_12 = V_4;
			bool L_13;
			L_13 = VirtualFuncInvoker1< bool, Exception_t * >::Invoke(29 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, __this, L_12);
			if (L_13)
			{
				goto IL_0058;
			}
		}

IL_0050:
		{
			Exception_t * L_14 = V_4;
			VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_14);
		}

IL_0058:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_15 = V_1;
			bool L_16;
			L_16 = TcpClientSession_EnsureSocketClosed_mE91CF66B286F2D30FC77ACC1D6EBB4D81545415B(__this, L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_0067;
			}
		}

IL_0061:
		{
			VirtualActionInvoker0::Invoke(15 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
		}

IL_0067:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0078;
		}
	}// end catch (depth: 1)

IL_0069:
	{
		bool L_17 = V_0;
		if (L_17)
		{
			goto IL_0078;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_18 = __this->get_m_SocketEventArgs_18();
		AsyncTcpSession_ProcessReceive_m4BB421F7A61C0BCC6B15EEE610DC502FB834F588(__this, L_18, /*hidden argument*/NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::SendInternal(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_SendInternal_m635B46FA7DB7A76D7EA0DA377D682F767C64AFCA (AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA * __this, PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * ___items0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTcpSession_Sending_Completed_mF6F36EE5FB5213745E8C111AE14BF2BFD3D7A56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m37AE8419D9BEAA421FDB484724C5EA53408083C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_0 = __this->get_m_SocketEventArgsSend_19();
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_1 = (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *)il2cpp_codegen_object_new(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8_il2cpp_TypeInfo_var);
		SocketAsyncEventArgs__ctor_mCDC163ABCAC5FFF7AF8B1660DFAFB1FA128546AC(L_1, /*hidden argument*/NULL);
		__this->set_m_SocketEventArgsSend_19(L_1);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_2 = __this->get_m_SocketEventArgsSend_19();
		EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE * L_3 = (EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE *)il2cpp_codegen_object_new(EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818(L_3, __this, (intptr_t)((intptr_t)AsyncTcpSession_Sending_Completed_mF6F36EE5FB5213745E8C111AE14BF2BFD3D7A56D_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var);
		NullCheck(L_2);
		SocketAsyncEventArgs_add_Completed_m424A0DFB6FE947B980C160A66695B53FBE1E027A(L_2, L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
	}

IL_002b:
	try
	{// begin try (depth: 1)
		{
			PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_4 = ___items0;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_inline(L_4, /*hidden argument*/List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_RuntimeMethod_var);
			if ((((int32_t)L_5) <= ((int32_t)1)))
			{
				goto IL_005d;
			}
		}

IL_0034:
		{
			SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_6 = __this->get_m_SocketEventArgsSend_19();
			NullCheck(L_6);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
			L_7 = SocketAsyncEventArgs_get_Buffer_mDC32727C0A79D1058F425A4E864F2157592774A0_inline(L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_004f;
			}
		}

IL_0041:
		{
			SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_8 = __this->get_m_SocketEventArgsSend_19();
			NullCheck(L_8);
			SocketAsyncEventArgs_SetBuffer_m1A18C96BCD477DB524704D598EA2A649607BA9CD(L_8, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, 0, 0, /*hidden argument*/NULL);
		}

IL_004f:
		{
			SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_9 = __this->get_m_SocketEventArgsSend_19();
			PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_10 = ___items0;
			NullCheck(L_9);
			SocketAsyncEventArgs_set_BufferList_m76894ECDBD829514662C0FE2B9D0D6BD673E5442(L_9, L_10, /*hidden argument*/NULL);
			goto IL_00a3;
		}

IL_005d:
		{
			PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_11 = ___items0;
			NullCheck(L_11);
			ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_12;
			L_12 = List_1_get_Item_m37AE8419D9BEAA421FDB484724C5EA53408083C5_inline(L_11, 0, /*hidden argument*/List_1_get_Item_m37AE8419D9BEAA421FDB484724C5EA53408083C5_RuntimeMethod_var);
			V_1 = L_12;
		}

IL_0065:
		try
		{// begin try (depth: 2)
			{
				SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_13 = __this->get_m_SocketEventArgsSend_19();
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = SocketAsyncEventArgs_get_BufferList_m9D092791A306A913589F89972006F1234170EC1A_inline(L_13, /*hidden argument*/NULL);
				if (!L_14)
				{
					goto IL_007e;
				}
			}

IL_0072:
			{
				SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_15 = __this->get_m_SocketEventArgsSend_19();
				NullCheck(L_15);
				SocketAsyncEventArgs_set_BufferList_m76894ECDBD829514662C0FE2B9D0D6BD673E5442(L_15, (RuntimeObject*)NULL, /*hidden argument*/NULL);
			}

IL_007e:
			{
				goto IL_0083;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0080;
			}
			throw e;
		}

CATCH_0080:
		{// begin catch(System.Object)
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0083;
		}// end catch (depth: 2)

IL_0083:
		{
			SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_16 = __this->get_m_SocketEventArgsSend_19();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17;
			L_17 = ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
			int32_t L_18;
			L_18 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
			int32_t L_19;
			L_19 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
			NullCheck(L_16);
			SocketAsyncEventArgs_SetBuffer_m1A18C96BCD477DB524704D598EA2A649607BA9CD(L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		}

IL_00a3:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_20;
			L_20 = ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline(__this, /*hidden argument*/NULL);
			SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_21 = __this->get_m_SocketEventArgsSend_19();
			NullCheck(L_20);
			bool L_22;
			L_22 = Socket_SendAsync_m8884E47593FC56BB014C1080F05A745F681D4D85(L_20, L_21, /*hidden argument*/NULL);
			V_0 = L_22;
			goto IL_00f7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b7;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d9;
		}
		throw e;
	}

CATCH_00b7:
	{// begin catch(System.Net.Sockets.SocketException)
		{
			V_2 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *));
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_23 = V_2;
			NullCheck(L_23);
			int32_t L_24;
			L_24 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_23);
			V_3 = L_24;
			bool L_25;
			L_25 = TcpClientSession_EnsureSocketClosed_m28DE2652AEF3191E68EC2A2DCBBABD3EC49C50D7(__this, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_00d7;
			}
		}

IL_00c7:
		{
			int32_t L_26 = V_3;
			bool L_27;
			L_27 = TcpClientSession_IsIgnorableSocketError_mE6F317F4D3B4F3BF1C3EE7DE995C38F33C517701(__this, L_26, /*hidden argument*/NULL);
			if (L_27)
			{
				goto IL_00d7;
			}
		}

IL_00d0:
		{
			SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_28 = V_2;
			VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_28);
		}

IL_00d7:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_010c;
		}
	}// end catch (depth: 1)

CATCH_00d9:
	{// begin catch(System.Exception)
		{
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			bool L_29;
			L_29 = TcpClientSession_EnsureSocketClosed_m28DE2652AEF3191E68EC2A2DCBBABD3EC49C50D7(__this, /*hidden argument*/NULL);
			if (!L_29)
			{
				goto IL_00f5;
			}
		}

IL_00e3:
		{
			Exception_t * L_30 = V_4;
			bool L_31;
			L_31 = VirtualFuncInvoker1< bool, Exception_t * >::Invoke(29 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, __this, L_30);
			if (!L_31)
			{
				goto IL_00f5;
			}
		}

IL_00ed:
		{
			Exception_t * L_32 = V_4;
			VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_32);
		}

IL_00f5:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_010c;
		}
	}// end catch (depth: 1)

IL_00f7:
	{
		bool L_33 = V_0;
		if (L_33)
		{
			goto IL_010c;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_34;
		L_34 = ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline(__this, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_35 = __this->get_m_SocketEventArgsSend_19();
		AsyncTcpSession_Sending_Completed_mF6F36EE5FB5213745E8C111AE14BF2BFD3D7A56D(__this, L_34, L_35, /*hidden argument*/NULL);
	}

IL_010c:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::Sending_Completed(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_Sending_Completed_mF6F36EE5FB5213745E8C111AE14BF2BFD3D7A56D (AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA * __this, RuntimeObject * ___sender0, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_0 = ___e1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_2 = ___e1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SocketAsyncEventArgs_get_BytesTransferred_mAAD1FC9BBD56566DD5A44693A86567C98CE227F2_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0046;
		}
	}

IL_0010:
	{
		bool L_4;
		L_4 = TcpClientSession_EnsureSocketClosed_m28DE2652AEF3191E68EC2A2DCBBABD3EC49C50D7(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		VirtualActionInvoker0::Invoke(15 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
	}

IL_001e:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_5 = ___e1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_7 = ___e1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = TcpClientSession_IsIgnorableSocketError_mE6F317F4D3B4F3BF1C3EE7DE995C38F33C517701(__this, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0045;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_10 = ___e1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline(L_10, /*hidden argument*/NULL);
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_12 = (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)il2cpp_codegen_object_new(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF(L_12, L_11, /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_12);
	}

IL_0045:
	{
		return;
	}

IL_0046:
	{
		TcpClientSession_OnSendingCompleted_m920607133785F8FEFF0D2B12221EFB2F0C9661A7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AsyncTcpSession::OnClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTcpSession_OnClosed_mA649C2A972460D5C305A6702A433CD85D6CE4D7E (AsyncTcpSession_t6D1E27CC489F4F4DC45CB350A9605F8AF9F4A9BA * __this, const RuntimeMethod* method)
{
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_0 = __this->get_m_SocketEventArgsSend_19();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_1 = __this->get_m_SocketEventArgsSend_19();
		NullCheck(L_1);
		SocketAsyncEventArgs_Dispose_m3DBF8461B4A792A6DEDF567964587CCEA75AFA63(L_1, /*hidden argument*/NULL);
		__this->set_m_SocketEventArgsSend_19((SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *)NULL);
	}

IL_001a:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_2 = __this->get_m_SocketEventArgs_18();
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_3 = __this->get_m_SocketEventArgs_18();
		NullCheck(L_3);
		SocketAsyncEventArgs_Dispose_m3DBF8461B4A792A6DEDF567964587CCEA75AFA63(L_3, /*hidden argument*/NULL);
		__this->set_m_SocketEventArgs_18((SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *)NULL);
	}

IL_0034:
	{
		ClientSession_OnClosed_mADF9FDB2020D6CDE11C5FD9D306BB9B4B8A2A74B(__this, /*hidden argument*/NULL);
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
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession__ctor_mF0295D008545BBE693760782E1EC3A79AFD66FEC (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, const RuntimeMethod* method)
{
	{
		TcpClientSession__ctor_m28CE7E7AC18AB82AF34D7B37D625C50DDB97D51D(__this, /*hidden argument*/NULL);
		return;
	}
}
// SuperSocket.ClientEngine.SecurityOption SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::get_Security()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * AuthenticatedStreamTcpSession_get_Security_m0C60019E3BAA1AEBDCFC98136EAC06455ACA86AC (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, const RuntimeMethod* method)
{
	{
		SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * L_0 = __this->get_U3CSecurityU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::set_Security(SuperSocket.ClientEngine.SecurityOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_set_Security_mFBDC3446B81647DB273F1515D08FC063E1D3CB74 (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * ___value0, const RuntimeMethod* method)
{
	{
		SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * L_0 = ___value0;
		__this->set_U3CSecurityU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::SocketEventArgsCompleted(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_SocketEventArgsCompleted_mF3BD54B1875BFFC5B23B1B38FF64FC17EDBA8E3D (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, RuntimeObject * ___sender0, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___sender0;
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_1 = ___e1;
		TcpClientSession_ProcessConnect_m05912F04EAAB5ADEFC91DAB0157C40EC6F1E9563(__this, ((Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)IsInstClass((RuntimeObject*)L_0, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var)), NULL, L_1, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::OnGetSocket(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_OnGetSocket_m525EF52270F70B69CBAA3904DDE57921AC8E3339 (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e0, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0;
		L_0 = ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline(__this, /*hidden argument*/NULL);
		VirtualActionInvoker1< Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * >::Invoke(33 /* System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::StartAuthenticatedStream(System.Net.Sockets.Socket) */, __this, L_0);
		goto IL_0021;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		{
			V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_1 = V_0;
			bool L_2;
			L_2 = VirtualFuncInvoker1< bool, Exception_t * >::Invoke(29 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, __this, L_1);
			if (L_2)
			{
				goto IL_001f;
			}
		}

IL_0018:
		{
			Exception_t * L_3 = V_0;
			VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_3);
		}

IL_001f:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0021;
		}
	}// end catch (depth: 1)

IL_0021:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::OnAuthenticatedStreamConnected(System.Net.Security.AuthenticatedStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_OnAuthenticatedStreamConnected_mF4BEF476E099E2151B10F5AA0774AEBE7FC55539 (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mF26B478B4569926D5CE8B3E90266C0E70EBE2048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_0 = ___stream0;
		__this->set_m_Stream_18(L_0);
		VirtualActionInvoker0::Invoke(21 /* System.Void SuperSocket.ClientEngine.ClientSession::OnConnected() */, __this);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_1;
		L_1 = ClientSession_get_Buffer_m6ABE509ACE175953B6358B64FE6B35D9ED9C0C72_inline(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_0), /*hidden argument*/ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 SuperSocket.ClientEngine.ClientSession::get_ReceiveBufferSize() */, __this);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		V_1 = ((int32_t)4096);
	}

IL_002e:
	{
		int32_t L_5 = V_1;
		VirtualActionInvoker1< int32_t >::Invoke(26 /* System.Void SuperSocket.ClientEngine.ClientSession::set_ReceiveBufferSize(System.Int32) */, __this, L_5);
		int32_t L_6 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_6);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_8;
		memset((&L_8), 0, sizeof(L_8));
		ArraySegment_1__ctor_mF26B478B4569926D5CE8B3E90266C0E70EBE2048((&L_8), L_7, /*hidden argument*/ArraySegment_1__ctor_mF26B478B4569926D5CE8B3E90266C0E70EBE2048_RuntimeMethod_var);
		ClientSession_set_Buffer_m9DDFE03F87EB62AD5A3E3766AD55137BF2B424B5_inline(__this, L_8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		AuthenticatedStreamTcpSession_BeginRead_m392261682BF4640B05FBED754EB8D3E02F9754EB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::OnDataRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_OnDataRead_mD1C11D50AFB2634B6A8970FE64207469B1465FF0 (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral834388900DDE3A532DC52E38FD6C30B1EAD86A1B);
		s_Il2CppMethodInitialized = true;
	}
	StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * V_0 = NULL;
	AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * V_3 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject* L_0 = ___result0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, L_0);
		V_0 = ((StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 *)IsInstClass((RuntimeObject*)L_1, StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8_il2cpp_TypeInfo_var));
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_3 = V_0;
		NullCheck(L_3);
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_4;
		L_4 = StreamAsyncState_get_Stream_mD5901E2655DDA2B5502321319052DFA9AB79496D_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0028;
		}
	}

IL_0017:
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_5 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_5, _stringLiteral834388900DDE3A532DC52E38FD6C30B1EAD86A1B, /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_5);
		return;
	}

IL_0028:
	{
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_6 = V_0;
		NullCheck(L_6);
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_7;
		L_7 = StreamAsyncState_get_Stream_mD5901E2655DDA2B5502321319052DFA9AB79496D_inline(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
	}

IL_0031:
	try
	{// begin try (depth: 1)
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_8 = V_1;
		RuntimeObject* L_9 = ___result0;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(20 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_8, L_9);
		V_2 = L_10;
		goto IL_0062;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003b;
		}
		throw e;
	}

CATCH_003b:
	{// begin catch(System.Exception)
		{
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_11 = V_3;
			bool L_12;
			L_12 = VirtualFuncInvoker1< bool, Exception_t * >::Invoke(29 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, __this, L_11);
			if (L_12)
			{
				goto IL_004c;
			}
		}

IL_0045:
		{
			Exception_t * L_13 = V_3;
			VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_13);
		}

IL_004c:
		{
			StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_14 = V_0;
			NullCheck(L_14);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_15;
			L_15 = StreamAsyncState_get_Client_m2AC6851BE9773B315D6E4FA3433D8B9BDD7FE0C2_inline(L_14, /*hidden argument*/NULL);
			bool L_16;
			L_16 = TcpClientSession_EnsureSocketClosed_mE91CF66B286F2D30FC77ACC1D6EBB4D81545415B(__this, L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_0060;
			}
		}

IL_005a:
		{
			VirtualActionInvoker0::Invoke(15 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
		}

IL_0060:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00a5;
		}
	}// end catch (depth: 1)

IL_0062:
	{
		int32_t L_17 = V_2;
		if (L_17)
		{
			goto IL_007a;
		}
	}
	{
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_18 = V_0;
		NullCheck(L_18);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_19;
		L_19 = StreamAsyncState_get_Client_m2AC6851BE9773B315D6E4FA3433D8B9BDD7FE0C2_inline(L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = TcpClientSession_EnsureSocketClosed_mE91CF66B286F2D30FC77ACC1D6EBB4D81545415B(__this, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0079;
		}
	}
	{
		VirtualActionInvoker0::Invoke(15 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
	}

IL_0079:
	{
		return;
	}

IL_007a:
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_21;
		L_21 = ClientSession_get_Buffer_m6ABE509ACE175953B6358B64FE6B35D9ED9C0C72_inline(__this, /*hidden argument*/NULL);
		V_4 = L_21;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22;
		L_22 = ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_4), /*hidden argument*/ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_23;
		L_23 = ClientSession_get_Buffer_m6ABE509ACE175953B6358B64FE6B35D9ED9C0C72_inline(__this, /*hidden argument*/NULL);
		V_4 = L_23;
		int32_t L_24;
		L_24 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_4), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		int32_t L_25 = V_2;
		VirtualActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Void SuperSocket.ClientEngine.ClientSession::OnDataReceived(System.Byte[],System.Int32,System.Int32) */, __this, L_22, L_24, L_25);
		AuthenticatedStreamTcpSession_BeginRead_m392261682BF4640B05FBED754EB8D3E02F9754EB(__this, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::BeginRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_BeginRead_m392261682BF4640B05FBED754EB8D3E02F9754EB (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, const RuntimeMethod* method)
{
	{
		AuthenticatedStreamTcpSession_StartRead_m7ECC7923058760A4915F463C545DF72455971D57(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::StartRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_StartRead_m7ECC7923058760A4915F463C545DF72455971D57 (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticatedStreamTcpSession_OnDataRead_mD1C11D50AFB2634B6A8970FE64207469B1465FF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0;
		L_0 = ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_2 = __this->get_m_Stream_18();
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0012:
	{
		return;
	}

IL_0013:
	{
	}

IL_0014:
	try
	{// begin try (depth: 1)
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_3;
		L_3 = ClientSession_get_Buffer_m6ABE509ACE175953B6358B64FE6B35D9ED9C0C72_inline(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_4 = __this->get_m_Stream_18();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		int32_t L_6;
		L_6 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		int32_t L_7;
		L_7 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_8 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_8, __this, (intptr_t)((intptr_t)AuthenticatedStreamTcpSession_OnDataRead_mD1C11D50AFB2634B6A8970FE64207469B1465FF0_RuntimeMethod_var), /*hidden argument*/NULL);
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_9 = (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 *)il2cpp_codegen_object_new(StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8_il2cpp_TypeInfo_var);
		StreamAsyncState__ctor_mA235E4B2F7C971A14E3964FD1F5762E25B390ED5(L_9, /*hidden argument*/NULL);
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_10 = L_9;
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_11 = __this->get_m_Stream_18();
		NullCheck(L_10);
		StreamAsyncState_set_Stream_m37E50C01B969EE8AA1EB5A2B2B8FE9D239BB47CD_inline(L_10, L_11, /*hidden argument*/NULL);
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_12 = L_10;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_13 = V_0;
		NullCheck(L_12);
		StreamAsyncState_set_Client_mB4BB7810ED3AEC095FFC37D80E5EE5CF486C1969_inline(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(19 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_4, L_5, L_6, L_7, L_8, L_12);
		goto IL_0084;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0062;
		}
		throw e;
	}

CATCH_0062:
	{// begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_15 = V_2;
			bool L_16;
			L_16 = VirtualFuncInvoker1< bool, Exception_t * >::Invoke(29 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, __this, L_15);
			if (L_16)
			{
				goto IL_0073;
			}
		}

IL_006c:
		{
			Exception_t * L_17 = V_2;
			VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_17);
		}

IL_0073:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_18 = V_0;
			bool L_19;
			L_19 = TcpClientSession_EnsureSocketClosed_mE91CF66B286F2D30FC77ACC1D6EBB4D81545415B(__this, L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0082;
			}
		}

IL_007c:
		{
			VirtualActionInvoker0::Invoke(15 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
		}

IL_0082:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0084;
		}
	}// end catch (depth: 1)

IL_0084:
	{
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::IsIgnorableException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticatedStreamTcpSession_IsIgnorableException_m8F2CBC06E45AEE40FF56E8FA64142E0A47465E05 (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___e0;
		bool L_1;
		L_1 = TcpClientSession_IsIgnorableException_mA04974BDE3E32F3C0C92B46046E0BC47C7FF6B49(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		Exception_t * L_2 = ___e0;
		if (!((IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)IsInstClass((RuntimeObject*)L_2, IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)))
		{
			goto IL_0043;
		}
	}
	{
		Exception_t * L_3 = ___e0;
		NullCheck(L_3);
		Exception_t * L_4;
		L_4 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_3, /*hidden argument*/NULL);
		if (!((ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)IsInstClass((RuntimeObject*)L_4, ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)1;
	}

IL_0022:
	{
		Exception_t * L_5 = ___e0;
		NullCheck(L_5);
		Exception_t * L_6;
		L_6 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_5, /*hidden argument*/NULL);
		if (!((IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)IsInstClass((RuntimeObject*)L_6, IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)))
		{
			goto IL_0043;
		}
	}
	{
		Exception_t * L_7 = ___e0;
		NullCheck(L_7);
		Exception_t * L_8;
		L_8 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Exception_t * L_9;
		L_9 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_8, /*hidden argument*/NULL);
		if (!((ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)IsInstClass((RuntimeObject*)L_9, ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)1;
	}

IL_0043:
	{
		return (bool)0;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::SendInternal(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_SendInternal_mB35297607FF0F396605900DB03896C402A159892 (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * ___items0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticatedStreamTcpSession_OnWriteComplete_mB3B7E27BBE4EBA1253C7F35E9B7487EA08A52686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m37AE8419D9BEAA421FDB484724C5EA53408083C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosList_1_get_Position_mAF8492F7B689C1F3D01EFC59C5C1C610DD4673EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0;
		L_0 = ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0007:
	try
	{// begin try (depth: 1)
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_1 = ___items0;
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PosList_1_get_Position_mAF8492F7B689C1F3D01EFC59C5C1C610DD4673EC_inline(L_2, /*hidden argument*/PosList_1_get_Position_mAF8492F7B689C1F3D01EFC59C5C1C610DD4673EC_RuntimeMethod_var);
		NullCheck(L_2);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_4;
		L_4 = List_1_get_Item_m37AE8419D9BEAA421FDB484724C5EA53408083C5_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m37AE8419D9BEAA421FDB484724C5EA53408083C5_RuntimeMethod_var);
		V_1 = L_4;
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_5 = __this->get_m_Stream_18();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		int32_t L_7;
		L_7 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		int32_t L_8;
		L_8 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_9 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_9, __this, (intptr_t)((intptr_t)AuthenticatedStreamTcpSession_OnWriteComplete_mB3B7E27BBE4EBA1253C7F35E9B7487EA08A52686_RuntimeMethod_var), /*hidden argument*/NULL);
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_10 = (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 *)il2cpp_codegen_object_new(StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8_il2cpp_TypeInfo_var);
		StreamAsyncState__ctor_mA235E4B2F7C971A14E3964FD1F5762E25B390ED5(L_10, /*hidden argument*/NULL);
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_11 = L_10;
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_12 = __this->get_m_Stream_18();
		NullCheck(L_11);
		StreamAsyncState_set_Stream_m37E50C01B969EE8AA1EB5A2B2B8FE9D239BB47CD_inline(L_11, L_12, /*hidden argument*/NULL);
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_13 = L_11;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_14 = V_0;
		NullCheck(L_13);
		StreamAsyncState_set_Client_mB4BB7810ED3AEC095FFC37D80E5EE5CF486C1969_inline(L_13, L_14, /*hidden argument*/NULL);
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_15 = L_13;
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_16 = ___items0;
		NullCheck(L_15);
		StreamAsyncState_set_SendingItems_mF3487A1DC50A47CBB04B038D7EBADADCB9F3C1EF_inline(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_17;
		L_17 = VirtualFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(22 /* System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_5, L_6, L_7, L_8, L_9, L_15);
		goto IL_0084;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0062;
		}
		throw e;
	}

CATCH_0062:
	{// begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_18 = V_2;
			bool L_19;
			L_19 = VirtualFuncInvoker1< bool, Exception_t * >::Invoke(29 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, __this, L_18);
			if (L_19)
			{
				goto IL_0073;
			}
		}

IL_006c:
		{
			Exception_t * L_20 = V_2;
			VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_20);
		}

IL_0073:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_21 = V_0;
			bool L_22;
			L_22 = TcpClientSession_EnsureSocketClosed_mE91CF66B286F2D30FC77ACC1D6EBB4D81545415B(__this, L_21, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_0082;
			}
		}

IL_007c:
		{
			VirtualActionInvoker0::Invoke(15 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
		}

IL_0082:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0084;
		}
	}// end catch (depth: 1)

IL_0084:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::OnWriteComplete(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_OnWriteComplete_mB3B7E27BBE4EBA1253C7F35E9B7487EA08A52686 (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosList_1_get_Position_mAF8492F7B689C1F3D01EFC59C5C1C610DD4673EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosList_1_set_Position_m48317C2D54D46618883B9482B716E84A4CBFDE0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25FAD9DCD5ED1669E6DD4141D9104B9837A8617F);
		s_Il2CppMethodInitialized = true;
	}
	StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * V_0 = NULL;
	AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * V_1 = NULL;
	PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * V_4 = NULL;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		RuntimeObject* L_0 = ___result0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, L_0);
		V_0 = ((StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 *)IsInstClass((RuntimeObject*)L_1, StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8_il2cpp_TypeInfo_var));
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_3 = V_0;
		NullCheck(L_3);
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_4;
		L_4 = StreamAsyncState_get_Stream_mD5901E2655DDA2B5502321319052DFA9AB79496D_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0028;
		}
	}

IL_0017:
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_5 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_5, _stringLiteral25FAD9DCD5ED1669E6DD4141D9104B9837A8617F, /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_5);
		return;
	}

IL_0028:
	{
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_6 = V_0;
		NullCheck(L_6);
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_7;
		L_7 = StreamAsyncState_get_Stream_mD5901E2655DDA2B5502321319052DFA9AB79496D_inline(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
	}

IL_002f:
	try
	{// begin try (depth: 1)
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_8 = V_1;
		RuntimeObject* L_9 = ___result0;
		NullCheck(L_8);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(23 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, L_8, L_9);
		goto IL_0062;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0038;
		}
		throw e;
	}

CATCH_0038:
	{// begin catch(System.Exception)
		{
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_10 = V_4;
			bool L_11;
			L_11 = VirtualFuncInvoker1< bool, Exception_t * >::Invoke(29 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, __this, L_10);
			if (L_11)
			{
				goto IL_004c;
			}
		}

IL_0044:
		{
			Exception_t * L_12 = V_4;
			VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_12);
		}

IL_004c:
		{
			StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_13 = V_0;
			NullCheck(L_13);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_14;
			L_14 = StreamAsyncState_get_Client_m2AC6851BE9773B315D6E4FA3433D8B9BDD7FE0C2_inline(L_13, /*hidden argument*/NULL);
			bool L_15;
			L_15 = TcpClientSession_EnsureSocketClosed_mE91CF66B286F2D30FC77ACC1D6EBB4D81545415B(__this, L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0060;
			}
		}

IL_005a:
		{
			VirtualActionInvoker0::Invoke(15 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
		}

IL_0060:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c8;
		}
	}// end catch (depth: 1)

IL_0062:
	{
		StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_16 = V_0;
		NullCheck(L_16);
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_17;
		L_17 = StreamAsyncState_get_SendingItems_mFBBD6528D0859620E8DD3A912200C4764D60F74B_inline(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = PosList_1_get_Position_mAF8492F7B689C1F3D01EFC59C5C1C610DD4673EC_inline(L_18, /*hidden argument*/PosList_1_get_Position_mAF8492F7B689C1F3D01EFC59C5C1C610DD4673EC_RuntimeMethod_var);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		int32_t L_20 = V_3;
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_inline(L_21, /*hidden argument*/List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_RuntimeMethod_var);
		if ((((int32_t)L_20) >= ((int32_t)L_22)))
		{
			goto IL_008a;
		}
	}
	{
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		PosList_1_set_Position_m48317C2D54D46618883B9482B716E84A4CBFDE0A_inline(L_23, L_24, /*hidden argument*/PosList_1_set_Position_m48317C2D54D46618883B9482B716E84A4CBFDE0A_RuntimeMethod_var);
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_25 = V_2;
		VirtualActionInvoker1< PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * >::Invoke(32 /* System.Void SuperSocket.ClientEngine.TcpClientSession::SendInternal(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>) */, __this, L_25);
		return;
	}

IL_008a:
	{
	}

IL_008b:
	try
	{// begin try (depth: 1)
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_26 = __this->get_m_Stream_18();
		NullCheck(L_26);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Flush() */, L_26);
		goto IL_00c2;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0098;
		}
		throw e;
	}

CATCH_0098:
	{// begin catch(System.Exception)
		{
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_27 = V_5;
			bool L_28;
			L_28 = VirtualFuncInvoker1< bool, Exception_t * >::Invoke(29 /* System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception) */, __this, L_27);
			if (L_28)
			{
				goto IL_00ac;
			}
		}

IL_00a4:
		{
			Exception_t * L_29 = V_5;
			VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_29);
		}

IL_00ac:
		{
			StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * L_30 = V_0;
			NullCheck(L_30);
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_31;
			L_31 = StreamAsyncState_get_Client_m2AC6851BE9773B315D6E4FA3433D8B9BDD7FE0C2_inline(L_30, /*hidden argument*/NULL);
			bool L_32;
			L_32 = TcpClientSession_EnsureSocketClosed_mE91CF66B286F2D30FC77ACC1D6EBB4D81545415B(__this, L_31, /*hidden argument*/NULL);
			if (!L_32)
			{
				goto IL_00c0;
			}
		}

IL_00ba:
		{
			VirtualActionInvoker0::Invoke(15 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
		}

IL_00c0:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c8;
		}
	}// end catch (depth: 1)

IL_00c2:
	{
		TcpClientSession_OnSendingCompleted_m920607133785F8FEFF0D2B12221EFB2F0C9661A7(__this, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStreamTcpSession_Close_m5D2492D59A8B0C91B51CEEF22C7E33B5ED160018 (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, const RuntimeMethod* method)
{
	AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * V_0 = NULL;
	{
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_0 = __this->get_m_Stream_18();
		V_0 = L_0;
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_2 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_2);
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_3 = V_0;
		NullCheck(L_3);
		Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_3, /*hidden argument*/NULL);
		__this->set_m_Stream_18((AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 *)NULL);
	}

IL_001d:
	{
		TcpClientSession_Close_m088015E002F7EFC9A873BC3E9B9660127698B57E(__this, /*hidden argument*/NULL);
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
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ClientSession::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_U3CClientU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_Client(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_Client_m36C1061314434D2AFE42AF88D4E3BCBADA4BD392 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ___value0;
		__this->set_U3CClientU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Net.EndPoint SuperSocket.ClientEngine.ClientSession::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ClientSession_get_LocalEndPoint_m6EA2BFAEC45DB329EF789B0AA20C1126AD502800 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = __this->get_U3CLocalEndPointU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_LocalEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_LocalEndPoint_mFED480DDDB13B750D3C6337C34393CC6F45D0C6D (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = ___value0;
		__this->set_U3CLocalEndPointU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.ClientSession::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClientSession_get_IsConnected_m6E0F03DFD15D38C2AE9087B8E483248A09D735D1 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsConnectedU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_IsConnected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_IsConnected_m882DE5E63A6A2959B16FB0F347B284FA666980D3 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsConnectedU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.ClientSession::get_NoDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClientSession_get_NoDelay_mB0446493218E0E39CEBA8CE498815505C2788A5C (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CNoDelayU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_NoDelay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_NoDelay_m8083A5838798EF24A073E704DF15069462EE924F (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CNoDelayU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession__ctor_mB36D935E34F45BDDFDB23F1ADB05897092BDCE28 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * L_0 = (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 *)il2cpp_codegen_object_new(DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276_il2cpp_TypeInfo_var);
		DataEventArgs__ctor_mE351A0B8787CF107AA55D3E44DF2079B34731808(L_0, /*hidden argument*/NULL);
		__this->set_m_DataArgs_9(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.ClientSession::get_SendingQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientSession_get_SendingQueueSize_m569289FFB7626ED9DFB3609D2DC67BD8BEE44A79 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSendingQueueSizeU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::Send(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_Send_mA5BC17729D9D0CEDD07EA086B606DFF3FC502FE8 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___length2;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1((&L_3), L_0, L_1, L_2, /*hidden argument*/ArraySegment_1__ctor_m4406213921A75F2306395D2BB49BDBDBA14859A1_RuntimeMethod_var);
		ClientSession_Send_m31A07782E7F96E75529168E151B590C26FE1522D(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::Send(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_Send_m31A07782E7F96E75529168E151B590C26FE1522D (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, const RuntimeMethod* method)
{
	SpinWait_tEBEEDAE5AEEBBDDEA635932A22308A8398C9AED9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_0 = ___segment0;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  >::Invoke(9 /* System.Boolean SuperSocket.ClientEngine.ClientSession::TrySend(System.ArraySegment`1<System.Byte>) */, __this, L_0);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpinWait_tEBEEDAE5AEEBBDDEA635932A22308A8398C9AED9 ));
	}

IL_0012:
	{
		SpinWait_SpinOnce_m79A8F770ED24E400B6AEFA421A33084CA54E59DB((SpinWait_tEBEEDAE5AEEBBDDEA635932A22308A8398C9AED9 *)(&V_0), /*hidden argument*/NULL);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2 = ___segment0;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  >::Invoke(9 /* System.Boolean SuperSocket.ClientEngine.ClientSession::TrySend(System.ArraySegment`1<System.Byte>) */, __this, L_2);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::add_Closed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_add_Closed_mA450BF5AC7F70CDFE029F35D726DC4B732377D25 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_m_Closed_5();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_Closed_5(((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::remove_Closed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_remove_Closed_m3C14725AAFF3F174DBC87DCEE7BCEF3CFB35713C (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_m_Closed_5();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_Closed_5(((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::OnClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_OnClosed_mADF9FDB2020D6CDE11C5FD9D306BB9B4B8A2A74B (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_0 = NULL;
	{
		ClientSession_set_IsConnected_m882DE5E63A6A2959B16FB0F347B284FA666980D3_inline(__this, (bool)0, /*hidden argument*/NULL);
		VirtualActionInvoker1< EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * >::Invoke(5 /* System.Void SuperSocket.ClientEngine.ClientSession::set_LocalEndPoint(System.Net.EndPoint) */, __this, (EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA *)NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_m_Closed_5();
		V_0 = L_0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_3 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_2);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_2, __this, L_3, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::add_Error(System.EventHandler`1<SuperSocket.ClientEngine.ErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_add_Error_m863F7CB28D5E561E08A61FBCC013A04DD1B16DA4 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * L_0 = __this->get_m_Error_6();
		EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_Error_6(((EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B *)CastclassSealed((RuntimeObject*)L_2, EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::remove_Error(System.EventHandler`1<SuperSocket.ClientEngine.ErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_remove_Error_mF89377E2E9B8FC7BC7A29BF51062D22587CF3692 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * L_0 = __this->get_m_Error_6();
		EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_Error_6(((EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B *)CastclassSealed((RuntimeObject*)L_2, EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_OnError_mDA800FD0E3AC10AE83F9C807E8CF503DA8AAEF36 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mFBB65AE07928BC124B0B98A547BDFEA098A007F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * V_0 = NULL;
	{
		EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * L_0 = __this->get_m_Error_6();
		V_0 = L_0;
		EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		EventHandler_1_tB2FDF5E6FDE13A44272B07BC95796998360C024B * L_2 = V_0;
		Exception_t * L_3 = ___e0;
		ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16 * L_4 = (ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16 *)il2cpp_codegen_object_new(ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16_il2cpp_TypeInfo_var);
		ErrorEventArgs__ctor_m6062A3E1102F3AC72EC69648E19076503EE5F56F(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_mFBB65AE07928BC124B0B98A547BDFEA098A007F4(L_2, __this, L_4, /*hidden argument*/EventHandler_1_Invoke_mFBB65AE07928BC124B0B98A547BDFEA098A007F4_RuntimeMethod_var);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::add_Connected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_add_Connected_m539E50A53617DBB3C4C5B05F8245B02DC7D79DBD (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_m_Connected_7();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_Connected_7(((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::remove_Connected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_remove_Connected_mBAD69993BA930B416270040691FC1C61DBBABC27 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_0 = __this->get_m_Connected_7();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_Connected_7(((EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_OnConnected_m1A76499CDCE3FBE063CFBC5D67DEEBE88645A80D (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * V_0 = NULL;
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0;
		L_0 = ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}

IL_000a:
	try
	{// begin try (depth: 1)
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = V_0;
			NullCheck(L_2);
			bool L_3;
			L_3 = Socket_get_NoDelay_m025012617D4FE56DDB6F53D975426DA5E7CFB307(L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = ClientSession_get_NoDelay_mB0446493218E0E39CEBA8CE498815505C2788A5C_inline(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_3) == ((int32_t)L_4)))
			{
				goto IL_0024;
			}
		}

IL_0018:
		{
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_5 = V_0;
			bool L_6;
			L_6 = ClientSession_get_NoDelay_mB0446493218E0E39CEBA8CE498815505C2788A5C_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_5);
			Socket_set_NoDelay_m34DCB8BF5275A85E1687308D0D016E860F229732(L_5, L_6, /*hidden argument*/NULL);
		}

IL_0024:
		{
			goto IL_0029;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0026;
		}
		throw e;
	}

CATCH_0026:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		ClientSession_set_IsConnected_m882DE5E63A6A2959B16FB0F347B284FA666980D3_inline(__this, (bool)1, /*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7 = __this->get_m_Connected_7();
		V_1 = L_7;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8 = V_1;
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_10 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_9);
		EventHandler_Invoke_m0F82470611ECCEECEB93CD16EE16C4D14051EB81(L_9, __this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::add_DataReceived(System.EventHandler`1<SuperSocket.ClientEngine.DataEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_add_DataReceived_m4374879522769274BF0FD8E79635A6717322C2B2 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * L_0 = __this->get_m_DataReceived_8();
		EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_DataReceived_8(((EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 *)CastclassSealed((RuntimeObject*)L_2, EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::remove_DataReceived(System.EventHandler`1<SuperSocket.ClientEngine.DataEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_remove_DataReceived_mA92EBE3B34495B3B530AABB9BFC2D333881E3324 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * L_0 = __this->get_m_DataReceived_8();
		EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * L_1 = ___value0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_DataReceived_8(((EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 *)CastclassSealed((RuntimeObject*)L_2, EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::OnDataReceived(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_OnDataReceived_mFA69CA0BF831B27868C8DE0815B36B857EACBB8B (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m742C9508BC456A5ECD2DDDA6F8ED7620FB4EE904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * V_0 = NULL;
	{
		EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * L_0 = __this->get_m_DataReceived_8();
		V_0 = L_0;
		EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * L_2 = __this->get_m_DataArgs_9();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___data0;
		NullCheck(L_2);
		DataEventArgs_set_Data_mFE76476F7FF4BF81FF7497C9D653DF0EA99EAE00_inline(L_2, L_3, /*hidden argument*/NULL);
		DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * L_4 = __this->get_m_DataArgs_9();
		int32_t L_5 = ___offset1;
		NullCheck(L_4);
		DataEventArgs_set_Offset_mF56217D3C5F5B00A064FBE11F50E0E5EF6B3E7CC_inline(L_4, L_5, /*hidden argument*/NULL);
		DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * L_6 = __this->get_m_DataArgs_9();
		int32_t L_7 = ___length2;
		NullCheck(L_6);
		DataEventArgs_set_Length_m76CF827ACCC01F9FD0BC8353F9760A73C584C5D9_inline(L_6, L_7, /*hidden argument*/NULL);
		EventHandler_1_t8A3767EDEDD6DD0D9BF80710F421E88784A6D116 * L_8 = V_0;
		DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * L_9 = __this->get_m_DataArgs_9();
		NullCheck(L_8);
		EventHandler_1_Invoke_m742C9508BC456A5ECD2DDDA6F8ED7620FB4EE904(L_8, __this, L_9, /*hidden argument*/EventHandler_1_Invoke_m742C9508BC456A5ECD2DDDA6F8ED7620FB4EE904_RuntimeMethod_var);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.ClientSession::get_ReceiveBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientSession_get_ReceiveBufferSize_m545843846BD8C2970F368BC0AB0B0E6BA1988328 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReceiveBufferSizeU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_ReceiveBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_ReceiveBufferSize_mB027A46A4C64EB6D10FA7ECF766CE4121FF724D2 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReceiveBufferSizeU3Ek__BackingField_10(L_0);
		return;
	}
}
// SuperSocket.ClientEngine.IProxyConnector SuperSocket.ClientEngine.ClientSession::get_Proxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientSession_get_Proxy_m9C1A3802B3F6B4EC6DD72EA9E0FE044B9E3D5C87 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CProxyU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_Proxy(SuperSocket.ClientEngine.IProxyConnector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_Proxy_mC2C69BD9CF1537C7F3268CED94A7617E0314571C (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CProxyU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.ArraySegment`1<System.Byte> SuperSocket.ClientEngine.ClientSession::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ClientSession_get_Buffer_m6ABE509ACE175953B6358B64FE6B35D9ED9C0C72 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_0 = __this->get_U3CBufferU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ClientSession::set_Buffer(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSession_set_Buffer_m9DDFE03F87EB62AD5A3E3766AD55137BF2B424B5 (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___value0, const RuntimeMethod* method)
{
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_0 = ___value0;
		__this->set_U3CBufferU3Ek__BackingField_12(L_0);
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
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::SocketAsyncEventCompleted(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_SocketAsyncEventCompleted_mA415D29E56B7306BD1C69C5FC7DF45F0026A2165 (RuntimeObject * ___sender0, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_SocketAsyncEventCompleted_mA415D29E56B7306BD1C69C5FC7DF45F0026A2165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * V_0 = NULL;
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_0 = ___e1;
		EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE * L_1 = (EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE *)il2cpp_codegen_object_new(EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818(L_1, NULL, (intptr_t)((intptr_t)ConnectAsyncExtension_SocketAsyncEventCompleted_mA415D29E56B7306BD1C69C5FC7DF45F0026A2165_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var);
		NullCheck(L_0);
		SocketAsyncEventArgs_remove_Completed_mD5DA6CA668FB35C4D5EB9507E4941838C5DC6B55(L_0, L_1, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_2 = ___e1;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = SocketAsyncEventArgs_get_UserToken_mD64FA7C6DD325D8151B87483B472295C06001C18_inline(L_2, /*hidden argument*/NULL);
		V_0 = ((ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 *)CastclassClass((RuntimeObject*)L_3, ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51_il2cpp_TypeInfo_var));
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_4 = ___e1;
		NullCheck(L_4);
		SocketAsyncEventArgs_set_UserToken_m1425D948CDABF59C68EB0387345609075104CB9A_inline(L_4, NULL, /*hidden argument*/NULL);
		ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * L_5 = V_0;
		NullCheck(L_5);
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_6;
		L_6 = ConnectToken_get_Callback_m5C05EDA8A646DF8C02E21A6349B4B6ED67269878_inline(L_5, /*hidden argument*/NULL);
		RuntimeObject * L_7 = ___sender0;
		ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = ConnectToken_get_State_m4590924F7AE1A44EC7D4ACCC95ECC921763954E3_inline(L_8, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_10 = ___e1;
		NullCheck(L_6);
		ConnectedCallback_Invoke_m284F5F98D195B3D4831701E235A97088C102EAC0(L_6, ((Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)IsInstClass((RuntimeObject*)L_7, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var)), L_9, L_10, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Net.Sockets.SocketAsyncEventArgs SuperSocket.ClientEngine.ConnectAsyncExtension::CreateSocketAsyncEventArgs(System.Net.EndPoint,SuperSocket.ClientEngine.ConnectedCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ConnectAsyncExtension_CreateSocketAsyncEventArgs_m7419AF78D7D78E471C91900E4AC9A8A5F7BCE272 (EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEndPoint0, ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___callback1, RuntimeObject * ___state2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_SocketAsyncEventCompleted_mA415D29E56B7306BD1C69C5FC7DF45F0026A2165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_0 = (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *)il2cpp_codegen_object_new(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8_il2cpp_TypeInfo_var);
		SocketAsyncEventArgs__ctor_mCDC163ABCAC5FFF7AF8B1660DFAFB1FA128546AC(L_0, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_1 = L_0;
		ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * L_2 = (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 *)il2cpp_codegen_object_new(ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51_il2cpp_TypeInfo_var);
		ConnectToken__ctor_mB5B35DD45999737362F7DE229426900C4DF4A760(L_2, /*hidden argument*/NULL);
		ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * L_3 = L_2;
		RuntimeObject * L_4 = ___state2;
		NullCheck(L_3);
		ConnectToken_set_State_mA7B357C63863CC8B6DF900ED812051FDAD7277D7_inline(L_3, L_4, /*hidden argument*/NULL);
		ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * L_5 = L_3;
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_6 = ___callback1;
		NullCheck(L_5);
		ConnectToken_set_Callback_mE4AB781FD4BE12B92DE82EF917534491F5473A75_inline(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		SocketAsyncEventArgs_set_UserToken_m1425D948CDABF59C68EB0387345609075104CB9A_inline(L_1, L_5, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_7 = L_1;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_8 = ___remoteEndPoint0;
		NullCheck(L_7);
		SocketAsyncEventArgs_set_RemoteEndPoint_m1B58594089E482C5A9E5332C65B82B50C577FB2E_inline(L_7, L_8, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_9 = L_7;
		EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE * L_10 = (EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE *)il2cpp_codegen_object_new(EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818(L_10, NULL, (intptr_t)((intptr_t)ConnectAsyncExtension_SocketAsyncEventCompleted_mA415D29E56B7306BD1C69C5FC7DF45F0026A2165_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var);
		NullCheck(L_9);
		SocketAsyncEventArgs_add_Completed_m424A0DFB6FE947B980C160A66695B53FBE1E027A(L_9, L_10, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::ConnectAsyncInternal(System.Net.EndPoint,System.Net.EndPoint,SuperSocket.ClientEngine.ConnectedCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_ConnectAsyncInternal_mDFA385F8870651347BA267F63026B324E70F72EB (EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEndPoint0, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___localEndPoint1, ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___callback2, RuntimeObject * ___state3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_OnGetHostAddresses_m87B92B9CFA2E678782D219827A4823DF5A8C9262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * V_2 = NULL;
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * V_3 = NULL;
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = ___remoteEndPoint0;
		if (!((DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 *)IsInstClass((RuntimeObject*)L_0, DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_1 = ___remoteEndPoint0;
		V_0 = ((DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 *)CastclassClass((RuntimeObject*)L_1, DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497_il2cpp_TypeInfo_var));
		DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DnsEndPoint_get_Host_m79C22972AE712EDE787E1264BA9A4358BFDC4948_inline(L_2, /*hidden argument*/NULL);
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_4 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_4, NULL, (intptr_t)((intptr_t)ConnectAsyncExtension_OnGetHostAddresses_m87B92B9CFA2E678782D219827A4823DF5A8C9262_RuntimeMethod_var), /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_5 = (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC *)il2cpp_codegen_object_new(DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC_il2cpp_TypeInfo_var);
		DnsConnectState__ctor_m2270B634EBFCE5CD09EA05360FA69026B528E1EE(L_5, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_6 = L_5;
		DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = DnsEndPoint_get_Port_m12A68BE961FF2F6CB6AC5E164A380697A01537EB_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		DnsConnectState_set_Port_mB70EEDE5D546B7B9FCEF3BBDD6B538A462326E94_inline(L_6, L_8, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_9 = L_6;
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_10 = ___callback2;
		NullCheck(L_9);
		DnsConnectState_set_Callback_mD70AFEF3A22FD1C4D89896098947EA238BE2AF05_inline(L_9, L_10, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_11 = L_9;
		RuntimeObject * L_12 = ___state3;
		NullCheck(L_11);
		DnsConnectState_set_State_m73631A555DD98D238441336B00016022068386DA_inline(L_11, L_12, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_13 = L_11;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_14 = ___localEndPoint1;
		NullCheck(L_13);
		DnsConnectState_set_LocalEndPoint_m141EDF088B55E66D3BFCD781FFAC17FA9B9D01F4_inline(L_13, L_14, /*hidden argument*/NULL);
		RuntimeObject* L_15;
		L_15 = Dns_BeginGetHostAddresses_mF3F4008C496455AEC35B3D2DEDA58406FA8F98A3(L_3, L_4, L_13, /*hidden argument*/NULL);
		V_1 = L_15;
		RuntimeObject* L_16 = V_1;
		NullCheck(L_16);
		bool L_17;
		L_17 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, L_16);
		if (!L_17)
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject* L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		ConnectAsyncExtension_OnGetHostAddresses_m87B92B9CFA2E678782D219827A4823DF5A8C9262(L_18, /*hidden argument*/NULL);
		return;
	}

IL_005c:
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_19 = ___remoteEndPoint0;
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_20 = ___callback2;
		RuntimeObject * L_21 = ___state3;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_22;
		L_22 = ConnectAsyncExtension_CreateSocketAsyncEventArgs_m7419AF78D7D78E471C91900E4AC9A8A5F7BCE272(L_19, L_20, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_23 = ___remoteEndPoint0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily() */, L_23);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_25 = (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)il2cpp_codegen_object_new(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C(L_25, L_24, 1, 6, /*hidden argument*/NULL);
		V_3 = L_25;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_26 = ___localEndPoint1;
		if (!L_26)
		{
			goto IL_0084;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_27 = V_3;
		NullCheck(L_27);
		Socket_set_ExclusiveAddressUse_mBC7C7EF17DAFE59D002780B2CAC633E808BFDDCA(L_27, (bool)0, /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_28 = V_3;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_29 = ___localEndPoint1;
		NullCheck(L_28);
		Socket_Bind_m4DFEFA3F8C6E95586D02BCF311D8A1D5A449B217(L_28, L_29, /*hidden argument*/NULL);
	}

IL_0084:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_30 = V_3;
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_31 = V_2;
		NullCheck(L_30);
		bool L_32;
		L_32 = Socket_ConnectAsync_m45385739FB761D2765257FE45494123CE0FCEC7E(L_30, L_31, /*hidden argument*/NULL);
	}

IL_008c:
	{
		return;
	}
}
// System.Net.IPAddress SuperSocket.ClientEngine.ConnectAsyncExtension::GetNextAddress(SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState,System.Net.Sockets.Socket&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ConnectAsyncExtension_GetNextAddress_mBA210315BA3A7130094F8E111327BAAAB2C35F43 (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * ___state0, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** ___attempSocket1, const RuntimeMethod* method)
{
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE *)NULL;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** L_0 = ___attempSocket1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_1 = ___state0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = DnsConnectState_get_NextAddressIndex_m8445F87CF702B1734CDFFDAD640D72069CC28B09_inline(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_004d;
	}

IL_000e:
	{
		int32_t L_3 = V_1;
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_4 = ___state0;
		NullCheck(L_4);
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_5;
		L_5 = DnsConnectState_get_Addresses_mC16DF7CA0CB8C1459D6C13E9F0D6156DA50AE6EC_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		return (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE *)NULL;
	}

IL_001b:
	{
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_6 = ___state0;
		NullCheck(L_6);
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_7;
		L_7 = DnsConnectState_get_Addresses_mC16DF7CA0CB8C1459D6C13E9F0D6156DA50AE6EC_inline(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_003c;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** L_14 = ___attempSocket1;
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_15 = ___state0;
		NullCheck(L_15);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_16;
		L_16 = DnsConnectState_get_Socket6_m3B549B97A735ACD08B52AB01CC4C19ECAAAD14BA_inline(L_15, /*hidden argument*/NULL);
		*((RuntimeObject **)L_14) = (RuntimeObject *)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_14, (void*)(RuntimeObject *)L_16);
		goto IL_004d;
	}

IL_003c:
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_17, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_004d;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** L_19 = ___attempSocket1;
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_20 = ___state0;
		NullCheck(L_20);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_21;
		L_21 = DnsConnectState_get_Socket4_mA2663052378AC68F3786FD988855C3EF1FFA0473_inline(L_20, /*hidden argument*/NULL);
		*((RuntimeObject **)L_19) = (RuntimeObject *)L_21;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_19, (void*)(RuntimeObject *)L_21);
	}

IL_004d:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** L_22 = ___attempSocket1;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_23 = *((Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 **)L_22);
		if (!L_23)
		{
			goto IL_000e;
		}
	}
	{
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_24 = ___state0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		DnsConnectState_set_NextAddressIndex_mFE8861E8AB4DD658C552EE158B65412682248D60_inline(L_24, L_25, /*hidden argument*/NULL);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_26 = V_0;
		return L_26;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::CreateAttempSocket(SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_CreateAttempSocket_mF85B2FD36C9B01BBA2AB2CFBDEDA4B9B40593C3E (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * ___connectState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Socket_get_OSSupportsIPv6_mA6770B91BF46256850B2F2E09058B86538051728(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_1 = ___connectState0;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)il2cpp_codegen_object_new(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C(L_2, ((int32_t)23), 1, 6, /*hidden argument*/NULL);
		NullCheck(L_1);
		DnsConnectState_set_Socket6_m47D70887BEAD11AAC9F1B1CCF5FD8A22F33EED7B_inline(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		bool L_3 = ((ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_StaticFields*)il2cpp_codegen_static_fields_for(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var))->get_m_OSSupportsIPv4_1();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_4 = ___connectState0;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_5 = (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)il2cpp_codegen_object_new(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		Socket__ctor_m5A4B335AEC1450ABE31CF1151F3F5A93D9D0280C(L_5, 2, 1, 6, /*hidden argument*/NULL);
		NullCheck(L_4);
		DnsConnectState_set_Socket4_m7DDF1C2023324D7B4AB453CA9284AD23140A9283_inline(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::OnGetHostAddresses(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_OnGetHostAddresses_m87B92B9CFA2E678782D219827A4823DF5A8C9262 (RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_SocketConnectCompleted_mD90E67B341ED167DE11CA538736B4AA17249837B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * V_0 = NULL;
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* V_1 = NULL;
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * V_2 = NULL;
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_3 = NULL;
	SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * V_4 = NULL;
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * V_5 = NULL;
	Exception_t * V_6 = NULL;
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		RuntimeObject* L_0 = ___result0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, L_0);
		V_0 = ((DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC *)IsInstClass((RuntimeObject*)L_1, DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC_il2cpp_TypeInfo_var));
	}

IL_000c:
	try
	{// begin try (depth: 1)
		RuntimeObject* L_2 = ___result0;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_3;
		L_3 = Dns_EndGetHostAddresses_mEAF1498417D0C8AF5C21A09D02B126DCC474B931(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0031;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_4 = V_0;
		NullCheck(L_4);
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_5;
		L_5 = DnsConnectState_get_Callback_mD3B746CDB99124AF6A0440F1C5AD435FB02377F7_inline(L_4, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject * L_7;
		L_7 = DnsConnectState_get_State_mF1125B44C18DA64A8C5E9CBD98947895A4BFBD4B_inline(L_6, /*hidden argument*/NULL);
		Exception_t * L_8 = V_6;
		NullCheck(L_5);
		ConnectedCallback_Invoke_m284F5F98D195B3D4831701E235A97088C102EAC0(L_5, (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL, L_7, (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *)NULL, L_8, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010e;
	}// end catch (depth: 1)

IL_0031:
	{
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_10 = V_1;
		NullCheck(L_10);
		if ((((RuntimeArray*)L_10)->max_length))
		{
			goto IL_0056;
		}
	}

IL_0038:
	{
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_11 = V_0;
		NullCheck(L_11);
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_12;
		L_12 = DnsConnectState_get_Callback_mD3B746CDB99124AF6A0440F1C5AD435FB02377F7_inline(L_11, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_13 = V_0;
		NullCheck(L_13);
		RuntimeObject * L_14;
		L_14 = DnsConnectState_get_State_mF1125B44C18DA64A8C5E9CBD98947895A4BFBD4B_inline(L_13, /*hidden argument*/NULL);
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_15 = (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)il2cpp_codegen_object_new(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF(L_15, ((int32_t)11001), /*hidden argument*/NULL);
		NullCheck(L_12);
		ConnectedCallback_Invoke_m284F5F98D195B3D4831701E235A97088C102EAC0(L_12, (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL, L_14, (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *)NULL, L_15, /*hidden argument*/NULL);
		return;
	}

IL_0056:
	{
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_16 = V_0;
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_17 = V_1;
		NullCheck(L_16);
		DnsConnectState_set_Addresses_m9C68973C556572300086D0EC5BD133B611A0D49E_inline(L_16, L_17, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		ConnectAsyncExtension_CreateAttempSocket_mF85B2FD36C9B01BBA2AB2CFBDEDA4B9B40593C3E(L_18, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_19 = V_0;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_20;
		L_20 = ConnectAsyncExtension_GetNextAddress_mBA210315BA3A7130094F8E111327BAAAB2C35F43(L_19, (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 **)(&V_2), /*hidden argument*/NULL);
		V_3 = L_20;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_21 = V_3;
		if (L_21)
		{
			goto IL_008d;
		}
	}
	{
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_22 = V_0;
		NullCheck(L_22);
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_23;
		L_23 = DnsConnectState_get_Callback_mD3B746CDB99124AF6A0440F1C5AD435FB02377F7_inline(L_22, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_24 = V_0;
		NullCheck(L_24);
		RuntimeObject * L_25;
		L_25 = DnsConnectState_get_State_mF1125B44C18DA64A8C5E9CBD98947895A4BFBD4B_inline(L_24, /*hidden argument*/NULL);
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_26 = (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)il2cpp_codegen_object_new(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF(L_26, ((int32_t)10047), /*hidden argument*/NULL);
		NullCheck(L_23);
		ConnectedCallback_Invoke_m284F5F98D195B3D4831701E235A97088C102EAC0(L_23, (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL, L_25, (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *)NULL, L_26, /*hidden argument*/NULL);
		return;
	}

IL_008d:
	{
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_27 = V_0;
		NullCheck(L_27);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_28;
		L_28 = DnsConnectState_get_LocalEndPoint_mA4159C0CF7502F2CA1DD5FA6CB45BBE22220FEAD_inline(L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00c3;
		}
	}

IL_0095:
	try
	{// begin try (depth: 1)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_29 = V_2;
		NullCheck(L_29);
		Socket_set_ExclusiveAddressUse_mBC7C7EF17DAFE59D002780B2CAC633E808BFDDCA(L_29, (bool)0, /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_30 = V_2;
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_31 = V_0;
		NullCheck(L_31);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_32;
		L_32 = DnsConnectState_get_LocalEndPoint_mA4159C0CF7502F2CA1DD5FA6CB45BBE22220FEAD_inline(L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		Socket_Bind_m4DFEFA3F8C6E95586D02BCF311D8A1D5A449B217(L_30, L_32, /*hidden argument*/NULL);
		goto IL_00c3;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00aa;
		}
		throw e;
	}

CATCH_00aa:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_33 = V_0;
		NullCheck(L_33);
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_34;
		L_34 = DnsConnectState_get_Callback_mD3B746CDB99124AF6A0440F1C5AD435FB02377F7_inline(L_33, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_35 = V_0;
		NullCheck(L_35);
		RuntimeObject * L_36;
		L_36 = DnsConnectState_get_State_mF1125B44C18DA64A8C5E9CBD98947895A4BFBD4B_inline(L_35, /*hidden argument*/NULL);
		Exception_t * L_37 = V_7;
		NullCheck(L_34);
		ConnectedCallback_Invoke_m284F5F98D195B3D4831701E235A97088C102EAC0(L_34, (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL, L_36, (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *)NULL, L_37, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010e;
	}// end catch (depth: 1)

IL_00c3:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_38 = (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *)il2cpp_codegen_object_new(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8_il2cpp_TypeInfo_var);
		SocketAsyncEventArgs__ctor_mCDC163ABCAC5FFF7AF8B1660DFAFB1FA128546AC(L_38, /*hidden argument*/NULL);
		V_4 = L_38;
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_39 = V_4;
		EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE * L_40 = (EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE *)il2cpp_codegen_object_new(EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818(L_40, NULL, (intptr_t)((intptr_t)ConnectAsyncExtension_SocketConnectCompleted_mD90E67B341ED167DE11CA538736B4AA17249837B_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var);
		NullCheck(L_39);
		SocketAsyncEventArgs_add_Completed_m424A0DFB6FE947B980C160A66695B53FBE1E027A(L_39, L_40, /*hidden argument*/NULL);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_41 = V_3;
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = DnsConnectState_get_Port_m40CCF8DB4D40297464F3FB743D7286FB65B4B60F_inline(L_42, /*hidden argument*/NULL);
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_44 = (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)il2cpp_codegen_object_new(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321(L_44, L_41, L_43, /*hidden argument*/NULL);
		V_5 = L_44;
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_45 = V_4;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_46 = V_5;
		NullCheck(L_45);
		SocketAsyncEventArgs_set_RemoteEndPoint_m1B58594089E482C5A9E5332C65B82B50C577FB2E_inline(L_45, L_46, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_47 = V_4;
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_48 = V_0;
		NullCheck(L_47);
		SocketAsyncEventArgs_set_UserToken_m1425D948CDABF59C68EB0387345609075104CB9A_inline(L_47, L_48, /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_49 = V_2;
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_50 = V_4;
		NullCheck(L_49);
		bool L_51;
		L_51 = Socket_ConnectAsync_m45385739FB761D2765257FE45494123CE0FCEC7E(L_49, L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_010e;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_52 = V_2;
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_53 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		ConnectAsyncExtension_SocketConnectCompleted_mD90E67B341ED167DE11CA538736B4AA17249837B(L_52, L_53, /*hidden argument*/NULL);
	}

IL_010e:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::SocketConnectCompleted(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_SocketConnectCompleted_mD90E67B341ED167DE11CA538736B4AA17249837B (RuntimeObject * ___sender0, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * V_0 = NULL;
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * V_1 = NULL;
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * V_2 = NULL;
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_0 = ___e1;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = SocketAsyncEventArgs_get_UserToken_mD64FA7C6DD325D8151B87483B472295C06001C18_inline(L_0, /*hidden argument*/NULL);
		V_0 = ((DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC *)IsInstClass((RuntimeObject*)L_1, DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC_il2cpp_TypeInfo_var));
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_2 = ___e1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_4 = ___e1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		ConnectAsyncExtension_ClearSocketAsyncEventArgs_m210494DAC87BF2307C394E57DA8DEBA7DCC45355(L_4, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_5 = V_0;
		NullCheck(L_5);
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_6;
		L_6 = DnsConnectState_get_Callback_mD3B746CDB99124AF6A0440F1C5AD435FB02377F7_inline(L_5, /*hidden argument*/NULL);
		RuntimeObject * L_7 = ___sender0;
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = DnsConnectState_get_State_mF1125B44C18DA64A8C5E9CBD98947895A4BFBD4B_inline(L_8, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_10 = ___e1;
		NullCheck(L_6);
		ConnectedCallback_Invoke_m284F5F98D195B3D4831701E235A97088C102EAC0(L_6, ((Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)CastclassClass((RuntimeObject*)L_7, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_il2cpp_TypeInfo_var)), L_9, L_10, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}

IL_0034:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_11 = ___e1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)10065))))
		{
			goto IL_0069;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_13 = ___e1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)10061))))
		{
			goto IL_0069;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_15 = ___e1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		ConnectAsyncExtension_ClearSocketAsyncEventArgs_m210494DAC87BF2307C394E57DA8DEBA7DCC45355(L_15, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_16 = V_0;
		NullCheck(L_16);
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_17;
		L_17 = DnsConnectState_get_Callback_mD3B746CDB99124AF6A0440F1C5AD435FB02377F7_inline(L_16, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject * L_19;
		L_19 = DnsConnectState_get_State_mF1125B44C18DA64A8C5E9CBD98947895A4BFBD4B_inline(L_18, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_20 = ___e1;
		NullCheck(L_17);
		ConnectedCallback_Invoke_m284F5F98D195B3D4831701E235A97088C102EAC0(L_17, (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL, L_19, L_20, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}

IL_0069:
	{
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_22;
		L_22 = ConnectAsyncExtension_GetNextAddress_mBA210315BA3A7130094F8E111327BAAAB2C35F43(L_21, (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 **)(&V_1), /*hidden argument*/NULL);
		V_2 = L_22;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_23 = V_2;
		if (L_23)
		{
			goto IL_009b;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_24 = ___e1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		ConnectAsyncExtension_ClearSocketAsyncEventArgs_m210494DAC87BF2307C394E57DA8DEBA7DCC45355(L_24, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_25 = ___e1;
		NullCheck(L_25);
		SocketAsyncEventArgs_set_SocketError_mE909DB5DBC90065720B35ACB8B382DA175976533_inline(L_25, ((int32_t)10065), /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_26 = V_0;
		NullCheck(L_26);
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_27;
		L_27 = DnsConnectState_get_Callback_mD3B746CDB99124AF6A0440F1C5AD435FB02377F7_inline(L_26, /*hidden argument*/NULL);
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_28 = V_0;
		NullCheck(L_28);
		RuntimeObject * L_29;
		L_29 = DnsConnectState_get_State_mF1125B44C18DA64A8C5E9CBD98947895A4BFBD4B_inline(L_28, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_30 = ___e1;
		NullCheck(L_27);
		ConnectedCallback_Invoke_m284F5F98D195B3D4831701E235A97088C102EAC0(L_27, (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL, L_29, L_30, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}

IL_009b:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_31 = ___e1;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_32 = V_2;
		DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = DnsConnectState_get_Port_m40CCF8DB4D40297464F3FB743D7286FB65B4B60F_inline(L_33, /*hidden argument*/NULL);
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_35 = (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)il2cpp_codegen_object_new(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321(L_35, L_32, L_34, /*hidden argument*/NULL);
		NullCheck(L_31);
		SocketAsyncEventArgs_set_RemoteEndPoint_m1B58594089E482C5A9E5332C65B82B50C577FB2E_inline(L_31, L_35, /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_36 = V_1;
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_37 = ___e1;
		NullCheck(L_36);
		bool L_38;
		L_38 = Socket_ConnectAsync_m45385739FB761D2765257FE45494123CE0FCEC7E(L_36, L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_00bd;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_39 = V_1;
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_40 = ___e1;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		ConnectAsyncExtension_SocketConnectCompleted_mD90E67B341ED167DE11CA538736B4AA17249837B(L_39, L_40, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::ClearSocketAsyncEventArgs(System.Net.Sockets.SocketAsyncEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_ClearSocketAsyncEventArgs_m210494DAC87BF2307C394E57DA8DEBA7DCC45355 (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_SocketConnectCompleted_mD90E67B341ED167DE11CA538736B4AA17249837B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_0 = ___e0;
		EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE * L_1 = (EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE *)il2cpp_codegen_object_new(EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818(L_1, NULL, (intptr_t)((intptr_t)ConnectAsyncExtension_SocketConnectCompleted_mD90E67B341ED167DE11CA538736B4AA17249837B_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var);
		NullCheck(L_0);
		SocketAsyncEventArgs_remove_Completed_mD5DA6CA668FB35C4D5EB9507E4941838C5DC6B55(L_0, L_1, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_2 = ___e0;
		NullCheck(L_2);
		SocketAsyncEventArgs_set_UserToken_m1425D948CDABF59C68EB0387345609075104CB9A_inline(L_2, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension__cctor_mEC3874D522E6BEC9B1AE0A322AF52FB491C96C66 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05474CCD25939434932FCDF695AE5E55E456BBBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5580C906D339DEB6DB744ECDFE0D63AAAD4A851D);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		MethodInfo_t * L_2;
		L_2 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_1, _stringLiteral5580C906D339DEB6DB744ECDFE0D63AAAD4A851D, ((int32_t)24), /*hidden argument*/NULL);
		((ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_StaticFields*)il2cpp_codegen_static_fields_for(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var))->set_m_ConnectMethod_0(L_2);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_0_0_0_var) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		PropertyInfo_t * L_5;
		L_5 = Type_GetProperty_m3C862A51D0B10889115A9EB53CBBDC7C3883D26F(L_4, _stringLiteral05474CCD25939434932FCDF695AE5E55E456BBBE, ((int32_t)24), /*hidden argument*/NULL);
		V_0 = L_5;
		PropertyInfo_t * L_6 = V_0;
		bool L_7;
		L_7 = PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962(L_6, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		PropertyInfo_t * L_8 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_8);
		RuntimeObject * L_10;
		L_10 = VirtualFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_8, NULL, L_9);
		((ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_StaticFields*)il2cpp_codegen_static_fields_for(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var))->set_m_OSSupportsIPv4_1(((*(bool*)((bool*)UnBox(L_10, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0053:
	{
		((ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_StaticFields*)il2cpp_codegen_static_fields_for(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var))->set_m_OSSupportsIPv4_1((bool)1);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.ConnectAsyncExtension::PreferDnsInAdvance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectAsyncExtension_PreferDnsInAdvance_m47224B74FB2F2EC25816B8B6D863218AA5D1D408 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral925498484C22459972B4E49EC60DD267E180AFBA);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Environment_GetEnvironmentVariable_mBDE19BD883E2D01AEA6DD1667D5E97941558C7A3(_stringLiteral925498484C22459972B4E49EC60DD267E180AFBA, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension::ConnectAsync(System.Net.EndPoint,System.Net.EndPoint,SuperSocket.ClientEngine.ConnectedCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAsyncExtension_ConnectAsync_mEF094A4E83537833B776A153C92166646867C4C1 (EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEndPoint0, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___localEndPoint1, ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___callback2, RuntimeObject * ___state3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		MethodInfo_t * L_0 = ((ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_StaticFields*)il2cpp_codegen_static_fields_for(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var))->get_m_ConnectMethod_0();
		bool L_1;
		L_1 = MethodInfo_op_Inequality_mDE1DAA5D330E9C975AC6423FC2D06862637BE68D(L_0, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_2 = ___localEndPoint1;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ConnectAsyncExtension_PreferDnsInAdvance_m47224B74FB2F2EC25816B8B6D863218AA5D1D408(/*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		MethodInfo_t * L_4 = ((ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_StaticFields*)il2cpp_codegen_static_fields_for(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var))->get_m_ConnectMethod_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		int32_t L_7 = 1;
		RuntimeObject * L_8 = Box(SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_6;
		int32_t L_10 = 6;
		RuntimeObject * L_11 = Box(ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_9;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_13 = ___remoteEndPoint0;
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_14 = ___callback2;
		RuntimeObject * L_15 = ___state3;
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_16;
		L_16 = ConnectAsyncExtension_CreateSocketAsyncEventArgs_m7419AF78D7D78E471C91900E4AC9A8A5F7BCE272(L_13, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_16);
		NullCheck(L_4);
		RuntimeObject * L_17;
		L_17 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_4, NULL, L_12, /*hidden argument*/NULL);
		return;
	}

IL_0047:
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_18 = ___remoteEndPoint0;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_19 = ___localEndPoint1;
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_20 = ___callback2;
		RuntimeObject * L_21 = ___state3;
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		ConnectAsyncExtension_ConnectAsyncInternal_mDFA385F8870651347BA267F63026B324E70F72EB(L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
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
// System.Void SuperSocket.ClientEngine.ConnectedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedCallback__ctor_mB524B6129528CCAAC4E659E11E3BD0F6D89BECFF (ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SuperSocket.ClientEngine.ConnectedCallback::Invoke(System.Net.Sockets.Socket,System.Object,System.Net.Sockets.SocketAsyncEventArgs,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedCallback_Invoke_m284F5F98D195B3D4831701E235A97088C102EAC0 (ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket0, RuntimeObject * ___state1, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e2, Exception_t * ___exception3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *, RuntimeObject *, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *, Exception_t *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___socket0, ___state1, ___e2, ___exception3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *, RuntimeObject *, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *, Exception_t *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___socket0, ___state1, ___e2, ___exception3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *, Exception_t * >::Invoke(targetMethod, ___socket0, ___state1, ___e2, ___exception3);
					else
						GenericVirtualActionInvoker3< RuntimeObject *, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *, Exception_t * >::Invoke(targetMethod, ___socket0, ___state1, ___e2, ___exception3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *, Exception_t * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___socket0, ___state1, ___e2, ___exception3);
					else
						VirtualActionInvoker3< RuntimeObject *, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *, Exception_t * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___socket0, ___state1, ___e2, ___exception3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *, RuntimeObject *, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *, Exception_t *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___socket0, ___state1, ___e2, ___exception3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *, RuntimeObject *, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *, Exception_t *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___socket0, ___state1, ___e2, ___exception3, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *, RuntimeObject *, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *, Exception_t *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___socket0, ___state1, ___e2, ___exception3, targetMethod);
			}
		}
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
// System.Byte[] SuperSocket.ClientEngine.DataEventArgs::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DataEventArgs_get_Data_m1AD4A182AC61B19FD929CC08CC0B47154F0E7594 (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_U3CDataU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.DataEventArgs::set_Data(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEventArgs_set_Data_mFE76476F7FF4BF81FF7497C9D653DF0EA99EAE00 (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.DataEventArgs::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataEventArgs_get_Offset_m6B96D5E6BF7381ED5BE61D81F520655E078CEC61 (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COffsetU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.DataEventArgs::set_Offset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEventArgs_set_Offset_mF56217D3C5F5B00A064FBE11F50E0E5EF6B3E7CC (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COffsetU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.DataEventArgs::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataEventArgs_get_Length_mC7AC06B315F4FCA0343440BB7A87EC73353042D5 (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.DataEventArgs::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEventArgs_set_Length_m76CF827ACCC01F9FD0BC8353F9760A73C584C5D9 (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.DataEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEventArgs__ctor_mE351A0B8787CF107AA55D3E44DF2079B34731808 (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
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
// System.Exception SuperSocket.ClientEngine.ErrorEventArgs::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ErrorEventArgs_get_Exception_m178B1A9AEB3850573F62574542FE16C236440A41 (ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16 * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get_U3CExceptionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ErrorEventArgs::set_Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventArgs_set_Exception_m1D3851397C88AC8E6B0EF608812B66E25A395489 (ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16 * __this, Exception_t * ___value0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___value0;
		__this->set_U3CExceptionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ErrorEventArgs::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventArgs__ctor_m6062A3E1102F3AC72EC69648E19076503EE5F56F (ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		Exception_t * L_0 = ___exception0;
		ErrorEventArgs_set_Exception_m1D3851397C88AC8E6B0EF608812B66E25A395489_inline(__this, L_0, /*hidden argument*/NULL);
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
// System.Void SuperSocket.ClientEngine.Extensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions__cctor_m52E131CAAAAB5D69500BD240B2B7C7D9AE26ACAD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_tAAAA539F31BCAD2A184958D855439E29B13949E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		((Extensions_tAAAA539F31BCAD2A184958D855439E29B13949E1_StaticFields*)il2cpp_codegen_static_fields_for(Extensions_tAAAA539F31BCAD2A184958D855439E29B13949E1_il2cpp_TypeInfo_var))->set_m_Random_0(L_0);
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
// System.Boolean SuperSocket.ClientEngine.ProxyEventArgs::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProxyEventArgs_get_Connected_mF4CFA44DABF5A34E2614B7D5CAC6520BAEF68F33 (ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CConnectedU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ProxyEventArgs::get_Socket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ProxyEventArgs_get_Socket_m6114CF2949452B98D28C8E23523D534B76CC0BFF (ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_U3CSocketU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Exception SuperSocket.ClientEngine.ProxyEventArgs::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ProxyEventArgs_get_Exception_m60FBEDC0FECB1125C0F1F280B932937B7471E15D (ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get_U3CExceptionU3Ek__BackingField_3();
		return L_0;
	}
}
// System.String SuperSocket.ClientEngine.ProxyEventArgs::get_TargetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProxyEventArgs_get_TargetHostName_m9E804725558FAE12AE71A819F97A4D2961DDB54C (ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTargetHostNameU3Ek__BackingField_4();
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
// System.Security.Authentication.SslProtocols SuperSocket.ClientEngine.SecurityOption::get_EnabledSslProtocols()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecurityOption_get_EnabledSslProtocols_mC67E29D7825383EE284B3A5A213C6AD830498EF5 (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEnabledSslProtocolsU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::set_EnabledSslProtocols(System.Security.Authentication.SslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption_set_EnabledSslProtocols_mFAA548B8BB8C2E4C42A5FDFD54F8F261A0B69DFB (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEnabledSslProtocolsU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection SuperSocket.ClientEngine.SecurityOption::get_Certificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * SecurityOption_get_Certificates_mDF98442668F723A36F05FEA9C9DF036E580442D6 (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * L_0 = __this->get_U3CCertificatesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption_set_Certificates_m2F112056C2F3B1D5EAE777FF7486A21C46750B0B (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___value0, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * L_0 = ___value0;
		__this->set_U3CCertificatesU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.SecurityOption::get_AllowUnstrustedCertificate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowUnstrustedCertificate_m75F52EF0ED821D3955EED0980865D255BD323D9A (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowUnstrustedCertificateU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::set_AllowUnstrustedCertificate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption_set_AllowUnstrustedCertificate_m84617F20C139141880F88D8D2AC49123C4C34EDD (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAllowUnstrustedCertificateU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.SecurityOption::get_AllowNameMismatchCertificate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowNameMismatchCertificate_m9C8C0D8E36E82AC5DF1B626AFB274C62D520677A (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowNameMismatchCertificateU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::set_AllowNameMismatchCertificate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption_set_AllowNameMismatchCertificate_mC31591CC8AC4FE189E1CD0145F8D18160EE957E8 (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAllowNameMismatchCertificateU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.SecurityOption::get_AllowCertificateChainErrors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowCertificateChainErrors_m994514E78915351BEA59C01EAC67552F5C78F59E (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowCertificateChainErrorsU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption__ctor_m5234E928FD8F281B3D3A03B5DC5ACA2E8887BFF4 (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = SecurityOption_GetDefaultProtocol_mB876665506E632066947CF94EB83C7097298601C(/*hidden argument*/NULL);
		X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * L_1 = (X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B *)il2cpp_codegen_object_new(X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m038CE3FFE670E8DC426728EE334DF915BC3F1644(L_1, /*hidden argument*/NULL);
		SecurityOption__ctor_m3BBA09DC349743D72013DF79BA10C56A89631D06(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.SecurityOption::.ctor(System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityOption__ctor_m3BBA09DC349743D72013DF79BA10C56A89631D06 (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, int32_t ___enabledSslProtocols0, X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___certificates1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___enabledSslProtocols0;
		SecurityOption_set_EnabledSslProtocols_mFAA548B8BB8C2E4C42A5FDFD54F8F261A0B69DFB_inline(__this, L_0, /*hidden argument*/NULL);
		X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * L_1 = ___certificates1;
		SecurityOption_set_Certificates_m2F112056C2F3B1D5EAE777FF7486A21C46750B0B_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Authentication.SslProtocols SuperSocket.ClientEngine.SecurityOption::GetDefaultProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SecurityOption_GetDefaultProtocol_mB876665506E632066947CF94EB83C7097298601C (const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)240));
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
// System.Void SuperSocket.ClientEngine.SslStreamTcpSession::StartAuthenticatedStream(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStreamTcpSession_StartAuthenticatedStream_m9A17AFA07F9F0CBB78EC05BBFDFD5D1DD48864D3 (SslStreamTcpSession_t6F5491B6CE11807B11B492E18D625A39E54CF927 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslStreamTcpSession_OnAuthenticated_mB9C4EF4F41B37AD9F00F75B71469934B1128F720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslStreamTcpSession_ValidateRemoteCertificate_mA52002C0EE3ABB845103093F95ED9DAD1CB9D698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * V_0 = NULL;
	SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49 * V_1 = NULL;
	{
		SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * L_0;
		L_0 = AuthenticatedStreamTcpSession_get_Security_m0C60019E3BAA1AEBDCFC98136EAC06455ACA86AC_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42A96B26D32D43C2A582DD6B88CB2AEAC07214CD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStreamTcpSession_StartAuthenticatedStream_m9A17AFA07F9F0CBB78EC05BBFDFD5D1DD48864D3_RuntimeMethod_var)));
	}

IL_0015:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_3 = ___client0;
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_4 = (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 *)il2cpp_codegen_object_new(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48_il2cpp_TypeInfo_var);
		NetworkStream__ctor_mF3FEC9C4DAA15E863B119F17F9EACE740ECD8E2C(L_4, L_3, /*hidden argument*/NULL);
		RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947 * L_5 = (RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947 *)il2cpp_codegen_object_new(RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947_il2cpp_TypeInfo_var);
		RemoteCertificateValidationCallback__ctor_mDBCF893D0A540CB506F5547807525625F5CBA4C4(L_5, __this, (intptr_t)((intptr_t)SslStreamTcpSession_ValidateRemoteCertificate_mA52002C0EE3ABB845103093F95ED9DAD1CB9D698_RuntimeMethod_var), /*hidden argument*/NULL);
		SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49 * L_6 = (SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49 *)il2cpp_codegen_object_new(SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49_il2cpp_TypeInfo_var);
		SslStream__ctor_mDE2A5EC03984D2F7A4AB6DDE2A4A160E9CA80BC3(L_6, L_4, (bool)0, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49 * L_7 = V_1;
		String_t* L_8;
		L_8 = TcpClientSession_get_HostName_m198841102572BEC40B5D58F2B1BC2D1A27CBCB2A_inline(__this, /*hidden argument*/NULL);
		SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * L_9 = V_0;
		NullCheck(L_9);
		X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * L_10;
		L_10 = SecurityOption_get_Certificates_mDF98442668F723A36F05FEA9C9DF036E580442D6_inline(L_9, /*hidden argument*/NULL);
		SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SecurityOption_get_EnabledSslProtocols_mC67E29D7825383EE284B3A5A213C6AD830498EF5_inline(L_11, /*hidden argument*/NULL);
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_13 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_13, __this, (intptr_t)((intptr_t)SslStreamTcpSession_OnAuthenticated_mB9C4EF4F41B37AD9F00F75B71469934B1128F720_RuntimeMethod_var), /*hidden argument*/NULL);
		SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49 * L_14 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_15;
		L_15 = VirtualFuncInvoker6< RuntimeObject*, String_t*, X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B *, int32_t, bool, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(32 /* System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object) */, L_7, L_8, L_10, L_12, (bool)0, L_13, L_14);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.SslStreamTcpSession::OnAuthenticated(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStreamTcpSession_OnAuthenticated_mB9C4EF4F41B37AD9F00F75B71469934B1128F720 (SslStreamTcpSession_t6F5491B6CE11807B11B492E18D625A39E54CF927 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB3B8C26754F93715BD6B0CC860819B3480316A6);
		s_Il2CppMethodInitialized = true;
	}
	SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject* L_0 = ___result0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, L_0);
		V_0 = ((SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49 *)IsInstClass((RuntimeObject*)L_1, SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49_il2cpp_TypeInfo_var));
		SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3;
		L_3 = TcpClientSession_EnsureSocketClosed_m28DE2652AEF3191E68EC2A2DCBBABD3EC49C50D7(__this, /*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_4 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_4, _stringLiteralAB3B8C26754F93715BD6B0CC860819B3480316A6, /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_4);
		return;
	}

IL_0027:
	{
	}

IL_0028:
	try
	{// begin try (depth: 1)
		SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49 * L_5 = V_0;
		RuntimeObject* L_6 = ___result0;
		NullCheck(L_5);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(33 /* System.Void System.Net.Security.SslStream::EndAuthenticateAsClient(System.IAsyncResult) */, L_5, L_6);
		goto IL_0042;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0031;
		}
		throw e;
	}

CATCH_0031:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		bool L_7;
		L_7 = TcpClientSession_EnsureSocketClosed_m28DE2652AEF3191E68EC2A2DCBBABD3EC49C50D7(__this, /*hidden argument*/NULL);
		Exception_t * L_8 = V_1;
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_8);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0049;
	}// end catch (depth: 1)

IL_0042:
	{
		SslStream_t8C3E1BFCC63C3FC9A4684697FFBBA81B843D5F49 * L_9 = V_0;
		AuthenticatedStreamTcpSession_OnAuthenticatedStreamConnected_mF4BEF476E099E2151B10F5AA0774AEBE7FC55539(__this, L_9, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.SslStreamTcpSession::ValidateRemoteCertificate(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStreamTcpSession_ValidateRemoteCertificate_mA52002C0EE3ABB845103093F95ED9DAD1CB9D698 (SslStreamTcpSession_t6F5491B6CE11807B11B492E18D625A39E54CF927 * __this, RuntimeObject * ___sender0, X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 * ___certificate1, X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37 * ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManager_tD9336F95A52899746A9008AF4A3505363FD2C2AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SslPolicyErrors_t4C4942B3C78507D4E6891DBEFE60043B285CFBE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947 * V_0 = NULL;
	X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* V_1 = NULL;
	int32_t V_2 = 0;
	X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		IL2CPP_RUNTIME_CLASS_INIT(ServicePointManager_tD9336F95A52899746A9008AF4A3505363FD2C2AD_il2cpp_TypeInfo_var);
		RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947 * L_0;
		L_0 = ServicePointManager_get_ServerCertificateValidationCallback_mD7D467E327DE91749C46DB4804C7CE350E772220(/*hidden argument*/NULL);
		V_0 = L_0;
		RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RemoteCertificateValidationCallback_t69AACF4DA933279BC0F7916FB62BC05A5DC5A947 * L_2 = V_0;
		RuntimeObject * L_3 = ___sender0;
		X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 * L_4 = ___certificate1;
		X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37 * L_5 = ___chain2;
		int32_t L_6 = ___sslPolicyErrors3;
		NullCheck(L_2);
		bool L_7;
		L_7 = RemoteCertificateValidationCallback_Invoke_m30A34C33A46909FAA60703A2EFF0C41F6E7B6C14(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0015:
	{
		int32_t L_8 = ___sslPolicyErrors3;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		return (bool)1;
	}

IL_001b:
	{
		SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * L_9;
		L_9 = AuthenticatedStreamTcpSession_get_Security_m0C60019E3BAA1AEBDCFC98136EAC06455ACA86AC_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = SecurityOption_get_AllowNameMismatchCertificate_m9C8C0D8E36E82AC5DF1B626AFB274C62D520677A_inline(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_11 = ___sslPolicyErrors3;
		___sslPolicyErrors3 = ((int32_t)((int32_t)L_11&(int32_t)((int32_t)-3)));
	}

IL_002f:
	{
		SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * L_12;
		L_12 = AuthenticatedStreamTcpSession_get_Security_m0C60019E3BAA1AEBDCFC98136EAC06455ACA86AC_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = SecurityOption_get_AllowCertificateChainErrors_m994514E78915351BEA59C01EAC67552F5C78F59E_inline(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_14 = ___sslPolicyErrors3;
		___sslPolicyErrors3 = ((int32_t)((int32_t)L_14&(int32_t)((int32_t)-5)));
	}

IL_0043:
	{
		int32_t L_15 = ___sslPolicyErrors3;
		if (L_15)
		{
			goto IL_0049;
		}
	}
	{
		return (bool)1;
	}

IL_0049:
	{
		SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * L_16;
		L_16 = AuthenticatedStreamTcpSession_get_Security_m0C60019E3BAA1AEBDCFC98136EAC06455ACA86AC_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = SecurityOption_get_AllowUnstrustedCertificate_m75F52EF0ED821D3955EED0980865D255BD323D9A_inline(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0070;
		}
	}
	{
		RuntimeObject * L_18 = Box(SslPolicyErrors_t4C4942B3C78507D4E6891DBEFE60043B285CFBE4_il2cpp_TypeInfo_var, (&___sslPolicyErrors3));
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		___sslPolicyErrors3 = *(int32_t*)UnBox(L_18);
		Exception_t * L_20 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_20, L_19, /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_20);
		return (bool)0;
	}

IL_0070:
	{
		int32_t L_21 = ___sslPolicyErrors3;
		if (!L_21)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_22 = ___sslPolicyErrors3;
		if ((((int32_t)L_22) == ((int32_t)4)))
		{
			goto IL_0093;
		}
	}
	{
		RuntimeObject * L_23 = Box(SslPolicyErrors_t4C4942B3C78507D4E6891DBEFE60043B285CFBE4_il2cpp_TypeInfo_var, (&___sslPolicyErrors3));
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		___sslPolicyErrors3 = *(int32_t*)UnBox(L_23);
		Exception_t * L_25 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_25, L_24, /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_25);
		return (bool)0;
	}

IL_0093:
	{
		X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37 * L_26 = ___chain2;
		if (!L_26)
		{
			goto IL_00fc;
		}
	}
	{
		X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37 * L_27 = ___chain2;
		NullCheck(L_27);
		X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* L_28;
		L_28 = X509Chain_get_ChainStatus_m6A7953596419B8771027AF87588CA9C0431A55F1(L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00fc;
		}
	}
	{
		X509Chain_t2167363ADB11F31A4A13E77EB73BEEE29381AF37 * L_29 = ___chain2;
		NullCheck(L_29);
		X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* L_30;
		L_30 = X509Chain_get_ChainStatus_m6A7953596419B8771027AF87588CA9C0431A55F1(L_29, /*hidden argument*/NULL);
		V_1 = L_30;
		V_2 = 0;
		goto IL_00f6;
	}

IL_00a9:
	{
		X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* L_31 = V_1;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_3 = L_34;
		X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 * L_35 = ___certificate1;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = X509Certificate_get_Subject_m05BD9B12969EFAEF1C7768C77000FA996BEB7698(L_35, /*hidden argument*/NULL);
		X509Certificate_t6F3E94ED7C8FB33253E4705C76A40144E59F0553 * L_37 = ___certificate1;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = X509Certificate_get_Issuer_m00F8980D271BBE14B0936E78F159D6B88F5E531E(L_37, /*hidden argument*/NULL);
		bool L_39;
		L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_40;
		L_40 = X509ChainStatus_get_Status_m9CEF146523C133BCB62660CCC230D45AC9872EEA_inline((X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB *)(&V_3), /*hidden argument*/NULL);
		if ((((int32_t)L_40) == ((int32_t)((int32_t)32))))
		{
			goto IL_00f2;
		}
	}

IL_00cf:
	{
		int32_t L_41;
		L_41 = X509ChainStatus_get_Status_m9CEF146523C133BCB62660CCC230D45AC9872EEA_inline((X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB *)(&V_3), /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_00f2;
		}
	}
	{
		RuntimeObject * L_42 = Box(SslPolicyErrors_t4C4942B3C78507D4E6891DBEFE60043B285CFBE4_il2cpp_TypeInfo_var, (&___sslPolicyErrors3));
		NullCheck(L_42);
		String_t* L_43;
		L_43 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
		___sslPolicyErrors3 = *(int32_t*)UnBox(L_42);
		Exception_t * L_44 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_44, L_43, /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_44);
		return (bool)0;
	}

IL_00f2:
	{
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00f6:
	{
		int32_t L_46 = V_2;
		X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* L_47 = V_1;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))))
		{
			goto IL_00a9;
		}
	}

IL_00fc:
	{
		return (bool)1;
	}
}
// System.Void SuperSocket.ClientEngine.SslStreamTcpSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStreamTcpSession__ctor_m0794FF07D0F7CCCA49766339D2568733AC3D0B7E (SslStreamTcpSession_t6F5491B6CE11807B11B492E18D625A39E54CF927 * __this, const RuntimeMethod* method)
{
	{
		AuthenticatedStreamTcpSession__ctor_mF0295D008545BBE693760782E1EC3A79AFD66FEC(__this, /*hidden argument*/NULL);
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
// System.String SuperSocket.ClientEngine.TcpClientSession::get_HostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TcpClientSession_get_HostName_m198841102572BEC40B5D58F2B1BC2D1A27CBCB2A (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CHostNameU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::set_HostName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_set_HostName_m5D3A2900BDB3269603DA2FE4F9F157DF08C80092 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CHostNameU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession__ctor_m28CE7E7AC18AB82AF34D7B37D625C50DDB97D51D (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method)
{
	{
		ClientSession__ctor_mB36D935E34F45BDDFDB23F1ADB05897092BDCE28(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Net.EndPoint SuperSocket.ClientEngine.TcpClientSession::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * TcpClientSession_get_LocalEndPoint_m14500A135A7535F89144B9F8E18FA958065F54A5 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0;
		L_0 = ClientSession_get_LocalEndPoint_m6EA2BFAEC45DB329EF789B0AA20C1126AD502800_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::set_LocalEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_set_LocalEndPoint_m633EA91A175D06E083D506C0605279B0AB2CFDA6 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_InConnecting_14();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = ClientSession_get_IsConnected_m6E0F03DFD15D38C2AE9087B8E483248A09D735D1_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC77060BFDCA3E6D381803D899265B5012FFFEE31)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_set_LocalEndPoint_m633EA91A175D06E083D506C0605279B0AB2CFDA6_RuntimeMethod_var)));
	}

IL_001b:
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_3 = ___value0;
		ClientSession_set_LocalEndPoint_mFED480DDDB13B750D3C6337C34393CC6F45D0C6D_inline(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.TcpClientSession::get_ReceiveBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TcpClientSession_get_ReceiveBufferSize_mC19F981F04CEC43DC8A897D56594BEF20758C9F5 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = ClientSession_get_ReceiveBufferSize_m545843846BD8C2970F368BC0AB0B0E6BA1988328_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::set_ReceiveBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_set_ReceiveBufferSize_m07EC50828788F2B7EBBCCA0C9CDF7EE8AECAFF91 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_0;
		L_0 = ClientSession_get_Buffer_m6ABE509ACE175953B6358B64FE6B35D9ED9C0C72_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_0), /*hidden argument*/ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1E270CA14C4008A5702888CAB42400E2F53D420)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_set_ReceiveBufferSize_m07EC50828788F2B7EBBCCA0C9CDF7EE8AECAFF91_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t L_3 = ___value0;
		ClientSession_set_ReceiveBufferSize_mB027A46A4C64EB6D10FA7ECF766CE4121FF724D2_inline(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_IsIgnorableException_mA04974BDE3E32F3C0C92B46046E0BC47C7FF6B49 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___e0;
		if (!((ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)IsInstClass((RuntimeObject*)L_0, ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		Exception_t * L_1 = ___e0;
		if (!((NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)IsInstClass((RuntimeObject*)L_1, NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::IsIgnorableSocketError(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_IsIgnorableSocketError_mE6F317F4D3B4F3BF1C3EE7DE995C38F33C517701 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___errorCode0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10058))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___errorCode0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)10053))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___errorCode0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10054))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___errorCode0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)995)))))
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		return (bool)1;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_Connect_m2D8FC94CC3E897E4DFC9EC02363F3E11CA7DB128 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___remoteEndPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m573CCCB8E58EF2FE9A29E8BAB201EED1556A27E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProxyConnector_tAB9DC155066A62440571FACDEFBD2B9945E55ADC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClientSession_ProcessConnect_m05912F04EAAB5ADEFC91DAB0157C40EC6F1E9563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClientSession_Proxy_Completed_m1B4B0B404227A07B9B403BDC1F1879A4ED119B7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = ___remoteEndPoint0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9A99CC761E2CB91E2370DFDEEE6A4CB64952140)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_Connect_m2D8FC94CC3E897E4DFC9EC02363F3E11CA7DB128_RuntimeMethod_var)));
	}

IL_000e:
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_2 = ___remoteEndPoint0;
		V_0 = ((DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 *)IsInstClass((RuntimeObject*)L_2, DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497_il2cpp_TypeInfo_var));
		DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = DnsEndPoint_get_Host_m79C22972AE712EDE787E1264BA9A4358BFDC4948_inline(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = V_1;
		bool L_7;
		L_7 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_8 = V_1;
		TcpClientSession_set_HostName_m5D3A2900BDB3269603DA2FE4F9F157DF08C80092_inline(__this, L_8, /*hidden argument*/NULL);
	}

IL_002e:
	{
		bool L_9 = __this->get_m_InConnecting_14();
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		Exception_t * L_10 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8325B4D1F0CCCFC8664C40D56B573FB6FF1D2E75)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_Connect_m2D8FC94CC3E897E4DFC9EC02363F3E11CA7DB128_RuntimeMethod_var)));
	}

IL_0041:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_11;
		L_11 = ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBA0C3BB5E3C1CD683A7D2040C039F6DEA8426FD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_Connect_m2D8FC94CC3E897E4DFC9EC02363F3E11CA7DB128_RuntimeMethod_var)));
	}

IL_0054:
	{
		RuntimeObject* L_13;
		L_13 = ClientSession_get_Proxy_m9C1A3802B3F6B4EC6DD72EA9E0FE044B9E3D5C87_inline(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject* L_14;
		L_14 = ClientSession_get_Proxy_m9C1A3802B3F6B4EC6DD72EA9E0FE044B9E3D5C87_inline(__this, /*hidden argument*/NULL);
		EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A * L_15 = (EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A *)il2cpp_codegen_object_new(EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m573CCCB8E58EF2FE9A29E8BAB201EED1556A27E1(L_15, __this, (intptr_t)((intptr_t)TcpClientSession_Proxy_Completed_m1B4B0B404227A07B9B403BDC1F1879A4ED119B7A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m573CCCB8E58EF2FE9A29E8BAB201EED1556A27E1_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A * >::Invoke(1 /* System.Void SuperSocket.ClientEngine.IProxyConnector::add_Completed(System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>) */, IProxyConnector_tAB9DC155066A62440571FACDEFBD2B9945E55ADC_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16;
		L_16 = ClientSession_get_Proxy_m9C1A3802B3F6B4EC6DD72EA9E0FE044B9E3D5C87_inline(__this, /*hidden argument*/NULL);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_17 = ___remoteEndPoint0;
		NullCheck(L_16);
		InterfaceActionInvoker1< EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * >::Invoke(0 /* System.Void SuperSocket.ClientEngine.IProxyConnector::Connect(System.Net.EndPoint) */, IProxyConnector_tAB9DC155066A62440571FACDEFBD2B9945E55ADC_il2cpp_TypeInfo_var, L_16, L_17);
		__this->set_m_InConnecting_14((bool)1);
		return;
	}

IL_0087:
	{
		__this->set_m_InConnecting_14((bool)1);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_18 = ___remoteEndPoint0;
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_19;
		L_19 = VirtualFuncInvoker0< EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * >::Invoke(4 /* System.Net.EndPoint SuperSocket.ClientEngine.ClientSession::get_LocalEndPoint() */, __this);
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_20 = (ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 *)il2cpp_codegen_object_new(ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79_il2cpp_TypeInfo_var);
		ConnectedCallback__ctor_mB524B6129528CCAAC4E659E11E3BD0F6D89BECFF(L_20, __this, (intptr_t)((intptr_t)TcpClientSession_ProcessConnect_m05912F04EAAB5ADEFC91DAB0157C40EC6F1E9563_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConnectAsyncExtension_t298971313AD06F3E23B6473271379BBFD81E39BE_il2cpp_TypeInfo_var);
		ConnectAsyncExtension_ConnectAsync_mEF094A4E83537833B776A153C92166646867C4C1(L_18, L_19, L_20, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::Proxy_Completed(System.Object,SuperSocket.ClientEngine.ProxyEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_Proxy_Completed_m1B4B0B404227A07B9B403BDC1F1879A4ED119B7A (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, RuntimeObject * ___sender0, ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m573CCCB8E58EF2FE9A29E8BAB201EED1556A27E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProxyConnector_tAB9DC155066A62440571FACDEFBD2B9945E55ADC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClientSession_Proxy_Completed_m1B4B0B404227A07B9B403BDC1F1879A4ED119B7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D2BDFF5B409ECE88D3A160453177AC48918C1F);
		s_Il2CppMethodInitialized = true;
	}
	SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ClientSession_get_Proxy_m9C1A3802B3F6B4EC6DD72EA9E0FE044B9E3D5C87_inline(__this, /*hidden argument*/NULL);
		EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A * L_1 = (EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A *)il2cpp_codegen_object_new(EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m573CCCB8E58EF2FE9A29E8BAB201EED1556A27E1(L_1, __this, (intptr_t)((intptr_t)TcpClientSession_Proxy_Completed_m1B4B0B404227A07B9B403BDC1F1879A4ED119B7A_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m573CCCB8E58EF2FE9A29E8BAB201EED1556A27E1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< EventHandler_1_t46EE4A931D0CD0EA97B8A72155CDB344F8850C0A * >::Invoke(2 /* System.Void SuperSocket.ClientEngine.IProxyConnector::remove_Completed(System.EventHandler`1<SuperSocket.ClientEngine.ProxyEventArgs>) */, IProxyConnector_tAB9DC155066A62440571FACDEFBD2B9945E55ADC_il2cpp_TypeInfo_var, L_0, L_1);
		ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * L_2 = ___e1;
		NullCheck(L_2);
		bool L_3;
		L_3 = ProxyEventArgs_get_Connected_mF4CFA44DABF5A34E2614B7D5CAC6520BAEF68F33_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		V_0 = (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *)NULL;
		ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * L_4 = ___e1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ProxyEventArgs_get_TargetHostName_m9E804725558FAE12AE71A819F97A4D2961DDB54C_inline(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_6 = (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *)il2cpp_codegen_object_new(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8_il2cpp_TypeInfo_var);
		SocketAsyncEventArgs__ctor_mCDC163ABCAC5FFF7AF8B1660DFAFB1FA128546AC(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_7 = V_0;
		ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * L_8 = ___e1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ProxyEventArgs_get_TargetHostName_m9E804725558FAE12AE71A819F97A4D2961DDB54C_inline(L_8, /*hidden argument*/NULL);
		DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * L_10 = (DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 *)il2cpp_codegen_object_new(DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497_il2cpp_TypeInfo_var);
		DnsEndPoint__ctor_mD22387F2DA472FACB116570DFB0393D41FCE85CD(L_10, L_9, 0, /*hidden argument*/NULL);
		NullCheck(L_7);
		SocketAsyncEventArgs_set_RemoteEndPoint_m1B58594089E482C5A9E5332C65B82B50C577FB2E_inline(L_7, L_10, /*hidden argument*/NULL);
	}

IL_0041:
	{
		ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * L_11 = ___e1;
		NullCheck(L_11);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_12;
		L_12 = ProxyEventArgs_get_Socket_m6114CF2949452B98D28C8E23523D534B76CC0BFF_inline(L_11, /*hidden argument*/NULL);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_13 = V_0;
		TcpClientSession_ProcessConnect_m05912F04EAAB5ADEFC91DAB0157C40EC6F1E9563(__this, L_12, NULL, L_13, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}

IL_0051:
	{
		ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * L_14 = ___e1;
		NullCheck(L_14);
		Exception_t * L_15;
		L_15 = ProxyEventArgs_get_Exception_m60FBEDC0FECB1125C0F1F280B932937B7471E15D_inline(L_14, /*hidden argument*/NULL);
		Exception_t * L_16 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(L_16, _stringLiteral58D2BDFF5B409ECE88D3A160453177AC48918C1F, L_15, /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_16);
		__this->set_m_InConnecting_14((bool)0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::ProcessConnect(System.Net.Sockets.Socket,System.Object,System.Net.Sockets.SocketAsyncEventArgs,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_ProcessConnect_m05912F04EAAB5ADEFC91DAB0157C40EC6F1E9563 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket0, RuntimeObject * ___state1, SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * ___e2, Exception_t * ___exception3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * V_0 = NULL;
	int32_t V_1 = 0;
	DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * V_2 = NULL;
	String_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * G_B22_0 = NULL;
	{
		Exception_t * L_0 = ___exception3;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		__this->set_m_InConnecting_14((bool)0);
		Exception_t * L_1 = ___exception3;
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_1);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_2 = ___e2;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_3 = ___e2;
		NullCheck(L_3);
		SocketAsyncEventArgs_Dispose_m3DBF8461B4A792A6DEDF567964587CCEA75AFA63(L_3, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_4 = ___e2;
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_5 = ___e2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		__this->set_m_InConnecting_14((bool)0);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_7 = ___e2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline(L_7, /*hidden argument*/NULL);
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_9 = (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)il2cpp_codegen_object_new(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF(L_9, L_8, /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_9);
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_10 = ___e2;
		NullCheck(L_10);
		SocketAsyncEventArgs_Dispose_m3DBF8461B4A792A6DEDF567964587CCEA75AFA63(L_10, /*hidden argument*/NULL);
		return;
	}

IL_0047:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_11 = ___socket0;
		if (L_11)
		{
			goto IL_0062;
		}
	}
	{
		__this->set_m_InConnecting_14((bool)0);
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_12 = (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)il2cpp_codegen_object_new(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF(L_12, ((int32_t)10053), /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_12);
		return;
	}

IL_0062:
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_13 = ___socket0;
		NullCheck(L_13);
		bool L_14;
		L_14 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00a5;
		}
	}
	{
		__this->set_m_InConnecting_14((bool)0);
		V_1 = ((int32_t)10065);
	}

IL_0077:
	try
	{// begin try (depth: 1)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_15 = ___socket0;
		NullCheck(L_15);
		RuntimeObject * L_16;
		L_16 = Socket_GetSocketOption_m58A866C87F4B09F2A8C3DA71635C8DA17836520D(L_15, ((int32_t)65535), ((int32_t)4103), /*hidden argument*/NULL);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_16, SocketError_tA0135DFDFBD5E43BC2F44D8AAC13CDB444074F80_il2cpp_TypeInfo_var))));
		goto IL_0098;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008f;
		}
		throw e;
	}

CATCH_008f:
	{// begin catch(System.Exception)
		V_1 = ((int32_t)10065);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0098;
	}// end catch (depth: 1)

IL_0098:
	{
		int32_t L_17 = V_1;
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_18 = (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)il2cpp_codegen_object_new(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF(L_18, L_17, /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_18);
		return;
	}

IL_00a5:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_19 = ___e2;
		if (L_19)
		{
			goto IL_00af;
		}
	}
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_20 = (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 *)il2cpp_codegen_object_new(SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8_il2cpp_TypeInfo_var);
		SocketAsyncEventArgs__ctor_mCDC163ABCAC5FFF7AF8B1660DFAFB1FA128546AC(L_20, /*hidden argument*/NULL);
		___e2 = L_20;
	}

IL_00af:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_21 = ___e2;
		EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE * L_22 = (EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE *)il2cpp_codegen_object_new(EventHandler_1_t74C6C22D88FDF5301EB9838B325E0BE62472C5FE_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818(L_22, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 30)), /*hidden argument*/EventHandler_1__ctor_m7390ED55C2EC893877D0F896641D43ECC9F71818_RuntimeMethod_var);
		NullCheck(L_21);
		SocketAsyncEventArgs_add_Completed_m424A0DFB6FE947B980C160A66695B53FBE1E027A(L_21, L_22, /*hidden argument*/NULL);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_23 = ___socket0;
		ClientSession_set_Client_m36C1061314434D2AFE42AF88D4E3BCBADA4BD392_inline(__this, L_23, /*hidden argument*/NULL);
		__this->set_m_InConnecting_14((bool)0);
	}

IL_00d0:
	try
	{// begin try (depth: 1)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_24 = ___socket0;
		NullCheck(L_24);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_25;
		L_25 = Socket_get_LocalEndPoint_m327EB4A6DD9260037F648B5ABA719BB305D40EB0(L_24, /*hidden argument*/NULL);
		VirtualActionInvoker1< EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * >::Invoke(5 /* System.Void SuperSocket.ClientEngine.ClientSession::set_LocalEndPoint(System.Net.EndPoint) */, __this, L_25);
		goto IL_00e1;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00de;
		}
		throw e;
	}

CATCH_00de:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e1;
	}// end catch (depth: 1)

IL_00e1:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_26 = ___e2;
		NullCheck(L_26);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_27;
		L_27 = SocketAsyncEventArgs_get_RemoteEndPoint_mCBC537A463D8EA8C7F1BAAFDCB5110EC581DE7CB_inline(L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00f1;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_28 = ___socket0;
		NullCheck(L_28);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_29;
		L_29 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_28, /*hidden argument*/NULL);
		G_B22_0 = L_29;
		goto IL_00f7;
	}

IL_00f1:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_30 = ___e2;
		NullCheck(L_30);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_31;
		L_31 = SocketAsyncEventArgs_get_RemoteEndPoint_mCBC537A463D8EA8C7F1BAAFDCB5110EC581DE7CB_inline(L_30, /*hidden argument*/NULL);
		G_B22_0 = L_31;
	}

IL_00f7:
	{
		V_0 = G_B22_0;
		String_t* L_32;
		L_32 = TcpClientSession_get_HostName_m198841102572BEC40B5D58F2B1BC2D1A27CBCB2A_inline(__this, /*hidden argument*/NULL);
		bool L_33;
		L_33 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0114;
		}
	}
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_34 = V_0;
		String_t* L_35;
		L_35 = TcpClientSession_GetHostOfEndPoint_m3D91F4051B55F23A6D362A0A174CEAB5983554E2(__this, L_34, /*hidden argument*/NULL);
		TcpClientSession_set_HostName_m5D3A2900BDB3269603DA2FE4F9F157DF08C80092_inline(__this, L_35, /*hidden argument*/NULL);
		goto IL_0143;
	}

IL_0114:
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_36 = V_0;
		V_2 = ((DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 *)IsInstClass((RuntimeObject*)L_36, DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497_il2cpp_TypeInfo_var));
		DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * L_37 = V_2;
		if (!L_37)
		{
			goto IL_0143;
		}
	}
	{
		DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * L_38 = V_2;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = DnsEndPoint_get_Host_m79C22972AE712EDE787E1264BA9A4358BFDC4948_inline(L_38, /*hidden argument*/NULL);
		V_3 = L_39;
		String_t* L_40 = V_3;
		bool L_41;
		L_41 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0143;
		}
	}
	{
		String_t* L_42;
		L_42 = TcpClientSession_get_HostName_m198841102572BEC40B5D58F2B1BC2D1A27CBCB2A_inline(__this, /*hidden argument*/NULL);
		String_t* L_43 = V_3;
		NullCheck(L_42);
		bool L_44;
		L_44 = String_Equals_m62F0586691097AA2EE48F1596A130170BCFBF7F6(L_42, L_43, 5, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0143;
		}
	}
	{
		String_t* L_45 = V_3;
		TcpClientSession_set_HostName_m5D3A2900BDB3269603DA2FE4F9F157DF08C80092_inline(__this, L_45, /*hidden argument*/NULL);
	}

IL_0143:
	{
	}

IL_0144:
	try
	{// begin try (depth: 1)
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_46;
		L_46 = ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Socket_SetSocketOption_m0C098DE4E3F030FD9856E00F34199C28335641D5(L_46, ((int32_t)65535), 8, (bool)1, /*hidden argument*/NULL);
		goto IL_015b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0158;
		}
		throw e;
	}

CATCH_0158:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_015b;
	}// end catch (depth: 1)

IL_015b:
	{
		SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * L_47 = ___e2;
		VirtualActionInvoker1< SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * >::Invoke(31 /* System.Void SuperSocket.ClientEngine.TcpClientSession::OnGetSocket(System.Net.Sockets.SocketAsyncEventArgs) */, __this, L_47);
		return;
	}
}
// System.String SuperSocket.ClientEngine.TcpClientSession::GetHostOfEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TcpClientSession_GetHostOfEndPoint_m3D91F4051B55F23A6D362A0A174CEAB5983554E2 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___endPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * V_0 = NULL;
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * V_1 = NULL;
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = ___endPoint0;
		V_0 = ((DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 *)IsInstClass((RuntimeObject*)L_0, DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497_il2cpp_TypeInfo_var));
		DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DnsEndPoint_get_Host_m79C22972AE712EDE787E1264BA9A4358BFDC4948_inline(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0011:
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_4 = ___endPoint0;
		V_1 = ((IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)IsInstClass((RuntimeObject*)L_4, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var));
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_6 = V_1;
		NullCheck(L_6);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_7;
		L_7 = IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_8 = V_1;
		NullCheck(L_8);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_9;
		L_9 = IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		return L_10;
	}

IL_002f:
	{
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_11;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::EnsureSocketClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_EnsureSocketClosed_m28DE2652AEF3191E68EC2A2DCBBABD3EC49C50D7 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = TcpClientSession_EnsureSocketClosed_mE91CF66B286F2D30FC77ACC1D6EBB4D81545415B(__this, (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::EnsureSocketClosed(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_EnsureSocketClosed_mE91CF66B286F2D30FC77ACC1D6EBB4D81545415B (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___prevClient0, const RuntimeMethod* method)
{
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0;
		L_0 = ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		V_1 = (bool)1;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = ___prevClient0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_3 = ___prevClient0;
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4 = V_0;
		if ((((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_3) == ((RuntimeObject*)(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)L_4)))
		{
			goto IL_001b;
		}
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_5 = ___prevClient0;
		V_0 = L_5;
		V_1 = (bool)0;
		goto IL_0029;
	}

IL_001b:
	{
		ClientSession_set_Client_m36C1061314434D2AFE42AF88D4E3BCBADA4BD392_inline(__this, (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL, /*hidden argument*/NULL);
		__this->set_m_IsSending_17(0);
	}

IL_0029:
	{
	}

IL_002a:
	try
	{// begin try (depth: 1)
		try
		{// begin try (depth: 2)
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_6 = V_0;
			NullCheck(L_6);
			Socket_Shutdown_mCDFA7A9F9A008900F122E422F7A95B06CF54827F(L_6, 2, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x43, FINALLY_0036);
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0033;
			}
			throw e;
		}

CATCH_0033:
		{// begin catch(System.Object)
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0x43, FINALLY_0036);
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{// begin finally (depth: 1)
		{
		}

IL_0037:
		try
		{// begin try (depth: 2)
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_7 = V_0;
			NullCheck(L_7);
			Socket_Close_m24AB78F5DAC1C39BB7FFB30A9620B2B07E01DEEB(L_7, /*hidden argument*/NULL);
			goto IL_0042;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_003f;
			}
			throw e;
		}

CATCH_003f:
		{// begin catch(System.Object)
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0042;
		}// end catch (depth: 2)

IL_0042:
		{
			IL2CPP_END_FINALLY(54)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::DetectConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_DetectConnected_m0121D894ACC9821F1D48B8696D20E99CA1777352 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0;
		L_0 = ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_1 = (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)il2cpp_codegen_object_new(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var);
		SocketException__ctor_m4AA74DE46D28204456EFCCBBC5ACC841DA2941EF(L_1, ((int32_t)10057), /*hidden argument*/NULL);
		VirtualActionInvoker1< Exception_t * >::Invoke(18 /* System.Void SuperSocket.ClientEngine.ClientSession::OnError(System.Exception) */, __this, L_1);
		return (bool)0;
	}
}
// SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.TcpClientSession::GetSendingQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TcpClientSession_GetSendingQueue_mEFE2EE0302927C6808EB1DD5FD3841C7FB126FE0 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentBatchQueue_1__ctor_mE8F6B0BBE0E74E9650ABAE3D54C2FD4F1C18042A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m5E03CA82E377D33E4286358264510BF49F222F84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetSendingQueueU3Eb__24_0_mECC47E20380858BC950C296D3DE52BD528A58384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * G_B7_2 = NULL;
	Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * G_B6_2 = NULL;
	{
		RuntimeObject* L_0 = __this->get_m_SendingQueue_15();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_m_SendingQueue_15();
		return L_1;
	}

IL_000f:
	{
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0013:
	try
	{// begin try (depth: 1)
		{
			TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			RuntimeObject* L_3 = __this->get_m_SendingQueue_15();
			if (!L_3)
			{
				goto IL_002c;
			}
		}

IL_0023:
		{
			RuntimeObject* L_4 = __this->get_m_SendingQueue_15();
			V_2 = L_4;
			IL2CPP_LEAVE(0x79, FINALLY_006f);
		}

IL_002c:
		{
			int32_t L_5;
			L_5 = ClientSession_get_SendingQueueSize_m569289FFB7626ED9DFB3609D2DC67BD8BEE44A79_inline(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
			int32_t L_6;
			L_6 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_5, ((int32_t)1024), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_il2cpp_TypeInfo_var);
			Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * L_7 = ((U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_il2cpp_TypeInfo_var))->get_U3CU3E9__24_0_1();
			Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * L_8 = L_7;
			G_B6_0 = L_8;
			G_B6_1 = L_6;
			G_B6_2 = __this;
			if (L_8)
			{
				G_B7_0 = L_8;
				G_B7_1 = L_6;
				G_B7_2 = __this;
				goto IL_005c;
			}
		}

IL_0045:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_il2cpp_TypeInfo_var);
			U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62 * L_9 = ((U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * L_10 = (Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 *)il2cpp_codegen_object_new(Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20_il2cpp_TypeInfo_var);
			Func_2__ctor_m5E03CA82E377D33E4286358264510BF49F222F84(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CGetSendingQueueU3Eb__24_0_mECC47E20380858BC950C296D3DE52BD528A58384_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m5E03CA82E377D33E4286358264510BF49F222F84_RuntimeMethod_var);
			Func_2_t89C13DD680200F01A215B8CBB64F0D1A2DFAEE20 * L_11 = L_10;
			((U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_il2cpp_TypeInfo_var))->set_U3CU3E9__24_0_1(L_11);
			G_B7_0 = L_11;
			G_B7_1 = G_B6_1;
			G_B7_2 = G_B6_2;
		}

IL_005c:
		{
			ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE * L_12 = (ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE *)il2cpp_codegen_object_new(ConcurrentBatchQueue_1_t35A757E29D75BE9EB4E728045E48BB15B1414BBE_il2cpp_TypeInfo_var);
			ConcurrentBatchQueue_1__ctor_mE8F6B0BBE0E74E9650ABAE3D54C2FD4F1C18042A(L_12, G_B7_1, G_B7_0, /*hidden argument*/ConcurrentBatchQueue_1__ctor_mE8F6B0BBE0E74E9650ABAE3D54C2FD4F1C18042A_RuntimeMethod_var);
			NullCheck(G_B7_2);
			G_B7_2->set_m_SendingQueue_15(L_12);
			RuntimeObject* L_13 = __this->get_m_SendingQueue_15();
			V_2 = L_13;
			IL2CPP_LEAVE(0x79, FINALLY_006f);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{// begin finally (depth: 1)
		{
			bool L_14 = V_1;
			if (!L_14)
			{
				goto IL_0078;
			}
		}

IL_0072:
		{
			TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * L_15 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_15, /*hidden argument*/NULL);
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(111)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x79, IL_0079)
	}

IL_0079:
	{
		RuntimeObject* L_16 = V_2;
		return L_16;
	}
}
// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.TcpClientSession::GetSendingItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * TcpClientSession_GetSendingItems_m978C3BBEC0B9310DF04F38EC15AB00667F1D7DAD (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosList_1__ctor_m101452CF8F103AF5F7E4D8259E78656EDB5BD348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_0 = __this->get_m_SendingItems_16();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_1 = (PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A *)il2cpp_codegen_object_new(PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A_il2cpp_TypeInfo_var);
		PosList_1__ctor_m101452CF8F103AF5F7E4D8259E78656EDB5BD348(L_1, /*hidden argument*/PosList_1__ctor_m101452CF8F103AF5F7E4D8259E78656EDB5BD348_RuntimeMethod_var);
		__this->set_m_SendingItems_16(L_1);
	}

IL_0013:
	{
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_2 = __this->get_m_SendingItems_16();
		return L_2;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession::TrySend(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClientSession_TrySend_m44DE65D393A92D2FF671B8FB33ED261FD59AA29F (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___segment0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBatchQueue_1_t60A34A395E3F81B73077DA78E17CB1C52A5F0BBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___segment0), /*hidden argument*/ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1;
		L_1 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___segment0), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23BD664C9380D0D43279CDEC5524917A4EDF97B9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TcpClientSession_TrySend_m44DE65D393A92D2FF671B8FB33ED261FD59AA29F_RuntimeMethod_var)));
	}

IL_001d:
	{
		bool L_3;
		L_3 = TcpClientSession_DetectConnected_m0121D894ACC9821F1D48B8696D20E99CA1777352(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}

IL_0027:
	{
		RuntimeObject* L_4;
		L_4 = TcpClientSession_GetSendingQueue_mEFE2EE0302927C6808EB1DD5FD3841C7FB126FE0(__this, /*hidden argument*/NULL);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_5 = ___segment0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  >::Invoke(0 /* System.Boolean SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>>::Enqueue(T) */, IBatchQueue_1_t60A34A395E3F81B73077DA78E17CB1C52A5F0BBA_il2cpp_TypeInfo_var, L_4, L_5);
		V_0 = L_6;
		int32_t* L_7 = __this->get_address_of_m_IsSending_17();
		int32_t L_8;
		L_8 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)L_7, 1, 0, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		bool L_9 = V_0;
		return L_9;
	}

IL_0045:
	{
		TcpClientSession_DequeueSend_m56A1250B577D63B71DCC258F133125A6AEA065F5(__this, /*hidden argument*/NULL);
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::DequeueSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_DequeueSend_m56A1250B577D63B71DCC258F133125A6AEA065F5 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBatchQueue_1_t60A34A395E3F81B73077DA78E17CB1C52A5F0BBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * V_0 = NULL;
	{
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_0;
		L_0 = TcpClientSession_GetSendingItems_m978C3BBEC0B9310DF04F38EC15AB00667F1D7DAD(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = __this->get_m_SendingQueue_15();
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_2 = V_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(1 /* System.Boolean SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>>::TryDequeue(System.Collections.Generic.IList`1<T>) */, IBatchQueue_1_t60A34A395E3F81B73077DA78E17CB1C52A5F0BBA_il2cpp_TypeInfo_var, L_1, L_2);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		__this->set_m_IsSending_17(0);
		return;
	}

IL_001d:
	{
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_4 = V_0;
		VirtualActionInvoker1< PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * >::Invoke(32 /* System.Void SuperSocket.ClientEngine.TcpClientSession::SendInternal(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>) */, __this, L_4);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::OnSendingCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_OnSendingCompleted_m920607133785F8FEFF0D2B12221EFB2F0C9661A7 (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBatchQueue_1_t60A34A395E3F81B73077DA78E17CB1C52A5F0BBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m31A1D0D8653FF8734375FE9618A4A4EBDC5AEA26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosList_1_set_Position_m48317C2D54D46618883B9482B716E84A4CBFDE0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * V_0 = NULL;
	{
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_0;
		L_0 = TcpClientSession_GetSendingItems_m978C3BBEC0B9310DF04F38EC15AB00667F1D7DAD(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_1 = V_0;
		NullCheck(L_1);
		List_1_Clear_m31A1D0D8653FF8734375FE9618A4A4EBDC5AEA26(L_1, /*hidden argument*/List_1_Clear_m31A1D0D8653FF8734375FE9618A4A4EBDC5AEA26_RuntimeMethod_var);
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_2 = V_0;
		NullCheck(L_2);
		PosList_1_set_Position_m48317C2D54D46618883B9482B716E84A4CBFDE0A_inline(L_2, 0, /*hidden argument*/PosList_1_set_Position_m48317C2D54D46618883B9482B716E84A4CBFDE0A_RuntimeMethod_var);
		RuntimeObject* L_3 = __this->get_m_SendingQueue_15();
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(1 /* System.Boolean SuperSocket.ClientEngine.IBatchQueue`1<System.ArraySegment`1<System.Byte>>::TryDequeue(System.Collections.Generic.IList`1<T>) */, IBatchQueue_1_t60A34A395E3F81B73077DA78E17CB1C52A5F0BBA_il2cpp_TypeInfo_var, L_3, L_4);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		__this->set_m_IsSending_17(0);
		return;
	}

IL_002a:
	{
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_6 = V_0;
		VirtualActionInvoker1< PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * >::Invoke(32 /* System.Void SuperSocket.ClientEngine.TcpClientSession::SendInternal(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>) */, __this, L_6);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClientSession_Close_m088015E002F7EFC9A873BC3E9B9660127698B57E (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = TcpClientSession_EnsureSocketClosed_m28DE2652AEF3191E68EC2A2DCBBABD3EC49C50D7(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtualActionInvoker0::Invoke(15 /* System.Void SuperSocket.ClientEngine.ClientSession::OnClosed() */, __this);
	}

IL_000e:
	{
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
// System.Net.Security.AuthenticatedStream SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::get_Stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * StreamAsyncState_get_Stream_mD5901E2655DDA2B5502321319052DFA9AB79496D (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, const RuntimeMethod* method)
{
	{
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_0 = __this->get_U3CStreamU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::set_Stream(System.Net.Security.AuthenticatedStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamAsyncState_set_Stream_m37E50C01B969EE8AA1EB5A2B2B8FE9D239BB47CD (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * ___value0, const RuntimeMethod* method)
{
	{
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_0 = ___value0;
		__this->set_U3CStreamU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Net.Sockets.Socket SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * StreamAsyncState_get_Client_m2AC6851BE9773B315D6E4FA3433D8B9BDD7FE0C2 (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_U3CClientU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::set_Client(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamAsyncState_set_Client_mB4BB7810ED3AEC095FFC37D80E5EE5CF486C1969 (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ___value0;
		__this->set_U3CClientU3Ek__BackingField_1(L_0);
		return;
	}
}
// SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>> SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::get_SendingItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * StreamAsyncState_get_SendingItems_mFBBD6528D0859620E8DD3A912200C4764D60F74B (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, const RuntimeMethod* method)
{
	{
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_0 = __this->get_U3CSendingItemsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::set_SendingItems(SuperSocket.ClientEngine.PosList`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamAsyncState_set_SendingItems_mF3487A1DC50A47CBB04B038D7EBADADCB9F3C1EF (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * ___value0, const RuntimeMethod* method)
{
	{
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_0 = ___value0;
		__this->set_U3CSendingItemsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.AuthenticatedStreamTcpSession/StreamAsyncState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamAsyncState__ctor_mA235E4B2F7C971A14E3964FD1F5762E25B390ED5 (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, const RuntimeMethod* method)
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
// System.Object SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConnectToken_get_State_m4590924F7AE1A44EC7D4ACCC95ECC921763954E3 (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CStateU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::set_State(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToken_set_State_mA7B357C63863CC8B6DF900ED812051FDAD7277D7 (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_0(L_0);
		return;
	}
}
// SuperSocket.ClientEngine.ConnectedCallback SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ConnectToken_get_Callback_m5C05EDA8A646DF8C02E21A6349B4B6ED67269878 (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, const RuntimeMethod* method)
{
	{
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_0 = __this->get_U3CCallbackU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::set_Callback(SuperSocket.ClientEngine.ConnectedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToken_set_Callback_mE4AB781FD4BE12B92DE82EF917534491F5473A75 (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___value0, const RuntimeMethod* method)
{
	{
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_0 = ___value0;
		__this->set_U3CCallbackU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/ConnectToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectToken__ctor_mB5B35DD45999737362F7DE229426900C4DF4A760 (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, const RuntimeMethod* method)
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
// System.Net.IPAddress[] SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_Addresses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* DnsConnectState_get_Addresses_mC16DF7CA0CB8C1459D6C13E9F0D6156DA50AE6EC (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_0 = __this->get_U3CAddressesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_Addresses(System.Net.IPAddress[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsConnectState_set_Addresses_m9C68973C556572300086D0EC5BD133B611A0D49E (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* ___value0, const RuntimeMethod* method)
{
	{
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_0 = ___value0;
		__this->set_U3CAddressesU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_NextAddressIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DnsConnectState_get_NextAddressIndex_m8445F87CF702B1734CDFFDAD640D72069CC28B09 (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CNextAddressIndexU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_NextAddressIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsConnectState_set_NextAddressIndex_mFE8861E8AB4DD658C552EE158B65412682248D60 (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CNextAddressIndexU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DnsConnectState_get_Port_m40CCF8DB4D40297464F3FB743D7286FB65B4B60F (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPortU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_Port(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsConnectState_set_Port_mB70EEDE5D546B7B9FCEF3BBDD6B538A462326E94 (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPortU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_Socket4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * DnsConnectState_get_Socket4_mA2663052378AC68F3786FD988855C3EF1FFA0473 (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_U3CSocket4U3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_Socket4(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsConnectState_set_Socket4_m7DDF1C2023324D7B4AB453CA9284AD23140A9283 (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ___value0;
		__this->set_U3CSocket4U3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Net.Sockets.Socket SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_Socket6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * DnsConnectState_get_Socket6_m3B549B97A735ACD08B52AB01CC4C19ECAAAD14BA (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_U3CSocket6U3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_Socket6(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsConnectState_set_Socket6_m47D70887BEAD11AAC9F1B1CCF5FD8A22F33EED7B (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ___value0;
		__this->set_U3CSocket6U3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Object SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DnsConnectState_get_State_mF1125B44C18DA64A8C5E9CBD98947895A4BFBD4B (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CStateU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_State(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsConnectState_set_State_m73631A555DD98D238441336B00016022068386DA (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_5(L_0);
		return;
	}
}
// SuperSocket.ClientEngine.ConnectedCallback SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * DnsConnectState_get_Callback_mD3B746CDB99124AF6A0440F1C5AD435FB02377F7 (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_0 = __this->get_U3CCallbackU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_Callback(SuperSocket.ClientEngine.ConnectedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsConnectState_set_Callback_mD70AFEF3A22FD1C4D89896098947EA238BE2AF05 (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___value0, const RuntimeMethod* method)
{
	{
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_0 = ___value0;
		__this->set_U3CCallbackU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Net.EndPoint SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * DnsConnectState_get_LocalEndPoint_mA4159C0CF7502F2CA1DD5FA6CB45BBE22220FEAD (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = __this->get_U3CLocalEndPointU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::set_LocalEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsConnectState_set_LocalEndPoint_m141EDF088B55E66D3BFCD781FFAC17FA9B9D01F4 (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = ___value0;
		__this->set_U3CLocalEndPointU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.ConnectAsyncExtension/DnsConnectState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsConnectState__ctor_m2270B634EBFCE5CD09EA05360FA69026B528E1EE (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
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
// System.Void SuperSocket.ClientEngine.TcpClientSession/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC6E0A45F8133A1D1A94506DB733D30C447FA2B7B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62 * L_0 = (U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62 *)il2cpp_codegen_object_new(U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m309356C4543C2A1D4ACF0E94BCACA955BBC478BC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void SuperSocket.ClientEngine.TcpClientSession/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m309356C4543C2A1D4ACF0E94BCACA955BBC478BC (U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SuperSocket.ClientEngine.TcpClientSession/<>c::<GetSendingQueue>b__24_0(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetSendingQueueU3Eb__24_0_mECC47E20380858BC950C296D3DE52BD528A58384 (U3CU3Ec_t7357ADC6EA481D344945443EECA11DF2CB7D1A62 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___t0), /*hidden argument*/ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&___t0), /*hidden argument*/ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0014:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_LastOperation_m2E3C39FE596AC2BB2CAABE05F7735AB855005C60_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLastOperationU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ClientSession_get_Buffer_m6ABE509ACE175953B6358B64FE6B35D9ED9C0C72_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_0 = __this->get_U3CBufferU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_Buffer_m9DDFE03F87EB62AD5A3E3766AD55137BF2B424B5_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___value0, const RuntimeMethod* method)
{
	{
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_0 = ___value0;
		__this->set_U3CBufferU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_SocketError_m11C0B5903B8AB4D642746DBAE990432FD65B08D7_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSocketErrorU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_BytesTransferred_mAAD1FC9BBD56566DD5A44693A86567C98CE227F2_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CBytesTransferredU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SocketAsyncEventArgs_get_Buffer_mDC32727C0A79D1058F425A4E864F2157592774A0_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_U3CBufferU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SocketAsyncEventArgs_get_Offset_m0F2F4D062E9FD7D4C2A8446AE1E82B8EC2E925F8_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COffsetU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ClientSession_get_Client_mEC503662F691EC7C1DACFEADA2B0CB44B5F245F6_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_U3CClientU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SocketAsyncEventArgs_get_BufferList_m9D092791A306A913589F89972006F1234170EC1A_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_m_BufferList_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * StreamAsyncState_get_Stream_mD5901E2655DDA2B5502321319052DFA9AB79496D_inline (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, const RuntimeMethod* method)
{
	{
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_0 = __this->get_U3CStreamU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * StreamAsyncState_get_Client_m2AC6851BE9773B315D6E4FA3433D8B9BDD7FE0C2_inline (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_U3CClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StreamAsyncState_set_Stream_m37E50C01B969EE8AA1EB5A2B2B8FE9D239BB47CD_inline (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * ___value0, const RuntimeMethod* method)
{
	{
		AuthenticatedStream_t792DA994D6AAC4A102749A9530E95D8F049BF608 * L_0 = ___value0;
		__this->set_U3CStreamU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StreamAsyncState_set_Client_mB4BB7810ED3AEC095FFC37D80E5EE5CF486C1969_inline (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ___value0;
		__this->set_U3CClientU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get__innerException_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StreamAsyncState_set_SendingItems_mF3487A1DC50A47CBB04B038D7EBADADCB9F3C1EF_inline (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * ___value0, const RuntimeMethod* method)
{
	{
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_0 = ___value0;
		__this->set_U3CSendingItemsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * StreamAsyncState_get_SendingItems_mFBBD6528D0859620E8DD3A912200C4764D60F74B_inline (StreamAsyncState_t5D7E40D4E60B7FF76A41C2899E38B73827E299C8 * __this, const RuntimeMethod* method)
{
	{
		PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * L_0 = __this->get_U3CSendingItemsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_IsConnected_m882DE5E63A6A2959B16FB0F347B284FA666980D3_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsConnectedU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ClientSession_get_NoDelay_mB0446493218E0E39CEBA8CE498815505C2788A5C_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CNoDelayU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataEventArgs_set_Data_mFE76476F7FF4BF81FF7497C9D653DF0EA99EAE00_inline (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataEventArgs_set_Offset_mF56217D3C5F5B00A064FBE11F50E0E5EF6B3E7CC_inline (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COffsetU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataEventArgs_set_Length_m76CF827ACCC01F9FD0BC8353F9760A73C584C5D9_inline (DataEventArgs_t145901361CEA2F6C8994E02C20E13C7516A55276 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SocketAsyncEventArgs_get_UserToken_mD64FA7C6DD325D8151B87483B472295C06001C18_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CUserTokenU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_UserToken_m1425D948CDABF59C68EB0387345609075104CB9A_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CUserTokenU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ConnectToken_get_Callback_m5C05EDA8A646DF8C02E21A6349B4B6ED67269878_inline (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, const RuntimeMethod* method)
{
	{
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_0 = __this->get_U3CCallbackU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * ConnectToken_get_State_m4590924F7AE1A44EC7D4ACCC95ECC921763954E3_inline (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CStateU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectToken_set_State_mA7B357C63863CC8B6DF900ED812051FDAD7277D7_inline (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectToken_set_Callback_mE4AB781FD4BE12B92DE82EF917534491F5473A75_inline (ConnectToken_tBE5CA7389EF254B4E1F094AAC280257B09B31F51 * __this, ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___value0, const RuntimeMethod* method)
{
	{
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_0 = ___value0;
		__this->set_U3CCallbackU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_RemoteEndPoint_m1B58594089E482C5A9E5332C65B82B50C577FB2E_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = ___value0;
		__this->set_remote_ep_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DnsEndPoint_get_Host_m79C22972AE712EDE787E1264BA9A4358BFDC4948_inline (DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_Host_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DnsEndPoint_get_Port_m12A68BE961FF2F6CB6AC5E164A380697A01537EB_inline (DnsEndPoint_tE8A8D00D78671D846CA97B65E35942CE78E50497 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Port_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_Port_mB70EEDE5D546B7B9FCEF3BBDD6B538A462326E94_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPortU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_Callback_mD70AFEF3A22FD1C4D89896098947EA238BE2AF05_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * ___value0, const RuntimeMethod* method)
{
	{
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_0 = ___value0;
		__this->set_U3CCallbackU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_State_m73631A555DD98D238441336B00016022068386DA_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_LocalEndPoint_m141EDF088B55E66D3BFCD781FFAC17FA9B9D01F4_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = ___value0;
		__this->set_U3CLocalEndPointU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DnsConnectState_get_NextAddressIndex_m8445F87CF702B1734CDFFDAD640D72069CC28B09_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CNextAddressIndexU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* DnsConnectState_get_Addresses_mC16DF7CA0CB8C1459D6C13E9F0D6156DA50AE6EC_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_0 = __this->get_U3CAddressesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Family_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * DnsConnectState_get_Socket6_m3B549B97A735ACD08B52AB01CC4C19ECAAAD14BA_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_U3CSocket6U3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * DnsConnectState_get_Socket4_mA2663052378AC68F3786FD988855C3EF1FFA0473_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_U3CSocket4U3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_NextAddressIndex_mFE8861E8AB4DD658C552EE158B65412682248D60_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CNextAddressIndexU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_Socket6_m47D70887BEAD11AAC9F1B1CCF5FD8A22F33EED7B_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ___value0;
		__this->set_U3CSocket6U3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_Socket4_m7DDF1C2023324D7B4AB453CA9284AD23140A9283_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ___value0;
		__this->set_U3CSocket4U3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * DnsConnectState_get_Callback_mD3B746CDB99124AF6A0440F1C5AD435FB02377F7_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		ConnectedCallback_t23CE3D10EDEEF8EBBD56E0120D7443E0D2232E79 * L_0 = __this->get_U3CCallbackU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DnsConnectState_get_State_mF1125B44C18DA64A8C5E9CBD98947895A4BFBD4B_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CStateU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsConnectState_set_Addresses_m9C68973C556572300086D0EC5BD133B611A0D49E_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* ___value0, const RuntimeMethod* method)
{
	{
		IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* L_0 = ___value0;
		__this->set_U3CAddressesU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * DnsConnectState_get_LocalEndPoint_mA4159C0CF7502F2CA1DD5FA6CB45BBE22220FEAD_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = __this->get_U3CLocalEndPointU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DnsConnectState_get_Port_m40CCF8DB4D40297464F3FB743D7286FB65B4B60F_inline (DnsConnectState_t0DD9607FE622500499468766626B54C2F3EB60CC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPortU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketAsyncEventArgs_set_SocketError_mE909DB5DBC90065720B35ACB8B382DA175976533_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSocketErrorU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorEventArgs_set_Exception_m1D3851397C88AC8E6B0EF608812B66E25A395489_inline (ErrorEventArgs_tD3DBD4B760C86B7AB899F14A4E2499BB5B2B5A16 * __this, Exception_t * ___value0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___value0;
		__this->set_U3CExceptionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecurityOption_set_EnabledSslProtocols_mFAA548B8BB8C2E4C42A5FDFD54F8F261A0B69DFB_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEnabledSslProtocolsU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecurityOption_set_Certificates_m2F112056C2F3B1D5EAE777FF7486A21C46750B0B_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___value0, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * L_0 = ___value0;
		__this->set_U3CCertificatesU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * AuthenticatedStreamTcpSession_get_Security_m0C60019E3BAA1AEBDCFC98136EAC06455ACA86AC_inline (AuthenticatedStreamTcpSession_t41F85D292394A713A32D51D5EBAC7955FBF5370F * __this, const RuntimeMethod* method)
{
	{
		SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * L_0 = __this->get_U3CSecurityU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TcpClientSession_get_HostName_m198841102572BEC40B5D58F2B1BC2D1A27CBCB2A_inline (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CHostNameU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * SecurityOption_get_Certificates_mDF98442668F723A36F05FEA9C9DF036E580442D6_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * L_0 = __this->get_U3CCertificatesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SecurityOption_get_EnabledSslProtocols_mC67E29D7825383EE284B3A5A213C6AD830498EF5_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEnabledSslProtocolsU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowNameMismatchCertificate_m9C8C0D8E36E82AC5DF1B626AFB274C62D520677A_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowNameMismatchCertificateU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowCertificateChainErrors_m994514E78915351BEA59C01EAC67552F5C78F59E_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowCertificateChainErrorsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SecurityOption_get_AllowUnstrustedCertificate_m75F52EF0ED821D3955EED0980865D255BD323D9A_inline (SecurityOption_t044AF03A45630F12A36E2D12007F78579981BF17 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowUnstrustedCertificateU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t X509ChainStatus_get_Status_m9CEF146523C133BCB62660CCC230D45AC9872EEA_inline (X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_status_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ClientSession_get_LocalEndPoint_m6EA2BFAEC45DB329EF789B0AA20C1126AD502800_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = __this->get_U3CLocalEndPointU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ClientSession_get_IsConnected_m6E0F03DFD15D38C2AE9087B8E483248A09D735D1_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsConnectedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_LocalEndPoint_mFED480DDDB13B750D3C6337C34393CC6F45D0C6D_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___value0, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = ___value0;
		__this->set_U3CLocalEndPointU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClientSession_get_ReceiveBufferSize_m545843846BD8C2970F368BC0AB0B0E6BA1988328_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReceiveBufferSizeU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_ReceiveBufferSize_mB027A46A4C64EB6D10FA7ECF766CE4121FF724D2_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReceiveBufferSizeU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TcpClientSession_set_HostName_m5D3A2900BDB3269603DA2FE4F9F157DF08C80092_inline (TcpClientSession_t172491770377FD83A88D37EF9151FCA644C24EBF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CHostNameU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ClientSession_get_Proxy_m9C1A3802B3F6B4EC6DD72EA9E0FE044B9E3D5C87_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CProxyU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProxyEventArgs_get_Connected_mF4CFA44DABF5A34E2614B7D5CAC6520BAEF68F33_inline (ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CConnectedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ProxyEventArgs_get_TargetHostName_m9E804725558FAE12AE71A819F97A4D2961DDB54C_inline (ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTargetHostNameU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ProxyEventArgs_get_Socket_m6114CF2949452B98D28C8E23523D534B76CC0BFF_inline (ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_U3CSocketU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * ProxyEventArgs_get_Exception_m60FBEDC0FECB1125C0F1F280B932937B7471E15D_inline (ProxyEventArgs_t9E403F07A2626E1D49A3634B3B0CFCAB0A543577 * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get_U3CExceptionU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_connected_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientSession_set_Client_m36C1061314434D2AFE42AF88D4E3BCBADA4BD392_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ___value0;
		__this->set_U3CClientU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * SocketAsyncEventArgs_get_RemoteEndPoint_mCBC537A463D8EA8C7F1BAAFDCB5110EC581DE7CB_inline (SocketAsyncEventArgs_t6A1533E6F40045C89AB7F19555158F25D47BA8D8 * __this, const RuntimeMethod* method)
{
	{
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_0 = __this->get_remote_ep_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method)
{
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = __this->get_m_Address_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ClientSession_get_SendingQueueSize_m569289FFB7626ED9DFB3609D2DC67BD8BEE44A79_inline (ClientSession_tBEBA1DB1E807BC57326B73C2F44C7A135C56E217 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSendingQueueSizeU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m79996A0C101669893B6ACC314BEA31597A00F9CB_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get__array_0();
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__offset_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mC13AC26CCFD0EACBCC08F24F2A7BB22841B44C32_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7D8A7D7BE06561F4695456CA5B4696E85DD6C84B_gshared_inline (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  List_1_get_Item_m37AE8419D9BEAA421FDB484724C5EA53408083C5_gshared_inline (List_1_tAC5780506F34558E53CD51BF8B2E6633C667059B * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4* L_2 = (ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ArraySegment_1U5BU5D_t821BA8E5F776D41AA08A36AF8AD2D3FC6B12EDE4*)L_2, (int32_t)L_3);
		return (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PosList_1_get_Position_mAF8492F7B689C1F3D01EFC59C5C1C610DD4673EC_gshared_inline (PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CPositionU3Ek__BackingField_6();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PosList_1_set_Position_m48317C2D54D46618883B9482B716E84A4CBFDE0A_gshared_inline (PosList_1_tA2F2EF72E41AB84FE413002B8B1C7FAC8FDC176A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPositionU3Ek__BackingField_6(L_0);
		return;
	}
}
