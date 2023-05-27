#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif





// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
struct TargetDevice_t45083238226E37FD31745CC48711F642E425F620 
{
	// System.String UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice::visibleName
	String_t* ___visibleName_0;
	// System.String UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice::manifestName
	String_t* ___manifestName_1;
	// System.Boolean UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice::enabled
	bool ___enabled_2;
	// System.Boolean UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice::active
	bool ___active_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
struct TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshaled_pinvoke
{
	char* ___visibleName_0;
	char* ___manifestName_1;
	int32_t ___enabled_2;
	int32_t ___active_3;
};
// Native definition for COM marshalling of UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
struct TargetDevice_t45083238226E37FD31745CC48711F642E425F620_marshaled_com
{
	Il2CppChar* ___visibleName_0;
	Il2CppChar* ___manifestName_1;
	int32_t ___enabled_2;
	int32_t ___active_3;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;
};

// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature
struct MetaQuestFeature_t8E2B25DD2DCD3C6B43B6AA0B69C4504566363C62  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
};

// UnityEngine.XR.OpenXR.Features.OculusQuestSupport.OculusQuestFeature
struct OculusQuestFeature_tF5FA7128BB36F546D5CF7094A93B812DAC667810  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OculusQuestSupport.OculusQuestFeature::targetQuest
	bool ___targetQuest_17;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OculusQuestSupport.OculusQuestFeature::targetQuest2
	bool ___targetQuest2_18;
};

// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice

// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice

// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature

// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature

// UnityEngine.XR.OpenXR.Features.OculusQuestSupport.OculusQuestFeature

// UnityEngine.XR.OpenXR.Features.OculusQuestSupport.OculusQuestFeature
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6001[4] = 
{
	static_cast<int32_t>(offsetof(TargetDevice_t45083238226E37FD31745CC48711F642E425F620, ___visibleName_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(TargetDevice_t45083238226E37FD31745CC48711F642E425F620, ___manifestName_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(TargetDevice_t45083238226E37FD31745CC48711F642E425F620, ___enabled_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(TargetDevice_t45083238226E37FD31745CC48711F642E425F620, ___active_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6002[1] = 
{
	0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6004[3] = 
{
	0,static_cast<int32_t>(offsetof(OculusQuestFeature_tF5FA7128BB36F546D5CF7094A93B812DAC667810, ___targetQuest_17)),static_cast<int32_t>(offsetof(OculusQuestFeature_tF5FA7128BB36F546D5CF7094A93B812DAC667810, ___targetQuest2_18)),};
