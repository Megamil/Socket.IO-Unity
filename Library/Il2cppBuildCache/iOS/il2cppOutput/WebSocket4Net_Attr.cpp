#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4;
// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C;
// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC;
// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3;
// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F;
// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA;
// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7;
// System.Reflection.AssemblyTrademarkAttribute
struct AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2;
// System.Runtime.InteropServices.ComVisibleAttribute
struct ComVisibleAttribute_tCE3DF5E341F3ECE4C81FE85C15B3D782AB302A2A;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.Runtime.InteropServices.GuidAttribute
struct GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063;
// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;
// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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

// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4, ___m_company_0)); }
	inline String_t* get_m_company_0() const { return ___m_company_0; }
	inline String_t** get_address_of_m_company_0() { return &___m_company_0; }
	inline void set_m_company_0(String_t* value)
	{
		___m_company_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_company_0), (void*)value);
	}
};


// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::m_configuration
	String_t* ___m_configuration_0;

public:
	inline static int32_t get_offset_of_m_configuration_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C, ___m_configuration_0)); }
	inline String_t* get_m_configuration_0() const { return ___m_configuration_0; }
	inline String_t** get_address_of_m_configuration_0() { return &___m_configuration_0; }
	inline void set_m_configuration_0(String_t* value)
	{
		___m_configuration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_configuration_0), (void*)value);
	}
};


// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC, ___m_copyright_0)); }
	inline String_t* get_m_copyright_0() const { return ___m_copyright_0; }
	inline String_t** get_address_of_m_copyright_0() { return &___m_copyright_0; }
	inline void set_m_copyright_0(String_t* value)
	{
		___m_copyright_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_copyright_0), (void*)value);
	}
};


// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::m_description
	String_t* ___m_description_0;

public:
	inline static int32_t get_offset_of_m_description_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3, ___m_description_0)); }
	inline String_t* get_m_description_0() const { return ___m_description_0; }
	inline String_t** get_address_of_m_description_0() { return &___m_description_0; }
	inline void set_m_description_0(String_t* value)
	{
		___m_description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_description_0), (void*)value);
	}
};


// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____version_0), (void*)value);
	}
};


// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::m_product
	String_t* ___m_product_0;

public:
	inline static int32_t get_offset_of_m_product_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA, ___m_product_0)); }
	inline String_t* get_m_product_0() const { return ___m_product_0; }
	inline String_t** get_address_of_m_product_0() { return &___m_product_0; }
	inline void set_m_product_0(String_t* value)
	{
		___m_product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_product_0), (void*)value);
	}
};


// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::m_title
	String_t* ___m_title_0;

public:
	inline static int32_t get_offset_of_m_title_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7, ___m_title_0)); }
	inline String_t* get_m_title_0() const { return ___m_title_0; }
	inline String_t** get_address_of_m_title_0() { return &___m_title_0; }
	inline void set_m_title_0(String_t* value)
	{
		___m_title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_title_0), (void*)value);
	}
};


// System.Reflection.AssemblyTrademarkAttribute
struct AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTrademarkAttribute::m_trademark
	String_t* ___m_trademark_0;

public:
	inline static int32_t get_offset_of_m_trademark_0() { return static_cast<int32_t>(offsetof(AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2, ___m_trademark_0)); }
	inline String_t* get_m_trademark_0() const { return ___m_trademark_0; }
	inline String_t** get_address_of_m_trademark_0() { return &___m_trademark_0; }
	inline void set_m_trademark_0(String_t* value)
	{
		___m_trademark_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_trademark_0), (void*)value);
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


// System.Runtime.InteropServices.ComVisibleAttribute
struct ComVisibleAttribute_tCE3DF5E341F3ECE4C81FE85C15B3D782AB302A2A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.InteropServices.ComVisibleAttribute::_val
	bool ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ComVisibleAttribute_tCE3DF5E341F3ECE4C81FE85C15B3D782AB302A2A, ____val_0)); }
	inline bool get__val_0() const { return ____val_0; }
	inline bool* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(bool value)
	{
		____val_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_memberName_0), (void*)value);
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

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.InteropServices.GuidAttribute
struct GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::_val
	String_t* ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____val_0), (void*)value);
	}
};


// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkName
	String_t* ____frameworkName_0;
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkDisplayName
	String_t* ____frameworkDisplayName_1;

public:
	inline static int32_t get_offset_of__frameworkName_0() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkName_0)); }
	inline String_t* get__frameworkName_0() const { return ____frameworkName_0; }
	inline String_t** get_address_of__frameworkName_0() { return &____frameworkName_0; }
	inline void set__frameworkName_0(String_t* value)
	{
		____frameworkName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkName_0), (void*)value);
	}

	inline static int32_t get_offset_of__frameworkDisplayName_1() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkDisplayName_1)); }
	inline String_t* get__frameworkDisplayName_1() const { return ____frameworkDisplayName_1; }
	inline String_t** get_address_of__frameworkDisplayName_1() { return &____frameworkDisplayName_1; }
	inline void set__frameworkDisplayName_1(String_t* value)
	{
		____frameworkDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkDisplayName_1), (void*)value);
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


// System.Diagnostics.DebuggerBrowsableState
struct DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyConfigurationAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757 (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * __this, String_t* ___configuration0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0 (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * __this, String_t* ___company0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8 (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * __this, String_t* ___product0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3 (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * __this, String_t* ___copyright0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyTrademarkAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTrademarkAttribute__ctor_m6FBD5AAE48F00120043AD8BECF2586896CFB6C02 (AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2 * __this, String_t* ___trademark0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25 (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * __this, String_t* ___description0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.ComVisibleAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComVisibleAttribute__ctor_mBDE8E12A0233C07B98D6D5103511F4DD5B1FC172 (ComVisibleAttribute_tCE3DF5E341F3ECE4C81FE85C15B3D782AB302A2A * __this, bool ___visibility0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GuidAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuidAttribute__ctor_mCCEF3938DF601B23B5791CEE8F7AF05C98B6AFEA (GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063 * __this, String_t* ___guid0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___frameworkName0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::set_FrameworkDisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5 (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void System.ParamArrayAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719 (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * __this, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
static void WebSocket4Net_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[1];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[2];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
	{
		AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * tmp = (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C *)cache->attributes[3];
		AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * tmp = (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 *)cache->attributes[4];
		AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0(tmp, il2cpp_codegen_string_new_wrapper("\x57\x65\x62\x53\x6F\x63\x6B\x65\x74\x34\x4E\x65\x74"), NULL);
	}
	{
		AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * tmp = (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA *)cache->attributes[5];
		AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8(tmp, il2cpp_codegen_string_new_wrapper("\x57\x65\x62\x53\x6F\x63\x6B\x65\x74\x34\x4E\x65\x74"), NULL);
	}
	{
		AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * tmp = (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC *)cache->attributes[6];
		AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3(tmp, il2cpp_codegen_string_new_wrapper("\x43\x6F\x70\x79\x72\x69\x67\x68\x74\x20\xC2\xA9\x20\x77\x77\x77\x2E\x73\x75\x70\x65\x72\x73\x6F\x63\x6B\x65\x74\x2E\x6E\x65\x74\x20\x32\x30\x31\x38"), NULL);
	}
	{
		AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2 * tmp = (AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2 *)cache->attributes[7];
		AssemblyTrademarkAttribute__ctor_m6FBD5AAE48F00120043AD8BECF2586896CFB6C02(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * tmp = (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F *)cache->attributes[8];
		AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D(tmp, il2cpp_codegen_string_new_wrapper("\x30\x2E\x31\x35\x2E\x32\x2E\x31\x31"), NULL);
	}
	{
		AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * tmp = (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 *)cache->attributes[9];
		AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D(tmp, il2cpp_codegen_string_new_wrapper("\x57\x65\x62\x53\x6F\x63\x6B\x65\x74\x34\x4E\x65\x74\x20\x66\x6F\x72\x20\x2E\x4E\x45\x54\x20\x34\x2E\x30\x2F\x4D\x6F\x6E\x6F\x20\x32\x2E\x31\x30\x2B"), NULL);
	}
	{
		AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * tmp = (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 *)cache->attributes[10];
		AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25(tmp, il2cpp_codegen_string_new_wrapper("\x57\x65\x62\x53\x6F\x63\x6B\x65\x74\x34\x4E\x65\x74\x20\x66\x6F\x72\x20\x2E\x4E\x45\x54\x20\x34\x2E\x30\x2F\x4D\x6F\x6E\x6F\x20\x32\x2E\x31\x30\x2B"), NULL);
	}
	{
		ComVisibleAttribute_tCE3DF5E341F3ECE4C81FE85C15B3D782AB302A2A * tmp = (ComVisibleAttribute_tCE3DF5E341F3ECE4C81FE85C15B3D782AB302A2A *)cache->attributes[11];
		ComVisibleAttribute__ctor_mBDE8E12A0233C07B98D6D5103511F4DD5B1FC172(tmp, false, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[12];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063 * tmp = (GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063 *)cache->attributes[13];
		GuidAttribute__ctor_mCCEF3938DF601B23B5791CEE8F7AF05C98B6AFEA(tmp, il2cpp_codegen_string_new_wrapper("\x34\x61\x39\x38\x33\x39\x32\x37\x2D\x32\x31\x34\x39\x2D\x34\x32\x38\x36\x2D\x38\x66\x36\x63\x2D\x36\x61\x62\x65\x38\x62\x65\x31\x35\x64\x32\x35"), NULL);
	}
	{
		TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * tmp = (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 *)cache->attributes[14];
		TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B\x2C\x56\x65\x72\x73\x69\x6F\x6E\x3D\x76\x34\x2E\x30\x2C\x50\x72\x6F\x66\x69\x6C\x65\x3D\x43\x6C\x69\x65\x6E\x74"), NULL);
		TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x20\x46\x72\x61\x6D\x65\x77\x6F\x72\x6B\x20\x34\x20\x43\x6C\x69\x65\x6E\x74\x20\x50\x72\x6F\x66\x69\x6C\x65"), NULL);
	}
}
static void ClosedEventArgs_tDE38FA8AF05A1A7A34C180CAD537820E149888EE_CustomAttributesCacheGenerator_U3CCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void ClosedEventArgs_tDE38FA8AF05A1A7A34C180CAD537820E149888EE_CustomAttributesCacheGenerator_U3CReasonU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void ClosedEventArgs_tDE38FA8AF05A1A7A34C180CAD537820E149888EE_CustomAttributesCacheGenerator_ClosedEventArgs_set_Code_mAF1FB4486F2D1753AB52811346EC0943E7D743C1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ClosedEventArgs_tDE38FA8AF05A1A7A34C180CAD537820E149888EE_CustomAttributesCacheGenerator_ClosedEventArgs_set_Reason_mE42CA84294EEE0F6F2F12C9FEDBEF81845E1117F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataReceivedEventArgs_tB50ECF8F541A6849FFFB95E84E4801BB76E1E575_CustomAttributesCacheGenerator_U3CDataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataReceivedEventArgs_tB50ECF8F541A6849FFFB95E84E4801BB76E1E575_CustomAttributesCacheGenerator_DataReceivedEventArgs_get_Data_m1B87C5AB8009DC077F270B50C25D311EDB657F6A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataReceivedEventArgs_tB50ECF8F541A6849FFFB95E84E4801BB76E1E575_CustomAttributesCacheGenerator_DataReceivedEventArgs_set_Data_mB69A98325220517A5BC77D7093B6F4C0A478AF12(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_AppendFormatWithCrCf_m9F3E55EF14ADCBDAFD92B19C28D9957D582C577D(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_AppendFormatWithCrCf_m95A278ECAA99E7FCE29A5C78D6CF0F3711B3A626(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_AppendFormatWithCrCf_m95A278ECAA99E7FCE29A5C78D6CF0F3711B3A626____args2(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_AppendWithCrCf_mD44FD0C48CE1952515C320DC5B47D4E42EBE7FB2(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_AppendWithCrCf_m0520C89FE150C5CBD4292F0FCDE77529EEC1E44D(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_ParseMimeHeader_m45CDBA4A8181D5784C20055794B94E0FB4623ACB(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_GetValue_m242DDA9AA5735D4A9D4D2B603D8DCF9717621EF1(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_GetOrigin_mBDCB5E4890B3E5CF66FA7C6D5F91418AED8AF227(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_ComputeMD5Hash_m38CF89A44F632F67978AFFAE2B203A207F60E5BA(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_CalculateChallenge_m1E0E21E9435A54D749B693060AFE7DBE68D6F990(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void MessageReceivedEventArgs_t4A915CD4FFC5240A9A1B1F6340FA71800F8B39BF_CustomAttributesCacheGenerator_U3CMessageU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void MessageReceivedEventArgs_t4A915CD4FFC5240A9A1B1F6340FA71800F8B39BF_CustomAttributesCacheGenerator_MessageReceivedEventArgs_get_Message_m3D78F2A0B4D60EA9251DC48580434432D0BCBF73(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MessageReceivedEventArgs_t4A915CD4FFC5240A9A1B1F6340FA71800F8B39BF_CustomAttributesCacheGenerator_MessageReceivedEventArgs_set_Message_m9D2551EAFC86D37BE212C9BB28BE142F6FAB175A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CClientU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CVersionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CLastActiveTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CEnableAutoSendPingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CAutoSendPingIntervalU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CProtocolProcessorU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CTargetUriU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CSubProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CItemsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CCookiesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CCustomHeaderItemsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CHandshakedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CProxyU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CCommandReaderU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CNotSpecifiedVersionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CLastPongResponseU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CHandshakeHostU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3COriginU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CNoDelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_Client_mE74EF382D9C394A1A1E36A070819E6F369C05D8D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_Client_m4E52F5540C8C9872C0E4312DF880C48C11EED2AD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_Version_m50231CFE559DC5C3787957A1FC5076CC4713E94B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_LastActiveTime_m375C0B27F76AD56C1C41E7528A4CEE6DFF34782C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_EnableAutoSendPing_m72292612F1D4830209AAF641E4228DA0EDA9F25A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_EnableAutoSendPing_m462464181E33A3380851D5D7AAAFA0B46DC3A418(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_AutoSendPingInterval_m085818846FAF233AE8FB19E05EDB825484A98E14(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_AutoSendPingInterval_m3E5C37598B66250D665510B4A788FFFABF5443A1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_ProtocolProcessor_m8ECE5401849DCBE66F39C22708921FBDC625B96E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_ProtocolProcessor_m60BB113BB982D2D2FDEA7DC7234E1E7275D56358(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_TargetUri_m79E6B6D0E4E0179774B80934EE6C38779D7368CF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_TargetUri_m6DCC357076E9D028A9E32C5FCDC4E296EF0C643D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_SubProtocol_mAE71D5C37DC63C3762FF39E438E79014E4BCCE62(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_SubProtocol_m8D4BE09C38C2DEF1AEE492254D092B8622D704C6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_Items_m531423E691D03F0CE38BE82FFB93145473323DAD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_Items_m9AFEF6C2FB1E73AB67F1B1BDB0189A3F7E714B5A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_Cookies_mB05AAA47E49E08CB251D26C7097DCF4A2BDAD765(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_Cookies_mE16CF633D3B7045BD99CB1D982693D1B1A638EB2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_CustomHeaderItems_m9898D66A125FB53EF215B0B620D61AD0057435CB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_CustomHeaderItems_m771170D2DAE14396ED45BE02CEEBB98457D8F13D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_Handshaked_m58D49CBDDE8973C9A40CE8C13238432CEF7321D6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_Handshaked_m9CC70BFE5D1C9B4D7B1B1B3BE392822B068BE19A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_Proxy_m2A1E05B5F479036EC40E88391D6F6BCC397B30EB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_CommandReader_m5DCF58662B4B3843928A0A32D5CCFE111B158A63(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_CommandReader_m53954F6811E8C1104B932F6E8C956CB4C9ECCF62(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_NotSpecifiedVersion_m9E7FC4A54064448FB22BE5D9B833361E08C77C5E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_NotSpecifiedVersion_m18107211E130E4E380DB5F14ACE570451A11BA9E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_LastPongResponse_m2F81C14095F1880BB268905C6088A30ABA17468B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_LastPongResponse_m78AD7B1F7B5071F658A505E749A5432AB7454671(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_HandshakeHost_m0FD4AA37B6AA99AA3FD928E3FFD089340DF0D8E8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_HandshakeHost_m1655186EAE2A4B65F729EDCA0AFC3E535B932CB8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_Origin_m46745524E73C26B376B89E579D60016362DD0F0A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_Origin_m20E48EC0A9E3C86187E9533C52479E398A7B824C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_NoDelay_m73C681C46F17F46E59785AF2C61BC384C7AE1DD9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_U3CKeyU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_U3CDataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_U3CTextU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_U3CCloseStatusCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_get_Key_m30B7658A7190CDE42C7F673DD7302E7D9274EA18(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_set_Key_m4669453C4F18B493535401FED372FAF3F95A1EAA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_get_Data_m02518A7A3A5B1DE3E243063AF6BB847F6DE157EB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_set_Data_mC426DC7449F5F6F1F47F626A802455239A2CD002(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_get_Text_m3343A6CDB2FDF1DDC286C2CE5E5537D9CA2B2694(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_set_Text_mC70D958F8EFD5D21102454FA053415FA963A2FEC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_get_CloseStatusCode_mF7DC7C73CDB1DAA0D89A13381B9D2D4FEBF892C2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_set_CloseStatusCode_mF309DA694EF47BB10A913F3358528C754E2ED303(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t70EF531024B60CC4232C8826AF2DFE6888ECF77F_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CNormalClosureU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CGoingAwayU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CProtocolErrorU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CNotAcceptableDataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CTooLargeFrameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CInvalidUTF8U3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CViolatePolicyU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CExtensionNotMatchU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CUnexpectedConditionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CTLSHandshakeFailureU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CNoStatusCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_get_NormalClosure_m436ED8B142D46B9D1C1CF824DA3E4AE7876D2306(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_NormalClosure_mAE0987EAD19FA1EAAD4793906C9204362A66E251(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_GoingAway_m5EE9F846ED1C94D3C8677631D3CA4F26B27A5F3B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_get_ProtocolError_mB1DBAF322999ABAFDDF83E0ADAF390E71BFC1FE9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_ProtocolError_m6162C6A1BB8C83CFD92FB69905EFCC4D1B677745(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_NotAcceptableData_mD3F2BD39C243019BF2732DEFCFFB7EE0BC6971DE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_TooLargeFrame_mB5632D797544131105A71AF99E0FD4069CF3F07F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_InvalidUTF8_mD61B5D145207660E27ACBF03A0DCAC48FEFF2E97(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_ViolatePolicy_m09FFDDB1E31E95020689691FC591AAC1676C6E63(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_ExtensionNotMatch_m8C82F60C2F82196E9602017B25E718717005A064(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_UnexpectedCondition_mEDAB0336ADD7B352CB0355A3F07F56CA04D28CCE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_TLSHandshakeFailure_m67985B5537F7BCFA6D771243B8ED0316D84CF018(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_get_NoStatusCode_mC59C629020225E1F9554541FC9A947B7BEFFEDFB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_NoStatusCode_m622E483BC3B8CB488E37A23938BCF09425144D94(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CNormalClosureU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CGoingAwayU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CProtocolErrorU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CNotAcceptableDataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CTooLargeFrameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CInvalidUTF8U3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CViolatePolicyU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CExtensionNotMatchU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CUnexpectedConditionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CNoStatusCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_get_NormalClosure_m7EE06C3B9A7D1390AAC866BD826D5061916C371D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_NormalClosure_mE57CCB14B97268DA91D32A95AE96C874DFE7A15A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_GoingAway_mF5EF5255E89BFCE53DD3829118B1B610736533D7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_get_ProtocolError_m377EBED84549679EA038488DB6AECD4210674608(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_ProtocolError_m68D8DF530282D53FCDA377DF996DD524FF5FCC82(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_NotAcceptableData_m4981E89813653B3B0409EC027E797708D7C2C5DB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_TooLargeFrame_m1C0FF276A4FBA30F6962475398CE4C9EABF67D09(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_InvalidUTF8_mE1F4629C5E43B8787DC5BDCF62CFE36EF900DC4E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_ViolatePolicy_m110FC7008E1A6EE980BE86C4DB44C02BBA876B50(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_ExtensionNotMatch_mE1054E82ED736EDFCA2E44C41440D415985121F4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_UnexpectedCondition_mF63E21B9B6A779908944A95E9A59E8FB50A2322F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_get_NoStatusCode_m02C15D0563849D176AF32BFF20C9226E3F0FFAA0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_NoStatusCode_m9D4B2CEDD70BB19CFC2B3BF7089A9F3058F3F037(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t91365BC1A52262FC4ACB7C97BBF302F0AB245BD5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_U3CCloseStatusCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_U3CVersionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_U3CVersionTagU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_ProtocolProcessorBase_get_CloseStatusCode_m7E5FD88FDB3400F440CCCCED971329798831B422(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_ProtocolProcessorBase_set_CloseStatusCode_m6F50C397B78EDDEA7520902A5C175C24C01FC5F3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_ProtocolProcessorBase_get_Version_m82C93D345ABE055385F5202363D46190833749DA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_ProtocolProcessorBase_set_Version_mE29025343885E73BFC3D97FA533401DC5AD488CF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_ProtocolProcessorBase_get_VersionTag_m3BCCD6A1F8974801184C098B94A7D239A6AE38D7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_ProtocolProcessorBase_set_VersionTag_mB889424FE44C92C54455DFCE2007A593F364E1E0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ProtocolProcessorFactory_t5DCFAB614BCD428780B8D3F7B4F4B47777481C9F_CustomAttributesCacheGenerator_ProtocolProcessorFactory__ctor_mD42400603882673F416E0DE2BB5906A32DE77A68____processors0(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void U3CU3Ec_t959787D0E5C4D6C8AEA7BC388DBDA873FF2C9DA2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass2_0_tC88DC17971095DD341AF676311DEAD063217B817_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ReaderBase_tF3D54CBE540F4E3A216939279C0F84E339D08612_CustomAttributesCacheGenerator_U3CWebSocketU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ReaderBase_tF3D54CBE540F4E3A216939279C0F84E339D08612_CustomAttributesCacheGenerator_U3CNextCommandReaderU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void ReaderBase_tF3D54CBE540F4E3A216939279C0F84E339D08612_CustomAttributesCacheGenerator_ReaderBase_set_WebSocket_m18B1A53B7B6120F75FFA8D23E5EA4160D9B41588(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ReaderBase_tF3D54CBE540F4E3A216939279C0F84E339D08612_CustomAttributesCacheGenerator_ReaderBase_get_NextCommandReader_m208E5679514E69F386847C8AD22B1873CA452CC6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ReaderBase_tF3D54CBE540F4E3A216939279C0F84E339D08612_CustomAttributesCacheGenerator_ReaderBase_set_NextCommandReader_m9CD31C3AA34EA8205C30B024B1C98F6C66F392EF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_U3CMaskKeyU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_U3CExtensionDataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_U3CApplicationDataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_WebSocketDataFrame_get_MaskKey_mDF433D8471DC11235A731534FC18C02F5A9B2B36(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_WebSocketDataFrame_set_MaskKey_mAF8F70C126844BB5BCBBA55525454F25BB05F018(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_WebSocketDataFrame_set_ExtensionData_m31A903ED299523CF1764298FD8CF4D1EE3C1755E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_WebSocketDataFrame_set_ApplicationData_m40A23E87A1B9ADDA673E482CA0202A24411A0C89(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_U3CFixPartReaderU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_U3CExtendedLenghtReaderU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_U3CMaskKeyReaderU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_U3CPayloadDataReaderU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_get_FixPartReader_m8A66AFFAC83D40201F607564CCB9FE7D127AF658(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_set_FixPartReader_mC9A3580DA0FEA9AA998E8F97972C16F75957A29D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_get_ExtendedLenghtReader_mF354D749AD93EED42B34645C06BFEFE4083FCED5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_set_ExtendedLenghtReader_mB4E7FF8D8956EF66701C5C5437CAB8D68AE5700F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_get_MaskKeyReader_mF1E6A9F09F44CEB43ACB8B762E98EDED04D9520F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_set_MaskKeyReader_mD48EB70B9DCDBD088C194A50AEF84B5EF7E35A17(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_get_PayloadDataReader_m06A0F11CCACF1C003D177E9452CAF906251A1EA9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_set_PayloadDataReader_m9431BCA69F347561BFBDBD3DA61F0FAACBE0038F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_U3CArrayU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_U3CCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_U3COffsetU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_U3CFromU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_U3CToU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_get_Array_m46300C86CA94403B5B344087C84ADC02B952C4EA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_set_Array_m1364B434FB14CFE90DC2319FEBC6A2BA3EB553C1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_get_Count_m36D4FE16678B835C892B755E3C3382CEBAEA74C8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_set_Count_mF2E2CD36FBC5FCAB672CEE22031BEF9E541FACFF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_get_Offset_m28BC4AF565971597363C24B6375384D9EC4E710D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_set_Offset_mEE7865A75BCB05E022659438F179CFE1D3C36EFF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_get_From_mCD3A73FED1C4345AECFF3D97297449B362504518(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_set_From_m81320769754D4E3FD414563985581D50525F0E15(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_get_To_mE7DB38F8419B741699A86755CD97E7FC47DE17AA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_set_To_mDD221DC00E8DBC3D5E137F86E6528819495BE12C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ArraySegmentList_1_t67FB24202DDF5A463B1EEC0053B811BE2BB8F524_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_WebSocket4Net_AttributeGenerators[];
const CustomAttributesCacheGenerator g_WebSocket4Net_AttributeGenerators[189] = 
{
	Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator,
	U3CU3Ec_t70EF531024B60CC4232C8826AF2DFE6888ECF77F_CustomAttributesCacheGenerator,
	U3CU3Ec_t91365BC1A52262FC4ACB7C97BBF302F0AB245BD5_CustomAttributesCacheGenerator,
	U3CU3Ec_t959787D0E5C4D6C8AEA7BC388DBDA873FF2C9DA2_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass2_0_tC88DC17971095DD341AF676311DEAD063217B817_CustomAttributesCacheGenerator,
	ArraySegmentList_1_t67FB24202DDF5A463B1EEC0053B811BE2BB8F524_CustomAttributesCacheGenerator,
	ClosedEventArgs_tDE38FA8AF05A1A7A34C180CAD537820E149888EE_CustomAttributesCacheGenerator_U3CCodeU3Ek__BackingField,
	ClosedEventArgs_tDE38FA8AF05A1A7A34C180CAD537820E149888EE_CustomAttributesCacheGenerator_U3CReasonU3Ek__BackingField,
	DataReceivedEventArgs_tB50ECF8F541A6849FFFB95E84E4801BB76E1E575_CustomAttributesCacheGenerator_U3CDataU3Ek__BackingField,
	MessageReceivedEventArgs_t4A915CD4FFC5240A9A1B1F6340FA71800F8B39BF_CustomAttributesCacheGenerator_U3CMessageU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CClientU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CVersionU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CLastActiveTimeU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CEnableAutoSendPingU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CAutoSendPingIntervalU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CProtocolProcessorU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CTargetUriU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CSubProtocolU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CItemsU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CCookiesU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CCustomHeaderItemsU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CHandshakedU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CProxyU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CCommandReaderU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CNotSpecifiedVersionU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CLastPongResponseU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CHandshakeHostU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3COriginU3Ek__BackingField,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_U3CNoDelayU3Ek__BackingField,
	WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_U3CKeyU3Ek__BackingField,
	WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_U3CDataU3Ek__BackingField,
	WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_U3CTextU3Ek__BackingField,
	WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_U3CCloseStatusCodeU3Ek__BackingField,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CNormalClosureU3Ek__BackingField,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CGoingAwayU3Ek__BackingField,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CProtocolErrorU3Ek__BackingField,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CNotAcceptableDataU3Ek__BackingField,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CTooLargeFrameU3Ek__BackingField,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CInvalidUTF8U3Ek__BackingField,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CViolatePolicyU3Ek__BackingField,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CExtensionNotMatchU3Ek__BackingField,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CUnexpectedConditionU3Ek__BackingField,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CTLSHandshakeFailureU3Ek__BackingField,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_U3CNoStatusCodeU3Ek__BackingField,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CNormalClosureU3Ek__BackingField,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CGoingAwayU3Ek__BackingField,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CProtocolErrorU3Ek__BackingField,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CNotAcceptableDataU3Ek__BackingField,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CTooLargeFrameU3Ek__BackingField,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CInvalidUTF8U3Ek__BackingField,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CViolatePolicyU3Ek__BackingField,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CExtensionNotMatchU3Ek__BackingField,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CUnexpectedConditionU3Ek__BackingField,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_U3CNoStatusCodeU3Ek__BackingField,
	ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_U3CCloseStatusCodeU3Ek__BackingField,
	ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_U3CVersionU3Ek__BackingField,
	ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_U3CVersionTagU3Ek__BackingField,
	ReaderBase_tF3D54CBE540F4E3A216939279C0F84E339D08612_CustomAttributesCacheGenerator_U3CWebSocketU3Ek__BackingField,
	ReaderBase_tF3D54CBE540F4E3A216939279C0F84E339D08612_CustomAttributesCacheGenerator_U3CNextCommandReaderU3Ek__BackingField,
	WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_U3CMaskKeyU3Ek__BackingField,
	WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_U3CExtensionDataU3Ek__BackingField,
	WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_U3CApplicationDataU3Ek__BackingField,
	DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_U3CFixPartReaderU3Ek__BackingField,
	DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_U3CExtendedLenghtReaderU3Ek__BackingField,
	DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_U3CMaskKeyReaderU3Ek__BackingField,
	DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_U3CPayloadDataReaderU3Ek__BackingField,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_U3CArrayU3Ek__BackingField,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_U3CCountU3Ek__BackingField,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_U3COffsetU3Ek__BackingField,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_U3CFromU3Ek__BackingField,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_U3CToU3Ek__BackingField,
	ClosedEventArgs_tDE38FA8AF05A1A7A34C180CAD537820E149888EE_CustomAttributesCacheGenerator_ClosedEventArgs_set_Code_mAF1FB4486F2D1753AB52811346EC0943E7D743C1,
	ClosedEventArgs_tDE38FA8AF05A1A7A34C180CAD537820E149888EE_CustomAttributesCacheGenerator_ClosedEventArgs_set_Reason_mE42CA84294EEE0F6F2F12C9FEDBEF81845E1117F,
	DataReceivedEventArgs_tB50ECF8F541A6849FFFB95E84E4801BB76E1E575_CustomAttributesCacheGenerator_DataReceivedEventArgs_get_Data_m1B87C5AB8009DC077F270B50C25D311EDB657F6A,
	DataReceivedEventArgs_tB50ECF8F541A6849FFFB95E84E4801BB76E1E575_CustomAttributesCacheGenerator_DataReceivedEventArgs_set_Data_mB69A98325220517A5BC77D7093B6F4C0A478AF12,
	Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_AppendFormatWithCrCf_m9F3E55EF14ADCBDAFD92B19C28D9957D582C577D,
	Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_AppendFormatWithCrCf_m95A278ECAA99E7FCE29A5C78D6CF0F3711B3A626,
	Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_AppendWithCrCf_mD44FD0C48CE1952515C320DC5B47D4E42EBE7FB2,
	Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_AppendWithCrCf_m0520C89FE150C5CBD4292F0FCDE77529EEC1E44D,
	Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_ParseMimeHeader_m45CDBA4A8181D5784C20055794B94E0FB4623ACB,
	Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_GetValue_m242DDA9AA5735D4A9D4D2B603D8DCF9717621EF1,
	Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_GetOrigin_mBDCB5E4890B3E5CF66FA7C6D5F91418AED8AF227,
	Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_ComputeMD5Hash_m38CF89A44F632F67978AFFAE2B203A207F60E5BA,
	Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_CalculateChallenge_m1E0E21E9435A54D749B693060AFE7DBE68D6F990,
	MessageReceivedEventArgs_t4A915CD4FFC5240A9A1B1F6340FA71800F8B39BF_CustomAttributesCacheGenerator_MessageReceivedEventArgs_get_Message_m3D78F2A0B4D60EA9251DC48580434432D0BCBF73,
	MessageReceivedEventArgs_t4A915CD4FFC5240A9A1B1F6340FA71800F8B39BF_CustomAttributesCacheGenerator_MessageReceivedEventArgs_set_Message_m9D2551EAFC86D37BE212C9BB28BE142F6FAB175A,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_Client_mE74EF382D9C394A1A1E36A070819E6F369C05D8D,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_Client_m4E52F5540C8C9872C0E4312DF880C48C11EED2AD,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_Version_m50231CFE559DC5C3787957A1FC5076CC4713E94B,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_LastActiveTime_m375C0B27F76AD56C1C41E7528A4CEE6DFF34782C,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_EnableAutoSendPing_m72292612F1D4830209AAF641E4228DA0EDA9F25A,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_EnableAutoSendPing_m462464181E33A3380851D5D7AAAFA0B46DC3A418,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_AutoSendPingInterval_m085818846FAF233AE8FB19E05EDB825484A98E14,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_AutoSendPingInterval_m3E5C37598B66250D665510B4A788FFFABF5443A1,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_ProtocolProcessor_m8ECE5401849DCBE66F39C22708921FBDC625B96E,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_ProtocolProcessor_m60BB113BB982D2D2FDEA7DC7234E1E7275D56358,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_TargetUri_m79E6B6D0E4E0179774B80934EE6C38779D7368CF,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_TargetUri_m6DCC357076E9D028A9E32C5FCDC4E296EF0C643D,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_SubProtocol_mAE71D5C37DC63C3762FF39E438E79014E4BCCE62,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_SubProtocol_m8D4BE09C38C2DEF1AEE492254D092B8622D704C6,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_Items_m531423E691D03F0CE38BE82FFB93145473323DAD,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_Items_m9AFEF6C2FB1E73AB67F1B1BDB0189A3F7E714B5A,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_Cookies_mB05AAA47E49E08CB251D26C7097DCF4A2BDAD765,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_Cookies_mE16CF633D3B7045BD99CB1D982693D1B1A638EB2,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_CustomHeaderItems_m9898D66A125FB53EF215B0B620D61AD0057435CB,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_CustomHeaderItems_m771170D2DAE14396ED45BE02CEEBB98457D8F13D,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_Handshaked_m58D49CBDDE8973C9A40CE8C13238432CEF7321D6,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_Handshaked_m9CC70BFE5D1C9B4D7B1B1B3BE392822B068BE19A,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_Proxy_m2A1E05B5F479036EC40E88391D6F6BCC397B30EB,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_CommandReader_m5DCF58662B4B3843928A0A32D5CCFE111B158A63,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_CommandReader_m53954F6811E8C1104B932F6E8C956CB4C9ECCF62,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_NotSpecifiedVersion_m9E7FC4A54064448FB22BE5D9B833361E08C77C5E,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_NotSpecifiedVersion_m18107211E130E4E380DB5F14ACE570451A11BA9E,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_LastPongResponse_m2F81C14095F1880BB268905C6088A30ABA17468B,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_LastPongResponse_m78AD7B1F7B5071F658A505E749A5432AB7454671,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_HandshakeHost_m0FD4AA37B6AA99AA3FD928E3FFD089340DF0D8E8,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_HandshakeHost_m1655186EAE2A4B65F729EDCA0AFC3E535B932CB8,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_Origin_m46745524E73C26B376B89E579D60016362DD0F0A,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_set_Origin_m20E48EC0A9E3C86187E9533C52479E398A7B824C,
	WebSocket_t8849EC699411FA30A5BE66C4CB2984DA5B8BADFB_CustomAttributesCacheGenerator_WebSocket_get_NoDelay_m73C681C46F17F46E59785AF2C61BC384C7AE1DD9,
	WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_get_Key_m30B7658A7190CDE42C7F673DD7302E7D9274EA18,
	WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_set_Key_m4669453C4F18B493535401FED372FAF3F95A1EAA,
	WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_get_Data_m02518A7A3A5B1DE3E243063AF6BB847F6DE157EB,
	WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_set_Data_mC426DC7449F5F6F1F47F626A802455239A2CD002,
	WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_get_Text_m3343A6CDB2FDF1DDC286C2CE5E5537D9CA2B2694,
	WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_set_Text_mC70D958F8EFD5D21102454FA053415FA963A2FEC,
	WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_get_CloseStatusCode_mF7DC7C73CDB1DAA0D89A13381B9D2D4FEBF892C2,
	WebSocketCommandInfo_tC9882F63E1BB683E401910602BDD941B1AC584C1_CustomAttributesCacheGenerator_WebSocketCommandInfo_set_CloseStatusCode_mF309DA694EF47BB10A913F3358528C754E2ED303,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_get_NormalClosure_m436ED8B142D46B9D1C1CF824DA3E4AE7876D2306,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_NormalClosure_mAE0987EAD19FA1EAAD4793906C9204362A66E251,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_GoingAway_m5EE9F846ED1C94D3C8677631D3CA4F26B27A5F3B,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_get_ProtocolError_mB1DBAF322999ABAFDDF83E0ADAF390E71BFC1FE9,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_ProtocolError_m6162C6A1BB8C83CFD92FB69905EFCC4D1B677745,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_NotAcceptableData_mD3F2BD39C243019BF2732DEFCFFB7EE0BC6971DE,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_TooLargeFrame_mB5632D797544131105A71AF99E0FD4069CF3F07F,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_InvalidUTF8_mD61B5D145207660E27ACBF03A0DCAC48FEFF2E97,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_ViolatePolicy_m09FFDDB1E31E95020689691FC591AAC1676C6E63,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_ExtensionNotMatch_m8C82F60C2F82196E9602017B25E718717005A064,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_UnexpectedCondition_mEDAB0336ADD7B352CB0355A3F07F56CA04D28CCE,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_TLSHandshakeFailure_m67985B5537F7BCFA6D771243B8ED0316D84CF018,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_get_NoStatusCode_mC59C629020225E1F9554541FC9A947B7BEFFEDFB,
	CloseStatusCodeHybi10_t671B5132616F8D92614AF20EA522E0C7AE718034_CustomAttributesCacheGenerator_CloseStatusCodeHybi10_set_NoStatusCode_m622E483BC3B8CB488E37A23938BCF09425144D94,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_get_NormalClosure_m7EE06C3B9A7D1390AAC866BD826D5061916C371D,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_NormalClosure_mE57CCB14B97268DA91D32A95AE96C874DFE7A15A,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_GoingAway_mF5EF5255E89BFCE53DD3829118B1B610736533D7,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_get_ProtocolError_m377EBED84549679EA038488DB6AECD4210674608,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_ProtocolError_m68D8DF530282D53FCDA377DF996DD524FF5FCC82,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_NotAcceptableData_m4981E89813653B3B0409EC027E797708D7C2C5DB,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_TooLargeFrame_m1C0FF276A4FBA30F6962475398CE4C9EABF67D09,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_InvalidUTF8_mE1F4629C5E43B8787DC5BDCF62CFE36EF900DC4E,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_ViolatePolicy_m110FC7008E1A6EE980BE86C4DB44C02BBA876B50,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_ExtensionNotMatch_mE1054E82ED736EDFCA2E44C41440D415985121F4,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_UnexpectedCondition_mF63E21B9B6A779908944A95E9A59E8FB50A2322F,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_get_NoStatusCode_m02C15D0563849D176AF32BFF20C9226E3F0FFAA0,
	CloseStatusCodeRfc6455_t6F4DD317BAF9077FAA4F9EFFF8646AAEC70DCD36_CustomAttributesCacheGenerator_CloseStatusCodeRfc6455_set_NoStatusCode_m9D4B2CEDD70BB19CFC2B3BF7089A9F3058F3F037,
	ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_ProtocolProcessorBase_get_CloseStatusCode_m7E5FD88FDB3400F440CCCCED971329798831B422,
	ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_ProtocolProcessorBase_set_CloseStatusCode_m6F50C397B78EDDEA7520902A5C175C24C01FC5F3,
	ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_ProtocolProcessorBase_get_Version_m82C93D345ABE055385F5202363D46190833749DA,
	ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_ProtocolProcessorBase_set_Version_mE29025343885E73BFC3D97FA533401DC5AD488CF,
	ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_ProtocolProcessorBase_get_VersionTag_m3BCCD6A1F8974801184C098B94A7D239A6AE38D7,
	ProtocolProcessorBase_t2C6D1310A88570230AA3F70381608AF8611A21F9_CustomAttributesCacheGenerator_ProtocolProcessorBase_set_VersionTag_mB889424FE44C92C54455DFCE2007A593F364E1E0,
	ReaderBase_tF3D54CBE540F4E3A216939279C0F84E339D08612_CustomAttributesCacheGenerator_ReaderBase_set_WebSocket_m18B1A53B7B6120F75FFA8D23E5EA4160D9B41588,
	ReaderBase_tF3D54CBE540F4E3A216939279C0F84E339D08612_CustomAttributesCacheGenerator_ReaderBase_get_NextCommandReader_m208E5679514E69F386847C8AD22B1873CA452CC6,
	ReaderBase_tF3D54CBE540F4E3A216939279C0F84E339D08612_CustomAttributesCacheGenerator_ReaderBase_set_NextCommandReader_m9CD31C3AA34EA8205C30B024B1C98F6C66F392EF,
	WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_WebSocketDataFrame_get_MaskKey_mDF433D8471DC11235A731534FC18C02F5A9B2B36,
	WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_WebSocketDataFrame_set_MaskKey_mAF8F70C126844BB5BCBBA55525454F25BB05F018,
	WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_WebSocketDataFrame_set_ExtensionData_m31A903ED299523CF1764298FD8CF4D1EE3C1755E,
	WebSocketDataFrame_tFA56F46C42795405F51A9F5C6F3A8C5BD145F643_CustomAttributesCacheGenerator_WebSocketDataFrame_set_ApplicationData_m40A23E87A1B9ADDA673E482CA0202A24411A0C89,
	DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_get_FixPartReader_m8A66AFFAC83D40201F607564CCB9FE7D127AF658,
	DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_set_FixPartReader_mC9A3580DA0FEA9AA998E8F97972C16F75957A29D,
	DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_get_ExtendedLenghtReader_mF354D749AD93EED42B34645C06BFEFE4083FCED5,
	DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_set_ExtendedLenghtReader_mB4E7FF8D8956EF66701C5C5437CAB8D68AE5700F,
	DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_get_MaskKeyReader_mF1E6A9F09F44CEB43ACB8B762E98EDED04D9520F,
	DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_set_MaskKeyReader_mD48EB70B9DCDBD088C194A50AEF84B5EF7E35A17,
	DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_get_PayloadDataReader_m06A0F11CCACF1C003D177E9452CAF906251A1EA9,
	DataFramePartReader_tF0ADAFE2442D1E731ECA8645662138BE51F907FE_CustomAttributesCacheGenerator_DataFramePartReader_set_PayloadDataReader_m9431BCA69F347561BFBDBD3DA61F0FAACBE0038F,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_get_Array_m46300C86CA94403B5B344087C84ADC02B952C4EA,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_set_Array_m1364B434FB14CFE90DC2319FEBC6A2BA3EB553C1,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_get_Count_m36D4FE16678B835C892B755E3C3382CEBAEA74C8,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_set_Count_mF2E2CD36FBC5FCAB672CEE22031BEF9E541FACFF,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_get_Offset_m28BC4AF565971597363C24B6375384D9EC4E710D,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_set_Offset_mEE7865A75BCB05E022659438F179CFE1D3C36EFF,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_get_From_mCD3A73FED1C4345AECFF3D97297449B362504518,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_set_From_m81320769754D4E3FD414563985581D50525F0E15,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_get_To_mE7DB38F8419B741699A86755CD97E7FC47DE17AA,
	ArraySegmentEx_1_t6803BB9C251F736C8E164FE7C4D53C4514DA04EF_CustomAttributesCacheGenerator_ArraySegmentEx_1_set_To_mDD221DC00E8DBC3D5E137F86E6528819495BE12C,
	Extensions_tAB7E24D8D0D24204DDFCD6326B062514045ED7C5_CustomAttributesCacheGenerator_Extensions_AppendFormatWithCrCf_m95A278ECAA99E7FCE29A5C78D6CF0F3711B3A626____args2,
	ProtocolProcessorFactory_t5DCFAB614BCD428780B8D3F7B4F4B47777481C9F_CustomAttributesCacheGenerator_ProtocolProcessorFactory__ctor_mD42400603882673F416E0DE2BB5906A32DE77A68____processors0,
	WebSocket4Net_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__frameworkDisplayName_1(L_0);
		return;
	}
}
